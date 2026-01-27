#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum Gameplay.EBattleItemOperationType
enum class EBattleItemOperationType : uint8_t
{
	EBattleItemOperationType__Pickup = 0,
	EBattleItemOperationType__Drop = 1,
	EBattleItemOperationType__Use  = 2,
	EBattleItemOperationType__Disuse = 3,
	EBattleItemOperationType__Enable = 4,
	EBattleItemOperationType__Disable = 5,
	EBattleItemOperationType__EBattleItemOperationType_MAX = 6
};


// Enum Gameplay.EBattleItemOperationFailedReason
enum class EBattleItemOperationFailedReason : uint8_t
{
	EBattleItemOperationFailedReason__PickupFailed_Default = 0,
	EBattleItemOperationFailedReason__PickupFailed_CapacityExceeded = 1,
	EBattleItemOperationFailedReason__DropFailed_Default = 2,
	EBattleItemOperationFailedReason__UseFailed_Default = 3,
	EBattleItemOperationFailedReason__UseFailed_CapacityExceeded = 4,
	EBattleItemOperationFailedReason__DisuseFailed_Default = 5,
	EBattleItemOperationFailedReason__DisuseFailed_CapacityExceeded = 6,
	EBattleItemOperationFailedReason__EBattleItemOperationFailedReason_MAX = 7
};


// Enum Gameplay.ECharacterGender
enum class ECharacterGender : uint8_t
{
	ECharacterGender__Male         = 0,
	ECharacterGender__Female       = 1,
	ECharacterGender__ECharacterGender_MAX = 2
};


// Enum Gameplay.ECharacterPoseType
enum class ECharacterPoseType : uint8_t
{
	ECharPose_Stand                = 0,
	ECharPose_Crouch               = 1,
	ECharPose_Prone                = 2,
	ECharPose_Max                  = 3
};


// Enum Gameplay.ECharacterAnimType
enum class ECharacterAnimType : uint8_t
{
	ECharAnim_Move                 = 0,
	ECharAnim_Aim                  = 1,
	ECharAnim_ToStand              = 2,
	ECharAnim_ToCrouch             = 3,
	ECharAnim_ToProne              = 4,
	ECharAnim_PickM                = 5,
	ECharAnim_PickL                = 6,
	ECharAnim_Equip_Primary        = 7,
	ECharAnim_Equip_Secondary      = 8,
	ECharAnim_Equip_Pistol         = 9,
	ECharAnim_Equip_Melee          = 10,
	ECharAnim_Equip_Thrown         = 11,
	ECharAnim_Hurt                 = 12,
	ECharAnim_Reload               = 13,
	ECharAnim_TacticsReload        = 14,
	ECharAnim_Fire_Single          = 15,
	ECharAnim_Fire_Burst           = 16,
	ECharAnim_Fire_Auto            = 17,
	ECharAnim_Turn_L               = 18,
	ECharAnim_Turn_R               = 19,
	ECharAnim_PullingPlug          = 20,
	ECharAnim_PutDownWeapon        = 21,
	ECharAnim_WeaponIdle           = 22,
	ECharAnim_VehWeaponIdle        = 23,
	ECharAnim_VehWeaponAim         = 24,
	ECharAnim_VehWeaponReload      = 25,
	ECharAnim_Peek                 = 26,
	ECharAnim_PeekLeftAim          = 27,
	ECharAnim_PeekRightAim         = 28,
	ECharAnim_ForegripAnim         = 29,
	ECharAnim_Fire_Scope           = 30,
	ECharAnim_SprintToProne        = 31,
	ECharAnim_ShieldAdditive       = 32,
	ECharAnim_OpenDoor             = 33,
	ECharAnim_Max                  = 34
};


// Enum Gameplay.ECharAnimEventType
enum class ECharAnimEventType : uint8_t
{
	ECharAnimEvent_PoseChange      = 0,
	ECharAnimEvent_PickUp          = 1,
	ECharAnimEvent_Fire            = 2,
	ECharAnimEvent_Reload          = 3,
	ECharAnimEvent_Switch          = 4,
	ECharAnimEvent_Peek            = 5,
	ECharAnimEvent_PeekAim         = 6,
	ECharAnimEvent_Bolt            = 7,
	ECharAnimEvent_Max             = 8
};


// Enum Gameplay.ECharacterJumpType
enum class ECharacterJumpType : uint8_t
{
	ECharJump_InPlace              = 0,
	ECharJump_Forward              = 1,
	ECharJump_Max                  = 2
};


// Enum Gameplay.ETLog_BackpackEquipmentSlotType
enum class ETLog_BackpackEquipmentSlotType : uint8_t
{
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_None = 0,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_WeaponSlot1 = 1,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_WeaponSlot2 = 2,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_HelmetSlot = 3,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_ArmorSlot = 4,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_BagSlot = 5,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1GunPoint = 6,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Grip = 7,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Magazine = 8,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1Gunstock = 9,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon1OpticalSight = 10,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2GunPoint = 11,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Grip = 12,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Magazine = 13,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2Gunstock = 14,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_Weapon2OpticalSight = 15,
	ETLog_BackpackEquipmentSlotType__EBackpackEquipmentSlotType_MAX = 16
};


// Enum Gameplay.EDropdownSchemeTypes
enum class EDropdownSchemeTypes : uint8_t
{
	DST_DeathBox                   = 0,
	DST_MAX                        = 1
};


// Enum Gameplay.EVehicleSpotRandomType
enum class EVehicleSpotRandomType : uint8_t
{
	Vehicle_TotalCount             = 0,
	Vehicle_Probability            = 1,
	Vehicle_MAX                    = 2
};


// Enum Gameplay.ESpotType
enum class ESpotType : uint8_t
{
	ESpotType_A                    = 0,
	ESpotType_B                    = 1,
	ESpotType_C                    = 2,
	ESpotType_D                    = 3,
	ESpotType_E                    = 4,
	ESpotType_F                    = 5,
	ESpotType_G                    = 6,
	ESpotType_H                    = 7,
	ESpotType_I                    = 8,
	ESpotType_J                    = 9,
	ESpotType_K                    = 10,
	ESpotType_L                    = 11,
	ESpotType_M                    = 12,
	ESpotType_N                    = 13,
	ESpotType_O                    = 14,
	ESpotType_P                    = 15,
	ESpotType_Q                    = 16,
	ESpotType_R                    = 17,
	ESpotType_S                    = 18,
	ESpotType_T                    = 19,
	ESpotType_U                    = 20,
	ESpotType_V                    = 21,
	ESpotType_W                    = 22,
	ESpotType_X                    = 23,
	ESpotType_Y                    = 24,
	ESpotType_Z                    = 25,
	ESpotType_MAX                  = 26
};


// Enum Gameplay.ESpotGroupType
enum class ESpotGroupType : uint8_t
{
	ESpotGroup_A                   = 0,
	ESpotGroup_B                   = 1,
	ESpotGroup_C                   = 2,
	ESpotGroup_D                   = 3,
	ESpotGroup_E                   = 4,
	ESpotGroup_F                   = 5,
	ESpotGroup_G                   = 6,
	ESpotGroup_H                   = 7,
	ESpotGroup_I                   = 8,
	ESpotGroup_J                   = 9,
	ESpotGroup_K                   = 10,
	ESpotGroup_L                   = 11,
	ESpotGroup_M                   = 12,
	ESpotGroup_N                   = 13,
	ESpotGroup_O                   = 14,
	ESpotGroup_P                   = 15,
	ESpotGroup_Q                   = 16,
	ESpotGroup_R                   = 17,
	ESpotGroup_S                   = 18,
	ESpotGroup_T                   = 19,
	ESpotGroup_U                   = 20,
	ESpotGroup_V                   = 21,
	ESpotGroup_W                   = 22,
	ESpotGroup_X                   = 23,
	ESpotGroup_Y                   = 24,
	ESpotGroup_Z                   = 25,
	ESpotGroup_MAX                 = 26
};


// Enum Gameplay.EVehicleSeatType
enum class EVehicleSeatType : uint8_t
{
	EVehSeatType_Driver            = 0,
	EVehSeatType_Left              = 1,
	EVehSeatType_Right             = 2,
	EVehSeatType_Max               = 3
};


// Enum Gameplay.EVehicleType
enum class EVehicleType : uint8_t
{
	EVehType_Buggy                 = 0,
	EVehType_UAZ                   = 1,
	EVehType_Motorcycle            = 2,
	EVehType_Dacia                 = 3,
	EVehType_PG                    = 4,
	EVehType_Max                   = 5
};


// Enum Gameplay.ECharacterJumpPhase
enum class ECharacterJumpPhase : uint8_t
{
	EJumpPhase_PreJump             = 0,
	EJumpPhase_FallLoop0           = 1,
	EJumpPhase_FallLoop1           = 2,
	EJumpPhase_Land0               = 3,
	EJumpPhase_Land1               = 4,
	EJumpPhase_Max                 = 5
};


// Enum Gameplay.ECharaAnimListType
enum class ECharaAnimListType : uint8_t
{
	ECharaAnimListType_TPP         = 0,
	ECharaAnimListType_FPP         = 1,
	ECharaAnimListType_Jump        = 2,
	ECharaAnimListType_JumpFPP     = 3,
	ECharaAnimListType_Shield      = 4,
	ECharaAnimListType_Max         = 5
};


// Enum Gameplay.ECharacterShieldAnimType
enum class ECharacterShieldAnimType : uint8_t
{
	ECharShieldAnim_Move           = 0,
	ECharShieldAnim_Aim            = 1,
	ECharShieldAnim_ToStand        = 2,
	ECharShieldAnim_ToCrouch       = 3,
	ECharShieldAnim_PickM          = 4,
	ECharShieldAnim_PickL          = 5,
	ECharShieldAnim_Turn_L         = 6,
	ECharShieldAnim_Turn_R         = 7,
	ECharShieldAnim_InPlace_PreJump = 8,
	ECharShieldAnim_InPlace_FallLoop0 = 9,
	ECharShieldAnim_InPlace_FallLoop1 = 10,
	ECharShieldAnim_InPlace_Land0  = 11,
	ECharShieldAnim_InPlace_Land1  = 12,
	ECharShieldAnim_Forward_PreJump = 13,
	ECharShieldAnim_Forward_FallLoop0 = 14,
	ECharShieldAnim_Forward_FallLoop1 = 15,
	ECharShieldAnim_Forward_Land0  = 16,
	ECharShieldAnim_Forward_Land1  = 17,
	ECharShieldAnim_Max            = 18
};


// Enum Gameplay.ECharacterVehicleAnimType
enum class ECharacterVehicleAnimType : uint8_t
{
	ECharVehAnim_Idle              = 0,
	ECharVehAnim_IdleWithWeapon    = 1,
	ECharVehAnim_LeanOut           = 2,
	ECharVehAnim_LeanIn            = 3,
	ECharVehAnim_Aim               = 4,
	ECharVehAnim_Scope             = 5,
	ECharVehAnim_AimFPPCommon      = 6,
	ECharVehAnim_MotorbikeIdle     = 7,
	ECharVehAnim_MotorbikeVacate   = 8,
	ECharVehAnim_Max               = 9
};


// Enum Gameplay.EWeatherType
enum class EWeatherType : uint8_t
{
	EWeatherType_None              = 0,
	EWeatherType_Sunday            = 1,
	EWeatherType_Rainy             = 2,
	EWeatherType_Foggy             = 3,
	EWeatherType_Dark              = 4,
	EWeatherType_Night             = 5,
	EWeatherType_DayToNight        = 6,
	EWeatherType_Max               = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Gameplay.DynamicBlockTransform
// 0x0018
struct FDynamicBlockTransform
{
	float                                              locX;                                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              locY;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LocZ;                                                     // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotX;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotY;                                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RotZ;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.IDIPDynamicBlock
// 0x0018
struct FIDIPDynamicBlock
{
	TArray<struct FDynamicBlockTransform>              Transforms;                                               // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     DynamicBlockClassPath;                                    // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.DynamicTriggerTransform
// 0x0018
struct FDynamicTriggerTransform
{
	struct FVector                                     Loc;                                                      // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct Gameplay.DynamicTriggerConfig
// 0x0018
struct FDynamicTriggerConfig
{
	TArray<struct FDynamicTriggerTransform>            Transforms;                                               // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     TriggerClassPath;                                         // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.DropdownSchemeData
// 0x0024
struct FDropdownSchemeData
{
	int                                                SchemeId;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ItemID;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemName;                                                 // 0x0008(0x000C) (ZeroConstructor)
	int                                                MaxNum;                                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MinNum;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Probability;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DropType;                                                 // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.AirDropBoxInOb
// 0x0014
struct FAirDropBoxInOb
{
	int                                                boxId;                                                    // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               Flying;                                                   // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsEmpty;                                                  // 0x0005(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FVector                                     pos;                                                      // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct Gameplay.AdvertisementActorConfig
// 0x003C
struct FAdvertisementActorConfig
{
	struct FString                                     ResPath;                                                  // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     HttpImgPath;                                              // 0x000C(0x000C) (ZeroConstructor)
	struct FVector                                     Loc;                                                      // 0x0018(0x000C) (IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x0024(0x000C) (IsPlainOldData)
	struct FVector                                     Scale;                                                    // 0x0030(0x000C) (IsPlainOldData)
};

// ScriptStruct Gameplay.CakeInfo
// 0x0018
struct FCakeInfo
{
	struct FString                                     CakeActorPath;                                            // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CakeButtonImage;                                          // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Gameplay.CharacterOverrideAttrData
// 0x0010
struct FCharacterOverrideAttrData
{
	struct FString                                     AttrName;                                                 // 0x0000(0x000C) (ZeroConstructor)
	float                                              AttrValue;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.DSCorpsInfo
// 0x0020
struct FDSCorpsInfo
{
	uint64_t                                           CorpsID;                                                  // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     CorpsName;                                                // 0x0008(0x000C) (ZeroConstructor)
	int                                                Icon;                                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SegmentLevel;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModeCorpsDetailData
// 0x0028
struct FGameModeCorpsDetailData
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor)
	int                                                CorpsHeadIcon;                                            // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KilledNum;                                                // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SegmentLevel;                                             // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RealtimeRank;                                             // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DefeatPlayerNum;                                          // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SurvivalTime;                                             // 0x0024(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModeTeamBattleResultData
// 0x0060
struct FGameModeTeamBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x000C) (ZeroConstructor)
	int                                                RemainTeamCount;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RemainAlivePlayerCount;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<struct FString, struct FString>               PlayersLogoutTime;                                        // 0x0014(0x0050) (ZeroConstructor)
	TArray<struct FGameModeCorpsDetailData>            RealTimeCorpsRank;                                        // 0x0050(0x000C) (ZeroConstructor)
	bool                                               bIsGameTerminator;                                        // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.BattleData
// 0x0008
struct FBattleData
{
	int                                                WatcherNum;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CircleNum;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TLog_PickUpItemFlow
// 0x0028
struct FTLog_PickUpItemFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0008(0x000C) (Edit, IsPlainOldData)
	int                                                SourceType;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalParam;                                          // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FString                                     TimeStr;                                                  // 0x001C(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct Gameplay.UseItemFlow
// 0x0008
struct FUseItemFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                UseCount;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TLog_PropEquipUnequipFlow
// 0x0014
struct FTLog_PropEquipUnequipFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	ETLog_BackpackEquipmentSlotType                    slotType;                                                 // 0x0004(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEquip;                                                   // 0x0005(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	struct FString                                     TimeStr;                                                  // 0x0008(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleDriveDisData
// 0x0010
struct FVehicleDriveDisData
{
	int                                                VehicleType;                                              // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DriveDistance;                                            // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DriveTime;                                                // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              VehicleJumpDistanceMax;                                   // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.FlareGunReport
// 0x0010
struct FFlareGunReport
{
	int                                                PickUpNum;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FireNum;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CallSuperAirDropSuccessNum;                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CallVehicleDropSuccessNum;                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.EquipmentData
// 0x0050
struct FEquipmentData
{
	int                                                HelmetID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorID;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BackPackID;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MainWeapon1ID;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MainWeapon1AttachmentsID;                                 // 0x0010(0x000C) (ZeroConstructor)
	int                                                MainWeapon2ID;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MainWeapon2AttachmentsID;                                 // 0x0020(0x000C) (ZeroConstructor)
	int                                                ViceWeaponID;                                             // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ViceWeaponAttachmentsID;                                  // 0x0030(0x000C) (ZeroConstructor)
	int                                                CloseWeaponID;                                            // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ThrowWeaponsID;                                           // 0x0040(0x000C) (ZeroConstructor)
	int8_t                                             IsLuckyClothing;                                          // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModePlayerTaskData
// 0x0014
struct FGameModePlayerTaskData
{
	int                                                task_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                process;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ext_info;                                                 // 0x0008(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.ReportCollection
// 0x0008
struct FReportCollection
{
	int                                                item_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.WeaponDamageRecord
// 0x0008
struct FWeaponDamageRecord
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.SpecialPickItemState
// 0x0008
struct FSpecialPickItemState
{
	int                                                item_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsCollectionCompleted;                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModeTeammateBattleResultData
// 0x00B0
struct FGameModeTeammateBattleResultData
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           UID;                                                      // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                Kill;                                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     State;                                                    // 0x001C(0x000C) (ZeroConstructor)
	float                                              travelDistance;                                           // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              marchDistance;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DriveDistance;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AssistNum;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum;                                              // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              surviveTime;                                              // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes;                                              // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                startToRescueTimes;                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DestroyVehicles;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             KillFlow;                                                 // 0x0054(0x000C) (ZeroConstructor)
	float                                              OutsideBlueCircleTime;                                    // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleDriveDisData>                VehicleDriveDisDataArray;                                 // 0x0064(0x000C) (ZeroConstructor)
	int                                                FirstOpenedAirDropBoxNum;                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HitEnemyHeadAmount;                                       // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GetPropsNumFromTeammates;                                 // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SendPropsNumToTeammates;                                  // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalBeenDamageAmount;                                    // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillerWeaponId;                                           // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              KillerDistance;                                           // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OccupyPoint;                                              // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGameTerminator;                                        // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	int                                                GamePlayingTime;                                          // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownAreaID;                                          // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownLocTypeID;                                       // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TouchDownObjectName;                                      // 0x00A0(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x00AC(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModePlayerBattleResultData
// 0x01A0
struct FGameModePlayerBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x000C) (ZeroConstructor)
	int                                                RemainingPlayerCount;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalPlayerCount;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RemainingTeamCount;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalTeamCount;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSolo;                                                   // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSafeExit;                                               // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
	uint64_t                                           Killer;                                                   // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     KillerName;                                               // 0x0028(0x000C) (ZeroConstructor)
	int                                                ShootWeaponShotNum;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum;                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HealTimes;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             KillFlow;                                                 // 0x0040(0x000C) (ZeroConstructor)
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  // 0x004C(0x000C) (ZeroConstructor)
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              // 0x0058(0x000C) (ZeroConstructor)
	int                                                destroyVehicleNum;                                        // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                is_escape;                                                // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FGameModeTeammateBattleResultData>   TeammateList;                                             // 0x006C(0x000C) (ZeroConstructor)
	struct FVector                                     LandLocation;                                             // 0x0078(0x000C) (IsPlainOldData)
	struct FVector                                     DeadLocation;                                             // 0x0084(0x000C) (IsPlainOldData)
	struct FString                                     DeadDamangeType;                                          // 0x0090(0x000C) (ZeroConstructor)
	struct FString                                     DeadTimeStr;                                              // 0x009C(0x000C) (ZeroConstructor)
	struct FString                                     logoutime;                                                // 0x00A8(0x000C) (ZeroConstructor)
	float                                              Pronetime;                                                // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BeInWaterTime;                                            // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SwimmingDistance;                                         // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeDownTimes;                                              // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DeadNum;                                                  // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeSavedTimes;                                             // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PickUpAirDrops;                                           // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FEquipmentData                              EquipmentData;                                            // 0x00D0(0x0050)
	int                                                Rank;                                                     // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalScore;                                               // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                OccupyPoint;                                              // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FollowState;                                              // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InviteTimes;                                              // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGameTerminator;                                        // 0x0134(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	int                                                GamePlayingTime;                                          // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownAreaID;                                          // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownLocTypeID;                                       // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TouchDownObjectName;                                      // 0x0144(0x000C) (ZeroConstructor)
	TArray<struct FGameModePlayerTaskData>             CompletedTaskList;                                        // 0x0150(0x000C) (ZeroConstructor)
	TArray<struct FReportCollection>                   SpecialCollectionList;                                    // 0x015C(0x000C) (ZeroConstructor)
	TArray<struct FWeaponDamageRecord>                 WeaponDamageRecordList;                                   // 0x0168(0x000C) (ZeroConstructor)
	TArray<int>                                        SecretAreaIDList;                                         // 0x0174(0x000C) (ZeroConstructor)
	int                                                KillNumInVehicle;                                         // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalSprintDistance;                                      // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalBeenDamageAmount;                                    // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestroyVehicleWheelNum;                                   // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BreakDoorNum;                                             // 0x0190(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FUseItemFlow>                        UseSpecificBulletFlow;                                    // 0x0194(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.WeatherInfo
// 0x0014
struct FWeatherInfo
{
	struct FString                                     WeatherLevelName;                                         // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor)
	int                                                WeatherID;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              WeatherTime;                                              // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerNetStats
// 0x0030
struct FPlayerNetStats
{
	struct FString                                     ClientAddr;                                               // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     LocalAddr;                                                // 0x000C(0x000C) (ZeroConstructor)
	float                                              AvgPing;                                                  // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxPing;                                                  // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HighPingPercent;                                          // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0024(0x000C) MISSED OFFSET
};

// ScriptStruct Gameplay.PlayerOBInfo
// 0x0048
struct FPlayerOBInfo
{
	bool                                               IsEnableOB;                                               // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	uint64_t                                           UID;                                                      // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SegmentLevel;                                             // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BattleMode;                                               // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               ValidBattleInfo;                                          // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                GameCount;                                                // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WinCount;                                                 // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TopTenCount;                                              // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillNum;                                                  // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KDNum;                                                    // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShowWeaponID;                                             // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Title_Type;                                               // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Title_RankID;                                             // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Title_RankType;                                           // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Title_RankNo;                                             // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerItem
// 0x0008
struct FGameModePlayerItem
{
	int                                                ItemTableID;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModePlayerExpressionItem
// 0x0000 (0x0008 - 0x0008)
struct FGameModePlayerExpressionItem : public FGameModePlayerItem
{

};

// ScriptStruct Gameplay.SpecialPickItem
// 0x000C
struct FSpecialPickItem
{
	int                                                item_id;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                cur_count;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                total_count;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerOBBattleInfo
// 0x0028
struct FPlayerOBBattleInfo
{
	uint32_t                                           UID;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BattleMode;                                               // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ValidBattleInfo;                                          // 0x0008(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                GameCount;                                                // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WinCount;                                                 // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TopTenCount;                                              // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                KillNum;                                                  // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     KDNum;                                                    // 0x001C(0x000C) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerBanChat
// 0x0010
struct FGameModePlayerBanChat
{
	int                                                end_time;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // 0x0004(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameModePlayerParams
// 0x0158
struct FGameModePlayerParams
{
	uint64_t                                           UID;                                                      // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       PlayerType;                                               // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0010(0x000C) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerBornPointID;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bTeamLeader;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGM;                                                    // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGMWatcher;                                             // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      gender;                                                   // 0x002B(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAIPlayer;                                                // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 ItemList;                                                 // 0x0030(0x000C) (ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 fireworksInfo;                                            // 0x003C(0x000C) (ZeroConstructor)
	TArray<struct FGameModePlayerExpressionItem>       ExpressionItemList;                                       // 0x0048(0x000C) (ZeroConstructor)
	TArray<struct FGameModePlayerTaskData>             TaskDataList;                                             // 0x0054(0x000C) (ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 WeaponAvatarList;                                         // 0x0060(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	struct FPlayerOBInfo                               PlayerOBInfoList;                                         // 0x0070(0x0048) (IsPlainOldData)
	struct FGameModePlayerBanChat                      banChat;                                                  // 0x00B8(0x0010)
	struct FGameModePlayerBanChat                      banBlack;                                                 // 0x00C8(0x0010)
	TArray<struct FSpecialPickItem>                    SpecialPickItem;                                          // 0x00D8(0x000C) (ZeroConstructor)
	TArray<int>                                        audioChat;                                                // 0x00E4(0x000C) (ZeroConstructor)
	struct FName                                       CurrentPlayerState;                                       // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       CurrentCharacterState;                                    // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	float                                              SyncedTimestamp;                                          // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestinyValue;                                             // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WarmScore;                                                // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RatingScore;                                              // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsObserver;                                              // 0x0110(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
	uint64_t                                           WatchPlayerKey;                                           // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlatformGender;                                           // 0x0120(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFireworksActOpen;                                      // 0x0121(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x0122(0x0002) MISSED OFFSET
	int                                                MatchLabel;                                               // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AnchorPlatColorID;                                        // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AnchorPlatResID;                                          // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               OnlyTeammateSeeAvatar;                                    // 0x0130(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x0131(0x0007) MISSED OFFSET
	int64_t                                            LastGameResultTime;                                       // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            CorpsID;                                                  // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            CampID;                                                   // 0x0148(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bUsedSimulation;                                          // 0x0150(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x0151(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.UAEWindowRepData
// 0x0050
struct FUAEWindowRepData
{
	struct FTransform                                  Transform;                                                // 0x0000(0x0030) (IsPlainOldData)
	struct FString                                     PathToLoad;                                               // 0x0030(0x000C) (ZeroConstructor)
	int                                                ID;                                                       // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bBroken;                                                  // 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0041(0x0003) MISSED OFFSET
	class APawn*                                       LastInstigatorPawn;                                       // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0048(0x0008) MISSED OFFSET
};

// ScriptStruct Gameplay.SpecialPickInfo
// 0x000C
struct FSpecialPickInfo
{
	int                                                item_id;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                cur_count;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                total_count;                                              // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.BattleItemNet
// 0x0038
struct FBattleItemNet
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018)
	int                                                Count;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bEquipping;                                               // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x0020(0x000C) (ZeroConstructor)
	TArray<struct FItemAssociation>                    Associations;                                             // 0x002C(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.NetArrayUnit
// 0x0040
struct FNetArrayUnit
{
	struct FBattleItemNet                              Unit;                                                     // 0x0000(0x0038)
	bool                                               markDelete;                                               // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0039(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.IncNetArray
// 0x0018
struct FIncNetArray
{
	TArray<struct FNetArrayUnit>                       incArray;                                                 // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0xC];                                       // 0x000C(0x000C) MISSED OFFSET
};

// ScriptStruct Gameplay.GroupSpotComponentArray
// 0x0010
struct FGroupSpotComponentArray
{
	TEnumAsByte<ESpotGroupType>                        GroupType;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<class UGroupSpotSceneComponent*>            AllGroupComponents;                                       // 0x0004(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.WorldTileSpotArray
// 0x0010
struct FWorldTileSpotArray
{
	int                                                WorldCompositionID;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class USpotSceneComponent*>                 AllSpotComponents;                                        // 0x0004(0x000C) (ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemSpawnData
// 0x0050
struct FItemSpawnData
{
	struct FName                                       RowName;                                                  // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                keyID;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemValue;                                                // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemCategory;                                             // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemWeight;                                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemPath;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemStackCount;                                           // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTogetherPath;                                         // 0x0038(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemTogetherStackCount;                                   // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMin;                                     // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMax;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GroupTypeSceneComponents
// 0x0010
struct FGroupTypeSceneComponents
{
	int                                                GroupType;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class USceneComponent*>                     SceneComponents;                                          // 0x0004(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemSpawnClass
// 0x0008
struct FItemSpawnClass
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ItemGroupStatisticsData
// 0x0014 (0x0018 - 0x0004)
struct FItemGroupStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                AllGroupSpotCount;                                        // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ItemSpotStatisticsData
// 0x000C (0x0010 - 0x0004)
struct FItemSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	int                                                AllSpotCount;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.BuildingStatisticsData
// 0x0060 (0x0064 - 0x0004)
struct FBuildingStatisticsData : public FTableRowBase
{
	struct FString                                     BuildingName;                                             // 0x0004(0x000C) (ZeroConstructor)
	float                                              BuildingLocationX;                                        // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              BuildingLocationY;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllGroupSpotCount;                                        // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<ESpotType>, struct FItemSpotStatisticsData> SpotStatisticsData;                                       // 0x0028(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.ItemClassStatisticsData
// 0x0028 (0x002C - 0x0004)
struct FItemClassStatisticsData : public FTableRowBase
{
	struct FString                                     ItemPath;                                                 // 0x0004(0x000C) (ZeroConstructor)
	bool                                               bValidPath;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                ItemCount;                                                // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTogetherPath;                                         // 0x0018(0x000C) (ZeroConstructor)
	int                                                ItemTogetherCount;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bValidTogetherPath;                                       // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.ItemGenerateStatisticsData
// 0x00C4
struct FItemGenerateStatisticsData
{
	int                                                AllGroupSpotCount;                                        // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidGroupSpotCount;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllSpotCount;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AllValidSpotCount;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TMap<TEnumAsByte<ESpotGroupType>, struct FItemGroupStatisticsData> GroupStatisticsData;                                      // 0x0010(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FBuildingStatisticsData> BuildingStatisticsData;                                   // 0x004C(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FItemClassStatisticsData> ItemStatisticsData;                                       // 0x0088(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.SpotWeight
// 0x0010
struct FSpotWeight
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Weight;                                                   // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.SpotTypeProperty
// 0x0030
struct FSpotTypeProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SpotPercentMin;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpotPercentMax;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SpotPercentDot;                                           // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerSpotMin;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPerSpotMax;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpotWeight>                         WeightsPerValue;                                          // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.SpotGroupProperty
// 0x0020
struct FSpotGroupProperty
{
	TEnumAsByte<ESpotGroupType>                        SpotGroupType;                                            // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SpotGroupPercent;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FSpotTypeProperty>                   SpotTypeProperties;                                       // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bRepeatGenerateItem;                                      // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              RepeatGenerateItemCDMin;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RepeatGenerateItemCDMax;                                  // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ItemGenerateSpawnData
// 0x0048
struct FItemGenerateSpawnData
{
	int                                                keyID;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemValue;                                                // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     ItemCategory;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemWeight;                                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemPath;                                                 // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemStackCount;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTogetherPath;                                         // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ItemTogetherStackCount;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMin;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemTogetherCountMax;                                     // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ItemGenerateSpawnDataArray
// 0x0018
struct FItemGenerateSpawnDataArray
{
	struct FString                                     ValueCatetory;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemGenerateSpawnData>              AllGenerateSpawnDatas;                                    // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemGenerateSpawnClass
// 0x0024
struct FItemGenerateSpawnClass
{
	class UClass*                                      ItemClass;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemValue;                                                // 0x0008(0x000C) (ZeroConstructor)
	struct FString                                     ItemCategory;                                             // 0x0014(0x000C) (ZeroConstructor)
	bool                                               bRepeatGenerateItem;                                      // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.ChararacterPoseAnimData
// 0x0038
struct FChararacterPoseAnimData
{
	TEnumAsByte<ECharacterPoseType>                    PoseType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     PoseName;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.ChararacterPoseAnimData.PoseAnimSoftPtr
};

// ScriptStruct Gameplay.CharacterMovementAnimData
// 0x001C
struct FCharacterMovementAnimData
{
	TEnumAsByte<ECharacterAnimType>                    AnimType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     AnimTypeName;                                             // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FChararacterPoseAnimData>            PoseAnimList;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Gameplay.CharacterShieldAnimData
// 0x001C
struct FCharacterShieldAnimData
{
	TEnumAsByte<ECharacterShieldAnimType>              AnimType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     AnimTypeName;                                             // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FChararacterPoseAnimData>            PoseAnimList;                                             // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Gameplay.ChararacterJumpPhaseData
// 0x0038
struct FChararacterJumpPhaseData
{
	TEnumAsByte<ECharacterJumpPhase>                   JumpPhase;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     JumpPhaseName;                                            // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	unsigned char                                      UnknownData01[0x28];                                      // 0x0010(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.ChararacterJumpPhaseData.PhaseAnimSoftPtr
};

// ScriptStruct Gameplay.CharacterJumpAnimData
// 0x001C
struct FCharacterJumpAnimData
{
	TEnumAsByte<ECharacterJumpType>                    JumpType;                                                 // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     JumpTypeName;                                             // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	TArray<struct FChararacterJumpPhaseData>           JumpPhaseList;                                            // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct Gameplay.AsyncLoadCharAnimParams
// 0x0050
struct FAsyncLoadCharAnimParams
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct Gameplay.PlayerAnimData
// 0x0008
struct FPlayerAnimData
{
	class UAnimationAsset*                             Animation;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Rate;                                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehCharAnimData
// 0x0038
struct FVehCharAnimData
{
	TEnumAsByte<ECharacterVehicleAnimType>             VehAnimType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty Gameplay.VehCharAnimData.VehAnimSoftPtr
	unsigned char                                      UnknownData02[0x8];                                       // 0x0030(0x0008) MISSED OFFSET
};

// ScriptStruct Gameplay.VehicleSpotProperty
// 0x0030
struct FVehicleSpotProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                FuelPercentMin;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FuelPercentMax;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveByStartVolume;                                     // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVehicleSpotRandomType>                RandomType;                                               // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	float                                              TotalCountMultiplierWithPalyerCount;                      // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMin;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMax;                                       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProbabilityPersent;                                       // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ProbabilityPersentWithPalyerCount;                        // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TreasureBoxSpotProperty
// 0x0018
struct FTreasureBoxSpotProperty
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<struct FSpotWeight>                         WeightsPerCategory;                                       // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TotalCountRangeMin;                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalCountRangeMax;                                       // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleSpotComponentArray
// 0x0010
struct FVehicleSpotComponentArray
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<class UVehicleSpotSceneComponent*>          AllSpots;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleGenerateSpawnData
// 0x0024
struct FVehicleGenerateSpawnData
{
	int                                                keyID;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     VehicleType;                                              // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     VehiclePath;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                VehicleWeight;                                            // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               SnapFloor;                                                // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.VehicleGenerateSpawnDataArray
// 0x0018
struct FVehicleGenerateSpawnDataArray
{
	struct FString                                     Catetory;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVehicleGenerateSpawnData>           AllGenerateSpawnDatas;                                    // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleSpotStatisticsData
// 0x001C (0x0020 - 0x0004)
struct FVehicleSpotStatisticsData : public FTableRowBase
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     VehiclePath;                                              // 0x0008(0x000C) (ZeroConstructor)
	float                                              VehicleLocationX;                                         // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleLocationY;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              VehicleLocationZ;                                         // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleClassStatisticsData
// 0x0014 (0x0018 - 0x0004)
struct FVehicleClassStatisticsData : public FTableRowBase
{
	struct FString                                     VehiclePath;                                              // 0x0004(0x000C) (ZeroConstructor)
	bool                                               bValidPath;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                AllVehicleCount;                                          // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.VehicleGenerateStatisticsData
// 0x0048
struct FVehicleGenerateStatisticsData
{
	TArray<struct FVehicleSpotStatisticsData>          VehicleSpotStatisticsData;                                // 0x0000(0x000C) (ZeroConstructor)
	TMap<struct FString, struct FVehicleClassStatisticsData> VehicleClassStatisticsData;                               // 0x000C(0x0050) (ZeroConstructor)
};

// ScriptStruct Gameplay.VehicleGenerateRandomInfo
// 0x0020
struct FVehicleGenerateRandomInfo
{
	struct FString                                     VehicleType;                                              // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     VehiclePath;                                              // 0x000C(0x000C) (ZeroConstructor)
	float                                              FuelPercent;                                              // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               SnapFloor;                                                // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bActiveByStartVolume;                                     // 0x001D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001E(0x0002) MISSED OFFSET
};

// ScriptStruct Gameplay.PlayerAnimList
// 0x0080
struct FPlayerAnimList
{
	struct FPlayerAnimData                             MovementAnim;                                             // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             AimAnim;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             ReloadAnim;                                               // 0x0010(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             EquipWeaponAnim;                                          // 0x0018(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             ChangePoseAnim;                                           // 0x0020(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             PickUpAnim;                                               // 0x0028(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             FireAnim;                                                 // 0x0030(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             HurtAnim;                                                 // 0x0038(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             TurnAnim;                                                 // 0x0040(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             PullingPlugAnim;                                          // 0x0048(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             PutDownWeaponAnim;                                        // 0x0050(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             WeaponIdle;                                               // 0x0058(0x0008) (Edit, BlueprintVisible)
	struct FPlayerAnimData                             ForegripAnim;                                             // 0x0060(0x0008) (Edit, BlueprintVisible)
	TArray<struct FPlayerAnimData>                     JumpAnimList;                                             // 0x0068(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FPlayerAnimData>                     ExtraAnimList;                                            // 0x0074(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.PlayerVehAnimList
// 0x0024
struct FPlayerVehAnimList
{
	class UAnimationAsset*                             IdleAnim;                                                 // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             IdleMotorbikeAnim;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             VacateMotorbikeAnim;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             LeanOutAnim;                                              // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             LeanInAnim;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             AimAnim;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             WeaponIdleAddition;                                       // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             WeaponAimAddition;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimationAsset*                             WeaponReloadAddition;                                     // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AnchorPlatData
// 0x0008
struct FAnchorPlatData
{
	int                                                AnchorPlatResID;                                          // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AnchorPlatColorID;                                        // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerBaseInfoInOB
// 0x0020
struct FPlayerBaseInfoInOB
{
	int                                                PosX;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PosY;                                                     // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                PosZ;                                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Health;                                                   // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HealthMax;                                                // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LiveState;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                KillNum;                                                  // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerStaticInfoInOB
// 0x002C
struct FPlayerStaticInfoInOB
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     PlayerOpenID;                                             // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x0018(0x000C) (ZeroConstructor)
	int                                                TeamID;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerInfoInOB
// 0x004C (0x006C - 0x0020)
struct FPlayerInfoInOB : public FPlayerBaseInfoInOB
{
	struct FString                                     PlayerName;                                               // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PlayerOpenID;                                             // 0x002C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x0038(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               ShowPicUrl;                                               // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        Character;                                                // 0x004C(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsFiring;                                                 // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x17];                                      // 0x0055(0x0017) MISSED OFFSET
};

// ScriptStruct Gameplay.WatchGamePlayerInfoButtonClick
// 0x0010
struct FWatchGamePlayerInfoButtonClick
{
	uint64_t                                           WatchPlayer_UID;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           WatchedPlayer_UID;                                        // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.TeamInfoInOB
// 0x001C
struct FTeamInfoInOB
{
	int                                                TeamID;                                                   // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsShowLogo;                                               // 0x0004(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	struct FString                                     LogoPicUrl;                                               // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                KillNum;                                                  // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                LiveMemberNum;                                            // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.FriendObserver
// 0x0010
struct FFriendObserver
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      gender;                                                   // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModeParams
// 0x0008
struct FGameModeParams
{
	struct FName                                       CurrentGameModeState;                                     // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameModeStateChangedParams
// 0x0008
struct FGameModeStateChangedParams
{
	struct FName                                       GameModeState;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerID
// 0x0010
struct FPlayerID
{
	struct FName                                       PlayerType;                                               // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.CharacterStateChangedParams
// 0x0018
struct FCharacterStateChangedParams
{
	struct FPlayerID                                   PlayerID;                                                 // 0x0000(0x0010)
	struct FName                                       CharacterState;                                           // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerStateChangedParams
// 0x0018
struct FPlayerStateChangedParams
{
	struct FPlayerID                                   PlayerID;                                                 // 0x0000(0x0010)
	struct FName                                       PlayerState;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AirDropBoxDataItem
// 0x0008
struct FAirDropBoxDataItem
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AirDropBoxData
// 0x0030
struct FAirDropBoxData
{
	int                                                AirDropBoxID;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FAirDropBoxDataItem>                 DataList;                                                 // 0x0004(0x000C) (ZeroConstructor)
	int                                                Reason;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	uint64_t                                           CallerPlayerID;                                           // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0020(0x000C) (IsPlainOldData)
	float                                              DropTime;                                                 // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AirDropBoxDataFlow
// 0x0018
struct FAirDropBoxDataFlow
{
	TArray<struct FAirDropBoxData>                     AirDropBoxDataList;                                       // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     BattleID;                                                 // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.RoomCustomParams
// 0x000C
struct FRoomCustomParams
{
	int                                                CircleSpeedMultiplicator;                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoOpendoor;                                            // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoPickup;                                              // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAudioVisual;                                             // 0x0006(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bAutoAimAt;                                               // 0x0007(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bGunRemoveBullet;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.BattleCustomConfig
// 0x0010
struct FBattleCustomConfig
{
	struct FString                                     Config;                                                   // 0x0000(0x000C) (ZeroConstructor)
	float                                              Value;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.CircleDataMining
// 0x0014
struct FCircleDataMining
{
	struct FVector                                     WhiteCircleCenter;                                        // 0x0000(0x000C) (IsPlainOldData)
	bool                                               bDestinyCircle;                                           // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	int                                                LeftPlayerNum;                                            // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameDataMining
// 0x0034
struct FGameDataMining
{
	struct FString                                     BattleID;                                                 // 0x0000(0x000C) (ZeroConstructor)
	struct FVector                                     PlaneStartPoint;                                          // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     PlaneEndPoint;                                            // 0x0018(0x000C) (IsPlainOldData)
	int                                                GamePlayingTime;                                          // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FCircleDataMining>                   CircleDataMining;                                         // 0x0028(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameModeGameOverData
// 0x0001
struct FGameModeGameOverData
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct Gameplay.GameModeAIPlayerParams
// 0x0000 (0x0158 - 0x0158)
struct FGameModeAIPlayerParams : public FGameModePlayerParams
{

};

// ScriptStruct Gameplay.PickUpSpecialItemFlow
// 0x0008
struct FPickUpSpecialItemFlow
{
	int                                                ItemSpesificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                pickCount;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.ItemGenerateTableRow
// 0x0028 (0x002C - 0x0004)
struct FItemGenerateTableRow : public FTableRowBase
{
	int                                                ID;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Value;                                                    // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Catetory;                                                 // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FItemGenerateSpawnData>              AllGenerateSpawnDatas;                                    // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Gameplay.ItemSpotSceneComponentArray
// 0x0010
struct FItemSpotSceneComponentArray
{
	TEnumAsByte<ESpotType>                             SpotType;                                                 // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<class UItemSpotSceneComponent*>             AllSpots;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
};

// ScriptStruct Gameplay.SecMrpcsFlow
// 0x0070
struct FSecMrpcsFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0024(0x000C) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             AreaID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0034(0x000C) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0048(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	uint64_t                                           SvrRoleID;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SecMrpcsFlowID;                                           // 0x0060(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0061(0x0003) MISSED OFFSET
	struct FString                                     MrpcsFlowStr;                                             // 0x0064(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.ClientSecMrpcsFlow
// 0x0010
struct FClientSecMrpcsFlow
{
	unsigned char                                      SecMrpcsFlowID;                                           // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	TArray<unsigned char>                              MrpcsFlowData;                                            // 0x0004(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.VerifyInfoFlow
// 0x0038
struct FVerifyInfoFlow
{
	struct FString                                     GameAppID;                                                // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x000C(0x000C) (ZeroConstructor)
	uint64_t                                           UID;                                                      // 0x0018(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           BattleID;                                                 // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                LocationX;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GvoiceTeamQuit
// 0x0028
struct FGvoiceTeamQuit
{
	struct FString                                     GVoiceTeamID;                                             // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x000C(0x000C) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UID;                                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GvoiceTeamCreate
// 0x0028
struct FGvoiceTeamCreate
{
	struct FString                                     GVoiceTeamID;                                             // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x000C(0x000C) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           UID;                                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_BasicSetting
// 0x0028
struct FGameSetting_BasicSetting
{
	int                                                CrossHairColor;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AimAssist;                                                // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WallFeedBack;                                             // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0006(0x0002) MISSED OFFSET
	int                                                SingleShotWeaponShootMode;                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotGunShootMode;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               LeftRightShoot;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                LRShootMode;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               LRShootSniperSwitch;                                      // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                LeftHandFire;                                             // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Gyroscope;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AutoOpenDoor;                                             // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IntelligentDrugs;                                         // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               ActorAnimationSwitch;                                     // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               FPViewSwitch;                                             // 0x0027(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_ArtQuality
// 0x0008
struct FGameSetting_ArtQuality
{
	int                                                ArtStyle;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               AntiAliasingSwitch;                                       // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.GameSetting_Operate
// 0x0008
struct FGameSetting_Operate
{
	int                                                FireMode;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               Touch_3D_Switcher;                                        // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.GameSetting_Vehicle
// 0x0008
struct FGameSetting_Vehicle
{
	int                                                VehicleControlMode;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DrivingViewMode;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_Sensibility_FreeCam
// 0x000C
struct FGameSetting_Sensibility_FreeCam
{
	float                                              VehicleEye;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ParachuteEye;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamFpFreeEye;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_Sensibility_Cam
// 0x0020
struct FGameSetting_Sensibility_Cam
{
	float                                              CamLensSenNoneSniper;                                     // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenNoneSniperFP;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSenRedDotSniper;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen2XSniper;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen3XSniper;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen4XSniper;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen6XSniper;                                       // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CamLensSen8XSniper;                                       // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_Sensibility_Fire
// 0x0020
struct FGameSetting_Sensibility_Fire
{
	float                                              FireCamLensSenNoneSniper;                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenNoneSniperFP;                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSenRedDotSniper;                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen2XSniper;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen3XSniper;                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen4XSniper;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen6XSniper;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireCamLensSen8XSniper;                                   // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_Sensibility_Gyroscope
// 0x0020
struct FGameSetting_Sensibility_Gyroscope
{
	float                                              GyroscopeSenNoneSniper;                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSenNoneSniperFP;                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSenRedDotSniper;                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen2XSniper;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen3XSniper;                                     // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen4XSniper;                                     // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen6XSniper;                                     // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GyroscopeSen8XSniper;                                     // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_Sensibility
// 0x0070
struct FGameSetting_Sensibility
{
	int                                                CameraLensSensibility;                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FGameSetting_Sensibility_FreeCam            Sens_FreeCamera;                                          // 0x0004(0x000C)
	struct FGameSetting_Sensibility_Cam                Sens_Camera;                                              // 0x0010(0x0020)
	struct FGameSetting_Sensibility_Fire               Sens_Fire;                                                // 0x0030(0x0020)
	struct FGameSetting_Sensibility_Gyroscope          Sens_Gyroscope;                                           // 0x0050(0x0020)
};

// ScriptStruct Gameplay.GameSetting_PickUp_Drug
// 0x0018
struct FGameSetting_PickUp_Drug
{
	int                                                MedicalTreatment;                                         // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Bandage;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PainKiller;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Adrenaline;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyDrink;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FirstAidKit;                                              // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.Gamesetting_PickUp_Grenade
// 0x0010
struct FGamesetting_PickUp_Grenade
{
	int                                                IncendiaryBomb;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShockBomb;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SmokeBomb;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GrenadeFragmented;                                        // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_PickUp_WeaponBullet
// 0x0008
struct FGameSetting_PickUp_WeaponBullet
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletCount;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameSetting_PickUp
// 0x0038
struct FGameSetting_PickUp
{
	bool                                               AutoPickUpSwitcher;                                       // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               AutoPickupPistol;                                         // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FGameSetting_PickUp_Drug                    Drug;                                                     // 0x0004(0x0018)
	struct FGamesetting_PickUp_Grenade                 Grenade;                                                  // 0x001C(0x0010)
	TArray<struct FGameSetting_PickUp_WeaponBullet>    WeaponBulletList;                                         // 0x002C(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.GameSetting
// 0x00F0
struct FGameSetting
{
	uint64_t                                           RoleID;                                                   // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FGameSetting_BasicSetting                   BasicSetting;                                             // 0x0008(0x0028)
	struct FGameSetting_ArtQuality                     ArtQuality;                                               // 0x0030(0x0008)
	struct FGameSetting_Operate                        Operate;                                                  // 0x0038(0x0008)
	struct FGameSetting_Vehicle                        Vehicle;                                                  // 0x0040(0x0008)
	struct FGameSetting_Sensibility                    Sensibility;                                              // 0x0048(0x0070)
	struct FGameSetting_PickUp                         PickUp;                                                   // 0x00B8(0x0038)
};

// ScriptStruct Gameplay.RecoilInfo
// 0x0036
struct FRecoilInfo
{
	int16_t                                            VerticalRecoilMin;                                        // 0x0000(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            VerticalRecoilMax;                                        // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            VerticalRecoilVariation;                                  // 0x0004(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            VerticalRecoveryModifier;                                 // 0x0006(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            VerticalRecoveryClamp;                                    // 0x0008(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            VerticalRecoveryMax;                                      // 0x000A(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            LeftMax;                                                  // 0x000C(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RightMax;                                                 // 0x000E(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            HorizontalTendency;                                       // 0x0010(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            BulletPerSwitch;                                          // 0x0012(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            TimePerSwitch;                                            // 0x0014(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               SwitchOnTime;                                             // 0x0016(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0017(0x0001) MISSED OFFSET
	int16_t                                            RecoilSpeedVertical;                                      // 0x0018(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilSpeedHorizontal;                                    // 0x001A(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecovertySpeedVertical;                                   // 0x001C(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilValueClimb;                                         // 0x001E(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilValueFail;                                          // 0x0020(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilModifierStand;                                      // 0x0022(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilModifierCrouch;                                     // 0x0024(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilModifierProne;                                      // 0x0026(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            RecoilHorizontalMinScalar;                                // 0x0028(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            BurstEmptyDelay;                                          // 0x002A(0x0002) (ZeroConstructor, IsPlainOldData)
	bool                                               ShootSightReturn;                                         // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x002D(0x0001) MISSED OFFSET
	int16_t                                            ShootSightReturnSpeed;                                    // 0x002E(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            AccessoriesVRecoilFactor;                                 // 0x0030(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            AccessoriesHRecoilFactor;                                 // 0x0032(0x0002) (ZeroConstructor, IsPlainOldData)
	int16_t                                            AccessoriesRecoveryFactor;                                // 0x0034(0x0002) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.SecPlayerKillFlow
// 0x00B0
struct FSecPlayerKillFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0024(0x000C) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             AreaID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0034(0x000C) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0048(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	uint64_t                                           SvrRoleID;                                                // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0060(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SecPlayerKillFlowID;                                      // 0x0068(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0069(0x0003) MISSED OFFSET
	int                                                GunID;                                                    // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           KilledPlayerRoleID;                                       // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FRecoilInfo                                 RecoilInfo;                                               // 0x0078(0x0036)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00AE(0x0002) MISSED OFFSET
};

// ScriptStruct Gameplay.ClientSecPlayerKillFlow
// 0x0050
struct FClientSecPlayerKillFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SecPlayerKillFlowID;                                      // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                GunID;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           KilledPlayerKey;                                          // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRecoilInfo                                 RecoilInfo;                                               // 0x0014(0x0036)
	unsigned char                                      UnknownData01[0x6];                                       // 0x004A(0x0006) MISSED OFFSET
};

// ScriptStruct Gameplay.PosAndTime
// 0x0010
struct FPosAndTime
{
	int                                                LocationX;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Time;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.PlayerRouteFlow
// 0x0060
struct FPlayerRouteFlow
{
	struct FString                                     GameAppID;                                                // 0x0000(0x000C) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FString                                     OpenID;                                                   // 0x0010(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	uint64_t                                           UID;                                                      // 0x0020(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           BattleID;                                                 // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SeasonID;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FString                                     PlayerName;                                               // 0x0034(0x000C) (ZeroConstructor)
	TArray<struct FPosAndTime>                         Route;                                                    // 0x0040(0x000C) (ZeroConstructor)
	struct FPosAndTime                                 End;                                                      // 0x004C(0x0010)
	unsigned char                                      UnknownData03[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.PlayerBehaviorFlow
// 0x0090
struct FPlayerBehaviorFlow
{
	uint64_t                                           FrameCounter;                                             // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           BattleID;                                                 // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               IsTargetPlayer;                                           // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FString                                     Name;                                                     // 0x0014(0x000C) (ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RelevantPlayerKey;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationX;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationY;                                                // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                LocationZ;                                                // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationP;                                                // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationY;                                                // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RotationR;                                                // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Stats;                                                    // 0x0040(0x000C) (ZeroConstructor)
	bool                                               IsDying;                                                  // 0x004C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	float                                              Breath;                                                   // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedX;                                                   // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedY;                                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SpeedZ;                                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Energy;                                                   // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CurrentWeaponID;                                          // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Ammo;                                                     // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SightId;                                                  // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsBeAttacking;                                            // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	int                                                BeAttackDirX;                                             // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeAttackDirY;                                             // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BeAttackDirZ;                                             // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MedicineId;                                               // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHaveSound;                                              // 0x0088(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0089(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.MemBTResultData
// 0x0050
struct FMemBTResultData
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (ZeroConstructor)
	uint32_t                                           Kill;                                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     State;                                                    // 0x0010(0x000C) (ZeroConstructor)
	float                                              travelDistance;                                           // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              surviveTime;                                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AssistNum;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HeadShotNum;                                              // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           rescueTimes;                                              // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           startToRescueTimes;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	uint64_t                                           UID;                                                      // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             ShouldShowAddFriendBtn;                                   // 0x0048(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct Gameplay.ResultRatingData
// 0x0018
struct FResultRatingData
{
	int                                                rank_rating;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                kill_rating;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                win_rating;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                change_rank_rating;                                       // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                change_kill_rating;                                       // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                change_win_rating;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.BattleResultData
// 0x0078
struct FBattleResultData
{
	struct FString                                     Reason;                                                   // 0x0000(0x000C) (ZeroConstructor)
	uint32_t                                           RemainingPlayerCount;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalPlayerCount;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           RemainingTeamCount;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           TotalTeamCount;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSolo;                                                   // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	uint32_t                                           ShootWeaponShotNum;                                       // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShootWeaponShotAndHitPlayerNum;                           // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HealTimes;                                                // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              marchDistance;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DriveDistance;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           destroyVehicleNum;                                        // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           add_exp;                                                  // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           add_gold;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint64_t                                           battle_id;                                                // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           max_game_num;                                             // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           person_rank;                                              // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           team_rank;                                                // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FMemBTResultData>                    BP_ARRAY_TeammateList;                                    // 0x0054(0x000C) (ZeroConstructor)
	struct FResultRatingData                           BP_STRUCT_BTRating;                                       // 0x0060(0x0018)
};

// ScriptStruct Gameplay.HurtFlow
// 0x0100
struct FHurtFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0024(0x000C) (ZeroConstructor)
	int8_t                                             PlatID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             AreaID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0034(0x000C) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0060(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	uint64_t                                           RoleID;                                                   // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FString                                     EnemyOpenID;                                              // 0x007C(0x000C) (ZeroConstructor)
	struct FString                                     EnemyUserName;                                            // 0x0088(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	uint64_t                                           EnemyRoleID;                                              // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                EnemyRoleType;                                            // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HurtTime;                                                 // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HurtType;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitType;                                                  // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageStart;                                              // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DamageReduce;                                             // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorDef;                                                 // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPstart;                                                  // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPEnd;                                                    // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart1;                                            // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd1;                                              // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart2;                                            // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd2;                                              // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPStart;                                               // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPEnd;                                                 // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FallHeight;                                               // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HypoxiaTime;                                              // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HypoxiaHurtTotal;                                         // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKilled;                                             // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorKill;                                                // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarKill;                                                  // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IfIsAI;                                                   // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           HurtFlowID;                                               // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.AttackFlow
// 0x0188
struct FAttackFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0024(0x000C) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0034(0x000C) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0060(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	uint64_t                                           RoleID;                                                   // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FString                                     TargetOpenID;                                             // 0x007C(0x000C) (ZeroConstructor)
	struct FString                                     TargetUserName;                                           // 0x0088(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
	uint64_t                                           TargetRoleID;                                             // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             TargetRoleType;                                           // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FString                                     GunName;                                                  // 0x00A4(0x000C) (ZeroConstructor)
	struct FString                                     GunPartsType;                                             // 0x00B0(0x000C) (ZeroConstructor)
	int8_t                                             SightType;                                                // 0x00BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00BD(0x0003) MISSED OFFSET
	int                                                BulletSpeed;                                              // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             MagazineMax;                                              // 0x00C4(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             MagazineLeft;                                             // 0x00C5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x00C6(0x0002) MISSED OFFSET
	int                                                ShotFrequency;                                            // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamage;                                             // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int16_t                                            BulletDown;                                               // 0x00D0(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      BulletDamageReduce;                                       // 0x00D2(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x1];                                       // 0x00D3(0x0001) MISSED OFFSET
	int                                                Recoil;                                                   // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ReloadTime;                                               // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerState;                                              // 0x00DC(0x000C) (ZeroConstructor)
	unsigned char                                      ShotPose;                                                 // 0x00E8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      FireType;                                                 // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHoldBreath : 1;                                          // 0x00EA(0x0001)
	unsigned char                                      Sideways;                                                 // 0x00EB(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                ShootingDeviationX;                                       // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShootingDeviationY;                                       // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ZeroDistance;                                             // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           ShotTime;                                                 // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitTime;                                                  // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionX;                                          // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionY;                                          // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionZ;                                          // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionX;                                             // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionY;                                             // 0x0110(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunPositionZ;                                             // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionX;                                     // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionY;                                     // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletsBornPositionZ;                                     // 0x0120(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           LastHitTime;                                              // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BulletFlyDistance;                                        // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           BulletFlyTime;                                            // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionX;                                             // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionY;                                             // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitPositionZ;                                             // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitPart;                                                  // 0x013C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bHitCar : 1;                                              // 0x013D(0x0001)
	unsigned char                                      bTireOut : 1;                                             // 0x013D(0x0001)
	unsigned char                                      BulletCost;                                               // 0x013E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x013F(0x0001) MISSED OFFSET
	int                                                HPstart;                                                  // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HPEnd;                                                    // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPStart;                                             // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ArmorHPEnd;                                               // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPStart;                                               // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CarHPEnd;                                                 // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerKill;                                               // 0x0158(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bArmorKill : 1;                                           // 0x0159(0x0001)
	unsigned char                                      bCarKill : 1;                                             // 0x0159(0x0001)
	unsigned char                                      UnknownData10[0x2];                                       // 0x015A(0x0002) MISSED OFFSET
	int                                                RecoilMoveX;                                              // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoilMoveY;                                              // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                WeaponAimFOV;                                             // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamageDebuff;                                       // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDamageBuff;                                         // 0x016C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AtackFlowID;                                              // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimSpeed;                                             // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimSpeedRateMax;                                      // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeMax;                                          // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeRateMax;                                      // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GunID;                                                    // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.AimFlow
// 0x00F0
struct FAimFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0024(0x000C) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0034(0x000C) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0060(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	uint64_t                                           RoleID;                                                   // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	int                                                AimTime;                                                  // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ShotCDTime;                                               // 0x0080(0x000C) (ZeroConstructor)
	int                                                ShotCount;                                                // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotHitCount;                                             // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotHeadHitCount;                                         // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotPersonHitCount;                                       // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ShotPersonKillCount;                                      // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     HitDistance;                                              // 0x00A0(0x000C) (ZeroConstructor)
	struct FString                                     HitEachDistance;                                          // 0x00AC(0x000C) (ZeroConstructor)
	struct FString                                     HitAngle;                                                 // 0x00B8(0x000C) (ZeroConstructor)
	struct FString                                     HitEachCdTime;                                            // 0x00C4(0x000C) (ZeroConstructor)
	struct FString                                     HitPartInfo;                                              // 0x00D0(0x000C) (ZeroConstructor)
	struct FString                                     PlayerState;                                              // 0x00DC(0x000C) (ZeroConstructor)
	unsigned char                                      bHoldBreath : 1;                                          // 0x00E8(0x0001)
	int8_t                                             SightType;                                                // 0x00E9(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00EA(0x0002) MISSED OFFSET
	uint32_t                                           AimFlowID;                                                // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Gameplay.GameEndFlow
// 0x00F0
struct FGameEndFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0024(0x000C) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0034(0x000C) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0060(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	uint64_t                                           RoleID;                                                   // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FString                                     ClientVersion;                                            // 0x007C(0x000C) (ZeroConstructor)
	uint32_t                                           OverTime;                                                 // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             EndType;                                                  // 0x008C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillCount;                                                // 0x008D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AssistsCount;                                             // 0x008E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DropCount;                                                // 0x008F(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveCount;                                                // 0x0090(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      startToSaveCount;                                         // 0x0091(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RebornCount;                                              // 0x0092(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AliveType : 1;                                            // 0x0093(0x0001)
	int                                                GoldGet;                                                  // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DiamondGet;                                               // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpGet;                                                   // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WinRank;                                                  // 0x00A0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TotalPlayers;                                             // 0x00A1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x00A2(0x0002) MISSED OFFSET
	int                                                PlayerRank;                                               // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankEnd;                                                  // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x00B0(0x000C) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x00BC(0x000C) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x00C8(0x000C) (ZeroConstructor)
	unsigned char                                      TeamPlayer1AliveType : 1;                                 // 0x00D4(0x0001)
	unsigned char                                      TeamPlayer2AliveType : 1;                                 // 0x00D4(0x0001)
	unsigned char                                      TeamPlayer3AliveType : 1;                                 // 0x00D4(0x0001)
	unsigned char                                      TeamPlayer1Kill;                                          // 0x00D5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer2Kill;                                          // 0x00D6(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer3Kill;                                          // 0x00D7(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GameEndFlowID;                                            // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AIKillCount;                                              // 0x00DC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillHeadShotCount;                                        // 0x00DD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RoundCircleCount;                                         // 0x00DE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      PlayerLastKillGet;                                        // 0x00DF(0x0001) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MrpcsFlowStr;                                             // 0x00E0(0x000C) (ZeroConstructor)
	unsigned char                                      HurtTeammateCount;                                        // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.TeammatHurtFlowNode
// 0x0028
struct FTeammatHurtFlowNode
{
	struct FString                                     HurtPlayerName;                                           // 0x0000(0x000C) (ZeroConstructor)
	int                                                GameModeType;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MakeHurtPlayerName;                                       // 0x0010(0x000C) (ZeroConstructor)
	struct FString                                     DataTimes;                                                // 0x001C(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.TeammatHurtFlow
// 0x000C
struct FTeammatHurtFlow
{
	TArray<struct FTeammatHurtFlowNode>                TeammatHurtList;                                          // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.ForbitPickFlowNode
// 0x0018
struct FForbitPickFlowNode
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (ZeroConstructor)
	TArray<int>                                        forbitNumList;                                            // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.ForbitPickFlow
// 0x000C
struct FForbitPickFlow
{
	TArray<struct FForbitPickFlowNode>                 forbitList;                                               // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.ClientGameEndFlow
// 0x0088
struct FClientGameEndFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x000C) (ZeroConstructor)
	struct FString                                     ClientVersion;                                            // 0x0014(0x000C) (ZeroConstructor)
	uint32_t                                           OverTime;                                                 // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             EndType;                                                  // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      KillCount;                                                // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AssistsCount;                                             // 0x0026(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      DropCount;                                                // 0x0027(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      SaveCount;                                                // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      startToSaveCount;                                         // 0x0029(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RebornCount;                                              // 0x002A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AliveType : 1;                                            // 0x002B(0x0001)
	int                                                GoldGet;                                                  // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                DiamondGet;                                               // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ExpGet;                                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      WinRank;                                                  // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TotalPlayers;                                             // 0x0039(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x003A(0x0002) MISSED OFFSET
	int                                                PlayerRank;                                               // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RankEnd;                                                  // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0048(0x000C) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0060(0x000C) (ZeroConstructor)
	unsigned char                                      TeamPlayer1AliveType : 1;                                 // 0x006C(0x0001)
	unsigned char                                      TeamPlayer2AliveType : 1;                                 // 0x006C(0x0001)
	unsigned char                                      TeamPlayer3AliveType : 1;                                 // 0x006C(0x0001)
	unsigned char                                      TeamPlayer1Kill;                                          // 0x006D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer2Kill;                                          // 0x006E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      TeamPlayer3Kill;                                          // 0x006F(0x0001) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           GameEndFlowID;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      RoundCircleCount;                                         // 0x0074(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0075(0x0003) MISSED OFFSET
	TArray<unsigned char>                              MrpcsFlowData;                                            // 0x0078(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0084(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.CircleFlow
// 0x01A0
struct FCircleFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0024(0x000C) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0034(0x000C) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0060(0x000C) (ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x006C(0x000C) (ZeroConstructor)
	uint64_t                                           RoleID;                                                   // 0x0078(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0080(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	uint32_t                                           GameStartTime;                                            // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NewCircleBornTime;                                        // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionX;                                       // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionY;                                       // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionRadius;                                  // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCircleCount;                                           // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionX;                                          // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionY;                                          // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionZ;                                          // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHP;                                                 // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveTime;                                        // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveEndTime;                                     // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerOutTime;                                            // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonCount;                                        // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMin;                                          // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMax;                                          // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonAvg;                                          // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonTotal;                                        // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDrop;                                         // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDead;                                         // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryCount;                                            // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMin;                                              // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMax;                                              // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryTotal;                                            // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryCount;                                      // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMin;                                        // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMax;                                        // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryTotal;                                      // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartLv;                                            // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartTime;                                          // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     EnergyItemUse;                                            // 0x00FC(0x000C) (ZeroConstructor)
	int                                                EnergyLvTimeInfo;                                         // 0x0108(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     EnergyRunFastTime;                                        // 0x010C(0x000C) (ZeroConstructor)
	struct FString                                     EnergyRecoveryLvTimeInfo;                                 // 0x0118(0x000C) (ZeroConstructor)
	int                                                EnergyEndLv;                                              // 0x0124(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyEndTime;                                            // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerMoveDis;                                            // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedMax;                                           // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedAvg;                                           // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedMax;                                        // 0x0138(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedAvg;                                        // 0x013C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveDis;                                       // 0x0140(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveTime;                                      // 0x0144(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveDis;                                       // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveTime;                                      // 0x014C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveDis;                                         // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveTime;                                        // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveDis;                                       // 0x0158(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveTime;                                      // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCar;                                                // 0x0160(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCameraDistanceMax;                                  // 0x0164(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SecCircleFlowID;                                          // 0x0168(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoAimType;                                              // 0x016C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x016D(0x0003) MISSED OFFSET
	int                                                AutoAimTime;                                              // 0x0170(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillCount;                                          // 0x0174(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerKillAICount;                                        // 0x0178(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHeadKillCount;                                      // 0x017C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHatID;                                              // 0x0180(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerMaskID;                                             // 0x0184(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerShirtID;                                            // 0x0188(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPantsID;                                            // 0x018C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MrpcsFlowStr;                                             // 0x0190(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData04[0x4];                                       // 0x019C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ClientCircleFlow
// 0x0120
struct FClientCircleFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x000C) (ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x0014(0x000C) (ZeroConstructor)
	uint32_t                                           GameStartTime;                                            // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           NewCircleBornTime;                                        // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionX;                                       // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionY;                                       // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCirclePositionRadius;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NewCircleCount;                                           // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionX;                                          // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionY;                                          // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerPositionZ;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerHP;                                                 // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveTime;                                        // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           OldCircleMoveEndTime;                                     // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerOutTime;                                            // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonCount;                                        // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMin;                                          // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonMax;                                          // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonAvg;                                          // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonTotal;                                        // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDrop;                                         // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CirclePoisonDead;                                         // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryCount;                                            // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMin;                                              // 0x0074(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryMax;                                              // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                RecoveryTotal;                                            // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryCount;                                      // 0x0080(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMin;                                        // 0x0084(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryMax;                                        // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyRecoveryTotal;                                      // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartLv;                                            // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyStartTime;                                          // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     EnergyItemUse;                                            // 0x0098(0x000C) (ZeroConstructor)
	int                                                EnergyLvTimeInfo;                                         // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     EnergyRunFastTime;                                        // 0x00A8(0x000C) (ZeroConstructor)
	struct FString                                     EnergyRecoveryLvTimeInfo;                                 // 0x00B4(0x000C) (ZeroConstructor)
	int                                                EnergyEndLv;                                              // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EnergyEndTime;                                            // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerMoveDis;                                            // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedMax;                                           // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSpeedAvg;                                           // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedMax;                                        // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCarSpeedAvg;                                        // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveDis;                                       // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerSquatMoveTime;                                      // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveDis;                                       // 0x00E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCreepMoveTime;                                      // 0x00E8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveDis;                                         // 0x00EC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerRunMoveTime;                                        // 0x00F0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveDis;                                       // 0x00F4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerDriveMoveTime;                                      // 0x00F8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCar;                                                // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerCameraDistanceMax;                                  // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SecCircleFlowID;                                          // 0x0104(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoAimType;                                              // 0x0108(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	int                                                AutoAimTime;                                              // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              MrpcsFlowData;                                            // 0x0110(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.JumpFlow
// 0x0108
struct FJumpFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0024(0x000C) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0034(0x000C) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0060(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	uint64_t                                           RoleID;                                                   // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FString                                     PicUrl;                                                   // 0x007C(0x000C) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0088(0x000C) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0094(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	int64_t                                            GameStartTime;                                            // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           StartJumpTime;                                            // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EndJumpTime;                                              // 0x00A4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerJumpTime;                                           // 0x00A8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerOpenTime;                                           // 0x00AC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandTime;                                           // 0x00B0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionX;                                      // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionY;                                      // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionZ;                                      // 0x00BC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionX;                                       // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionY;                                       // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionZ;                                       // 0x00C8(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionX;                                      // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionY;                                      // 0x00D0(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionZ;                                      // 0x00D4(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandDistance;                                       // 0x00D8(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax1;                                          // 0x00DC(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax2;                                          // 0x00E0(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GVoiceTeamID;                                             // 0x00E4(0x000C) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x00F0(0x000C) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x00FC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0104(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ClientJumpFlow
// 0x0098
struct FClientJumpFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x000C) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0014(0x000C) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
	int64_t                                            GameStartTime;                                            // 0x0028(0x0008) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           StartJumpTime;                                            // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           EndJumpTime;                                              // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerJumpTime;                                           // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerOpenTime;                                           // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandTime;                                           // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionX;                                      // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionY;                                      // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerJumpPositionZ;                                      // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionX;                                       // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionY;                                       // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlaneJumpPositionZ;                                       // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionX;                                      // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionY;                                      // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PlayerLandPositionZ;                                      // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerLandDistance;                                       // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax1;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerSpeedMax2;                                          // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GVoiceTeamID;                                             // 0x0074(0x000C) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x0080(0x000C) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0094(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameStartFlow
// 0x0168
struct FGameStartFlow
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	int64_t                                            dtEventTime;                                              // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GameAppID;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0024(0x000C) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0031(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0032(0x0002) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0034(0x000C) (ZeroConstructor)
	uint64_t                                           BattleID;                                                 // 0x0040(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            ClientStartTime;                                          // 0x0048(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                MrpcsFlowcount_;                                          // 0x0050(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0054(0x000C) (ZeroConstructor)
	struct FString                                     UserName;                                                 // 0x0060(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x006C(0x0004) MISSED OFFSET
	uint64_t                                           RoleID;                                                   // 0x0070(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0078(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0079(0x0003) MISSED OFFSET
	struct FString                                     PicUrl;                                                   // 0x007C(0x000C) (ZeroConstructor)
	uint32_t                                           SvrUserMoney1;                                            // 0x0088(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SvrUserMoney2;                                            // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SvrUserMoney3;                                            // 0x0090(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank;                                             // 0x0094(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank1;                                            // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank2;                                            // 0x009C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                SvrRoundRank3;                                            // 0x00A0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET
	uint64_t                                           SvrRoleID;                                                // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             SvrRoleType;                                              // 0x00B0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	struct FString                                     SvrMapName;                                               // 0x00B4(0x000C) (ZeroConstructor)
	int8_t                                             SvrWeatherid;                                             // 0x00C0(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x00C1(0x0003) MISSED OFFSET
	struct FString                                     SvrItemList;                                              // 0x00C4(0x000C) (ZeroConstructor)
	int64_t                                            WaitStartTime;                                            // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	int64_t                                            WaitEndTime;                                              // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MapName;                                                  // 0x00E0(0x000C) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x00EC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x00ED(0x0003) MISSED OFFSET
	struct FString                                     ItemList;                                                 // 0x00F0(0x000C) (ZeroConstructor)
	int8_t                                             GameType;                                                 // 0x00FC(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             TeamType;                                                 // 0x00FD(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      AutoMatch;                                                // 0x00FE(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      playerCount;                                              // 0x00FF(0x0001) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0100(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0104(0x000C) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0110(0x000C) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x011C(0x000C) (ZeroConstructor)
	int                                                TeamPlayer1Rank;                                          // 0x0128(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamPlayer2Rank;                                          // 0x012C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamPlayer3Rank;                                          // 0x0130(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           SecGameStartFlowFlowID;                                   // 0x0134(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GVoiceTeamID;                                             // 0x0138(0x000C) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x0144(0x000C) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x0150(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x0154(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MrpcsFlowStr;                                             // 0x0158(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData08[0x4];                                       // 0x0164(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.ClientGameStartFlow
// 0x0090
struct FClientGameStartFlow
{
	int64_t                                            ClientStartTime;                                          // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0008(0x000C) (ZeroConstructor)
	struct FString                                     MapName;                                                  // 0x0014(0x000C) (ZeroConstructor)
	int8_t                                             WeatherID;                                                // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FString                                     ItemList;                                                 // 0x0024(0x000C) (ZeroConstructor)
	int8_t                                             TeamType;                                                 // 0x0030(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamPlayer1;                                              // 0x0038(0x000C) (ZeroConstructor)
	struct FString                                     TeamPlayer2;                                              // 0x0044(0x000C) (ZeroConstructor)
	struct FString                                     TeamPlayer3;                                              // 0x0050(0x000C) (ZeroConstructor)
	uint32_t                                           SecGameStartFlowFlowID;                                   // 0x005C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GVoiceTeamID;                                             // 0x0060(0x000C) (ZeroConstructor)
	struct FString                                     GVoiceRoomID;                                             // 0x006C(0x000C) (ZeroConstructor)
	int                                                GVoiceTeamMemberID;                                       // 0x0078(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                GVoiceRoomMemberID;                                       // 0x007C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              MrpcsFlowData;                                            // 0x0080(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x008C(0x0004) MISSED OFFSET
};

// ScriptStruct Gameplay.GameBaseInfo
// 0x0068
struct FGameBaseInfo
{
	struct FString                                     GameSvrId;                                                // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     GameAppID;                                                // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0018(0x000C) (ZeroConstructor)
	int8_t                                             AreaID;                                                   // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             PlatID;                                                   // 0x0025(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x0028(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	uint64_t                                           BattleID;                                                 // 0x0038(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UserName;                                                 // 0x0040(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	uint64_t                                           RoleID;                                                   // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	int8_t                                             RoleType;                                                 // 0x0058(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FString                                     PicUrl;                                                   // 0x005C(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.HitFlow
// 0x0024
struct FHitFlow
{
	int                                                AimType;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Distance;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                IsKill;                                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bFallOnGround;                                            // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	TArray<unsigned char>                              PlayerStates;                                             // 0x0014(0x000C) (ZeroConstructor)
	unsigned char                                      HitPos;                                                   // 0x0020(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct Gameplay.WeaponReport
// 0x0028
struct FWeaponReport
{
	int                                                WeaponID;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FireCount;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                HitCount;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KillCount;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalOwnTime;                                             // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TotalUseTime;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FHitFlow>                            HitFlow;                                                  // 0x001C(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.OnePlayerWeapon
// 0x0028
struct FOnePlayerWeapon
{
	struct FString                                     PlayerID;                                                 // 0x0000(0x000C) (ZeroConstructor)
	TArray<struct FWeaponReport>                       Weapons;                                                  // 0x000C(0x000C) (ZeroConstructor)
	struct FFlareGunReport                             FlareGunReport;                                           // 0x0018(0x0010)
};

// ScriptStruct Gameplay.TotalWeaponReport
// 0x001C
struct FTotalWeaponReport
{
	struct FString                                     BattleID;                                                 // 0x0000(0x000C) (ZeroConstructor)
	int                                                BattleMode;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FOnePlayerWeapon>                    TotalWeaponRecord;                                        // 0x0010(0x000C) (ZeroConstructor)
};

// ScriptStruct Gameplay.WeatherLevelInfo
// 0x0018
struct FWeatherLevelInfo
{
	int                                                WeatherID;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeatherLevelName;                                         // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              WeatherTime;                                              // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                WeatherSyncCount;                                         // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

}

