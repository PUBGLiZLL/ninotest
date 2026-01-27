#include "imgui.h"
#include <vector>
#include <map>
#include <mutex>
#include <string>
//加载地图初始化
inline void Mmapinit(){
    //除雾、天空和光照优化
    std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(6));
        // 获取全局对象
        auto objs = UObject::GetGlobalObjects();
        // 预定义类
        auto fogClass = UExponentialHeightFogComponent::StaticClass();
        auto skyClass = USkyLightComponent::StaticClass();
        auto pointLightClass = UPointLightComponent::StaticClass();
        auto spotLightClass = USpotLightComponent::StaticClass();
        auto dirLightClass = ADirectionalLight::StaticClass();
        auto particleClass = UParticleSystemComponent::StaticClass(); // 粒子
        for (int i = 0; i < objs.Num(); i++){
            auto obj = objs.GetByIndex(i);
            if (isObjectInvalid(obj))continue; 
            // 除雾处理
            else if (obj->IsA(fogClass)){
                auto fogComponent = static_cast<UExponentialHeightFogComponent*>(obj);
                fogComponent->SetFogMaxOpacity(false);
                fogComponent->SetFogDensity(false);
                fogComponent->SetFogHeightFalloff(false);
                fogComponent->SetFogCutoffDistance(false);
                fogComponent->SetStartDistance(false);
            }
            // 天空光照去除
            else if (obj->IsA(skyClass)){
                auto skyLight = static_cast<USkyLightComponent*>(obj);
                skyLight->SetIntensity(false);
                skyLight->SetVisibility(false, false);
            }
            // 点光源去除
            else if (obj->IsA(pointLightClass)){
                auto pointLight = static_cast<UPointLightComponent*>(obj);
                pointLight->SetIntensity(false);
                pointLight->SetVisibility(false, false);
            }
            // 聚光灯去除
            else if (obj->IsA(spotLightClass)){
                auto spotLight = static_cast<USpotLightComponent*>(obj);
                spotLight->SetIntensity(false);
                spotLight->SetVisibility(false, false);
            }
            // 去除粒子特效处理
            else if (obj->IsA(particleClass)){
                auto particleComp = static_cast<UParticleSystemComponent*>(obj);
                particleComp->SetVisibility(false, false);
                particleComp->Deactivate();
                particleComp->SetActive(false, false);
            }
        }
    }).detach();
    std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(25));
        auto objs = UObject::GetGlobalObjects();
        auto staticMeshClass = UStaticMeshComponent::StaticClass();
        
        int hiddenCount = 0;
        for (int i = 0; i < objs.Num(); i++) {
            auto obj = objs.GetByIndex(i);
            if (isObjectInvalid(obj))continue;
            
            // 隐藏所有静态网格组件
            if (obj->IsA(staticMeshClass)) {
                auto staticMeshComponent = static_cast<UStaticMeshComponent*>(obj);
                staticMeshComponent->SetVisibility(false, false);
            }
        }
        }).detach();
}

static uintptr_t modifiedAddr = 0;
void fps(){
    long a1 = getPointer (UE4 + 0x464A638) + 0x0;
    writefloat(a1, 15.0f);
}

void 训练场传送(){
        std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(6));
        long x=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x150;
        long y=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x154;
        long z=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x158;
        writefloat(x,318196.5);
        writefloat(y,16122.200195);
        writefloat(z,900);
}).detach();
}

void SpawnItem(int Type, int TypeSpecificID, int Count = 50){
    FTransform Transform = UGameplayStatics::GetPlayerController(GetWorld(), 0)->Pawn->GetTransform();
    Transform.Translation = UGameplayStatics::GetPlayerController(GetWorld(), 0)->Pawn->RootComponent->RelativeLocation;
    AActor *SpawnedPickup = SpawnActorFromClass(GetWorld(), APickUpWrapperActor::StaticClass(), Transform,
    ESpawnActorCollisionHandlingMethod::ESpawnActorCollisionHandlingMethod__AlwaysSpawn,
    UGameplayStatics::GetPlayerController(GetWorld(), 0));
    APickUpWrapperActor *_SpawnedPickup = static_cast<APickUpWrapperActor *>(SpawnedPickup);
    FItemDefineID ItemID;
    ItemID.Type = Type;
    ItemID.TypeSpecificID = TypeSpecificID;
    _SpawnedPickup->SetDefineID(ItemID);
    _SpawnedPickup->SetCountOnServerAfterSpawn(Count);
    _SpawnedPickup->ShowMesh(true);
    _SpawnedPickup->ShowActor();
    _SpawnedPickup->RegisterToPlayerPickUpList();
}

void SpawnAllWeapons(){
    // 突击步枪
    SpawnItem(1, 101001); // AKM
    SpawnItem(1, 101002); // M16A4
    SpawnItem(1, 101003); // SCAR-L
    SpawnItem(1, 101004); // M416
    SpawnItem(1, 101005); // GROZA
    SpawnItem(1, 101006); // AUG
    SpawnItem(1, 101007); // QBZ
    SpawnItem(1, 101008); // M762
    SpawnItem(1, 101009); // Mk47
    SpawnItem(1, 101010); // G36C
    
    // 冲锋枪
    SpawnItem(1, 102001); // UZI
    SpawnItem(1, 102002); // UMP9
    SpawnItem(1, 102003); // Vector
    SpawnItem(1, 102004); // 汤姆逊
    SpawnItem(1, 102005); // PP19
    SpawnItem(1, 102006); // UziPro
    
    // 狙击枪
    SpawnItem(1, 103001); // Kar98K
    SpawnItem(1, 103002); // M24
    SpawnItem(1, 103003); // AWM
    SpawnItem(1, 103004); // SKS
    SpawnItem(1, 103005); // VSS
    SpawnItem(1, 103006); // Mini14
    SpawnItem(1, 103007); // Mk14
    SpawnItem(1, 103008); // Win94
    SpawnItem(1, 103009); // SLR
    SpawnItem(1, 103010); // QBU
    
    // 霰弹枪
    SpawnItem(1, 104001); // S686
    SpawnItem(1, 104002); // S1897
    SpawnItem(1, 104003); // S12K
    
    // 轻机枪
    SpawnItem(1, 105001); // M249
    SpawnItem(1, 105002); // DP-28
    
    // 手枪
    SpawnItem(1, 106001); // P92
    SpawnItem(1, 106002); // P1911
    SpawnItem(1, 106003); // R1895
    SpawnItem(1, 106004); // P18C
    SpawnItem(1, 106005); // R45
    SpawnItem(1, 106006); // 短管霰弹枪
    SpawnItem(1, 106007); // 信号枪
    SpawnItem(1, 106095); // 吃鸡礼花枪
    SpawnItem(1, 106097);//年兽信号枪
    SpawnItem(1, 106008); // 蝎式手枪
    SpawnItem(1, 106098); // 圣诞信号枪
}

void SpawnAllAmmo(){
    SpawnItem(3, 301001, 900); // 9毫米子弹
    SpawnItem(3, 302001, 900); // 7.62毫米子弹
    SpawnItem(3, 303001, 900); // 5.56毫米子弹
    SpawnItem(3, 304001, 900); // 12口径霰弹
    SpawnItem(3, 305001, 900); // .45口径子弹
    SpawnItem(3, 306001, 900); // .300马格南子弹
    SpawnItem(3, 308001, 900); // 信号弹
    SpawnItem(3, 308002, 900); // 烟花弹
    SpawnItem(3, 308003, 900); // 年兽诱饵弹
}

void SpawnAllClothing(){
    SpawnItem(4, 403038 );// 吉利服(雪地)
    SpawnItem(4, 403409);// 晶翼女神套装
    SpawnItem(4, 403410);// 黑曜金尊套装
    SpawnItem(4, 453021);// 火箭少女101
    SpawnItem(4, 403188);// 至尊金龙外套
    SpawnItem(4, 404049);// S1战斗裤
    SpawnItem(4, 403124);// S1战斗外套
    SpawnItem(4, 403017);//小黄衣
    SpawnItem(4, 404001);//小黄裤
    SpawnItem(4, 403184);//黑色连帽大衣
    SpawnItem(4, 402037);//西部牛仔面罩
    SpawnItem(4, 403178);//黑色rock
    SpawnItem(4, 402032);//青色面罩
    SpawnItem(4, 403075);//师傅专用外套
    SpawnItem(4, 403393);//时尚圣诞套装
    SpawnItem(4, 403408);//卡路里
}

void SpawnAllAttachments(){
    SpawnItem(2, 203001); // 红点瞄准镜
    SpawnItem(2, 203002); // 全息瞄准镜
    SpawnItem(2, 203003); // 2倍瞄准镜
    SpawnItem(2, 203004); // 4倍瞄准镜
    SpawnItem(2, 203005); // 8倍瞄准镜
    SpawnItem(2, 203014); // 3倍瞄准镜
    SpawnItem(2, 203015); // 6倍瞄准镜
    SpawnItem(2, 204003); // 快速扩容弹匣(手枪)
    SpawnItem(2, 204006); // 快速扩容弹匣(冲锋枪)
    SpawnItem(2, 204009); // 快速扩容弹匣(狙击枪)
    SpawnItem(2, 204013); // 快速扩容弹匣(步枪)
}

void SpawnAllArmor(){
    SpawnItem(5, 502005); // 二级头
    SpawnItem(5, 503003); // 军用防弹衣(3级)
    SpawnItem(5, 501006); // 背包
}

void SpawnAllMedical(){
    SpawnItem(6, 601001, 3); // 能量饮料
    SpawnItem(6, 601002, 2); // 肾上腺素
    SpawnItem(6, 601003, 3); // 止痛药
    SpawnItem(6, 601004, 3); // 绷带
    SpawnItem(6, 601005, 3); // 急救包
    SpawnItem(6, 601006, 3); // 医疗箱
}

void SpawnAllThrowables(){
    SpawnItem(6, 602001, 60); // 震爆弹
    SpawnItem(6, 602002, 999); // 烟雾弹
    SpawnItem(6, 602004, 999); // 破片手榴弹
    SpawnItem(6, 602007, 999); // 圣诞玩具苹果
    SpawnItem(6, 602008, 999); // 圣诞小鸡玩偶
    SpawnItem(6, 602009, 999); // 冬季雪球
    SpawnItem(6, 602010, 999); // 大春雷
    SpawnItem(6, 602011, 999); // 鞭炮
    SpawnItem(6, 602012, 999); // 小春雷
    SpawnItem(6, 602014, 999); // 周年庆蛋糕
    SpawnItem(30, 3000302); // 新年爆竹
    SpawnItem(30, 3000402); // 孔明灯
    SpawnItem(30, 3001003); // 鸡
}

void SpawnAllSpecial(){
    // 特殊物品
    SpawnItem(30, 3000301); // 新年烟花
    SpawnItem(30, 3000302); // 新年爆竹
    SpawnItem(30, 3000401); // 浪漫玫瑰束
    SpawnItem(30, 3000402); // 团圆孔明灯
    SpawnItem(30, 3001002); // 小黄鸭
    SpawnItem(30, 3001003); // 鸡
    
    // 节日枪械
    SpawnItem(1, 106095); // 吃鸡礼花枪
    SpawnItem(1, 106096); // 元宵节礼花枪
    SpawnItem(1, 106097); // 年兽信号枪
    SpawnItem(1, 106098); // 圣诞信号枪
    SpawnItem(1, 106099); // 新年礼花枪
}

void parachute(){
    SpawnItem(4, 701015, 999);
    SpawnItem(4, 703055, 999);
    SpawnItem(4, 703016, 999);
    SpawnItem(4, 703020, 999);
    SpawnItem(4, 703050, 999);
}

void 启用攀爬(){
std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(8));
        获取对象();
        if (GameMode){
        GameMode->bEnableClimbing = true;
        }
}).detach();
}

void 防崩(){
auto objs = UObject::GetGlobalObjects();
for(int i = 0; i < objs.Num(); i++){
auto Object = objs.GetByIndex(i);
if(isObjectInvalid(Object))
continue;
if(Object->IsA(UNetDriver::StaticClass())){
UNetDriver* NetDriver = (UNetDriver*)Object;
NetDriver->MaxDownloadSize = 9999999;// 最大下载大小
NetDriver->bClampListenServerTickRate = false;// 关闭Tick率钳位
NetDriver->NetServerMaxTickRate = 0;// 服务器最大Tick率
NetDriver->MaxInternetClientRate = 1000000;// 最大互联网客户端速率
NetDriver->MaxClientRate = 1000000;// 最大客户端速率
NetDriver->ServerTravelPause = 0.1f;// 服务器旅行暂停
NetDriver->SpawnPrioritySeconds = 0.5f;// 刷出优先级秒数
NetDriver->RelevantTimeout = 999999.9f;// 相关超时
NetDriver->KeepAliveTime = 20.0f;// 保持活动时间
NetDriver->InitialConnectTimeout = 999999.9f;// 初始连接超时
NetDriver->ConnectionTimeout = 999999.9f;// 连接超时
NetDriver->bNoTimeouts = true;// 关闭超时
}}
}

void 刷物资(){
        std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(20));
        SpawnAllWeapons();
        SpawnAllAmmo();
        SpawnAllClothing();
        SpawnAllAttachments();
        SpawnAllArmor();
        SpawnAllThrowables();
        }).detach();
}

void 刷降落伞(){
        std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(10));
        parachute();
        }).detach();
}

void 雨林刷物资(){
        std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(35));
        SpawnAllWeapons();
        SpawnAllAmmo();
        SpawnAllClothing();
        SpawnAllAttachments();
        SpawnAllArmor();
        SpawnAllThrowables();
        }).detach();
}

void 海岛传送(){
        std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(96));
        long x=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x150;
        long y=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x154;
        long z=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x158;
        writefloat(x,796373);
        writefloat(y,15564);
        writefloat(z,526);
        Mmapinit();
}).detach();
}

void 雨林传送(){
        std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(86));
        long x=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x150;
        long y=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x154;
        long z=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x158;
        writefloat(x,290043);
        writefloat(y,197414);
        writefloat(z,90000);
        雨林刷物资();
        Mmapinit();
}).detach();
}

void 沙漠传送(){
        std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(100));
        long x=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x150;
        long y=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x154;
        long z=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x158;
        writefloat(x,85522);
        writefloat(y,729238);
        writefloat(z,90000);
        雨林刷物资();
        Mmapinit();
}).detach();
}

void 年兽传送(){
    std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(30));
        long x=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x150;
        long y=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x154;
        long z=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x158;
        writefloat(x,239859.375);
        writefloat(y,252176.375);
        writefloat(z,10541.017578);
        雨林刷物资();
        Mmapinit();
        }).detach();
}

static bool bGodMode = false;
void 服务端无敌(){
    std::thread([](){
     std::this_thread::sleep_for(std::chrono::seconds(15));
    获取对象();
        if (PlayerController && PlayerController->CheatManager)
        {
            UGMCheatManager* GMCheat = (UGMCheatManager*)PlayerController->CheatManager;
            bGodMode = true;
            GMCheat->GMInvincible(true);
        }
    }).detach();
}

void 设置雾天(){
    std::thread([](){
     std::this_thread::sleep_for(std::chrono::seconds(3));
    获取对象();
    PlayerController->GMOpenWeather(3);
    }).detach();
}

void 设置极光(){
    std::thread([](){
     std::this_thread::sleep_for(std::chrono::seconds(3));
    获取对象();
    PlayerController->GMOpenWeather(5);
    }).detach();
}

void 动态天气(){
    获取对象();
    if (PlayerController)
    {
        PlayerController->GMOpenWeather(2);
        PlayerController->SetIsRainy(true);
    }
}

void 海岛自动化上飞机(){
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(3));
    USkillUtils::GetPlayerController(UGameplayStatics::GetPlayerController(GetWorld(),0)->Pawn)->SpawnAI(98);
    获取对象();
    GameMode->bEnablePlaneBanner=true;
    }).detach();
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(63));
    safeWritedword(UE4 + 0xC5EBBC, -476053503);
    safeWritedword(UE4 + 0xEDD870, -516948194);
    safeWritedword(UE4 + 0xEDF42C, -516948194);
    safeWritedword(UE4 + 0x30B92F8, -516948194);
    safeWritedword(UE4 + 0x30B93C4, -516948194);
    safeWritedword(UE4 + 0x103F880, -516948194);
    safeWritedword(UE4 + 0x10BA09C, -516948194);
    safeWritedword(UE4 + 0x1040090, 1);
    std::this_thread::sleep_for(std::chrono::seconds(6));
    safeWritedword(UE4 + 0xC5EBBC, -450891772);
    safeWritedword(UE4 + 0xEDD870, -382908368);
    safeWritedword(UE4 + 0xEDF42C, -382907376);
    safeWritedword(UE4 + 0x30B92F8, -382908368);
    safeWritedword(UE4 + 0x30B93C4, -382907376);
    safeWritedword(UE4 + 0x103F880, -382907376);
    safeWritedword(UE4 + 0x10BA09C, -443473904);
    safeWritedword(UE4 + 0x1040090, -382908368);
    }).detach();
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(95));
    获取对象();
    PlayerController->JumpFromPlane();
    }).detach();
}

void 雨林自动化上飞机(){
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(3));
    USkillUtils::GetPlayerController(UGameplayStatics::GetPlayerController(GetWorld(),0)->Pawn)->SpawnAI(98);
    获取对象();
    GameMode->bEnablePlaneBanner=true;
    }).detach();
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(63));
    safeWritedword(UE4 + 0xC5EBBC, -476053503);
    safeWritedword(UE4 + 0xEDD870, -516948194);
    safeWritedword(UE4 + 0xEDF42C, -516948194);
    safeWritedword(UE4 + 0x30B92F8, -516948194);
    safeWritedword(UE4 + 0x30B93C4, -516948194);
    safeWritedword(UE4 + 0x103F880, -516948194);
    safeWritedword(UE4 + 0x10BA09C, -516948194);
    safeWritedword(UE4 + 0x1040090, 1);
    std::this_thread::sleep_for(std::chrono::seconds(7));
    safeWritedword(UE4 + 0xC5EBBC, -450891772);
    safeWritedword(UE4 + 0xEDD870, -382908368);
    safeWritedword(UE4 + 0xEDF42C, -382907376);
    safeWritedword(UE4 + 0x30B92F8, -382908368);
    safeWritedword(UE4 + 0x30B93C4, -382907376);
    safeWritedword(UE4 + 0x103F880, -382907376);
    safeWritedword(UE4 + 0x10BA09C, -443473904);
    safeWritedword(UE4 + 0x1040090, -382908368);
    }).detach();
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(85));
    获取对象();
    PlayerController->JumpFromPlane();
    }).detach();
}

void 沙漠自动化上飞机(){
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(4));
    USkillUtils::GetPlayerController(UGameplayStatics::GetPlayerController(GetWorld(),0)->Pawn)->SpawnAI(98);
    }).detach();
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(64));
    safeWritedword(UE4 + 0xC5EBBC, -476053503);
    safeWritedword(UE4 + 0xEDD870, -516948194);
    safeWritedword(UE4 + 0xEDF42C, -516948194);
    safeWritedword(UE4 + 0x30B92F8, -516948194);
    safeWritedword(UE4 + 0x30B93C4, -516948194);
    safeWritedword(UE4 + 0x103F880, -516948194);
    safeWritedword(UE4 + 0x10BA09C, -516948194);
    safeWritedword(UE4 + 0x1040090, 1);
    std::this_thread::sleep_for(std::chrono::seconds(7));
    safeWritedword(UE4 + 0xC5EBBC, -450891772);
    safeWritedword(UE4 + 0xEDD870, -382908368);
    safeWritedword(UE4 + 0xEDF42C, -382907376);
    safeWritedword(UE4 + 0x30B92F8, -382908368);
    safeWritedword(UE4 + 0x30B93C4, -382907376);
    safeWritedword(UE4 + 0x103F880, -382907376);
    safeWritedword(UE4 + 0x10BA09C, -443473904);
    safeWritedword(UE4 + 0x1040090, -382908368);
    }).detach();
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(95));
    获取对象();
    PlayerController->JumpFromPlane();
    }).detach();
}

void 战争模式自动化上飞机(){
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(3));
    USkillUtils::GetPlayerController(UGameplayStatics::GetPlayerController(GetWorld(),0)->Pawn)->SpawnAI(1);
    }).detach();
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(33));
    safeWritedword(UE4 + 0xC5EBBC, -476053503);
    safeWritedword(UE4 + 0xEDD870, -516948194);
    safeWritedword(UE4 + 0xEDF42C, -516948194);
    safeWritedword(UE4 + 0x30B92F8, -516948194);
    safeWritedword(UE4 + 0x30B93C4, -516948194);
    safeWritedword(UE4 + 0x103F880, -516948194);
    safeWritedword(UE4 + 0x10BA09C, -516948194);
    safeWritedword(UE4 + 0x1040090, 1);
    std::this_thread::sleep_for(std::chrono::seconds(7));
    safeWritedword(UE4 + 0xC5EBBC, -450891772);
    safeWritedword(UE4 + 0xEDD870, -382908368);
    safeWritedword(UE4 + 0xEDF42C, -382907376);
    safeWritedword(UE4 + 0x30B92F8, -382908368);
    safeWritedword(UE4 + 0x30B93C4, -382907376);
    safeWritedword(UE4 + 0x103F880, -382907376);
    safeWritedword(UE4 + 0x10BA09C, -443473904);
    safeWritedword(UE4 + 0x1040090, -382908368);
    }).detach();
}

void 刷人机(){
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(8));
    USkillUtils::GetPlayerController(UGameplayStatics::GetPlayerController(GetWorld(),0)->Pawn)->SpawnAI(1);
    }).detach();
}

void 娱乐模式自动化上飞机(){
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(4));
    USkillUtils::GetPlayerController(UGameplayStatics::GetPlayerController(GetWorld(),0)->Pawn)->SpawnAI(30);
    }).detach();
    std::thread([](){
    std::this_thread::sleep_for(std::chrono::seconds(34));
    safeWritedword(UE4 + 0xC5EBBC, -476053503);
    safeWritedword(UE4 + 0xEDD870, -516948194);
    safeWritedword(UE4 + 0xEDF42C, -516948194);
    safeWritedword(UE4 + 0x30B92F8, -516948194);
    safeWritedword(UE4 + 0x30B93C4, -516948194);
    safeWritedword(UE4 + 0x103F880, -516948194);
    safeWritedword(UE4 + 0x10BA09C, -516948194);
    safeWritedword(UE4 + 0x1040090, 1);
    std::this_thread::sleep_for(std::chrono::seconds(7));
    safeWritedword(UE4 + 0xC5EBBC, -450891772);
    safeWritedword(UE4 + 0xEDD870, -382908368);
    safeWritedword(UE4 + 0xEDF42C, -382907376);
    safeWritedword(UE4 + 0x30B92F8, -382908368);
    safeWritedword(UE4 + 0x30B93C4, -382907376);
    safeWritedword(UE4 + 0x103F880, -382907376);
    safeWritedword(UE4 + 0x10BA09C, -443473904);
    safeWritedword(UE4 + 0x1040090, -382908368);
    }).detach();
}

void 服务端全图加载(){
    std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(68));
        auto World = GetWorld();
        if (!World) return;
        
        if (auto stpc = (SDK::ASTExtraPlayerController*)SDK::UGameplayStatics::GetPlayerController(World, 0)){
            auto& Levels = World->StreamingLevels;
            for (int i = 0; i < Levels.Num(); ++i){
                if (auto* Level = Levels[i]) {
                    Level->bShouldBeLoaded = true;
                    Level->bShouldBeVisible = true;
                }
            }
            stpc->LoadAllLand(true);
        }
    }).detach();
}

void 快速服务端全图加载(){
    std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(10));
        auto World = GetWorld();
        if (!World) return;
        
        if (auto stpc = (SDK::ASTExtraPlayerController*)SDK::UGameplayStatics::GetPlayerController(World, 0)){
            auto& Levels = World->StreamingLevels;
            for (int i = 0; i < Levels.Num(); ++i){
                if (auto* Level = Levels[i]) {
                    Level->bShouldBeLoaded = true;
                    Level->bShouldBeVisible = true;
                }
            }
            stpc->LoadAllLand(true);
        }
    }).detach();
}

void 开启伤害(){
    std::thread([](){
        std::this_thread::sleep_for(std::chrono::seconds(85));
        获取对象();
        if (GameMode)
    {
        GameMode->bEnableDamage = true;
    }
    }).detach();
}

namespace VehicleFixLog {
    static std::vector<std::string> LogEntries;
    static std::mutex LogMutex;
    static const int MAX_LOG_ENTRIES = 500;
    
    void AddLog(const std::string& message) {
        std::lock_guard<std::mutex> lock(LogMutex);
        time_t now = time(0);
        struct tm* tstruct = localtime(&now);
        if (tstruct) {
            char buf[80];
            strftime(buf, sizeof(buf), "[%H:%M:%S] ", tstruct);
            std::string fullMessage = std::string(buf) + message;
            LogEntries.push_back(fullMessage);
        } else {
            LogEntries.push_back(message);
        }
        
        if (LogEntries.size() > MAX_LOG_ENTRIES) {
            LogEntries.erase(LogEntries.begin());
        }
    }
}

#define VEHICLE_LOG(...) \
    do { \
        char buffer[512]; \
        snprintf(buffer, sizeof(buffer), __VA_ARGS__); \
        VehicleFixLog::AddLog(buffer); \
    } while(0)

std::vector<FPlayerInfo> RegisteredPlayers;
std::map<SDK::APlayerController*, int> LastSeatIndices;
std::map<SDK::APlayerController*, SDK::ASTExtraVehicleBase*> LastVehicles;
std::map<SDK::APlayerController*, bool> PlayerInVehicleState;

SDK::ASTExtraBaseCharacter* GetCharacterFromController(SDK::APlayerController* PC)
{
    if (!PC) return nullptr;
    
    static SDK::ASTExtraPlayerController* CachedSTPC = nullptr;
    static SDK::ASTExtraBaseCharacter* CachedCharacter = nullptr;
    
    if (CachedSTPC == PC && CachedCharacter)
        return CachedCharacter;
    
    SDK::ASTExtraPlayerController* STPC = nullptr;
    if (PC->IsA(SDK::ASTExtraPlayerController::StaticClass()))
    {
        STPC = (SDK::ASTExtraPlayerController*)PC;
        if (STPC->STExtraBaseCharacter)
        {
            CachedSTPC = STPC;
            CachedCharacter = STPC->STExtraBaseCharacter;
            return CachedCharacter;
        }
    }
    
    SDK::ASTExtraBaseCharacter* fromUtil = SDK::USTExtraVehicleUtils::GetCharacter(STPC ? STPC : (SDK::ASTExtraPlayerController*)PC);
    if (fromUtil)
    {
        CachedSTPC = STPC;
        CachedCharacter = fromUtil;
        return fromUtil;
    }
    
    if (PC->Pawn && PC->Pawn->IsA(SDK::ASTExtraBaseCharacter::StaticClass()))
    {
        CachedSTPC = STPC;
        CachedCharacter = (SDK::ASTExtraBaseCharacter*)PC->Pawn;
        return CachedCharacter;
    }

    return nullptr;
}

void ProcessServerVehicleFix(SDK::ASTExtraPlayerController* STEPC,
                            SDK::ASTExtraBaseCharacter* Char,
                            SDK::ASTExtraVehicleBase* State_Vehicle)
{
    if (!STEPC || !Char || !State_Vehicle || !STEPC->VehicleUserComp) return;
    
    if (STEPC->VehicleUserComp->VehicleUserState == SDK::ESTExtraVehicleUserState::ESTExtraVehicleUserState__EVUS_AsDriver &&
        State_Vehicle->VehicleSeats && 
        State_Vehicle->VehicleSeats->SeatOccupiers.Num() > 0)
    {
        SDK::ASTExtraPlayerCharacter* CurrentDriver = State_Vehicle->VehicleSeats->SeatOccupiers[0];
        
        if (CurrentDriver == nullptr)
        {
            STEPC->VehicleUserComp->ReqEnterVehicle(State_Vehicle, SDK::ESTExtraVehicleSeatType::ESTExtraVehicleSeatType__ESeatType_DriversSeat);
            State_Vehicle->VehicleSeats->SeatOccupiers[0] = (SDK::ASTExtraPlayerCharacter*)Char;
            State_Vehicle->bIsEngineStarted = true;
            State_Vehicle->bEnableAntiCheat = false;
            
            State_Vehicle->HandleOnSeatAttached(
                (SDK::ASTExtraPlayerCharacter*)Char,
                SDK::ESTExtraVehicleSeatType::ESTExtraVehicleSeatType__ESeatType_DriversSeat,
                0
            );
            
            Char->ForcePlayerUpdateAnimation();
            Char->VehicleSeatIdx = 0;
            Char->bWasOnVehicle = true;
            Char->CurrentVehicle = State_Vehicle;
            Char->ForceNetUpdate();
            State_Vehicle->ForceNetUpdate();
        }
    }
}

void ProcessServerLogic(SDK::UWorld* World, SDK::AGameStateBase* GS)
{
    auto& Players = GS->PlayerArray;
    
    for (int i = 0; i < Players.Num(); i++)
    {
        SDK::APlayerState* PS = Players[i];
        if (!PS) continue;
        if (!PS->Owner) continue;

        SDK::ASTExtraPlayerController* STEPC = nullptr;
        SDK::APlayerController* PC = (SDK::APlayerController*)PS->Owner;

        if (PS->Owner->IsA(SDK::ASTExtraPlayerController::StaticClass()))
            STEPC = (SDK::ASTExtraPlayerController*)PS->Owner;
        else if (PC && PC->IsA(SDK::ASTExtraPlayerController::StaticClass()))
            STEPC = (SDK::ASTExtraPlayerController*)PC;
        if (!STEPC) continue;

        SDK::ASTExtraBaseCharacter* Char = STEPC->STExtraBaseCharacter;
        if (!Char) Char = GetCharacterFromController(PC);
        if (!Char) continue;

        if (!STEPC->VehicleUserComp) continue;

        SDK::ASTExtraVehicleBase* State_Vehicle = nullptr;
        if (STEPC->STExtraBaseCharacter && STEPC->STExtraBaseCharacter->CurrentVehicle)
        {
            State_Vehicle = STEPC->STExtraBaseCharacter->CurrentVehicle;
        }
        else if (PC->Pawn && PC->Pawn->IsA(SDK::ASTExtraVehicleBase::StaticClass()))
        {
            State_Vehicle = (SDK::ASTExtraVehicleBase*)PC->Pawn;
        }
        
        if (State_Vehicle)
        {
            ProcessServerVehicleFix(STEPC, Char, State_Vehicle);
        }
    }
}

void 修复载具()
{
    SDK::UWorld* World = GetWorld();
    if (!World) return;

    SDK::AGameStateBase* GS = World->GameState;
    if (!GS) return;

    SDK::APlayerController* MyController = SDK::UGameplayStatics::GetPlayerController(World, 0);
    
    if (MyController && MyController->HasAuthority()) {
        ProcessServerLogic(World, GS);
    } else {
        ProcessServerLogic(World, GS);
    }
}

// ==================== 头文件包含 ====================
#include <mutex>
#include <atomic>
#include <vector>
#include <thread>
#include <chrono>
#include <string>
#include <cstdlib>

// ==================== 玩家信息结构体 ====================
struct SimplePlayerInfo {
    SDK::ASTExtraBaseCharacter* PlayerCharacter;
};

// ==================== 全局变量 ====================
static bool bIsTeleporting = false;
static std::string sStatusMessage = "";
static float fStatusDisplayTime = 0.0f;
static std::mutex g_TeleportMutex;
static std::mutex g_WorldAccessMutex;
static std::atomic<int> s_TeleportCounter(0);

// ==================== 辅助函数 ====================

// 创建零向量
SDK::FVector MakeZeroVector() {
    SDK::FVector vec;
    vec.X = 0.0f;
    vec.Y = 0.0f;
    vec.Z = 0.0f;
    return vec;
}

// 改进的指针有效性检查
template<typename T>
bool IsValidPointer(T* ptr) {
    if (!ptr) return false;
    
    // 检查指针是否指向有效地址范围（简化版）
    uintptr_t addr = reinterpret_cast<uintptr_t>(ptr);
    
    // 基本地址范围检查
    if (addr < 0x10000 || addr > 0xFFFFFFFFFFFFFF00) return false;
    
    // 检查指针是否对齐（可选）
    if (addr % sizeof(void*) != 0) return false;
    
    return true;
}

// 检查基础指针（兼容旧代码）
bool IsPointerValid(void* ptr) {
    return IsValidPointer(ptr);
}

// 获取服务端玩家位置
SDK::FVector GetServerPlayerPositionSafe() {
    std::lock_guard<std::mutex> lock(g_WorldAccessMutex);
    
    try {
        SDK::UWorld* world = GetWorld();
        if (!IsValidPointer(world)) return MakeZeroVector();
        
        // 获取玩家控制器
        SDK::APlayerController* playerCtrl = SDK::UGameplayStatics::GetPlayerController(world, 0);
        if (!IsValidPointer(playerCtrl)) return MakeZeroVector();
        
        // 检查是否是服务端
        if (!playerCtrl->HasAuthority()) return MakeZeroVector();
        
        // 获取角色
        SDK::ASTExtraBaseCharacter* character = nullptr;
        if (IsValidPointer(playerCtrl->Pawn)) {
            try {
                if (playerCtrl->Pawn->IsA(SDK::ASTExtraBaseCharacter::StaticClass())) {
                    character = static_cast<SDK::ASTExtraBaseCharacter*>(playerCtrl->Pawn);
                }
            } catch (...) {
                return MakeZeroVector();
            }
        }
        
        if (!IsValidPointer(character)) return MakeZeroVector();
        
        // 获取服务端玩家位置
        SDK::FVector result;
        try {
            result = character->K2_GetActorLocation();
        } catch (...) {
            return MakeZeroVector();
        }
        
        return result;
    } catch (...) {
        return MakeZeroVector();
    }
}

// 获取服务端玩家旋转
SDK::FRotator GetServerPlayerRotationSafe() {
    std::lock_guard<std::mutex> lock(g_WorldAccessMutex);
    
    try {
        SDK::UWorld* world = GetWorld();
        if (!IsValidPointer(world)) return SDK::FRotator();
        
        // 获取玩家控制器
        SDK::APlayerController* playerCtrl = SDK::UGameplayStatics::GetPlayerController(world, 0);
        if (!IsValidPointer(playerCtrl)) return SDK::FRotator();
        
        // 检查是否是服务端
        if (!playerCtrl->HasAuthority()) return SDK::FRotator();
        
        // 获取角色
        SDK::ASTExtraBaseCharacter* character = nullptr;
        if (IsValidPointer(playerCtrl->Pawn)) {
            try {
                if (playerCtrl->Pawn->IsA(SDK::ASTExtraBaseCharacter::StaticClass())) {
                    character = static_cast<SDK::ASTExtraBaseCharacter*>(playerCtrl->Pawn);
                }
            } catch (...) {
                return SDK::FRotator();
            }
        }
        
        if (!IsValidPointer(character)) return SDK::FRotator();
        
        // 获取服务端玩家旋转
        SDK::FRotator result;
        try {
            result = character->K2_GetActorRotation();
        } catch (...) {
            return SDK::FRotator();
        }
        
        return result;
    } catch (...) {
        return SDK::FRotator();
    }
}

// 修复的获取所有玩家角色的函数（不跳过任何玩家）
SDK::ASTExtraBaseCharacter* GetAllPlayerCharacter(SDK::APlayerState* playerState) {
    if (!IsValidPointer(playerState)) return nullptr;
    
    try {
        // 获取玩家控制器
        SDK::APlayerController* playerCtrl = nullptr;
        if (IsValidPointer(playerState->Owner)) {
            try {
                if (playerState->Owner->IsA(SDK::APlayerController::StaticClass())) {
                    playerCtrl = static_cast<SDK::APlayerController*>(playerState->Owner);
                }
            } catch (...) {
                return nullptr;
            }
        }
        
        if (!IsValidPointer(playerCtrl)) return nullptr;
        
        // 获取角色
        SDK::ASTExtraBaseCharacter* character = nullptr;
        if (IsValidPointer(playerCtrl->Pawn)) {
            try {
                if (playerCtrl->Pawn->IsA(SDK::ASTExtraBaseCharacter::StaticClass())) {
                    character = static_cast<SDK::ASTExtraBaseCharacter*>(playerCtrl->Pawn);
                }
            } catch (...) {
                return nullptr;
            }
        }
        
        if (!IsValidPointer(character)) return nullptr;
        
        return character;
    } catch (...) {
        return nullptr;
    }
}

// 安全的获取所有玩家列表副本（包括服务端和客户端）
std::vector<SimplePlayerInfo> GetAllPlayersList() {
    std::vector<SimplePlayerInfo> safeList;
    std::lock_guard<std::mutex> lock(g_WorldAccessMutex);
    
    try {
        SDK::UWorld* world = GetWorld();
        if (!IsValidPointer(world)) return safeList;
        
        SDK::AGameStateBase* gameState = world->GameState;
        if (!IsValidPointer(gameState)) return safeList;
        
        int playerCount = 0;
        try {
            playerCount = gameState->PlayerArray.Num();
        } catch (...) {
            return safeList;
        }
        
        safeList.reserve(playerCount);
        
        // 获取当前玩家的控制器，用于判断是否是服务端
        SDK::APlayerController* myCtrl = SDK::UGameplayStatics::GetPlayerController(world, 0);
        bool isServer = IsValidPointer(myCtrl) && myCtrl->HasAuthority();
        
        for (int i = 0; i < playerCount; i++) {
            try {
                SDK::APlayerState* playerState = gameState->PlayerArray[i];
                if (!IsValidPointer(playerState)) continue;
                
                SDK::ASTExtraBaseCharacter* character = GetAllPlayerCharacter(playerState);
                if (!IsValidPointer(character)) continue;
                
                // 如果是服务端，不要传送自己（可以跳过自己的角色）
                if (isServer) {
                    // 检查这个角色是否属于当前玩家
                    SDK::APlayerController* charCtrl = SDK::UGameplayStatics::GetPlayerController(world, i);
                    if (IsValidPointer(charCtrl) && charCtrl == myCtrl) {
                        // 跳过当前玩家自己的角色
                        continue;
                    }
                }
                
                SimplePlayerInfo info;
                info.PlayerCharacter = character;
                safeList.push_back(info);
            } catch (...) {
                continue;
            }
        }
    } catch (...) {
        safeList.clear();
    }
    
    return safeList;
}

// 获取可传送的玩家列表（非服务端玩家）
std::vector<SimplePlayerInfo> GetSafePlayerList() {
    std::vector<SimplePlayerInfo> safeList;
    std::lock_guard<std::mutex> lock(g_WorldAccessMutex);
    
    try {
        SDK::UWorld* world = GetWorld();
        if (!IsValidPointer(world)) return safeList;
        
        SDK::AGameStateBase* gameState = world->GameState;
        if (!IsValidPointer(gameState)) return safeList;
        
        // 获取当前玩家的控制器，判断是否是服务端
        SDK::APlayerController* myCtrl = SDK::UGameplayStatics::GetPlayerController(world, 0);
        bool isServer = IsValidPointer(myCtrl) && myCtrl->HasAuthority();
        
        // 如果是客户端，则不能传送任何人
        if (!isServer) {
            return safeList;
        }
        
        int playerCount = 0;
        try {
            playerCount = gameState->PlayerArray.Num();
        } catch (...) {
            return safeList;
        }
        
        safeList.reserve(playerCount);
        
        for (int i = 0; i < playerCount; i++) {
            try {
                SDK::APlayerState* playerState = gameState->PlayerArray[i];
                if (!IsValidPointer(playerState)) continue;
                
                SDK::ASTExtraBaseCharacter* character = GetAllPlayerCharacter(playerState);
                if (!IsValidPointer(character)) continue;
                
                // 检查这个角色是否属于当前服务端玩家
                SDK::APlayerController* charCtrl = SDK::UGameplayStatics::GetPlayerController(world, i);
                if (IsValidPointer(charCtrl) && charCtrl == myCtrl) {
                    // 跳过服务端玩家自己的角色
                    continue;
                }
                
                SimplePlayerInfo info;
                info.PlayerCharacter = character;
                safeList.push_back(info);
            } catch (...) {
                continue;
            }
        }
    } catch (...) {
        safeList.clear();
    }
    
    return safeList;
}

// 安全的传送单个玩家
bool SafeTeleportPlayerDelayed(SDK::ASTExtraBaseCharacter* playerChar, SDK::FVector targetPos, SDK::FRotator targetRot) {
    if (!IsValidPointer(playerChar)) return false;
    
    int currentCount = s_TeleportCounter.fetch_add(1);
    
    if (currentCount % 5 == 0) {
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    
    try {
        // 尝试获取当前角色位置（确认角色可访问）
        SDK::FVector currentPos;
        try {
            currentPos = playerChar->K2_GetActorLocation();
        } catch (...) {
            return false;
        }
        
        // 设置新位置（分步进行以避免碰撞）
        SDK::FVector safePos = targetPos;
        safePos.Z += 200.0f;
        
        try {
            playerChar->K2_SetActorLocation(safePos, false, false, nullptr);
        } catch (...) {
            return false;
        }
        
        std::this_thread::sleep_for(std::chrono::microseconds(500));
        
        // 设置最终位置
        try {
            playerChar->K2_SetActorLocation(targetPos, false, false, nullptr);
            playerChar->K2_SetActorRotation(targetRot, false);
        } catch (...) {
            return false;
        }
        
        return true;
    } catch (...) {
        return false;
    }
}

// 兼容旧版本的传送函数
bool SafeTeleportPlayer(SDK::ASTExtraBaseCharacter* playerChar, SDK::FVector targetPos, SDK::FRotator targetRot) {
    return SafeTeleportPlayerDelayed(playerChar, targetPos, targetRot);
}

// ==================== 主功能函数 ====================

// 初始化传送系统
void InitializeTeleportSystem() {
    std::lock_guard<std::mutex> lock1(g_TeleportMutex);
    std::lock_guard<std::mutex> lock2(g_WorldAccessMutex);
    
    bIsTeleporting = false;
    sStatusMessage = "";
    fStatusDisplayTime = 0.0f;
    s_TeleportCounter.store(0);
}

// 清理传送系统
void CleanupTeleportSystem() {
    std::lock_guard<std::mutex> lock1(g_TeleportMutex);
    std::lock_guard<std::mutex> lock2(g_WorldAccessMutex);
    
    bIsTeleporting = false;
    s_TeleportCounter.store(0);
    sStatusMessage = "";
}

// 一键传送所有玩家
void SafeTeleportAllPlayers() {
    if (bIsTeleporting) {
        sStatusMessage = "传送已在执行中，请等待...";
        fStatusDisplayTime = ImGui::GetTime();
        return;
    }
    
    static std::mutex executionMutex;
    if (!executionMutex.try_lock()) {
        sStatusMessage = "传送已在执行中...";
        fStatusDisplayTime = ImGui::GetTime();
        return;
    }
    
    std::lock_guard<std::mutex> lock(executionMutex, std::adopt_lock);
    bIsTeleporting = true;
    s_TeleportCounter.store(0);
    
    sStatusMessage = "开始传送玩家...";
    fStatusDisplayTime = ImGui::GetTime();
    
    auto startTime = std::chrono::steady_clock::now();
    
    try {
        SDK::FVector serverPos = GetServerPlayerPositionSafe();
        SDK::FRotator serverRot = GetServerPlayerRotationSafe();
        
        auto currentTime = std::chrono::steady_clock::now();
        auto elapsedMs = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count();
        if (elapsedMs > 5000) {
            sStatusMessage = "错误: 获取服务端位置超时";
            bIsTeleporting = false;
            return;
        }
        
        if (serverPos.X == 0.0f && serverPos.Y == 0.0f && serverPos.Z == 0.0f) {
            sStatusMessage = "错误: 无法获取服务端位置";
            bIsTeleporting = false;
            return;
        }
        
        sStatusMessage = "正在获取玩家列表...";
        fStatusDisplayTime = ImGui::GetTime();
        
        // 使用新的函数获取可传送的玩家列表
        std::vector<SimplePlayerInfo> playerList = GetSafePlayerList();
        
        currentTime = std::chrono::steady_clock::now();
        elapsedMs = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count();
        if (elapsedMs > 10000) {
            sStatusMessage = "错误: 获取玩家列表超时";
            bIsTeleporting = false;
            return;
        }
        
        if (playerList.empty()) {
            sStatusMessage = "没有找到可传送的玩家";
            bIsTeleporting = false;
            return;
        }
        
        int teleportedCount = 0;
        int totalPlayers = static_cast<int>(playerList.size());
        
        sStatusMessage = "开始传送 " + std::to_string(totalPlayers) + " 名玩家...";
        fStatusDisplayTime = ImGui::GetTime();
        
        for (int i = 0; i < totalPlayers; i++) {
            if (i % 10 == 0) {
                currentTime = std::chrono::steady_clock::now();
                elapsedMs = std::chrono::duration_cast<std::chrono::milliseconds>(currentTime - startTime).count();
                if (elapsedMs > 30000) {
                    sStatusMessage = "警告: 传送超时，已传送 " + std::to_string(teleportedCount) + "/" + std::to_string(totalPlayers);
                    break;
                }
            }
            
            SimplePlayerInfo& info = playerList[i];
            
            if (!IsValidPointer(info.PlayerCharacter)) continue;
            
            SDK::FVector finalPos = serverPos;
            finalPos.X += (teleportedCount % 5) * 300.0f;
            finalPos.Y += (teleportedCount / 5) * 300.0f;
            finalPos.Z += 150.0f;
            
            if (SafeTeleportPlayerDelayed(info.PlayerCharacter, finalPos, serverRot)) {
                teleportedCount++;
                
                if (teleportedCount % 10 == 0 || teleportedCount == totalPlayers) {
                    sStatusMessage = "已传送: " + std::to_string(teleportedCount) + 
                                   "/" + std::to_string(totalPlayers);
                    fStatusDisplayTime = ImGui::GetTime();
                    
                    std::this_thread::sleep_for(std::chrono::milliseconds(20));
                    std::this_thread::yield();
                }
            }
        }
        
        sStatusMessage = "传送完成: " + std::to_string(teleportedCount) + 
                        "/" + std::to_string(totalPlayers) + " 名玩家";
        
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    } catch (...) {
        sStatusMessage = "传送过程中发生严重错误";
    }
    
    fStatusDisplayTime = ImGui::GetTime();
    std::this_thread::sleep_for(std::chrono::milliseconds(500));
    bIsTeleporting = false;
}

enum MenuPage{
    PAGE_MULTI,
};

MenuPage currentPage = PAGE_MULTI;
char ipPortBuffer[128] = "";

void 初始化菜单(){
    fps();
    ImGui::SetNextWindowSize(ImVec2(610, 520), ImGuiCond_FirstUseEver);
   if (ImGui::Begin(("全自动服务端")), 0,ImGuiWindowFlags_NoSavedSettings){
ImGui::Columns(2);
ImGui::SetColumnOffset(1, 160);{
ImGui::PushStyleVar(ImGuiStyleVar_ItemSpacing, ImVec2(4, 6));
    ImGui::BeginGroup();
    if (ImGui::Button("开服区", ImVec2(145, 70))) currentPage = PAGE_MULTI;
ImGui::Text("%.1fFPS",ImGui::GetIO().Framerate);
ImGui::Spacing();
ImGui::Columns(2);
ImGui::NextColumn();
        }
        }
        ImGui::BeginChild("RightPane", ImVec2(0, 0), false, ImGuiWindowFlags_AlwaysVerticalScrollbar);
   
        if (currentPage == PAGE_MULTI)
        {
        ImGui::Text("请在后台将指令复制");
	
    	static char s[256] = {0};
        ImGui::PushItemWidth(-1);
        ImGui::InputText("##key", s, sizeof s);
        auto key = getClipboardTextt();
        strncpy(s, key.c_str(), sizeof s);
        ImGui::PopItemWidth();
		if (ImGui::Button("启用控制台", ImVec2(-1,60))){

        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),key,UGameplayStatics::GetPlayerController(GetWorld(),0));
        SDK::UGameBackendHUD*Instance=UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD*HUD=Instance->GetFirstGameFrontendHUD();
        HUD->PendingGameStatus="Fighting";
        }
        if(ImGui::Button("训练场",ImVec2(-1,40))){
        SDK::UGameBackendHUD*Instance=UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD*HUD=Instance->GetFirstGameFrontendHUD();
        HUD->PendingGameStatus="";
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),"open /Game/Maps/Shooting_Range/shooting_test/shooting_range4?listen?PlayerName=Server",UGameplayStatics::GetPlayerController(GetWorld(),0));
        启用攀爬();
        Mmapinit();
        训练场传送();
        防崩();
        刷物资();
        }
        if(ImGui::Button("海岛不上飞机",ImVec2(-1,40))){
        SDK::UGameBackendHUD*Instance=UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD*HUD=Instance->GetFirstGameFrontendHUD();
        HUD->PendingGameStatus="Fighting";
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),"open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/Corps/BP_Corps_BattleRoyle_Four.BP_Corps_BattleRoyle_Four_c?listen?PlayerName=Server",UGameplayStatics::GetPlayerController(GetWorld(),0));
        启用攀爬();
        Mmapinit();
        刷人机();
        防崩();
        服务端无敌();
        刷物资();
        开启伤害();
        }
        if(ImGui::Button("海岛全自动上飞机",ImVec2(-1,40))){
        SDK::UGameBackendHUD*Instance=UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD*HUD=Instance->GetFirstGameFrontendHUD();
        HUD->PendingGameStatus="Fighting";
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),"open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/Forest/BP_BattleRoyaleGameModeTeamPUBG_Double.BP_BattleRoyaleGameModeTeamPUBG_Double_C?listen?PlayerName=Server",UGameplayStatics::GetPlayerController(GetWorld(),0));
        启用攀爬();
        海岛自动化上飞机();
        海岛传送();
        服务端无敌();
        刷物资();
        防崩();
        服务端全图加载();
        }
        if(ImGui::Button("雨林全自动上飞机",ImVec2(-1,40))){
        SDK::UGameBackendHUD*Instance=UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD*HUD=Instance->GetFirstGameFrontendHUD();
        HUD->PendingGameStatus="Fighting";
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),"open /Game/Maps/PUBG_Savage/PUBG_Savage_Main?listen?PlayerName=Server",UGameplayStatics::GetPlayerController(GetWorld(),0));
        启用攀爬();
        雨林自动化上飞机();
        雨林传送();
        雨林刷物资();
        设置雾天();
        服务端无敌();
        防崩();
        服务端全图加载();
        }
        if(ImGui::Button("沙漠全自动上飞机",ImVec2(-1,40))){
        SDK::UGameBackendHUD*Instance=UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD*HUD=Instance->GetFirstGameFrontendHUD();
        HUD->PendingGameStatus="Fighting";
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),"open /Game/Maps/PUBG_Desert/PUBG_Desert?listen?PlayerName=Server",UGameplayStatics::GetPlayerController(GetWorld(),0));
        启用攀爬();
        沙漠自动化上飞机();
        服务端无敌();
        刷物资();
        防崩();
        服务端全图加载();
        沙漠传送();
        }
        if (ImGui::Button("沙漠战争模式", ImVec2(-1, 40))) {
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), "open /Game/Maps/PUBG_Desert/PUBG_Desert?Game=/Game/BluePrints/Core/War/BP_WarGameMode_2.BP_WarGameMode_2_C?listen?PlayerName=Server", UGameplayStatics::GetPlayerController(GetWorld(), 0));
        SDK::UGameBackendHUD* hud = UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD* hd = hud->GetFirstGameFrontendHUD();
        hd->PendingGameStatus = "Fighting";
        启用攀爬();
        Mmapinit();
        战争模式自动化上飞机();
        服务端无敌();
        防崩();
        服务端全图加载();
        刷降落伞();
        }
        if(ImGui::Button("年兽模式",ImVec2(-1,40))){
        SDK::UGameBackendHUD*Instance=UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD*HUD=Instance->GetFirstGameFrontendHUD();
        HUD->PendingGameStatus="Fighting";
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),"open /Game/Maps/PUBG_DihorOtok/DihorOtok_Main?game=/Game/BluePrints/Core/YearBeast/BP_BRGameModeTeam_YearBeast.BP_BRGameModeTeam_YearBeast_?Clisten?PlayerName=Server",UGameplayStatics::GetPlayerController(GetWorld(),0));
        Mmapinit();
        启用攀爬();
        服务端无敌();
        防崩();
        快速服务端全图加载();
        设置极光();
        年兽传送();
        }
        if (ImGui::Button("沙漠娱乐模式", ImVec2(-1, 40))){
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), "open /Game/Maps/PUBG_Desert/PUBG_Desert?game=/Game/BluePrints/Core/DestinyCircle/DestinyCircle_4.DestinyCircle_4_C?listen?PlayerName=Server", UGameplayStatics::GetPlayerController(GetWorld(),0));
        SDK::UGameBackendHUD* hud = UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD* hd = hud->GetFirstGameFrontendHUD();
        hd->PendingGameStatus = "Fighting";
        启用攀爬();
        Mmapinit();
        娱乐模式自动化上飞机();
        服务端无敌();
        防崩();
        刷物资();
        } 
        if(ImGui::Button("海岛春节模式",ImVec2(-1,40))){
        SDK::UGameBackendHUD*Instance=UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD*HUD=Instance->GetFirstGameFrontendHUD();
        HUD->PendingGameStatus="Fighting";
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),"open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/Forest/BP_BattleRoyaleGameMode_PUBG_Spring.BP_BattleRoyaleGameMode_PUBG_Spring_C?listen?PlayerName=Server",UGameplayStatics::GetPlayerController(GetWorld(),0));
        启用攀爬();
        海岛自动化上飞机();
        海岛传送();
        服务端无敌();
        刷物资();
        防崩();
        服务端全图加载();
        }
    }
    if(ImGui::Button("昼夜交替",ImVec2(-1,40))){
        SDK::UGameBackendHUD*Instance=UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD*HUD=Instance->GetFirstGameFrontendHUD();
        HUD->PendingGameStatus="Fighting";
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),"open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/Forest/BP_BattleRoyaleGameModeTeamPUBG_Double_Night.BP_BattleRoyaleGameModeTeamPUBG_Double_Night_C?listen?PlayerName=Server",UGameplayStatics::GetPlayerController(GetWorld(),0));
        启用攀爬();
        海岛自动化上飞机();
        海岛传送();
        服务端无敌();
        刷物资();
        防崩();
        服务端全图加载();
        }
        if(ImGui::Button("海岛资源战",ImVec2(-1,40))){
        SDK::UGameBackendHUD*Instance=UGameBackendHUD::GetInstance();
        SDK::UGameFrontendHUD*HUD=Instance->GetFirstGameFrontendHUD();
        HUD->PendingGameStatus="Fighting";
        UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(),"open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/TRW/BP_GameMode_TRW.BP_GameMode_TRW_c?listen?PlayerName=Server",UGameplayStatics::GetPlayerController(GetWorld(),0));
        启用攀爬();
        战争模式自动化上飞机();
        海岛传送();
        服务端无敌();
        刷物资();
        防崩();
        服务端全图加载();
        }
        //open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/SuperPower/BP_SuperPowerGameMode.BP_SuperPowerGameMode_clisten?PlayerName=Server 战争模式狙击
        //open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/SniperMode/DestinyCircleSniperRifle_Desert_2.DestinyCircleSniperRifle_Desert_2_clisten?PlayerName=Server 狙击模式
        //open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/DestinyCircle/DestinyCircleShotgun_Savage_4.DestinyCircleShotgun_Savage_4_clisten?PlayerName=Server 娱乐模式 霰弹枪
        //open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/DestinyCircle/DestinyCirclePistol_Savage_4.DestinyCirclePistol_Savage_4_clisten?PlayerName=Server  娱乐模式 手枪
        //open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/DestinyCircle/DestinyCircleAllweapon_Desert_1.DestinyCircleAllweapon_Desert_1_clisten?PlayerName=Server 娱乐模式 高资源
        //open /Game/Maps/PUBG_Forest/PUBG_Forest?game=/Game/BluePrints/Core/4X4DestinyCircle/4X4DestinyCircleAllweapon_1.4X4DestinyCircleAllweapon_1_clisten?PlayerName=Server 4x4
        //open /Game/Maps/PUBG_Desert/PUBG_Desertlisten?PlayerName=ServerGame=/Game/BluePrints/Core/NewGameMode/BP_BattleRoyaleGameMode_Desert_Test.BP_BattleRoyaleGameMode_Desert_Test_clisten?PlayerName=Server
        //open /Game/Maps/Shooting_Range/shooting_test/shooting_range4?game=/Game/BluePrints/Core/Forest/BP_BattleRoyaleGameMode_PUBG_xmas.BP_BattleRoyaleGameMode_PUBG_xmas_Clisten?PlayerName=Server
    if (ImGui::Button("临时修复", ImVec2(-1, 40))){
        启用攀爬();
        Mmapinit();
        防崩();
        快速服务端全图加载();
        服务端无敌();
        刷物资();
        战争模式自动化上飞机();
    }
    if (ImGui::Button("吸人", ImVec2(-1, 40))){
        SafeTeleportAllPlayers();
    }
    if (ImGui::Button("修复载具", ImVec2(-1, 40)))
    {
        修复载具();
    }
    if (ImGui::Button("启用伤害", ImVec2(-1, 40)))
    {
        开启伤害();
    }
    // 野餐
if (ImGui::Button("传送(野餐点)", ImVec2(-1, 40))) {
    long xAxis = getPointer(getPointer(getPointer(getPointer(UE4 + 0x4634ef0) + 0x20) + 0x139c) + 0x130) + 0x150;
    long yAxis = getPointer(getPointer(getPointer(getPointer(UE4 + 0x4634ef0) + 0x20) + 0x139c) + 0x130) + 0x154;
    long zAxis = getPointer(getPointer(getPointer(getPointer(UE4 + 0x4634ef0) + 0x20) + 0x139c) + 0x130) + 0x158;
    writefloat(xAxis, 73961.765625f);
    writefloat(yAxis, 137797.953125f);
    writefloat(zAxis, 6139.821777f);
}
if (ImGui::Button("传送G港", ImVec2(-1, 40))) {
long x=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x150;
        long y=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x154;
        long z=getPointer(getPointer(getPointer(getPointer(UE4+0x4634ef0)+0x20)+0x139c)+0x130)+0x158;
        writefloat(x,239859.375);
        writefloat(y,252176.375);
        writefloat(z,10541.017578);
        雨林刷物资();
        Mmapinit();
}
ImGui::EndChild();
ImGui::PopStyleVar();
ImGui::End();
}