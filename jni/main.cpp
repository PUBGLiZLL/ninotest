#include <android_native_app_glue.h>
#include <EGL/egl.h>
#include "imgui/imgui.h"
#include "imgui/imgui_impl_android.h"
#include "imgui/imgui_impl_opengl3.h"
#include "font.h"
#include "Syscall读写.h"
#include <dobby.h>
#include "SDK.hpp"
using namespace SDK;
bool initImGui=false;
bool 开关=true;
int screenWidth=2400,screenHeight=1080,glWidth,glHeight,gWidth,gHeight;
float density=-1;
uintptr_t UE4;

android_app*g_App=0;
TNameEntryArray*GetGNames(){
return(TNameEntryArray*)getPointer(UE4+0x4431ae4);
}
UWorld*GetWorld(){
return(UWorld*)getPointer(UE4+0x464c480);
}
#include <vector>
std::vector<AActor *> getActors() {
    auto World = GetWorld();

    auto Actors = *(TArray<AActor *> *)(*(uintptr_t*) ((uintptr_t) World +0x20)+0x70);

    std::vector<AActor *> actors;
    for (int i = 0; i < Actors.Num(); i++) {
        auto Actor = Actors[i];
        if (Actor) {
            actors.push_back(Actor);
        }
    }
    return actors;
}

AUAEGameMode *GameMode=0;
ASTExtraPlayerController *PlayerController=0;

std::string getClipboardTextt() {
    if (!g_App)
 return "";

    auto activity = g_App->activity;
    if (!activity)
 return "";

    auto vm = activity->vm;
    if (!vm)
 return "";

    auto object = activity->clazz;
    if (!object)
 return "";

    std::string result;

    JNIEnv *env;
    vm->AttachCurrentThread(&env, 0);
    {
 auto ContextClass = env->FindClass("android/content/Context");
 auto getSystemServiceMethod = env->GetMethodID(ContextClass, "getSystemService", "(Ljava/lang/String;)Ljava/lang/Object;");

 auto str = env->NewStringUTF("clipboard");
 auto clipboardManager = env->CallObjectMethod(object, getSystemServiceMethod, str);
 env->DeleteLocalRef(str);

 auto ClipboardManagerClass = env->FindClass("android/content/ClipboardManager");
 auto getText = env->GetMethodID(ClipboardManagerClass, "getText", "()Ljava/lang/CharSequence;");

 auto CharSequenceClass = env->FindClass("java/lang/CharSequence");
 auto toStringMethod = env->GetMethodID(CharSequenceClass, "toString", "()Ljava/lang/String;");

 auto text = env->CallObjectMethod(clipboardManager, getText);
 if (text) {
str = (jstring) env->CallObjectMethod(text, toStringMethod);
result = env->GetStringUTFChars(str, 0);
env->DeleteLocalRef(str);
env->DeleteLocalRef(text);
 }

 env->DeleteLocalRef(CharSequenceClass);
 env->DeleteLocalRef(ClipboardManagerClass);
 env->DeleteLocalRef(clipboardManager);
 env->DeleteLocalRef(ContextClass);
    }
    vm->DetachCurrentThread();

    return result;
}
// 刷新物资逻辑
class AActor *SpawnActorFromClass(
    class UObject *WorldContextObject, class UClass *ActorClass,
    const struct FTransform &SpawnTransform,
    ESpawnActorCollisionHandlingMethod CollisionHandlingOverride,
    class AActor *Owner)
{
    auto Spawned = UGameplayStatics::BeginDeferredActorSpawnFromClass(
        WorldContextObject, ActorClass, SpawnTransform, CollisionHandlingOverride,
        Owner);

    Spawned = UGameplayStatics::FinishSpawningActor(Spawned, SpawnTransform);
    return Spawned;
}
void 获取对象(){
auto Actors = getActors();
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];

            
            if (Actor->IsA(AUAEGameMode::StaticClass())) {
                GameMode = (AUAEGameMode *) Actor;
                break;
            }
        }
        for (int i = 0; i < Actors.size(); i++) {
            auto Actor = Actors[i];

            
            if (Actor->IsA(ASTExtraPlayerController::StaticClass())) {
                PlayerController = (ASTExtraPlayerController *) Actor;
                break;
            }
        }
}

struct sRegion {
uintptr_t start, end;
};

std::vector<sRegion> trapRegions;
bool isObjectInvalid(UObject *obj) {
    if (!IsPtrValid(obj)) {
        return true;
    }
    if (!IsPtrValid(obj->ClassPrivate)) {
        return true;
    }
    if (obj->InternalIndex <= 0) {
        return true;
    }
    if (obj->NamePrivate.ComparisonIndex <= 0) {
        return true;
    }
    if ((uintptr_t)(obj) % sizeof(uintptr_t) != 0x0 && (uintptr_t)(obj) % sizeof(uintptr_t) != 0x4) {
        return true;
    }

    if (std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj) >= region.start && ((uintptr_t) obj) <= region.end; }) ||
        std::any_of(trapRegions.begin(), trapRegions.end(), [obj](sRegion region) { return ((uintptr_t) obj->ClassPrivate) >= region.start && ((uintptr_t) obj->ClassPrivate) <= region.end; })) {
        return true;
    }
    return false;
}
bool(*ogm)();
bool gm(){
return true;
}
#include "菜单.h"
EGLBoolean(*orig_eglSwapBuffers)(EGLDisplay dpy,EGLSurface surface);
EGLBoolean _eglSwapBuffers(EGLDisplay dpy,EGLSurface surface){
eglQuerySurface(dpy,surface,EGL_WIDTH,&glWidth);
eglQuerySurface(dpy,surface,EGL_HEIGHT,&glHeight);
if(glWidth<=0||glHeight<=0){
return orig_eglSwapBuffers(dpy,surface);
}
if(!g_App){
return orig_eglSwapBuffers(dpy,surface);
}
screenWidth=ANativeWindow_getWidth(g_App->window);
screenHeight=ANativeWindow_getHeight(g_App->window);
density=AConfiguration_getDensity(g_App->config);
if(!initImGui){
initImGui=true;
gWidth=glWidth/2;
gHeight=glHeight/2;
ImGui::CreateContext();
ImGui::StyleColorsLight();
ImGuiStyle&style=ImGui::GetStyle();
style.WindowRounding=3.3f;
style.FrameRounding=3.3f;
style.ScrollbarRounding=3;
style.ScrollbarSize=25.3f;
style.WindowTitleAlign=ImVec2(0.5,0.5);
ImGui_ImplAndroid_Init();
ImGui_ImplOpenGL3_Init("#version 300 es");
ImGuiIO&io=ImGui::GetIO();
const ImWchar icons_ranges[]={0xf000,0xf3ff,0};
ImFontConfig icons_config;
ImFontConfig CustomFont;
CustomFont.FontDataOwnedByAtlas=false;
icons_config.MergeMode=true;
icons_config.PixelSnapH=true;
icons_config.OversampleH=2.5;
icons_config.OversampleV=2.5;
io.Fonts->AddFontFromMemoryTTF((void*)Custom_data,Custom_size,35.0f,NULL,io.Fonts->GetGlyphRangesChineseFull());
io.ConfigWindowsMoveFromTitleBarOnly=true;
}
ImGui_ImplOpenGL3_NewFrame();
ImGui_ImplAndroid_NewFrame(glWidth,glHeight);
ImGui::NewFrame();
初始化菜单();
if(开关){
ImGui::GetBackgroundDrawList()->AddText({gWidth+200,650},ImColor(255,0,0),"Nino");
}
ImGui::Render();
ImGui_ImplOpenGL3_RenderDrawData(ImGui::GetDrawData());
return orig_eglSwapBuffers(dpy,surface);
}
int32_t(*orig_onInputEvent)(struct android_app*app,AInputEvent*inputEvent);
int32_t onInputEvent(struct android_app*app,AInputEvent*inputEvent){
ImGui_ImplAndroid_HandleInputEvent(inputEvent,{(float)screenWidth/(float)glWidth,(float)screenHeight/(float)glHeight});
return orig_onInputEvent(app,inputEvent);
}
extern "C"{
void android_main(struct android_app*state){
app_dummy();
}
}
void*main_thread(void*){
UE4=get_Module_Base("libUE4.so");
while(!UE4){
UE4=get_Module_Base("libUE4.so");
sleep(1.5);
}
while(!g_App){
g_App=*(android_app**)(UE4+0x4249ca4);
sleep(1.5);
}
orig_onInputEvent=decltype(orig_onInputEvent)(g_App->onInputEvent);
g_App->onInputEvent=onInputEvent;
FName::GNames=GetGNames();
UObject::GUObjectArray=(FUObjectArray*)(UE4+0x454dd28);
DobbyHook((void*)DobbySymbolResolver(("/system/lib/libEGL.so"),("eglSwapBuffers")),(void*)_eglSwapBuffers,(void**)&orig_eglSwapBuffers);
DobbyHook((void*)(UE4+0xc5ebbc),(void*)gm,(void**)&ogm);
return 0;
}
__attribute__((constructor))void _init(){
pthread_t pid;
pthread_create(&pid,0,main_thread,0);
}