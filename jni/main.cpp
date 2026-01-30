#include <android_native_app_glue.h>
#include <EGL/egl.h>
#include "imgui/imgui.h"
#include "imgui/imgui_impl_android.h"
#include "imgui/imgui_impl_opengl3.h"
#include "font.h"
#include "Syscall读写.h"
#include <dobby.h>
#include <vector>
#include <string>
#include <deque>
#include <android/log.h>
#include <unistd.h>
#include <sys/mman.h>
#include <chrono>

// SDK 核心文件
#include "SDK.hpp"
#include "SDK/PUBGM_ShadowTrackerExtra_classes.hpp"
#include "SDK/PUBGM_ShadowTrackerExtra_parameters.hpp"

using namespace SDK;

// ====================================================================================
// 第一部分：所有核心变量和函数的【完整实现】(提到最前，供菜单.h使用)
// ====================================================================================

// 全局变量
bool initImGui = false;
bool 开关 = true;
int screenWidth = 2400, screenHeight = 1080, glWidth, glHeight, gWidth, gHeight;
float density = -1;
uintptr_t UE4 = 0;
android_app *g_App = 0;

AUAEGameMode *GameMode = 0;
ASTExtraPlayerController *PlayerController = 0;

// 调试与Hook变量
uintptr_t ProcessEvent_Offset = 0;
int g_HookCallCount = 0;
int g_FixedCount = 0;
std::deque<std::string> g_LogBuffer;

// 自动化状态机变量
int g_AutoMode = 0; 
long long g_AutoStartTime = 0;
bool g_Step1_Done = false; bool g_Step2_Done = false; bool g_Step3_Done = false; bool g_Step4_Done = false;

// 影子结构体
struct TUObjectArray_Shadow { FUObjectItem* Objects; int32_t MaxElements; int32_t NumElements; };
template<typename T> struct TArray_Shadow { T* Data; int32_t Count; int32_t Max; };

// 内存安全检查
bool IsSafePtr(void* ptr) {
    if (!ptr || (uintptr_t)ptr < 0x10000) return false;
    return true; 
}
#define IsBadReadPtr(ptr) (!IsSafePtr(ptr))

// ================= 核心函数实现 =================

TNameEntryArray *GetGNames() { return (TNameEntryArray *)getPointer(UE4 + 0x4431ae4); }

// 【关键】GetWorld 必须在这里完整实现
UWorld *GetWorld() { return (UWorld *)getPointer(UE4 + 0x464c480); }

void AddLog(std::string msg) {
    if (g_LogBuffer.size() > 20) g_LogBuffer.pop_front();
    g_LogBuffer.push_back(msg);
}

// 模拟 UE4 生成 Actor
class AActor *SpawnActorFromClass(class UObject *WorldContextObject, class UClass *ActorClass, const struct FTransform &SpawnTransform, ESpawnActorCollisionHandlingMethod CollisionHandlingOverride, class AActor *Owner) {
    if (!IsSafePtr(WorldContextObject) || !IsSafePtr(ActorClass)) return nullptr;
    auto Spawned = UGameplayStatics::BeginDeferredActorSpawnFromClass(WorldContextObject, ActorClass, SpawnTransform, CollisionHandlingOverride, Owner);
    Spawned = UGameplayStatics::FinishSpawningActor(Spawned, SpawnTransform);
    return Spawned;
}

// 获取 Actor 列表
std::vector<AActor *> getActors() {
    auto World = GetWorld();
    if (!IsSafePtr(World)) return {};
    
    // 偏移 0x20/0x30 兼容
    uintptr_t Level = *(uintptr_t*)((uintptr_t)World + 0x30); 
    if (!Level) Level = *(uintptr_t*)((uintptr_t)World + 0x20);
    if (!Level) return {};

    auto* ActorsArray = (TArray_Shadow<AActor*>*)(Level + 0x70);
    if (!IsSafePtr(ActorsArray) || !IsSafePtr(ActorsArray->Data)) return {};

    std::vector<AActor *> actors;
    int count = ActorsArray->Count;
    if (count > 2000) count = 2000;
    for (int i = 0; i < count; i++) {
        if (IsSafePtr(&ActorsArray->Data[i])) {
             if (ActorsArray->Data[i]) actors.push_back(ActorsArray->Data[i]);
        }
    }
    return actors;
}

void 获取对象() {
    auto Actors = getActors();
    for (auto Actor : Actors) {
        if (Actor->IsA(AUAEGameMode::StaticClass())) GameMode = (AUAEGameMode *)Actor;
        if (Actor->IsA(ASTExtraPlayerController::StaticClass())) PlayerController = (ASTExtraPlayerController *)Actor;
    }
}

long long GetTickCount() {
    using namespace std::chrono;
    return duration_cast<milliseconds>(system_clock::now().time_since_epoch()).count();
}

// 自动化上飞机逻辑
void Start_Auto_Mode(int mode) {
    g_AutoMode = mode;
    g_AutoStartTime = GetTickCount();
    g_Step1_Done = false; g_Step2_Done = false; g_Step3_Done = false; g_Step4_Done = false;
    AddLog("Auto Mode: " + std::to_string(mode));
}

// 供菜单调用的包装函数
void 海岛自动化上飞机() { Start_Auto_Mode(1); }
void 雨林自动化上飞机() { Start_Auto_Mode(2); }
void 沙漠自动化上飞机() { Start_Auto_Mode(3); }

// 剪切板修复
std::string getClipboardTextt() {
    if (!g_App || !g_App->activity || !g_App->activity->vm) return "";
    auto activity = g_App->activity;
    auto vm = activity->vm;
    auto object = activity->clazz;

    std::string result = "";
    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    {
        auto ContextClass = env->FindClass("android/content/Context");
        auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");
        auto str = env->NewStringUTF("clipboard");
        auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
        env->DeleteLocalRef(str);

        if (clipboardManager) {
            auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
            auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");
            auto text = env->CallObjectMethod(clipboardManager, getText);
            if (text) {
                auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
                auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");
                auto strObj = (jstring)env->CallObjectMethod(text, toStringMethod);
                const char* chars = env->GetStringUTFChars(strObj, 0);
                if(chars) {
                    result = chars;
                    env->ReleaseStringUTFChars(strObj, chars);
                }
                env->DeleteLocalRef(strObj);
                env->DeleteLocalRef(text);
                env->DeleteLocalRef(CharSequenceClass);
            }
            env->DeleteLocalRef(ClipboardManagerClass);
            env->DeleteLocalRef(clipboardManager);
        }
        env->DeleteLocalRef(ContextClass);
    }
    vm->DetachCurrentThread();
    return result;
}

// 菜单.h 需要的占位
struct sRegion { uintptr_t start, end; };
bool isObjectInvalid(UObject *obj) { return !IsPtrValid(obj); }
bool gm() { return true; }
bool (*ogm)();

// ====================================================================================
// 第二部分：引入菜单 (现在菜单.h里调用GetWorld绝对安全了)
// ====================================================================================
#include "菜单.h"

// ====================================================================================
// 第三部分：Hook 逻辑与自动化执行
// ====================================================================================

// 主线程自动化状态机
void Update_Auto_Logic() {
    if (g_AutoMode == 0) return;
    long long elapsed = (GetTickCount() - g_AutoStartTime) / 1000;

    // Step 1: 3秒生成AI
    if (!g_Step1_Done && elapsed >= 3) {
        获取对象();
        if (IsSafePtr(PlayerController) && IsSafePtr(PlayerController->Pawn)) {
            USkillUtils::GetPlayerController(PlayerController->Pawn)->SpawnAI(98);
            if (IsSafePtr(GameMode)) GameMode->bEnablePlaneBanner = true;
            AddLog("Step 1: Spawn AI");
            g_Step1_Done = true;
        }
    }
    // Step 2: 63秒写内存
    if (!g_Step2_Done && elapsed >= 63) {
        safeWritedword(UE4 + 0xC5EBBC, -476053503);
        safeWritedword(UE4 + 0xEDD870, -516948194);
        safeWritedword(UE4 + 0xEDF42C, -516948194);
        safeWritedword(UE4 + 0x30B92F8, -516948194);
        safeWritedword(UE4 + 0x30B93C4, -516948194);
        safeWritedword(UE4 + 0x103F880, -516948194);
        safeWritedword(UE4 + 0x10BA09C, -516948194);
        safeWritedword(UE4 + 0x1040090, 1);
        AddLog("Step 2: Write Mem");
        g_Step2_Done = true;
    }
    // Step 3: 写内存还原
    long long t3 = (g_AutoMode == 1) ? 69 : 70;
    if (!g_Step3_Done && elapsed >= t3) {
        safeWritedword(UE4 + 0xC5EBBC, -450891772);
        safeWritedword(UE4 + 0xEDD870, -382908368);
        safeWritedword(UE4 + 0xEDF42C, -382907376);
        safeWritedword(UE4 + 0x30B92F8, -382908368);
        safeWritedword(UE4 + 0x30B93C4, -382907376);
        safeWritedword(UE4 + 0x103F880, -382907376);
        safeWritedword(UE4 + 0x10BA09C, -443473904);
        safeWritedword(UE4 + 0x1040090, -382908368);
        AddLog("Step 3: Restore Mem");
        g_Step3_Done = true;
    }
    // Step 4: 跳伞
    long long t4 = (g_AutoMode == 2) ? 85 : 95;
    if (!g_Step4_Done && elapsed >= t4) {
        获取对象();
        if (IsSafePtr(PlayerController)) {
            PlayerController->JumpFromPlane();
            AddLog("Step 4: Jump");
            g_Step4_Done = true;
            g_AutoMode = 0;
        }
    }
}

// 伤害修复逻辑
void Fix_Actor_Logic(ASTExtraPlayerCharacter* Character) {
    if (IsBadReadPtr(Character)) return;
    
    // 修复碰撞
    if (!IsBadReadPtr(Character->CapsuleComponent)) {
        Character->CapsuleComponent->SetCollisionEnabled((ECollisionEnabled)3);
        Character->CapsuleComponent->SetCollisionResponseToAllChannels((ECollisionResponse)2);
    }
    // 修复权限
    if (*(uint8_t*)&Character->Role != 3) *(uint8_t*)&Character->Role = 3;
    // 允许受伤
    Character->bCanBeDamaged = true;
}

// Hook
typedef void (*ProcessEvent_t)(UObject*, UFunction*, void*);
ProcessEvent_t oProcessEvent = nullptr;

uintptr_t FindProcessEventOffset(int VTableIndex) {
    if (!UObject::GUObjectArray || !UE4) return 0;
    auto* ObjectArray = reinterpret_cast<TUObjectArray_Shadow*>(&UObject::GUObjectArray->ObjObjects);
    int32_t count = ObjectArray->NumElements;
    if (count > 500000) count = 500000;
    for (int i = 0; i < count; i++) {
        auto& item = ObjectArray->Objects[i];
        UObject* Obj = item.Object;
        if (!IsSafePtr(Obj)) continue;
        uintptr_t VTable = *(uintptr_t*)Obj;
        if (!IsSafePtr((void*)VTable)) continue;
        uintptr_t ProcessEventAddr = *(uintptr_t*)(VTable + VTableIndex * 4);
        if (ProcessEventAddr > UE4 && ProcessEventAddr < UE4 + 0x10000000) return ProcessEventAddr - UE4;
    }
    return 0;
}

void hk_ProcessEvent(UObject* pObject, UFunction* pFunction, void* pParams) {
    // 1. 执行自动化 (防闪退)
    Update_Auto_Logic();

    if (!IsSafePtr(pObject) || !IsSafePtr(pFunction)) {
        if(oProcessEvent) oProcessEvent(pObject, pFunction, pParams);
        return;
    }

    g_HookCallCount++;
    std::string funcName = pFunction->GetName();
    std::string objName = pObject->GetName();

    // 2. 监控
    if (funcName.find("Fire") != std::string::npos || 
        funcName.find("Hit") != std::string::npos ||
        funcName.find("Melee") != std::string::npos) {
        
        AddLog("Log: " + funcName);

        // 3. 命中时强制修复
        if (funcName.find("Hit") != std::string::npos && pParams) {
             AActor* target = *reinterpret_cast<AActor**>(pParams);
             if (IsSafePtr(target) && target->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                 Fix_Actor_Logic((ASTExtraPlayerCharacter*)target);
                 ASTExtraPlayerCharacter* V = (ASTExtraPlayerCharacter*)target;
                 if(V->Health > 0) V->Health -= 20;
             }
        }
    }

    if(oProcessEvent) oProcessEvent(pObject, pFunction, pParams);
}

// ====================================================================================
// 第四部分：ImGui 与 Main
// ====================================================================================

EGLBoolean (*orig_eglSwapBuffers)(EGLDisplay dpy, EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy, EGLSurface surface) {
    eglQuerySurface(dpy, surface, EGL_WIDTH, &glWidth);
    eglQuerySurface(dpy, surface, EGL_HEIGHT, &glHeight);
    if (glWidth <= 0 || glHeight <= 0) return orig_eglSwapBuffers(dpy, surface);
    if (!g_App) return orig_eglSwapBuffers(dpy, surface);

    screenWidth = ANativeWindow_getWidth(g_App->window);
    screenHeight = ANativeWindow_getHeight(g_App->window);
    density = AConfiguration_getDensity(g_App->config);

    if (!initImGui) {
        initImGui = true;
        gWidth = glWidth / 2;
        gHeight = glHeight / 2;
        ImGui::CreateContext();
        ImGui::StyleColorsLight();
        ImGui_ImplAndroid_Init();
        ImGui_ImplOpenGL3_Init("#version 300 es");
        ImGuiIO &io = ImGui::GetIO();
        io.Fonts->AddFontFromMemoryTTF((void *)Custom_data, Custom_size, 35.0f, NULL, io.Fonts->GetGlyphRangesChineseFull());
        io.ConfigWindowsMoveFromTitleBarOnly = true;
    }
    
    // 循环执行全图修复
    if (开关) {
        auto list = getActors();
        g_FixedCount = 0;
        for(auto act : list) {
            if(IsSafePtr(act) && act->IsA(ASTExtraPlayerCharacter::StaticClass())) {
                Fix_Actor_Logic((ASTExtraPlayerCharacter*)act);
                g_FixedCount++;
            }
        }
    }

    ImGui_ImplOpenGL3_NewFrame();
    ImGui_ImplAndroid_NewFrame(glWidth, glHeight);
    ImGui::NewFrame();
    
    初始化菜单();

    if (开关) {
        ImGui::SetNextWindowPos(ImVec2(10, 10), ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize(ImVec2(400, 300), ImGuiCond_FirstUseEver);
        ImGui::Begin("Nino V18.0", &开关);
        
        ImGui::Text("Hook Offset: 0x%lX", ProcessEvent_Offset);
        ImGui::TextColored(ImVec4(0,1,0,1), "Fixed Actors: %d", g_FixedCount);
        ImGui::Text("Auto Mode: %d | Time: %lld", g_AutoMode, (g_AutoMode>0 ? (GetTickCount()-g_AutoStartTime)/1000 : 0));
        
        ImGui::Separator();
        for (const auto& log : g_LogBuffer) ImGui::Text("%s", log.c_str());
        
        ImGui::End();
        ImGui::GetBackgroundDrawList()->AddText({(float)gWidth + 200, 650}, ImColor(255, 0, 0), "Nino");
    }

    ImGui::Render();
    ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
    return orig_eglSwapBuffers(dpy, surface);
}

int32_t (*orig_onInputEvent)(struct android_app *app, AInputEvent *inputEvent);
int32_t onInputEvent(struct android_app *app, AInputEvent *inputEvent) {
    ImGui_ImplAndroid_HandleInputEvent(inputEvent, {(float)screenWidth / (float)glWidth, (float)screenHeight / (float)glHeight});
    return orig_onInputEvent(app, inputEvent);
}

extern "C" { void android_main(struct android_app *state) { app_dummy(); } }

void *main_thread(void *) {
    do { UE4 = get_Module_Base("libUE4.so"); sleep(1); } while (!UE4);
    do { g_App = *(android_app **)(UE4 + 0x4249ca4); sleep(1); } while (!g_App);

    FName::GNames = GetGNames();
    UObject::GUObjectArray = (FUObjectArray *)(UE4 + 0x454dd28);

    ProcessEvent_Offset = FindProcessEventOffset(68);
    if (ProcessEvent_Offset == 0) ProcessEvent_Offset = FindProcessEventOffset(66);

    if (ProcessEvent_Offset != 0) {
        DobbyHook((void *)(UE4 + ProcessEvent_Offset), (void *)hk_ProcessEvent, (void **)&oProcessEvent);
    }

    orig_onInputEvent = decltype(orig_onInputEvent)(g_App->onInputEvent);
    g_App->onInputEvent = onInputEvent;
    DobbyHook((void *)DobbySymbolResolver(("/system/lib/libEGL.so"), ("eglSwapBuffers")), (void *)_eglSwapBuffers, (void **)&orig_eglSwapBuffers);
    DobbyHook((void *)(UE4 + 0xc5ebbc), (void *)gm, (void **)&ogm);
    
    return 0;
}

__attribute__((constructor)) void _init() {
    pthread_t pid;
    pthread_create(&pid, 0, main_thread, 0);
}