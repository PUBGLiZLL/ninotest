#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:39 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum ShadowTrackerExtra.EAirAttackInfo
enum class EAirAttackInfo : uint8_t
{
	EAirAttackInfo__AttackWarningTips = 0,
	EAirAttackInfo__Attacking      = 1,
	EAirAttackInfo__AttackOver     = 2,
	EAirAttackInfo__NoAirAttack    = 3,
	EAirAttackInfo__EAirAttackInfo_MAX = 4
};


// Enum ShadowTrackerExtra.ECircleInfo
enum class ECircleInfo : uint8_t
{
	ECircleInfo__SafeZoneTips      = 0,
	ECircleInfo__BlueCirclePreWarning = 1,
	ECircleInfo__BlueCircleRun     = 2,
	ECircleInfo__NoCircleInfo      = 3,
	ECircleInfo__ECircleInfo_MAX   = 4
};


// Enum ShadowTrackerExtra.EAvatarSlotType
enum class EAvatarSlotType : uint8_t
{
	EAvatarSlotType__EAvatarSlotType_NONE = 0,
	EAvatarSlotType__EAvatarSlotType_HeadEquipemtSlot = 1,
	EAvatarSlotType__EAvatarSlotType_HairEquipemtSlot = 2,
	EAvatarSlotType__EAvatarSlotType_HatEquipemtSlot = 3,
	EAvatarSlotType__EAvatarSlotType_FaceEquipemtSlot = 4,
	EAvatarSlotType__EAvatarSlotType_ClothesEquipemtSlot = 5,
	EAvatarSlotType__EAvatarSlotType_PantsEquipemtSlot = 6,
	EAvatarSlotType__EAvatarSlotType_ShoesEquipemtSlot = 7,
	EAvatarSlotType__EAvatarSlotType_BackpackEquipemtSlot = 8,
	EAvatarSlotType__EAvatarSlotType_HelmetEquipemtSlot = 9,
	EAvatarSlotType__EAvatarSlotType_ArmorEquipemtSlot = 10,
	EAvatarSlotType__EAvatarSlotType_ParachuteEquipemtSlot = 11,
	EAvatarSlotType__EAvatarSlotType_GlassEquipemtSlot = 12,
	EAvatarSlotType__EAvatarSlotType_NightVisionEquipemtSlot = 13,
	EAvatarSlotType__EAvatarSlotType_MaxSlotNum = 14,
	EAvatarSlotType__EAvatarSlotType_MAX = 15
};


// Enum ShadowTrackerExtra.EMeshType
enum class EMeshType : uint8_t
{
	EMeshType__Skeletal            = 0,
	EMeshType__Static              = 1,
	EMeshType__SkeletalWithSocket  = 2,
	EMeshType__EMeshType_MAX       = 3
};


// Enum ShadowTrackerExtra.EAvatarSubSlot
enum class EAvatarSubSlot : uint8_t
{
	EAvatarSubSlot__ESubSlot_None  = 0,
	EAvatarSubSlot__ESubSlot_VeilSlot = 1,
	EAvatarSubSlot__ESubSlot_HoodSlot = 2,
	EAvatarSubSlot__ESubSlot_StockingSlot = 3,
	EAvatarSubSlot__ESubSlot_BootsSlot = 4,
	EAvatarSubSlot__ESubSlot_MAX   = 5
};


// Enum ShadowTrackerExtra.EWeaponAttachmentSocketType
enum class EWeaponAttachmentSocketType : uint8_t
{
	EWeaponAttachmentSocketType__GunPoint = 0,
	EWeaponAttachmentSocketType__Grip = 1,
	EWeaponAttachmentSocketType__Magazine = 2,
	EWeaponAttachmentSocketType__Gunstock = 3,
	EWeaponAttachmentSocketType__OpticalSight = 4,
	EWeaponAttachmentSocketType__MasterGun = 5,
	EWeaponAttachmentSocketType__AngledOpticalSight = 6,
	EWeaponAttachmentSocketType__EWeaponAttachmentSocketType_MAX = 7
};


// Enum ShadowTrackerExtra.ESyncOperation
enum class ESyncOperation : uint8_t
{
	ESyncOperation__PutOn          = 0,
	ESyncOperation__PutOff         = 1,
	ESyncOperation__ApplyHead      = 2,
	ESyncOperation__ESyncOperation_MAX = 3
};


// Enum ShadowTrackerExtra.EOpticalSightType
enum class EOpticalSightType : uint8_t
{
	EOpticalSightType__NoneSight   = 0,
	EOpticalSightType__UpperLarge  = 1,
	EOpticalSightType__UpperSmall  = 2,
	EOpticalSightType__UpperDefault = 3,
	EOpticalSightType__EOpticalSightType_MAX = 4
};


// Enum ShadowTrackerExtra.EFreshWeaponStateType
enum class EFreshWeaponStateType : uint8_t
{
	FreshWeaponStateType_None      = 0,
	FreshWeaponStateType_Inactive  = 1,
	FreshWeaponStateType_Idle      = 2,
	FreshWeaponStateType_IdleToBackpack = 3,
	FreshWeaponStateType_Backpack  = 4,
	FreshWeaponStateType_BackpackToIdle = 5,
	FreshWeaponStateType_Fire      = 6,
	FreshWeaponStateType_Reload    = 7,
	FreshWeaponStateType_NoBullet  = 8,
	FreshWeaponStateType_PreFire   = 9,
	FreshWeaponStateType_PostFire  = 10,
	FreshWeaponStateType_PostReload = 11,
	FreshWeaponStateType_MAX       = 12
};


// Enum ShadowTrackerExtra.EWeaponComponentType
enum class EWeaponComponentType : uint8_t
{
	WCT_None                       = 0,
	WCT_Scope                      = 1,
	WCT_Max                        = 2
};


// Enum ShadowTrackerExtra.ESurvivePickUpGlobalCategory
enum class ESurvivePickUpGlobalCategory : uint8_t
{
	SurvivePickUpItemGlobalCategory_None = 0,
	SurvivePickUpItemGlobalCategory_Weapon = 1,
	SurvivePickUpItemGlobalCategory_PlayerEquipment = 2,
	SurvivePickUpItemGlobalCategory_WeaponComponent = 3,
	SurvivePickUpItemGlobalCategory_ConsumeItem = 4,
	SurvivePickUpItemGlobalCategory_MAX = 5
};


// Enum ShadowTrackerExtra.EWeaponAction
enum class EWeaponAction : uint8_t
{
	WA_None                        = 0,
	WA_EquipWeapon                 = 1,
	WA_UnEquipWeapon               = 2,
	WA_Shoot                       = 3,
	WA_IdleToNoneIdle              = 4,
	WA_NoneShoot                   = 5,
	WA_Reload                      = 6,
	WA_AutoShoot                   = 7,
	WA_MAX                         = 8
};


// Enum ShadowTrackerExtra.EWeaponState
enum class EWeaponState : uint8_t
{
	WS_Unavailable                 = 0,
	WS_UnEquiped                   = 1,
	WS_Equiped                     = 2,
	WS_MAX                         = 3
};


// Enum ShadowTrackerExtra.ESTEWeaponShootType
enum class ESTEWeaponShootType : uint8_t
{
	ESTEWeaponShootType__OneBulletBursting = 0,
	ESTEWeaponShootType__MultiBulletsBursting = 1,
	ESTEWeaponShootType__Auto      = 2,
	ESTEWeaponShootType__ESTEWeaponShootType_MAX = 3
};


// Enum ShadowTrackerExtra.EWeaponReloadMethod
enum class EWeaponReloadMethod : uint8_t
{
	All                            = 0,
	Tactical                       = 1,
	EWeaponReloadMethod_MAX        = 2
};


// Enum ShadowTrackerExtra.ESightType
enum class ESightType : uint8_t
{
	SightX1                        = 0,
	SightX2                        = 1,
	SightX4                        = 2,
	SightX8                        = 3,
	SightDefault                   = 4,
	SightX3                        = 5,
	SightX6                        = 6,
	ESightType_MAX                 = 7
};


// Enum ShadowTrackerExtra.EWeaponReloadType
enum class EWeaponReloadType : uint8_t
{
	Magzine                        = 0,
	OneByOne                       = 1,
	OneByOneAndClip                = 2,
	EWeaponReloadType_MAX          = 3
};


// Enum ShadowTrackerExtra.EShootWeaponState
enum class EShootWeaponState : uint8_t
{
	SWS_Idle                       = 0,
	SWS_NoneIdle                   = 1,
	SWS_Shooting                   = 2,
	SWS_Reloading                  = 3,
	SWS_ReloadDone                 = 4,
	SWS_MAX                        = 5
};


// Enum ShadowTrackerExtra.EShootWeaponShootMode
enum class EShootWeaponShootMode : uint8_t
{
	SWST_MuzzleDirection           = 0,
	SWST_TargetDirection           = 1,
	SWST_TraceTarget               = 2,
	SWST_MAX                       = 3
};


// Enum ShadowTrackerExtra.ESTEPoseState
enum class ESTEPoseState : uint8_t
{
	ESTEPoseState__Stand           = 0,
	ESTEPoseState__Crouch          = 1,
	ESTEPoseState__Prone           = 2,
	ESTEPoseState__Sprint          = 3,
	ESTEPoseState__CrouchSprint    = 4,
	ESTEPoseState__Crawl           = 5,
	ESTEPoseState__Swim            = 6,
	ESTEPoseState__SwimSprint      = 7,
	ESTEPoseState__Dying           = 8,
	ESTEPoseState__ESTEPoseState_MAX = 9
};


// Enum ShadowTrackerExtra.EPlayerCameraMode
enum class EPlayerCameraMode : uint8_t
{
	PCM_Normal                     = 0,
	PCM_Near                       = 1,
	PCM_Aim                        = 2,
	PCM_Plane                      = 3,
	PCM_FPP                        = 4,
	PCM_MAX                        = 5
};


// Enum ShadowTrackerExtra.ESTExtraVehicleSeatType
enum class ESTExtraVehicleSeatType : uint8_t
{
	ESTExtraVehicleSeatType__ESeatType_DriversSeat = 0,
	ESTExtraVehicleSeatType__ESeatType_PassengersSeat = 1,
	ESTExtraVehicleSeatType__ESeatType_MAX = 2
};


// Enum ShadowTrackerExtra.ESTExtraVehicleHealthState
enum class ESTExtraVehicleHealthState : uint8_t
{
	ESTExtraVehicleHealthState__VHS_Good = 0,
	ESTExtraVehicleHealthState__VHS_Smoking = 1,
	ESTExtraVehicleHealthState__VHS_Burning = 2,
	ESTExtraVehicleHealthState__VHS_Destroyed = 3,
	ESTExtraVehicleHealthState__VHS_MAX = 4
};


// Enum ShadowTrackerExtra.EPawnState
enum class EPawnState : uint8_t
{
	EPawnState__Move               = 0,
	EPawnState__Sprint             = 1,
	EPawnState__ProneMove          = 2,
	EPawnState__Stand              = 3,
	EPawnState__Crouch             = 4,
	EPawnState__Prone              = 5,
	EPawnState__Jump               = 6,
	EPawnState__GunFire            = 7,
	EPawnState__GunReload          = 8,
	EPawnState__GunADS             = 9,
	EPawnState__Picth              = 10,
	EPawnState__SwitchWeapon       = 11,
	EPawnState__Pick               = 12,
	EPawnState__MeleeAttack        = 13,
	EPawnState__HoldGrenade        = 14,
	EPawnState__Save               = 15,
	EPawnState__UseConsumables     = 16,
	EPawnState__Dying              = 17,
	EPawnState__Dead               = 18,
	EPawnState__DriveVehicle       = 19,
	EPawnState__InVehicle          = 20,
	EPawnState__LeanOutVehicle     = 21,
	EPawnState__Swim               = 22,
	EPawnState__InParachute        = 23,
	EPawnState__Vault              = 24,
	EPawnState__InPlane            = 25,
	EPawnState__GunOBOReload       = 26,
	EPawnState__SwitchPP           = 27,
	EPawnState__PlayEmote          = 28,
	EPawnState__HoldShield         = 29,
	EPawnState__MagicDance         = 30,
	EPawnState__Imprisonment       = 31,
	EPawnState__StunBurnNag        = 32,
	EPawnState__GiftCanGive        = 33,
	EPawnState__GiftGiving         = 34,
	EPawnState__GiftReceiving      = 35,
	EPawnState____MAX              = 36,
	EPawnState__EPawnState_MAX     = 37
};


// Enum ShadowTrackerExtra.EUAESkillEvent
enum class EUAESkillEvent : uint8_t
{
	UAESkillEvent_None             = 0,
	GrenadeModeChange              = 1,
	ThrowGrenade                   = 2,
	SkillCancel                    = 3,
	GrenadeTimeOut                 = 4,
	SwitchWeapon                   = 5,
	SwitchWeaponInterrupt          = 6,
	SwitchWeaponFinish             = 7,
	UnequipWeapon                  = 8,
	UnequipWeaponFinish            = 9,
	SkillInterrupt                 = 10,
	SkillPlayerDieInterrupt        = 11,
	PickItem                       = 12,
	CanGiveInterrupt               = 13,
	BeginAccept                    = 14,
	GivingInterrupt                = 15,
	ReceivingInterrupt             = 16,
	EUAESkillEvent_MAX             = 17
};


// Enum ShadowTrackerExtra.EUTSkillEntry
enum class EUTSkillEntry : uint8_t
{
	EUTSkillEntry__SkillEntry_None = 0,
	EUTSkillEntry__SkillEntry_Grenade_Down = 1,
	EUTSkillEntry__SkillEntry_Grenade_Up = 2,
	EUTSkillEntry__SkillEntry_Flash_Down = 3,
	EUTSkillEntry__SkillEntry_Flash_Up = 4,
	EUTSkillEntry__SkillEntry_Smoke_Down = 5,
	EUTSkillEntry__SkillEntry_Smoke_Up = 6,
	EUTSkillEntry__SkillEntry_Molotov_Down = 7,
	EUTSkillEntry__SkillEntry_Molotov_Up = 8,
	EUTSkillEntry__SkillEntry_Melee_Fist_Down = 9,
	EUTSkillEntry__SkillEntry_Melee_Fist_Up = 10,
	EUTSkillEntry__SkillEntry_Melee_Weapon_1_Down = 11,
	EUTSkillEntry__SkillEntry_Melee_Weapon_1_Up = 12,
	EUTSkillEntry__SkillEntry_Melee_Weapon_2_Down = 13,
	EUTSkillEntry__SkillEntry_Melee_Weapon_2_Up = 14,
	EUTSkillEntry__SkillEntry_Melee_Weapon_3_Down = 15,
	EUTSkillEntry__SkillEntry_Melee_Weapon_3_Up = 16,
	EUTSkillEntry__SkillEntry_Melee_Weapon_4_Down = 17,
	EUTSkillEntry__SkillEntry_Melee_Weapon_4_Up = 18,
	EUTSkillEntry__SkillEntry_Bandage_Down = 19,
	EUTSkillEntry__SkillEntry_EnergyDrink_Down = 20,
	EUTSkillEntry__SkillEntry_Painkiller_Down = 21,
	EUTSkillEntry__SkillEntry_AdrenalineSyringe_Down = 22,
	EUTSkillEntry__SkillEntry_FirstAidKit_Down = 23,
	EUTSkillEntry__SkillEntry_MedKit_Down = 24,
	EUTSkillEntry__SkillEntry_GasCan_Down = 25,
	EUTSkillEntry__SkillEntry_GrenadeApple_Down = 26,
	EUTSkillEntry__SkillEntry_GrenadeApple_Up = 27,
	EUTSkillEntry__SkillEntry_GrenadeDance_Down = 28,
	EUTSkillEntry__SkillEntry_GrenadeDance_Up = 29,
	EUTSkillEntry__SkillEntry_ShieldStun_Down = 30,
	EUTSkillEntry__SkillEntry_ShieldStun_Up = 31,
	EUTSkillEntry__SkillEntry_Shield_Melee_Down = 32,
	EUTSkillEntry__SkillEntry_Shield_Melee_Up = 33,
	EUTSkillEntry__SkillEntry_RapidAid_Down = 34,
	EUTSkillEntry__SkillEntry_ToyApple_Down_CG = 35,
	EUTSkillEntry__SkillEntry_ToyApple_Up_CG = 36,
	EUTSkillEntry__SkillEntry_SingerDoll_Down_CG = 37,
	EUTSkillEntry__SkillEntry_SingerDoll_Up_CG = 38,
	EUTSkillEntry__SkillEntry_Snowball_Down = 39,
	EUTSkillEntry__SkillEntry_Snowball_Up = 40,
	EUTSkillEntry__SkillEntry_Pumpkin_Down = 41,
	EUTSkillEntry__SkillEntry_Pumpkin_Up = 42,
	EUTSkillEntry__SkillEntry_Detonator_Down = 43,
	EUTSkillEntry__SkillEntry_Detonator_Up = 44,
	EUTSkillEntry__SkillEntry_FireCracker_Down = 45,
	EUTSkillEntry__SkillEntry_FireCracker_Up = 46,
	EUTSkillEntry__SkillEntry_Detonator_2_Down = 47,
	EUTSkillEntry__SkillEntry_Detonator_2_Up = 48,
	EUTSkillEntry__SkillEntry_FaceCake_Down = 49,
	EUTSkillEntry__SkillEntry_FaceCake_Up = 50,
	EUTSkillEntry__SkillEntry_Fireworks_Down_CG = 51,
	EUTSkillEntry__SkillEntry_Fireworks_Up_CG = 52,
	EUTSkillEntry__SkillEntry_GiftStartGive = 53,
	EUTSkillEntry__SkillEntry_GiftReceive = 54,
	EUTSkillEntry__SkillEntry_GiftStartGiveLamb = 55,
	EUTSkillEntry__SkillEntry_GiftReceiveLamb = 56,
	EUTSkillEntry__SkillEntry_CommonDown = 57,
	EUTSkillEntry__SkillEntry_CommonUp = 58,
	EUTSkillEntry__SkillEntry_FireCracker_NotGrenade = 59,
	EUTSkillEntry__SkillEntry_Max  = 60
};


// Enum ShadowTrackerExtra.EDamageableGameObjectType
enum class EDamageableGameObjectType : uint8_t
{
	EDamageableGameObjectType__EDamageableGameObjectType_Player = 0,
	EDamageableGameObjectType__EDamageableGameObjectType_Monster = 1,
	EDamageableGameObjectType__EDamageableGameObjectType_Vehicle = 2,
	EDamageableGameObjectType__EDamageableGameObjectType_Boss = 3,
	EDamageableGameObjectType__EDamageableGameObjectType_Building = 4,
	EDamageableGameObjectType__EDamageableGameObjectType_MAX = 5
};


// Enum ShadowTrackerExtra.EInviteResponceType
enum class EInviteResponceType : uint8_t
{
	EInviteResponceType__ETimeout  = 0,
	EInviteResponceType__EAgree    = 1,
	EInviteResponceType__ERefuse   = 2,
	EInviteResponceType__EBeInviting = 3,
	EInviteResponceType__EInvalidInvitation = 4,
	EInviteResponceType__ENotAllowedInvite = 5,
	EInviteResponceType__ENotAllowedFollow = 6,
	EInviteResponceType__EInviteResponceType_MAX = 7
};


// Enum ShadowTrackerExtra.ESurviveWeaponPropSlot
enum class ESurviveWeaponPropSlot : uint8_t
{
	SWPS_None                      = 0,
	SWPS_MainShootWeapon1          = 1,
	SWPS_MainShootWeapon2          = 2,
	SWPS_SubShootWeapon            = 3,
	SWPS_MeleeWeapon               = 4,
	SWPS_HandProp                  = 5,
	SWPS_Max                       = 6
};


// Enum ShadowTrackerExtra.EHitPartJugementType
enum class EHitPartJugementType : uint8_t
{
	HitPos                         = 0,
	HitBone                        = 1,
	EHitPartJugementType_MAX       = 2
};


// Enum ShadowTrackerExtra.EGrenadeType
enum class EGrenadeType : uint8_t
{
	UnknownGrenade                 = 0,
	StunGrenade                    = 1,
	FireGrenade                    = 2,
	SmokeGrenade                   = 3,
	FragGrenade                    = 4,
	AppleGrenade                   = 5,
	MagicDanceGrenade              = 6,
	CG_ToyApple                    = 7,
	CG_SingerDoll                  = 8,
	SnowballGrenade                = 9,
	PumpkinGrenade                 = 10,
	Detonator                      = 11,
	FireCracker                    = 12,
	Detonator01                    = 13,
	CakeFace                       = 14,
	ReservedGrenade5               = 15,
	ReservedGrenade6               = 16,
	GrenadeMax                     = 17,
	EGrenadeType_MAX               = 18
};


// Enum ShadowTrackerExtra.EAvatarDamagePosition
enum class EAvatarDamagePosition : uint8_t
{
	EAvatarDamagePosition__Non     = 0,
	EAvatarDamagePosition__BigHead = 1,
	EAvatarDamagePosition__BigLimbs = 2,
	EAvatarDamagePosition__BigBody = 3,
	EAvatarDamagePosition__BigHand = 4,
	EAvatarDamagePosition__BigFoot = 5,
	EAvatarDamagePosition__Wheel0  = 6,
	EAvatarDamagePosition__Wheel1  = 7,
	EAvatarDamagePosition__Wheel2  = 8,
	EAvatarDamagePosition__Wheel3  = 9,
	EAvatarDamagePosition__EAvatarDamagePosition_MAX = 10
};


// Enum ShadowTrackerExtra.EParachuteState
enum class EParachuteState : uint8_t
{
	PS_None                        = 0,
	PS_FreeFall                    = 1,
	PS_Opening                     = 2,
	PS_Landing                     = 3,
	PS_MAX                         = 4
};


// Enum ShadowTrackerExtra.EWeaponHoldType
enum class EWeaponHoldType : uint8_t
{
	EWHT_None                      = 0,
	EWHT_SingleHand                = 1,
	EWHT_TwoHand                   = 2,
	EWHT_Max                       = 3
};


// Enum ShadowTrackerExtra.EWeaponType
enum class EWeaponType : uint8_t
{
	AWT_None                       = 0,
	AWT_Pistol                     = 1,
	AWT_PistolSilencer             = 2,
	AWT_ShotGun                    = 3,
	AWT_SubmachineGun              = 4,
	AWT_RPG                        = 5,
	AWT_ChargeGun                  = 6,
	AWT_Knife                      = 7,
	AWT_EnegyCaptureWhip           = 8,
	AWT_RifleGun                   = 9,
	AWT_MAX                        = 10
};


// Enum ShadowTrackerExtra.ESTExtraVehicleType
enum class ESTExtraVehicleType : uint8_t
{
	ESTExtraVehicleType__VT_Unknown = 0,
	ESTExtraVehicleType__VT_Motorbike = 1,
	ESTExtraVehicleType__VT_Motorbike01 = 2,
	ESTExtraVehicleType__VT_Motorbike_SideCart = 3,
	ESTExtraVehicleType__VT_Motorbike_SideCart01 = 4,
	ESTExtraVehicleType__VT_Dacia  = 5,
	ESTExtraVehicleType__VT_Dacia01 = 6,
	ESTExtraVehicleType__VT_Dacia02 = 7,
	ESTExtraVehicleType__VT_Dacia03 = 8,
	ESTExtraVehicleType__VT_UAZ    = 9,
	ESTExtraVehicleType__VT_UAZ01  = 10,
	ESTExtraVehicleType__VT_UAZ02  = 11,
	ESTExtraVehicleType__VT_Buggy  = 12,
	ESTExtraVehicleType__VT_Buggy01 = 13,
	ESTExtraVehicleType__VT_Buggy02 = 14,
	ESTExtraVehicleType__VT_PG117  = 15,
	ESTExtraVehicleType__VT_Aquarail = 16,
	ESTExtraVehicleType__VT_MiniBus = 17,
	ESTExtraVehicleType__VT_MiniBus01 = 18,
	ESTExtraVehicleType__VT_MiniBus02 = 19,
	ESTExtraVehicleType__VT_PickUp = 20,
	ESTExtraVehicleType__VT_PickUp01 = 21,
	ESTExtraVehicleType__VT_PickUp02 = 22,
	ESTExtraVehicleType__VT_PickUp03 = 23,
	ESTExtraVehicleType__VT_PickUp04 = 24,
	ESTExtraVehicleType__VT_PickUp05 = 25,
	ESTExtraVehicleType__VT_PickUp06 = 26,
	ESTExtraVehicleType__VT_PickUp07 = 27,
	ESTExtraVehicleType__VT_PickUp08 = 28,
	ESTExtraVehicleType__VT_PickUp09 = 29,
	ESTExtraVehicleType__VT_Buggy03 = 30,
	ESTExtraVehicleType__VT_Buggy04 = 31,
	ESTExtraVehicleType__VT_Buggy05 = 32,
	ESTExtraVehicleType__VT_Mirado_Close = 33,
	ESTExtraVehicleType__VT_Mirado_Close01 = 34,
	ESTExtraVehicleType__VT_Mirado_Close02 = 35,
	ESTExtraVehicleType__VT_Mirado_Close03 = 36,
	ESTExtraVehicleType__VT_Mirado_Open = 37,
	ESTExtraVehicleType__VT_Mirado_Open01 = 38,
	ESTExtraVehicleType__VT_Mirado_Open02 = 39,
	ESTExtraVehicleType__VT_Mirado_Open03 = 40,
	ESTExtraVehicleType__VT_UAZ04  = 41,
	ESTExtraVehicleType__VT_Rony   = 42,
	ESTExtraVehicleType__VT_Rony01 = 43,
	ESTExtraVehicleType__VT_Rony02 = 44,
	ESTExtraVehicleType__VT_Scooter = 45,
	ESTExtraVehicleType__VT_Snowmobile = 46,
	ESTExtraVehicleType__VT_Dacia_Snow = 47,
	ESTExtraVehicleType__VT_UAZ_Snow = 48,
	ESTExtraVehicleType__VT_Buggy_Snow = 49,
	ESTExtraVehicleType__VT_Snowmobile_Snow = 50,
	ESTExtraVehicleType__VT_MAX    = 51
};


// Enum ShadowTrackerExtra.EVHSeatSpecialType
enum class EVHSeatSpecialType : uint8_t
{
	EVHSeatSpecial_Common          = 0,
	EVHSeatSpecial_Narrow          = 1,
	EVHSeatSpecial_OutLeft         = 2,
	EVHSeatSpecial_OutRight        = 3,
	EVHSeatSpecial_Max             = 4
};


// Enum ShadowTrackerExtra.EVHSeatWeaponHoldType
enum class EVHSeatWeaponHoldType : uint8_t
{
	ESeatWeapon_None               = 0,
	ESeatWeapon_ShortOnly          = 1,
	ESeatWeapon_All                = 2,
	ESeatWeapon_MAX                = 3
};


// Enum ShadowTrackerExtra.EThrowGrenadeMode
enum class EThrowGrenadeMode : uint8_t
{
	HighThrowMode                  = 0,
	LowThrowMode                   = 1,
	EThrowGrenadeMode_MAX          = 2
};


// Enum ShadowTrackerExtra.ECharacterHealthStatus
enum class ECharacterHealthStatus : uint8_t
{
	HealthyAlive                   = 0,
	HasLastBreath                  = 1,
	FinishedLastBreath             = 2,
	Max                            = 3
};


// Enum ShadowTrackerExtra.EFootStepState
enum class EFootStepState : uint8_t
{
	EFootStepState__Run            = 0,
	EFootStepState__Squat          = 1,
	EFootStepState__Walk           = 2,
	EFootStepState__Crawl          = 3,
	EFootStepState__Fall           = 4,
	EFootStepState__EFootStepState_MAX = 5
};


// Enum ShadowTrackerExtra.EShootVertifyRes
enum class EShootVertifyRes : uint8_t
{
	OK                             = 0,
	ShootBigHead                   = 1,
	ShootPointBigDeviation         = 2,
	ShootBigBoxNull                = 3,
	ShootOtherBlock                = 4,
	NoLagCompensation              = 5,
	ShootTimeTooDelay              = 6,
	MuzzleBigDeviation             = 7,
	ShootHitHeadError              = 8,
	ShootHitRotationError          = 9,
	ShootRangeError                = 10,
	ShootHitInVehicle              = 11,
	ShootHitAITarget               = 12,
	ShootHitVehicleTarget          = 13,
	BulletFlyTimeError             = 14,
	BulletDirError                 = 15,
	BulletImpactOffsetError        = 16,
	CharacterImpactOffsetError     = 17,
	ImpactTargetPassWall           = 18,
	Non                            = 19,
	EShootVertifyRes_MAX           = 20
};


// Enum ShadowTrackerExtra.ESTEScopeType
enum class ESTEScopeType : uint8_t
{
	Normal                         = 0,
	ProneMove                      = 1,
	InFold                         = 2,
	AutoCollapsed                  = 3,
	ESTEScopeType_MAX              = 4
};


// Enum ShadowTrackerExtra.ERecoveryReasonType
enum class ERecoveryReasonType : uint8_t
{
	ERecoveryReason_Medicine       = 0,
	ERecoveryReason_Energy         = 1,
	ERecoveryReason_RescueByTeammate = 2,
	ERecoveryReason_Max            = 3
};


// Enum ShadowTrackerExtra.EUTGiftType
enum class EUTGiftType : uint8_t
{
	Type_Flower                    = 0,
	Type_Lamb                      = 1,
	Type_Max                       = 2
};


// Enum ShadowTrackerExtra.EFootprintType
enum class EFootprintType : uint8_t
{
	EFootprintType__Invalid        = 0,
	EFootprintType__Left           = 1,
	EFootprintType__Right          = 2,
	EFootprintType__EFootprintType_MAX = 3
};


// Enum ShadowTrackerExtra.EFollowState
enum class EFollowState : uint8_t
{
	EFollowState__None             = 0,
	EFollowState__Leader           = 1,
	EFollowState__Follower         = 2,
	EFollowState__EFollowState_MAX = 3
};


// Enum ShadowTrackerExtra.EHealthPredictShowType
enum class EHealthPredictShowType : uint8_t
{
	EHealthPredict_Add             = 0,
	EHealthPredict_Set             = 1,
	EHealthPredict_Max             = 2
};


// Enum ShadowTrackerExtra.EDamageType
enum class EDamageType : uint8_t
{
	EDamageType__InvalidDamageType = 0,
	EDamageType__ShootDamage       = 1,
	EDamageType__PoisonDamage      = 2,
	EDamageType__DrowningDamage    = 3,
	EDamageType__FallingDamage     = 4,
	EDamageType__MeleeDamage       = 5,
	EDamageType__GrenadeRadiusDamage = 6,
	EDamageType__BurningDamage     = 7,
	EDamageType__AirAttackDamage   = 8,
	EDamageType__VehicleDamage     = 9,
	EDamageType__VehicleExplodeRadiusDamage = 10,
	EDamageType__LastBreathWithoutRescue = 11,
	EDamageType__WinnerFakeDeath   = 12,
	EDamageType__YearBeastDamage   = 13,
	EDamageType__EDamageType_MAX   = 14
};


// Enum ShadowTrackerExtra.ETeamNumber
enum class ETeamNumber : uint8_t
{
	ETeamNumber__POLICE            = 0,
	ETeamNumber__TERRORIST         = 1,
	ETeamNumber__CIVILIAN          = 2,
	ETeamNumber__UNKNOWN           = 3,
	ETeamNumber__ETeamNumber_MAX   = 4
};


// Enum ShadowTrackerExtra.EATTaskNodeState
enum class EATTaskNodeState : uint8_t
{
	EATTaskNodeState__EATTaskNodeState_Init = 0,
	EATTaskNodeState__EATTaskNodeState_Process = 1,
	EATTaskNodeState__EATTaskNodeState_End = 2,
	EATTaskNodeState__EATTaskNodeState_MAX = 3
};


// Enum ShadowTrackerExtra.EATTaskNodeExcuteResult
enum class EATTaskNodeExcuteResult : uint8_t
{
	EATTaskNodeExcuteResult__EATTaskNodeExcuteResult_None = 0,
	EATTaskNodeExcuteResult__EATTaskNodeExcuteResult_Success = 1,
	EATTaskNodeExcuteResult__EATTaskNodeExcuteResult_Warning = 2,
	EATTaskNodeExcuteResult__EATTaskNodeExcuteResult_Error = 3,
	EATTaskNodeExcuteResult__EATTaskNodeExcuteResult_MAX = 4
};


// Enum ShadowTrackerExtra.EScreenParticleEffectType
enum class EScreenParticleEffectType : uint8_t
{
	ESPET_None                     = 0,
	ESPET_Rainy                    = 1,
	ESPET_Snowy                    = 2,
	ESPET_Blizzard                 = 3,
	ESPET_Max                      = 4
};


// Enum ShadowTrackerExtra.EPlayerEnegyStage
enum class EPlayerEnegyStage : uint8_t
{
	PES_None                       = 0,
	PES_Stage1                     = 1,
	PES_Stage2                     = 2,
	PES_Stage3                     = 3,
	PES_Stage4                     = 4,
	PES_MAX                        = 5
};


// Enum ShadowTrackerExtra.EDriveCar
enum class EDriveCar : uint8_t
{
	EDriveCar__None                = 0,
	EDriveCar__Buggy               = 1,
	EDriveCar__EDriveCar_MAX       = 2
};


// Enum ShadowTrackerExtra.ExtraPlayerLiveState
enum class ExtraPlayerLiveState : uint8_t
{
	ExtraPlayerLiveState__InDefault = 0,
	ExtraPlayerLiveState__InPlane  = 1,
	ExtraPlayerLiveState__InParachute = 2,
	ExtraPlayerLiveState__InVehicle = 3,
	ExtraPlayerLiveState__InDying  = 4,
	ExtraPlayerLiveState__InDied   = 5,
	ExtraPlayerLiveState__Offline  = 6,
	ExtraPlayerLiveState__ExtraPlayerLiveState_MAX = 7
};


// Enum ShadowTrackerExtra.ETaskConditionType
enum class ETaskConditionType : uint8_t
{
	ETCT_Operator_And              = 0,
	ETCT_Operator_Or               = 1,
	ETCT_GameMode                  = 2,
	ETCT_SpecifiedItemID           = 3,
	ETCT_SpecifiedArea             = 4,
	ETCT_SpecifiedPlace            = 5,
	ETCT_TouchDownLocType          = 6,
	ETCT_Duration                  = 7,
	ETCT_TakeDamage                = 8,
	ETCT_KillPlayer                = 9,
	ETCT_CollectItem               = 10,
	ETCT_TeamAction                = 11,
	ETCT_MAX                       = 12
};


// Enum ShadowTrackerExtra.EStateType
enum class EStateType : uint8_t
{
	EStateType__State_None         = 0,
	EStateType__State_Initial      = 1,
	EStateType__State_Fight        = 2,
	EStateType__State_InPlane      = 3,
	EStateType__State_ParachuteJump = 4,
	EStateType__State_ParachuteOpen = 5,
	EStateType__State_Dead         = 6,
	EStateType__State_Finish       = 7,
	EStateType__State_MAX          = 8
};


// Enum ShadowTrackerExtra.EMsgType
enum class EMsgType : uint8_t
{
	EMsgType__EMsg_GMEnterActive   = 0,
	EMsgType__EMsg_GMExitActive    = 1,
	EMsgType__EMsg_GMEnterReady    = 2,
	EMsgType__EMsg_GMExitReady     = 3,
	EMsgType__EMsg_GMEnterFight    = 4,
	EMsgType__EMsg_GMExitFight     = 5,
	EMsgType__EMsg_GMEnterFinish   = 6,
	EMsgType__EMsg_GMExit          = 7,
	EMsgType__EMsg_PCGotoFight     = 8,
	EMsgType__EMsg_PCGotoPlane     = 9,
	EMsgType__EMsg_PCGotoParachuteJump = 10,
	EMsgType__EMsg_PCGotoParachuteOpen = 11,
	EMsgType__EMsg_PCDie           = 12,
	EMsgType__EMsg_PCRespawn       = 13,
	EMsgType__EMsg_MAX             = 14
};


// Enum ShadowTrackerExtra.ETopMostUIPanelType
enum class ETopMostUIPanelType : uint8_t
{
	ETopUIPanelType_MainInputPanel = 0,
	ETopUIPanelType_BackpackPanel  = 1,
	ETopUIPanelType_MAX            = 2
};


// Enum ShadowTrackerExtra.EWarScoreChangeReason
enum class EWarScoreChangeReason : uint8_t
{
	EWarScoreChangeReason__WarScoreChangeReason_NONE = 0,
	EWarScoreChangeReason__WarScoreChangeReason_WHOLETEAMKILLED = 1,
	EWarScoreChangeReason__WarScoreChangeReason_SAVETEAMMATE = 2,
	EWarScoreChangeReason__WarScoreChangeReason_KNOCKDOWNENEMY = 3,
	EWarScoreChangeReason__WarScoreChangeReason_KILLENEMY = 4,
	EWarScoreChangeReason__WarScoreChangeReason_PICKUPSCOREITEM = 5,
	EWarScoreChangeReason__WarScoreChangeReason_GRABSCORE = 6,
	EWarScoreChangeReason__WarScoreChangeReason_RESOURCEPOINT = 7,
	EWarScoreChangeReason__WarScoreChangeReason_MAX = 8
};


// Enum ShadowTrackerExtra.EWeatherChange
enum class EWeatherChange : uint8_t
{
	EWeatherChange__InitialWeather = 0,
	EWeatherChange__Sunny          = 1,
	EWeatherChange__Rainy          = 2,
	EWeatherChange__Foggy          = 3,
	EWeatherChange__Snowy          = 4,
	EWeatherChange__Blizzard       = 5,
	EWeatherChange__EWeatherChange_MAX = 6
};


// Enum ShadowTrackerExtra.EPressType
enum class EPressType : uint8_t
{
	PressNone                      = 0,
	PressFireBtn                   = 1,
	PressMax                       = 2,
	EPressType_MAX                 = 3
};


// Enum ShadowTrackerExtra.EPhysicalSurfaceDescription
enum class EPhysicalSurfaceDescription : uint8_t
{
	EPhysicalSurfaceDescription__Default = 0,
	EPhysicalSurfaceDescription__Concrete = 1,
	EPhysicalSurfaceDescription__Dirt = 2,
	EPhysicalSurfaceDescription__Water = 3,
	EPhysicalSurfaceDescription__Metal = 4,
	EPhysicalSurfaceDescription__Wood = 5,
	EPhysicalSurfaceDescription__Grass = 6,
	EPhysicalSurfaceDescription__Glass = 7,
	EPhysicalSurfaceDescription__Flesh = 8,
	EPhysicalSurfaceDescription__Steel = 9,
	EPhysicalSurfaceDescription__Sandbag = 10,
	EPhysicalSurfaceDescription__Sand = 11,
	EPhysicalSurfaceDescription__Cloth = 12,
	EPhysicalSurfaceDescription__Plastic = 13,
	EPhysicalSurfaceDescription__Leather = 14,
	EPhysicalSurfaceDescription__Ceramics = 15,
	EPhysicalSurfaceDescription__Paper = 16,
	EPhysicalSurfaceDescription__Stone = 17,
	EPhysicalSurfaceDescription__Snow = 18,
	EPhysicalSurfaceDescription__PopCan = 19,
	EPhysicalSurfaceDescription__Pyrefly = 20,
	EPhysicalSurfaceDescription__Leaf = 21,
	EPhysicalSurfaceDescription__Car = 22,
	EPhysicalSurfaceDescription__Asphalt = 23,
	EPhysicalSurfaceDescription__ConcreteTDM = 24,
	EPhysicalSurfaceDescription__Ice = 25,
	EPhysicalSurfaceDescription__EPhysicalSurfaceDescription_MAX = 26
};


// Enum ShadowTrackerExtra.ETouchFireType
enum class ETouchFireType : uint8_t
{
	NotFire                        = 0,
	ButtonFire                     = 1,
	TouchForceFire                 = 2,
	DoubleClickFire                = 3,
	ETouchFireType_MAX             = 4
};


// Enum ShadowTrackerExtra.EnmSprintOptType
enum class EnmSprintOptType : uint8_t
{
	NoneOpt                        = 0,
	TimeToSprint                   = 1,
	DistToSprint                   = 2,
	EnmSprintOptType_MAX           = 3
};


// Enum ShadowTrackerExtra.EKillOrPutDownMessageType
enum class EKillOrPutDownMessageType : uint8_t
{
	EKillOrPutDownMessageType_YouPutDownPlayer = 0,
	EKillOrPutDownMessageType_YouKilledPlayer = 1,
	EKillOrPutDownMessageType_YouHaveBeenPutDown = 2,
	EKillOrPutDownMessageType_YouHaveBeenKilled = 3,
	EKillOrPutDownMessageType_YourTeammatePutDownPlayer = 4,
	EKillOrPutDownMessageType_YourTeammateKilledPlayer = 5,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDown = 6,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilled = 7,
	EKillOrPutDownMessageType_YouHaveBeenKilledByPoison = 8,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByPoison = 9,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByPoison = 10,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByPoison = 11,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByFallingDown = 12,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByFallingDown = 13,
	EKillOrPutDownMessageType_YouHaveBeenKilledByFallingDown = 14,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByFallingDown = 15,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByDrowing = 16,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByDrowing = 17,
	EKillOrPutDownMessageType_YouHaveBeenKilledByDrowing = 18,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByDrowing = 19,
	EKillOrPutDownMessageType_YouHaveBeenKilledFinally = 20,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledFinally = 21,
	EKillOrPutDownMessageType_YouHaveBeenPutDownByAirAttack = 22,
	EKillOrPutDownMessageType_YourTeammateHaveBeenPutDownByAirAttack = 23,
	EKillOrPutDownMessageType_YouHaveBeenKilledByAirAttack = 24,
	EKillOrPutDownMessageType_YourTeammateHaveBeenKilledByAirAttack = 25,
	EKillOrPutDownMessageType_MAX  = 26
};


// Enum ShadowTrackerExtra.EFatalDamageRelationShip
enum class EFatalDamageRelationShip : uint8_t
{
	MyTeamateIsCauser              = 0,
	NotRelated                     = 1,
	MyTeammateIsVictim             = 2,
	MyTeammateIsCauserAndVictim    = 3,
	EFatalDamageRelationShip_MAX   = 4
};


// Enum ShadowTrackerExtra.EAutoAimType
enum class EAutoAimType : uint8_t
{
	EAutoAimType__FullTime         = 0,
	EAutoAimType__OnlyFire         = 1,
	EAutoAimType__OnlyTouch        = 2,
	EAutoAimType__OnlyNotTouch     = 3,
	EAutoAimType__TouchOrFire      = 4,
	EAutoAimType__EAutoAimType_MAX = 5
};


// Enum ShadowTrackerExtra.EGamePawnEvent
enum class EGamePawnEvent : uint8_t
{
	EGamePawnEvent__None           = 0,
	EGamePawnEvent__Birth          = 1,
	EGamePawnEvent__ViewPlane      = 2,
	EGamePawnEvent__Plane          = 3,
	EGamePawnEvent__Jump           = 4,
	EGamePawnEvent__Parachute      = 5,
	EGamePawnEvent__Land           = 6,
	EGamePawnEvent__Die            = 7,
	EGamePawnEvent__ReBirth        = 8,
	EGamePawnEvent__HeightCheck_High = 9,
	EGamePawnEvent__HeightCheck_Mid = 10,
	EGamePawnEvent__HeightCheck_Low = 11,
	EGamePawnEvent__Fighting       = 12,
	EGamePawnEvent__EGamePawnEvent_MAX = 13
};


// Enum ShadowTrackerExtra.ObjectMovingType
enum class EObjectMovingType : uint8_t
{
	OMT_Uniform                    = 0,
	OMT_Acceleration               = 1,
	OMT_Deceleration               = 2,
	OMT_MAX                        = 3
};


// Enum ShadowTrackerExtra.EPickUpBoxType
enum class EPickUpBoxType : uint8_t
{
	EPickUpBoxType__EPickUpBoxType_TombBox = 0,
	EPickUpBoxType__EPickUpBoxType_AirDropBox = 1,
	EPickUpBoxType__EPickUpBoxType_TreasureBox = 2,
	EPickUpBoxType__EPickUpBoxType_MonsterTombBox = 3,
	EPickUpBoxType__EPickUpBoxType_EquipMentBox = 4,
	EPickUpBoxType__EPickUpBoxType_MAX = 5
};


// Enum ShadowTrackerExtra.ERenderStyle
enum class ERenderStyle : uint8_t
{
	ERenderStyle__Default          = 0,
	ERenderStyle__CLASSIC          = 1,
	ERenderStyle__COLOURFUL        = 2,
	ERenderStyle__REALISTIC        = 3,
	ERenderStyle__SOFT             = 4,
	ERenderStyle__NightVision      = 5,
	ERenderStyle__MOVIE            = 6,
	ERenderStyle__ERenderStyle_MAX = 7
};


// Enum ShadowTrackerExtra.ERenderQuality
enum class ERenderQuality : uint8_t
{
	ERenderQuality__Default        = 0,
	ERenderQuality__SMOOTH         = 1,
	ERenderQuality__BALANCE        = 2,
	ERenderQuality__HIGHDEFINITION = 3,
	ERenderQuality__HIGHDEFINITIONPLUS = 4,
	ERenderQuality__ERenderQuality_MAX = 5
};


// Enum ShadowTrackerExtra.EAIMoveType
enum class EAIMoveType : uint8_t
{
	EAIMoveType__StraightMove      = 0,
	EAIMoveType__CurveMove         = 1,
	EAIMoveType__EAIMoveType_MAX   = 2
};


// Enum ShadowTrackerExtra.EAIWeaponShootType
enum class EAIWeaponShootType : uint8_t
{
	EAIWeaponShootType__SingleShot = 0,
	EAIWeaponShootType__Auto       = 1,
	EAIWeaponShootType__EAIWeaponShootType_MAX = 2
};


// Enum ShadowTrackerExtra.EAINewFocusPriority
enum class EAINewFocusPriority : uint8_t
{
	EAINewFocusPriority__Default   = 0,
	EAINewFocusPriority__Move      = 1,
	EAINewFocusPriority__Gameplay  = 2,
	EAINewFocusPriority__EAINewFocusPriority_MAX = 3
};


// Enum ShadowTrackerExtra.EAIMovePose
enum class EAIMovePose : uint8_t
{
	EAIMovePose__Walk              = 0,
	EAIMovePose__Run               = 1,
	EAIMovePose__CrouchSprint      = 2,
	EAIMovePose__KeepCurrentPose   = 3,
	EAIMovePose__EAIMovePose_MAX   = 4
};


// Enum ShadowTrackerExtra.EAIPoseState
enum class EAIPoseState : uint8_t
{
	EAIPoseState__Stand            = 0,
	EAIPoseState__Crouch           = 1,
	EAIPoseState__Prone            = 2,
	EAIPoseState__Jump             = 3,
	EAIPoseState__EAIPoseState_MAX = 4
};


// Enum ShadowTrackerExtra.EAITriggerAttrType
enum class EAITriggerAttrType : uint8_t
{
	EAITriggerAttrType__None       = 0,
	EAITriggerAttrType__Health     = 1,
	EAITriggerAttrType__Energy     = 2,
	EAITriggerAttrType__EAITriggerAttrType_MAX = 3
};


// Enum ShadowTrackerExtra.EAIAttrCompareType
enum class EAIAttrCompareType : uint8_t
{
	EAIAttrCompareType__None       = 0,
	EAIAttrCompareType__Great      = 1,
	EAIAttrCompareType__Less       = 2,
	EAIAttrCompareType__EAIAttrCompareType_MAX = 3
};


// Enum ShadowTrackerExtra.EAIEquipSpawnItemType
enum class EAIEquipSpawnItemType : uint8_t
{
	EAIEquipSpawnItemType__Shoot_Weap = 0,
	EAIEquipSpawnItemType__Backpack = 1,
	EAIEquipSpawnItemType__other   = 2,
	EAIEquipSpawnItemType__EAIEquipSpawnItemType_MAX = 3
};


// Enum ShadowTrackerExtra.EAirAttackGenerateType
enum class EAirAttackGenerateType : uint8_t
{
	EAirAttackGenerateType__None   = 0,
	EAirAttackGenerateType__Ringtaw = 1,
	EAirAttackGenerateType__Outsider = 2,
	EAirAttackGenerateType__RandomExcludeNone = 3,
	EAirAttackGenerateType__EAirAttackGenerateType_MAX = 4
};


// Enum ShadowTrackerExtra.EExecuteAirDropOrderResult
enum class EExecuteAirDropOrderResult : uint8_t
{
	MakeAirDropOrderDone           = 0,
	UndefinedADFReason             = 1,
	RandomDropFailure              = 2,
	NothingToDrop                  = 3,
	GameNotStart                   = 4,
	GameEnded                      = 5,
	GameStateInvalid               = 6,
	DroppingLocationOutSideLandscape = 7,
	LandscapeExtentInvalid         = 8,
	FlyingDirectionInValid         = 9,
	AirPlaneClassInvalid           = 10,
	NoLandscapeToDrop              = 11,
	EExecuteAirDropOrderResult_MAX = 12
};


// Enum ShadowTrackerExtra.EATTaskGraphState
enum class EATTaskGraphState : uint8_t
{
	EATTaskGraphState__EATTaskGraphsState_Init = 0,
	EATTaskGraphState__EATTaskGraphsState_Process = 1,
	EATTaskGraphState__EATTaskGraphsState_End = 2,
	EATTaskGraphState__EATTaskGraphsState_MAX = 3
};


// Enum ShadowTrackerExtra.EAvatarAttachmentSlot
enum class EAvatarAttachmentSlot : uint8_t
{
	EAvatarAttachmentSlot__NONE    = 0,
	EAvatarAttachmentSlot__Magazine = 1,
	EAvatarAttachmentSlot__MAX     = 2
};


// Enum ShadowTrackerExtra.EReplaceSlot
enum class EReplaceSlot : uint8_t
{
	EReplaceSlot__EReplaceType_NONE = 0,
	EReplaceSlot__EReplaceType_HeadEquipemtSlot = 1,
	EReplaceSlot__EReplaceType_HairEquipemtSlot = 2,
	EReplaceSlot__EReplaceType_HatEquipemtSlot = 3,
	EReplaceSlot__EReplaceType_FaceEquipemtSlot = 4,
	EReplaceSlot__EReplaceType_ClothesEquipemtSlot = 5,
	EReplaceSlot__EReplaceType_PantsEquipemtSlot = 6,
	EReplaceSlot__EReplaceType_ShoesEquipemtSlot = 7,
	EReplaceSlot__EReplaceType_BackpackEquipemtSlot = 8,
	EReplaceSlot__EReplaceType_HelmetEquipemtSlot = 9,
	EReplaceSlot__EReplaceType_ArmorEquipemtSlot = 10,
	EReplaceSlot__EReplaceType_ParachuteEquipemtSlot = 11,
	EReplaceSlot__EReplaceType_VeilSlot = 12,
	EReplaceSlot__EReplaceType_HoodSlot = 13,
	EReplaceSlot__EReplaceType_StockingSlot = 14,
	EReplaceSlot__EReplaceType_BootsSlot = 15,
	EReplaceSlot__EReplaceType_MAX = 16
};


// Enum ShadowTrackerExtra.EBackpackItemType
enum class EBackpackItemType : uint8_t
{
	UnknownBackpackItemType        = 0,
	BackpackItemType_Weapon        = 1,
	BackpackItemType_WeaponAttachment = 2,
	BackpackItemType_Ammo          = 3,
	BackpackItemType_Clothing      = 4,
	BackpackItemType_Armor         = 5,
	BackpackItemType_Consumable    = 6,
	BackpackItemType_Emote         = 7,
	EBackpackItemType_MAX          = 8
};


// Enum ShadowTrackerExtra.EAllAttachmentSet
enum class EAllAttachmentSet : uint8_t
{
	EAllAttachmentSet__GunPoint    = 0,
	EAllAttachmentSet__Grip        = 1,
	EAllAttachmentSet__Magazine    = 2,
	EAllAttachmentSet__Gunstock    = 3,
	EAllAttachmentSet__IronSight   = 4,
	EAllAttachmentSet__RedPointScope = 5,
	EAllAttachmentSet__QXScope     = 6,
	EAllAttachmentSet__X2Scope     = 7,
	EAllAttachmentSet__X4Scope     = 8,
	EAllAttachmentSet__X8Scope     = 9,
	EAllAttachmentSet__EAllAttachmentSet_MAX = 10
};


// Enum ShadowTrackerExtra.EGameFlowCheckPointType
enum class EGameFlowCheckPointType : uint8_t
{
	EGameFlowCheckPointType__ECPT_YearBeastCountingDown = 0,
	EGameFlowCheckPointType__ECPT_WhiteCircleBegin = 1,
	EGameFlowCheckPointType__ECPT_YearBeastPreWarning = 2,
	EGameFlowCheckPointType__ECPT_YearBeastSpawned = 3,
	EGameFlowCheckPointType__ECPT_YearBeastDied = 4,
	EGameFlowCheckPointType__ECPT_YearBeastTimeout = 5,
	EGameFlowCheckPointType__ECPT_MAX = 6
};


// Enum ShadowTrackerExtra.EPathExistanceQueryTypeRestricted
enum class EPathExistanceQueryTypeRestricted : uint8_t
{
	EPathExistanceQueryTypeRestricted__NavmeshRaycast2D = 0,
	EPathExistanceQueryTypeRestricted__RegularPathFinding = 1,
	EPathExistanceQueryTypeRestricted__EPathExistanceQueryTypeRestricted_MAX = 2
};


// Enum ShadowTrackerExtra.EModifyBlackboardDataValueType
enum class EModifyBlackboardDataValueType : uint8_t
{
	EModifyBlackboardDataValueType__Int = 0,
	EModifyBlackboardDataValueType__Float = 1,
	EModifyBlackboardDataValueType__Bool = 2,
	EModifyBlackboardDataValueType__String = 3,
	EModifyBlackboardDataValueType__Object = 4,
	EModifyBlackboardDataValueType__Vector3 = 5,
	EModifyBlackboardDataValueType__EModifyBlackboardDataValueType_MAX = 6
};


// Enum ShadowTrackerExtra.ESTEDealMethod
enum class ESTEDealMethod : uint8_t
{
	Enter                          = 0,
	Leave                          = 1,
	ESTEDealMethod_MAX             = 2
};


// Enum ShadowTrackerExtra.EFocusTurnTargetResult
enum class EFocusTurnTargetResult : uint8_t
{
	EFocusTurnTargetResult__Succeeded = 0,
	EFocusTurnTargetResult__Failed = 1,
	EFocusTurnTargetResult__DontMove = 2,
	EFocusTurnTargetResult__EFocusTurnTargetResult_MAX = 3
};


// Enum ShadowTrackerExtra.ChatFlagType
enum class EChatFlagType : uint8_t
{
	ChatFlagType__FlagNone         = 0,
	ChatFlagType__DanagerForward   = 1,
	ChatFlagType__SaveMe           = 2,
	ChatFlagType__Congregation     = 3,
	ChatFlagType__SuppliesHere     = 4,
	ChatFlagType__GetOnCar         = 5,
	ChatFlagType__NeedSupplies     = 6,
	ChatFlagType__ChatFlagType_MAX = 7
};


// Enum ShadowTrackerExtra.ECameraDataType
enum class ECameraDataType : uint8_t
{
	ECameraDataType_Stand          = 0,
	ECameraDataType_Crouch         = 1,
	ECameraDataType_Prone          = 2,
	ECameraDataType_Indoor         = 3,
	ECameraDataType_LeanLeft       = 4,
	ECameraDataType_LeanRight      = 5,
	ECameraDataType_Vehicle        = 6,
	ECameraDataType_NearDeath      = 7,
	ECameraDataType_PeekLeft       = 8,
	ECameraDataType_PeekRight      = 9,
	ECameraDataType_IndoorLowerCameraStand = 10,
	ECameraDataType_IndoorLowerCameraCrouch = 11,
	ECameraDataType_IndoorLowerCameraProne = 12,
	ECameraDataType_Max            = 13
};


// Enum ShadowTrackerExtra.EWeatherChangeEvent
enum class EWeatherChangeEvent : uint8_t
{
	EWeatherChangeEvent__EWeatherChangeEvent_StartEnter = 0,
	EWeatherChangeEvent__EWeatherChangeEvent_Staturated = 1,
	EWeatherChangeEvent__EWeatherChangeEvent_StartQuit = 2,
	EWeatherChangeEvent__EWeatherChangeEvent_Quit = 3,
	EWeatherChangeEvent__EWeatherChangeEvent_MAX = 4
};


// Enum ShadowTrackerExtra.EWeatherChangeStatus
enum class EWeatherChangeStatus : uint8_t
{
	EWeatherChangeStatus__EWeatherChangeStatus_StartEnter = 0,
	EWeatherChangeStatus__EWeatherChangeStatus_Duration = 1,
	EWeatherChangeStatus__EWeatherChangeStatus_StartQuit = 2,
	EWeatherChangeStatus__EWeatherChangeStatus_MAX = 3
};


// Enum ShadowTrackerExtra.EWeatherStatusType
enum class EWeatherStatusType : uint8_t
{
	EWeatherStatusType__EWeatherStatusType_None = 0,
	EWeatherStatusType__EWeatherStatusType_SunnyDay = 1,
	EWeatherStatusType__EWeatherStatusType_Night = 2,
	EWeatherStatusType__EWeatherStatusType_Fog = 3,
	EWeatherStatusType__EWeatherStatusType_Rain = 4,
	EWeatherStatusType__EWeatherStatusType_Snow = 5,
	EWeatherStatusType__EWeatherStatusType_Blizzard = 6,
	EWeatherStatusType__EWeatherStatusType_MAX = 7
};


// Enum ShadowTrackerExtra.ETRWResOccupyStatus
enum class ETRWResOccupyStatus : uint8_t
{
	OccupyStatus_None              = 0,
	OccupyStatus_OccupyingToFullHeld = 1,
	OccupyStatus_OccupyingToNeutral = 2,
	OccupyStatus_FullHeldToNeutral = 3,
	OccupyStatus_FullHeldToFullHeld = 4,
	OccupyStatus_MAX               = 5
};


// Enum ShadowTrackerExtra.ETRWResObjectState
enum class ETRWResObjectState : uint8_t
{
	TRWResObjectState_Neutral      = 0,
	TRWResObjectState_FullHeld     = 1,
	TRWResObjectState_MAX          = 2
};


// Enum ShadowTrackerExtra.EFPPCameraDataType
enum class EFPPCameraDataType : uint8_t
{
	EFPPCameraType_InVehicle       = 0,
	EFPPCameraType_Max             = 1
};


// Enum ShadowTrackerExtra.ERespawnPointType
enum class ERespawnPointType : uint8_t
{
	ERespawnPointType__Plane       = 0,
	ERespawnPointType__BornPoint   = 1,
	ERespawnPointType__ERespawnPointType_MAX = 2
};


// Enum ShadowTrackerExtra.ELobbyGameType
enum class ELobbyGameType : uint8_t
{
	ELobbyGameType__LobbyTypeMobile = 0,
	ELobbyGameType__LobbyTypeSimulator = 1,
	ELobbyGameType__LobbyTypeExternalSimulator = 2,
	ELobbyGameType__LobbyTypeBlackRoom = 3,
	ELobbyGameType__LobbyTypeNovice = 4,
	ELobbyGameType__ELobbyGameType_MAX = 5
};


// Enum ShadowTrackerExtra.EGameModeType
enum class EGameModeType : uint8_t
{
	EGameModeType__EUnknownGameMode = 0,
	EGameModeType__ETypicalGameMode = 1,
	EGameModeType__EEntertainmentGameMode = 2,
	EGameModeType__EGameModeGroup  = 3,
	EGameModeType__EBattleRoyalCorpsWarMode = 4,
	EGameModeType__EWarGameMode    = 5,
	EGameModeType__EWarGameMode_SuperPower = 6,
	EGameModeType__EWarGameMode_GrandTheft = 7,
	EGameModeType__EWarGameMode_TRW = 8,
	EGameModeType__EWarGameMode_YearBeast = 9,
	EGameModeType__EGameModeType_MAX = 10
};


// Enum ShadowTrackerExtra.EGPCompareType
enum class EGPCompareType : uint8_t
{
	EGPCompareType__CMP_Equal      = 0,
	EGPCompareType__CMP_Less       = 1,
	EGPCompareType__CMP_LessEqual  = 2,
	EGPCompareType__CMP_Greater    = 3,
	EGPCompareType__CMP_GreaterEqual = 4,
	EGPCompareType__CMP_NotEqual   = 5,
	EGPCompareType__CMP_Regex      = 6,
	EGPCompareType__CMP_Mask       = 7,
	EGPCompareType__CMP_MAX        = 8
};


// Enum ShadowTrackerExtra.EGPSourceType
enum class EGPSourceType : uint8_t
{
	EGPSourceType__SRC_PreviousRegexMatch = 0,
	EGPSourceType__SRC_GpuFamily   = 1,
	EGPSourceType__SRC_GlVersion   = 2,
	EGPSourceType__SRC_OSVersion   = 3,
	EGPSourceType__SRC_DeviceMake  = 4,
	EGPSourceType__SRC_DeviceModel = 5,
	EGPSourceType__SRC_VulkanVersion = 6,
	EGPSourceType__SRC_TotalPhysicalGB = 7,
	EGPSourceType__SRC_ProfileName = 8,
	EGPSourceType__SRC_OpenID      = 9,
	EGPSourceType__SRC_MapName     = 10,
	EGPSourceType__SRC_GameModeName = 11,
	EGPSourceType__SRC_MAX         = 12
};


// Enum ShadowTrackerExtra.EIdeaFenceSelector
enum class EIdeaFenceSelector : uint8_t
{
	EIdeaFenceSelector__None       = 0,
	EIdeaFenceSelector__Use        = 1,
	EIdeaFenceSelector__Use01      = 2,
	EIdeaFenceSelector__Use02      = 3,
	EIdeaFenceSelector__Use03      = 4,
	EIdeaFenceSelector__EIdeaFenceSelector_MAX = 5
};


// Enum ShadowTrackerExtra.ELobbyBgMatType
enum class ELobbyBgMatType : uint8_t
{
	ELBS                           = 0,
	EMarketAppearance              = 1,
	EMarketParachute               = 2,
	EMarketWeapon                  = 3,
	ESeasonPass                    = 4,
	ELobbyBgMat_Max                = 5,
	ELobbyBgMatType_MAX            = 6
};


// Enum ShadowTrackerExtra.ENewbieGuidePlayerCategory
enum class ENewbieGuidePlayerCategory : uint8_t
{
	Low                            = 0,
	Middle                         = 1,
	High                           = 2,
	ENewbieGuidePlayerCategory_MAX = 3
};


// Enum ShadowTrackerExtra.ENewbieGuideType
enum class ENewbieGuideType : uint8_t
{
	Op                             = 0,
	Rule                           = 1,
	ENewbieGuideType_MAX           = 2
};


// Enum ShadowTrackerExtra.EWeaponTypeNew
enum class EWeaponTypeNew : uint8_t
{
	EWeaponTypeNew_Other           = 0,
	EWeaponTypeNew_Rifle           = 1,
	EWeaponTypeNew_SingleShotSniper = 2,
	EWeaponTypeNew_BurstShotSniper = 3,
	EWeaponTypeNew_Submachine      = 4,
	EWeaponTypeNew_ShotGun         = 5,
	EWeaponTypeNew_MachineGun      = 6,
	EWeaponTypeNew_Pistol          = 7,
	EWeaponTypeNew_Melee           = 8,
	EWeaponTypeNew_Crossbow        = 9,
	EWeaponTypeNew_MAX             = 10
};


// Enum ShadowTrackerExtra.EBulletImpactDir
enum class EBulletImpactDir : uint8_t
{
	ImpactNormal                   = 0,
	ImpactShootDir                 = 1,
	EBulletImpactDir_MAX           = 2
};


// Enum ShadowTrackerExtra.EMeleeDamageSubType
enum class EMeleeDamageSubType : uint8_t
{
	Fist                           = 0,
	Cowbar                         = 1,
	Pan                            = 2,
	Machete                        = 3,
	Sickle                         = 4,
	EMeleeDamageSubType_MAX        = 5
};


// Enum ShadowTrackerExtra.EPlayerEquipmentLevel
enum class EPlayerEquipmentLevel : uint8_t
{
	PEL                            = 0,
	PEL01                          = 1,
	PEL02                          = 2,
	PEL_MAX                        = 3
};


// Enum ShadowTrackerExtra.EAirDropType
enum class EAirDropType : uint8_t
{
	EAirDropType__AirDrop_None     = 0,
	EAirDropType__AirDrop_NormalAirDrop = 1,
	EAirDropType__AirDrop_SuperAirDrop = 2,
	EAirDropType__AirDrop_FestivalSuperAirDrop = 3,
	EAirDropType__AirDrop_VehicleAirDrop = 4,
	EAirDropType__AirDrop_MAX      = 5
};


// Enum ShadowTrackerExtra.FSoundType
enum class EFSoundType : uint8_t
{
	FSoundType__ESoundMove         = 0,
	FSoundType__ESoundFire         = 1,
	FSoundType__ESoundVehicle      = 2,
	FSoundType__FSoundType_MAX     = 3
};


// Enum ShadowTrackerExtra.EScopeMeshAnimType
enum class EScopeMeshAnimType : uint8_t
{
	ScopeMeshAnimType_Normal       = 0,
	ScopeMeshAnimType_Translate    = 1,
	ScopeMeshAnimType_Scope        = 2,
	ScopeMeshAnimType_MAX          = 3
};


// Enum ShadowTrackerExtra.EBattleTextType
enum class EBattleTextType : uint8_t
{
	EBattleTextType__EBattleTextType_Fist = 0,
	EBattleTextType__EBattleTextType_BurningBomb = 1,
	EBattleTextType__EBattleTextType_Use = 2,
	EBattleTextType__EBattleTextType_ShotAndExplode = 3,
	EBattleTextType__EBattleTextType_Vehicle = 4,
	EBattleTextType__EBattleTextType_You = 5,
	EBattleTextType__EBattleTextType_YourTeammate = 6,
	EBattleTextType__EBattleTextType_By = 7,
	EBattleTextType__EBattleTextType_HeadShot = 8,
	EBattleTextType__EBattleTextType_PutDown = 9,
	EBattleTextType__EBattleTextType_Kill = 10,
	EBattleTextType__EBattleTextType_Killed = 11,
	EBattleTextType__EBattleTextType_Le = 12,
	EBattleTextType__EBattleTextType_Because = 13,
	EBattleTextType__EBattleTextType_CriticalWounded = 14,
	EBattleTextType__EBattleTextType_HighFallingDown = 15,
	EBattleTextType__EBattleTextType_FallToGround = 16,
	EBattleTextType__EBattleTextType_InPosionArea = 17,
	EBattleTextType__EBattleTextType_TooMuchTime = 18,
	EBattleTextType__EBattleTextType_UnderWeater = 19,
	EBattleTextType__EBattleTextType_Finally = 20,
	EBattleTextType__EBattleTextType_AirAttackHit = 21,
	EBattleTextType__EBattleTextType_AccidentalDamage = 22,
	EBattleTextType__EBattleTextType_Myself = 23,
	EBattleTextType__EBattleTextType_Explosion = 24,
	EBattleTextType__EBattleTextType_MAX = 25
};


// Enum ShadowTrackerExtra.EHandlePickUpActionReplicatedDataActionType
enum class EHandlePickUpActionReplicatedDataActionType : uint8_t
{
	EHandlePickUpActionReplicatedDataActionType_None = 0,
	EHandlePickUpActionReplicatedDataActionType_PickUpWeapon = 1,
	EHandlePickUpActionReplicatedDataActionType_PickUpPlayerEquipment = 2,
	EHandlePickUpActionReplicatedDataActionType_PutDownlayerEquipment = 3,
	EHandlePickUpActionReplicatedDataActionType_MAX = 4
};


// Enum ShadowTrackerExtra.EConsumeItemCategory
enum class EConsumeItemCategory : uint8_t
{
	EConsumeItemCategory_None      = 0,
	EConsumeItemCategory_RecoverHealth = 1,
	EConsumeItemCategory_RecoverEnegy = 2,
	EConsumeItemCategory_MAX       = 3
};


// Enum ShadowTrackerExtra.EConsumeItemType
enum class EConsumeItemType : uint8_t
{
	EConsumeItemType_None          = 0,
	EConsumeItemType_Bandage       = 1,
	EConsumeItemType_MedicalBag    = 2,
	EConsumeItemType_MedicalBox    = 3,
	EConsumeItemType_EnegyDrink    = 4,
	EConsumeItemType_PainKillerPills = 5,
	EConsumeItemType_Adrenaline    = 6,
	EConsumeItemType_MAX           = 7
};


// Enum ShadowTrackerExtra.EPlayerEquipmentSlotType
enum class EPlayerEquipmentSlotType : uint8_t
{
	EPlayerEquipmentSlotType_None  = 0,
	EPlayerEquipmentSlotType_HeadEquipemtSlot = 1,
	EPlayerEquipmentSlotType_ChestEquipemtSlot = 2,
	EPlayerEquipmentSlotType_JacketEquipemtSlot = 3,
	EPlayerEquipmentSlotType_BackEquipemtSlot = 4,
	EPlayerEquipmentSlotType_LegsEquipemtSlot = 5,
	EPlayerEquipmentSlotType_FeetEquipemtSlot = 6,
	EPlayerEquipmentSlotType_MAX   = 7
};


// Enum ShadowTrackerExtra.EDataTableType
enum class EDataTableType : uint8_t
{
	EDataTableType_None            = 0,
	EDataTableType_PickUpGlobalDataTable = 1,
	EDataTableType_PickUpGlobalIDAndWrapperDataTable = 2,
	EDataTableType_WeaponDataTable = 3,
	EDataTableType_PlayerEquipmentDataTable = 4,
	EDataTableType_WeaponComponentDataTable = 5,
	EDataTableType_ConsumeItemDataTable = 6,
	EDataTableType_AkEventDataTable = 7,
	EDataTableType_MAX             = 8
};


// Enum ShadowTrackerExtra.ESurvivePickUpType
enum class ESurvivePickUpType : uint8_t
{
	SPUT_RifileGun                 = 0,
	SPUT_SubmachineGun             = 1,
	SPUT_SniperGun                 = 2,
	SPUT_Shotgun                   = 3,
	SPUT_Pistol                    = 4,
	SPUT_Helmet                    = 5,
	SPUT_Chest                     = 6,
	SPUT_Scop                      = 7,
	SPUT_Bandage                   = 8,
	SPUT_MedicalBag                = 9,
	SPUT_MedicalBox                = 10,
	SPUT_EnegyDrink                = 11,
	SPUT_PainKillerPills           = 12,
	SPUT_Adrenaline                = 13,
	SPUT_MAX                       = 14
};


// Enum ShadowTrackerExtra.ESurvivePickUpCategory
enum class ESurvivePickUpCategory : uint8_t
{
	SPUC_MainShootWeapon           = 0,
	SPUC_SubShootWeapon            = 1,
	SPUC_MeleWeapon                = 2,
	SPUC_Prop                      = 3,
	SPUC_PlayerEquipment           = 4,
	SPUC_WeaponComponent           = 5,
	SPUC_ConsumeItem               = 6,
	SPUC_Other                     = 7,
	SPUC_MAX                       = 8
};


// Enum ShadowTrackerExtra.EPostEffectBlendType
enum class EPostEffectBlendType : uint8_t
{
	PEBT_ScanBomb                  = 0,
	PEBT_DeadGray                  = 1,
	PEBT_PropOutline               = 2,
	PEBT_MAX                       = 3
};


// Enum ShadowTrackerExtra.EPlayerBodyPartType
enum class EPlayerBodyPartType : uint8_t
{
	PBPT_Head                      = 0,
	PBPT_LeftArm                   = 1,
	PBPT_RightArm                  = 2,
	PBPT_LeftLeg                   = 3,
	PBPT_RightLeg                  = 4,
	PBPT_Body                      = 5,
	PBPT_MAX                       = 6
};


// Enum ShadowTrackerExtra.EWeaponSlot
enum class EWeaponSlot : uint8_t
{
	Primary                        = 0,
	Secondary                      = 1,
	Pistol                         = 2,
	EWeaponSlot_MAX                = 3
};


// Enum ShadowTrackerExtra.ELoopMoveMode
enum class ELoopMoveMode : uint8_t
{
	ELoopMoveMode__ELoopMoveMode_None = 0,
	ELoopMoveMode__ELoopMoveMode_NoLoop = 1,
	ELoopMoveMode__ELoopMoveMode_Forward = 2,
	ELoopMoveMode__ELoopMoveMode_Back = 3,
	ELoopMoveMode__ELoopMoveMode_MAX = 4
};


// Enum ShadowTrackerExtra.EEffectSpreadState
enum class EEffectSpreadState : uint8_t
{
	EEffectSpreadState__ESS_InitialTrace = 0,
	EEffectSpreadState__ESS_InitialProcess = 1,
	EEffectSpreadState__ESS_Spreading = 2,
	EEffectSpreadState__ESS_SpreadDone = 3,
	EEffectSpreadState__ESS_Ending = 4,
	EEffectSpreadState__ESS_MAX    = 5
};


// Enum ShadowTrackerExtra.EActorCacheID
enum class EActorCacheID : uint8_t
{
	ACID_Bullet                    = 0,
	ACID_BulletImpactEffect        = 1,
	ACID_MAX                       = 2
};


// Enum ShadowTrackerExtra.ESTEScopeState
enum class ESTEScopeState : uint8_t
{
	ScopeOut                       = 0,
	ScopeIn                        = 1,
	ESTEScopeState_MAX             = 2
};


// Enum ShadowTrackerExtra.EReleaseToFireType
enum class EReleaseToFireType : uint8_t
{
	EReleaseToFireType__RELEASEFIRE_NONE = 0,
	EReleaseToFireType__RELEASEFIRE_SHOTGUN = 1,
	EReleaseToFireType__RELEASEFIRE_SNIPER = 2,
	EReleaseToFireType__RELEASEFIRE_BRUST = 3,
	EReleaseToFireType__RELEASEFIRE_MAX = 4
};


// Enum ShadowTrackerExtra.EWeaponFireMode
enum class EWeaponFireMode : uint8_t
{
	WeaponFireMode_Single          = 0,
	WeaponFireMode_Burst           = 1,
	WeaponFireMode_Auto            = 2,
	WeaponFireMode_MAX             = 3
};


// Enum ShadowTrackerExtra.ShootWeaponAnimType
enum class EShootWeaponAnimType : uint8_t
{
	SWAT_Shoot                     = 0,
	SWAT_NoneShoot                 = 1,
	SWAT_Reload                    = 2,
	SWAT_IdleToNoneIdle            = 3,
	SWAT_MAX                       = 4
};


// Enum ShadowTrackerExtra.ESTEWeaponHoldType
enum class ESTEWeaponHoldType : uint8_t
{
	ESTEWeaponHoldType__Hand       = 0,
	ESTEWeaponHoldType__Rifle      = 1,
	ESTEWeaponHoldType__Pistol     = 2,
	ESTEWeaponHoldType__Melee      = 3,
	ESTEWeaponHoldType__ESTEWeaponHoldType_MAX = 4
};


// Enum ShadowTrackerExtra.EAirborne2
enum class EAirborne2 : uint8_t
{
	Airborne                       = 0,
	FreeFall                       = 1,
	Opening                        = 2,
	Landing                        = 3,
	EAirborne2_MAX                 = 4
};


// Enum ShadowTrackerExtra.EAnimBPType
enum class EAnimBPType : uint8_t
{
	EAnimBP_None                   = 0,
	EAnimBP_Vehicle                = 1,
	EAnimBP_TPP                    = 2,
	EAnimBP_FPP                    = 3,
	EAnimBP_Max                    = 4
};


// Enum ShadowTrackerExtra.EPlayerHurtAnimType
enum class EPlayerHurtAnimType : uint8_t
{
	EPlayerHurtAnim_None           = 0,
	EPlayerHurtAnim_Point          = 1,
	EPlayerHurtAnim_Melee          = 2,
	EPlayerHurtAnim_Max            = 3
};


// Enum ShadowTrackerExtra.ESetMatParamType
enum class ESetMatParamType : uint8_t
{
	EMatParamType_Scalar           = 0,
	EMatParamType_Vector           = 1,
	EMatParamType_Texture          = 2,
	EMatParamType_Color            = 3,
	EMatParamType_MAX              = 4
};


// Enum ShadowTrackerExtra.EBuffApplierCondition
enum class EBuffApplierCondition : uint8_t
{
	BuffAppCondition_InSight       = 0,
	BuffAppCondition_InnerRange    = 1,
	BuffAppConditio_Default        = 2,
	EBuffApplierCondition_MAX      = 3
};


// Enum ShadowTrackerExtra.EGameMap
enum class EGameMap : uint8_t
{
	NoMap                          = 0,
	SurviveRoot                    = 1,
	SurviveTestRoot                = 2,
	SurviveRCity                   = 3,
	EGameMap_MAX                   = 4
};


// Enum ShadowTrackerExtra.ELobbyCharacterPosIndex
enum class ELobbyCharacterPosIndex : uint8_t
{
	Self                           = 0,
	Second                         = 1,
	Third                          = 2,
	Fourth                         = 3,
	ELobbyCharacterPosIndex_Max    = 4
};


// Enum ShadowTrackerExtra.EPlayerOperation
enum class EPlayerOperation : uint8_t
{
	None                           = 0,
	Parachute                      = 1,
	Shooting                       = 2,
	Driving                        = 3,
	EPlayerOperation_MAX           = 4
};


// Enum ShadowTrackerExtra.EMapType
enum class EMapType : uint8_t
{
	ENTIREMAP                      = 0,
	MINIMAP                        = 1,
	EMapType_MAX                   = 2
};


// Enum ShadowTrackerExtra.EApplyStatus
enum class EApplyStatus : uint8_t
{
	REVERT                         = 0,
	NO_APPLY                       = 1,
	Apply                          = 2,
	EApplyStatus_MAX               = 3
};


// Enum ShadowTrackerExtra.ELoadMode
enum class ELoadMode : uint8_t
{
	LOW_LOAD                       = 0,
	MEDIUM_LOAD                    = 1,
	HIGH_LOAD                      = 2,
	ELoadMode_MAX                  = 3
};


// Enum ShadowTrackerExtra.ETextVertPos
enum class ETextVertPos : uint8_t
{
	ETextVertPos__Top              = 0,
	ETextVertPos__Center           = 1,
	ETextVertPos__Bottom           = 2,
	ETextVertPos__MAX              = 3
};


// Enum ShadowTrackerExtra.ETextHorzPos
enum class ETextHorzPos : uint8_t
{
	ETextHorzPos__Left             = 0,
	ETextHorzPos__Center           = 1,
	ETextHorzPos__Right            = 2,
	ETextHorzPos__MAX              = 3
};


// Enum ShadowTrackerExtra.ECharOperationType
enum class ECharOperationType : uint8_t
{
	OpMove                         = 0,
	OpSprint                       = 1,
	OpJump                         = 2,
	OpInvalidEnum                  = 3,
	ECharOperationType_MAX         = 4
};


// Enum ShadowTrackerExtra.EOperationRunResult
enum class EOperationRunResult : uint8_t
{
	OpRunning                      = 0,
	OpSuccess                      = 1,
	OpAutoFinish                   = 2,
	OpFail                         = 3,
	OpNotStarted                   = 4,
	EOperationRunResult_MAX        = 5
};


// Enum ShadowTrackerExtra.ETaskTeamActionConditionType
enum class ETaskTeamActionConditionType : uint8_t
{
	ETTACT_SameArea                = 0,
	ETTACT_SameEmote               = 1,
	ETTACT_SameEmoteInSameTime     = 2,
	ETTACT_SameEmoteInSameTimeAndArea = 3,
	ETTACT_MAX                     = 4
};


// Enum ShadowTrackerExtra.ETaskActionType
enum class ETaskActionType : uint8_t
{
	ETAT_Common                    = 0,
	ETAT_CollectItem               = 1,
	ETAT_RedoCollectItem           = 2,
	ETAT_KillPlayer                = 3,
	ETAT_MAX                       = 4
};


// Enum ShadowTrackerExtra.ETaskEventType
enum class ETaskEventType : uint8_t
{
	ETET_TakeDamage                = 0,
	ETET_KillPlayer                = 1,
	ETET_TouchDown                 = 2,
	ETET_DoEmote                   = 3,
	ETET_EnterArea                 = 4,
	ETET_PickupItem                = 5,
	ETET_DropItem                  = 6,
	ETET_MAX                       = 7
};


// Enum ShadowTrackerExtra.ETaskTriggerAreaType
enum class ETaskTriggerAreaType : uint8_t
{
	ETTAT_City_Unknown             = 0,
	ETTAT_City_P                   = 1,
	ETTAT_MilitaryBase             = 2,
	ETTAT_School                   = 3,
	ETTAT_StMartin                 = 4,
	ETTAT_City_Ebo                 = 5,
	ETTAT_City_Lion                = 6,
	ETTAT_City_River               = 7,
	ETTAT_Quarry                   = 8,
	ETTAT_Shami                    = 9,
	ETTAT_MAX                      = 10
};


// Enum ShadowTrackerExtra.ETaskTriggerItemType
enum class ETaskTriggerItemType : uint8_t
{
	ETTIT_DoEmote                  = 0,
	ETTIT_DeathBox                 = 1,
	ETTIT_PicnicMat                = 2,
	ETTIT_CommonArea               = 3,
	ETTIT_MAX                      = 4
};


// Enum ShadowTrackerExtra.ETaskSubType
enum class ETaskSubType : uint8_t
{
	ETST_Specific_area_kill_task   = 0,
	ETST_Dancing_around_box_task   = 1,
	ETST_Dancing_in_area_task      = 2,
	ETST_Dancing_in_position_task  = 3,
	ETST_TeamTogether_in_area_task = 4,
	ETST_TeamDancing_in_area_task  = 5,
	ETST_MAX                       = 6
};


// Enum ShadowTrackerExtra.ETaskType
enum class ETaskType : uint8_t
{
	ETT_Common                     = 0,
	ETT_PureCollection             = 1,
	ETT_MAX                        = 2
};


// Enum ShadowTrackerExtra.EDrivingCheckPointState
enum class EDrivingCheckPointState : uint8_t
{
	DCPS_Invalid                   = 0,
	DCPS_Unpass                    = 1,
	DCPS_Pass                      = 2,
	DCPS_MAX                       = 3
};


// Enum ShadowTrackerExtra.ESkillActionFireType
enum class ESkillActionFireType : uint8_t
{
	AFT_STOP                       = 0,
	AFT_START                      = 1,
	AFT_MAX                        = 2
};


// Enum ShadowTrackerExtra.EVelocityChangeType
enum class EVelocityChangeType : uint8_t
{
	EVelocityChangeType__ESpeed_Up = 0,
	EVelocityChangeType__ESpeed_Down = 1,
	EVelocityChangeType__ESpeed_Both = 2,
	EVelocityChangeType__ESpeed_MAX = 3
};


// Enum ShadowTrackerExtra.ESkillConditionCheckType
enum class ESkillConditionCheckType : uint8_t
{
	ESkillConditionCheckType__ECheck_Once = 0,
	ESkillConditionCheckType__ECheck_Continuous = 1,
	ESkillConditionCheckType__ECheck_MAX = 2
};


// Enum ShadowTrackerExtra.ERecoveryType
enum class ERecoveryType : uint8_t
{
	ERecovery_AddDirectly          = 0,
	ERecovery_AddTo                = 1,
	ERecovery_MAX                  = 2
};


// Enum ShadowTrackerExtra.EValueType
enum class EValueType : uint8_t
{
	EValueType_Percentage          = 0,
	EValueType_Absolute            = 1,
	EValueType_MAX                 = 2
};


// Enum ShadowTrackerExtra.EOperatorType
enum class EOperatorType : uint8_t
{
	EOperator_Equal                = 0,
	EOperator_Greater              = 1,
	EOperator_Less                 = 2,
	EOperator_GreaterEqual         = 3,
	EOperator_LessEqual            = 4,
	EOperator_MAX                  = 5
};


// Enum ShadowTrackerExtra.UTSkill_SoundCue_ListenType
enum class EUTSkill_SoundCue_ListenType : uint8_t
{
	UTSkill_SoundCue_ListenType__Listen_SelfOnly = 0,
	UTSkill_SoundCue_ListenType__Listen_Teammate = 1,
	UTSkill_SoundCue_ListenType__Listen_Target = 2,
	UTSkill_SoundCue_ListenType__Listen_AllTarget = 3,
	UTSkill_SoundCue_ListenType__Listen_All = 4,
	UTSkill_SoundCue_ListenType__Listen_MAX = 5
};


// Enum ShadowTrackerExtra.ELocationFunctionType
enum class ELocationFunctionType : uint8_t
{
	ELFT_AT_POSITION               = 0,
	ELFT_FROM_BB_VECTOR            = 1,
	ELFT_FROM_BB_ACTOR             = 2,
	ELFT_MAX                       = 3
};


// Enum ShadowTrackerExtra.EVHSeatGUIType
enum class EVHSeatGUIType : uint8_t
{
	EVHSeatGUIType_NoSeat          = 0,
	EVHSeatGUIType_Empty           = 1,
	EVHSeatGUIType_Other           = 2,
	EVHSeatGUIType_Self            = 3,
	EVHSeatGUIType_Max             = 4
};


// Enum ShadowTrackerExtra.ESTExtraVehicleUserState
enum class ESTExtraVehicleUserState : uint8_t
{
	ESTExtraVehicleUserState__EVUS_OutOfVehicle = 0,
	ESTExtraVehicleUserState__EVUS_AsDriver = 1,
	ESTExtraVehicleUserState__EVUS_ASPassenger = 2,
	ESTExtraVehicleUserState__EVUS_MAX = 3
};


// Enum ShadowTrackerExtra.EWonderfulCutOutputType
enum class EWonderfulCutOutputType : uint8_t
{
	WonderfulCutOutputType_None    = 0,
	WonderfulCutOutputType_ChickenDinner = 1,
	WonderfulCutOutputType_ShootKill = 2,
	WonderfulCutOutputType_ShootLastBreath = 3,
	WonderfulCutOutputType_ShootDamage = 4,
	WonderfulCutOutputType_MeleeKill = 5,
	WonderfulCutOutputType_MeleeLastBreath = 6,
	WonderfulCutOutputType_GrenadeKill = 7,
	WonderfulCutOutputType_GrenadeLastBreath = 8,
	WonderfulCutOutputType_VehicleKill = 9,
	WonderfulCutOutputType_VehicleLastBreath = 10,
	WonderfulCutOutputType_MAX     = 11
};


// Enum ShadowTrackerExtra.EWonderfulCutShootDamageType
enum class EWonderfulCutShootDamageType : uint8_t
{
	WonderfulCutHurtType_None      = 0,
	WonderfulCutHurtType_Kill      = 1,
	WonderfulCutHurtType_LastBreath = 2,
	WonderfulCutHurtType_Hurt      = 3,
	WonderfulCutHurtType_MAX       = 4
};


// Enum ShadowTrackerExtra.EWonderfulCutCaptureType
enum class EWonderfulCutCaptureType : uint8_t
{
	WonderfulCutCaptureType_None   = 0,
	WonderfulCutCaptureType_ChickenDinner = 1,
	WonderfulCutCaptureType_Circle = 2,
	WonderfulCutCaptureType_Vehicle = 3,
	WonderfulCutCaptureType_Grenade = 4,
	WonderfulCutCaptureType_Melee  = 5,
	WonderfulCutCaptureType_ShootDamage = 6,
	WonderfulCutCaptureType_MAX    = 7
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ShadowTrackerExtra.AIActingCandidateData
// 0x0018
struct FAIActingCandidateData
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
	class AFakePlayerAIController*                     FakePlayerAIController;                                   // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIActingItem
// 0x0020
struct FAIActingItem
{
	float                                              StartSeconds;                                             // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              EndSeconds;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DeadPercent;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                PlayerNumScale;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0010(0x0004) MISSED OFFSET
	TArray<int>                                        WeaponIdList;                                             // 0x0014(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.AIBeginAttackEachOther
// 0x0008
struct FAIBeginAttackEachOther
{
	float                                              BeginAttackEachOtherTime;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightRatingSection;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DeliveryRatingConfig
// 0x0008
struct FDeliveryRatingConfig
{
	float                                              DeliveryInterval;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RightRatingSection;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIDeliveryAreaLimit
// 0x0018
struct FAIDeliveryAreaLimit
{
	struct FVector                                     TopLeftVec;                                               // 0x0000(0x000C) (Edit, IsPlainOldData)
	struct FVector                                     BottomRightVec;                                           // 0x000C(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIRatingDamage
// 0x0010
struct FAIRatingDamage
{
	float                                              RatingDamageScale;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FiringAccuracyRadius;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AIFeedLimit;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectionRightValue;                                        // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIAttackAIRatingDamage
// 0x000C
struct FAIAttackAIRatingDamage
{
	float                                              RatingDamageScale;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              FiringAccuracyRadius;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SectionRightValue;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DeliveryItem
// 0x0008
struct FDeliveryItem
{
	int                                                Percent;                                                  // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DeliveryNum;                                              // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DeliveryPlayerConfig
// 0x0010
struct FDeliveryPlayerConfig
{
	TArray<struct FDeliveryItem>                       DeliveryItem;                                             // 0x0000(0x000C) (Edit, ZeroConstructor)
	float                                              RightRatingSection;                                       // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RegisterTimer
// 0x0018
struct FRegisterTimer
{
	int                                                waveindex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<float>                                      times;                                                    // 0x0004(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0010(0x0008) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AirAttackCfg
// 0x0018
struct FAirAttackCfg
{
	float                                              EscapeTime;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackLastingTime;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AttackAreaRadius;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                TotalBombs;                                               // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                BombsRadius;                                              // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirDropResource
// 0x0018
struct FAirDropResource
{
	class UStaticMesh*                                 AirdropBoxMesh;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           AirdropBoxMaterial;                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 AirdropParachuteMesh;                                     // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           AirdropParachuteMaterial;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             AirdropSmoke;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             AirdropFlash;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirDropAppearanceResourcePath
// 0x0090
struct FAirDropAppearanceResourcePath
{
	struct FSoftObjectPath                             BoxMeshPath;                                              // 0x0000(0x0018) (Edit)
	struct FSoftObjectPath                             BoxMaterialPath;                                          // 0x0018(0x0018) (Edit)
	struct FSoftObjectPath                             ParachuteMeshPath;                                        // 0x0030(0x0018) (Edit)
	struct FSoftObjectPath                             ParahcuteMaterialPath;                                    // 0x0048(0x0018) (Edit)
	struct FSoftObjectPath                             BoxSmokePath;                                             // 0x0060(0x0018) (Edit)
	struct FSoftObjectPath                             BoxFlashPath;                                             // 0x0078(0x0018) (Edit)
};

// ScriptStruct ShadowTrackerExtra.AirDropBoxGenerateWrapperItemData
// 0x0008
struct FAirDropBoxGenerateWrapperItemData
{
	class UClass*                                      WrapperClass;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirDropPlaneParams
// 0x001C
struct FAirDropPlaneParams
{
	float                                              FlyingHeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FlyingSpeed;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AirDropFallingSpeed;                                      // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsUseDebugLocation;                                      // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     DebugDroppingLocation;                                    // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ExtraAirDropRandomParams
// 0x0008
struct FExtraAirDropRandomParams
{
	int                                                TotalDropCount;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TermWeight;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirDropConfig
// 0x0028
struct FAirDropConfig
{
	float                                              AirDropTime;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomDroppingRange;                                      // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DropStuffChance;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              NoLandscapeDelayTime;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanMakeExtraAirdrop;                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	TArray<struct FExtraAirDropRandomParams>           ExtraAirDropRandParamsArray;                              // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              ExtraAirDropRandLowerLimit;                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtraAirDropRandUpperLimit;                               // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.FlareGunAirDropRandomParams
// 0x000C
struct FFlareGunAirDropRandomParams
{
	float                                              SuperAirDropRandomRadius;                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperAirDropRouteRandomRadiusMin;                         // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SuperAirDropRouteRandomRadiusMax;                         // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SuperAirDropBoxDataItem
// 0x0008
struct FSuperAirDropBoxDataItem
{
	float                                              GenerateRate;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UDataTable*                                  Table;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirDropOrder
// 0x0044
struct FAirDropOrder
{
	struct FVector                                     AirDropPlaneSpawnPosition;                                // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     AirDropPlaneFlyingDirection;                              // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AirDropPlaneFlyingSpeed;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AirDropStuffFallingPosition;                              // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TArray<struct FVector>                             BoxFallingPositionArray;                                  // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              AirDropStuffFallingSpeed;                                 // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpecialAirdrop;                                        // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                DropType;                                                 // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           AirDropSummoner;                                          // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirdropType
// 0x001C
struct FAirdropType
{
	int                                                AirdropId;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     AirdropBoxPath;                                           // 0x0004(0x000C) (ZeroConstructor)
	struct FString                                     AirdropPlanePath;                                         // 0x0010(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.DropGroundEffectInfo
// 0x0050
struct FDropGroundEffectInfo
{
	bool                                               bShowGroundEffect;                                        // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              GroundEffectLifeSpan;                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0008(0x0008) MISSED OFFSET
	struct FTransform                                  EffectTransform;                                          // 0x0010(0x0030) (IsPlainOldData)
	class UParticleSystem*                             GroundEffect;                                             // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0044(0x000C) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PickUpItemData
// 0x0030
struct FPickUpItemData
{
	struct FItemDefineID                               ID;                                                       // 0x0000(0x0018) (Edit, BlueprintVisible)
	int                                                Count;                                                    // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBattleItemAdditionalData>           AdditionalDataList;                                       // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                InstanceID;                                               // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.FlyingParam
// 0x0020
struct FFlyingParam
{
	float                                              FlyingSpeed;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     FlyingDirection;                                          // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              AirPlaneSpawnServerTime;                                  // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AirPlaneSpawnLoc;                                         // 0x0014(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AnimationCurveData
// 0x000C
struct FAnimationCurveData
{
	struct FString                                     CurveName;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.AnimationFloatCurveData
// 0x0004 (0x0010 - 0x000C)
struct FAnimationFloatCurveData : public FAnimationCurveData
{
	class UCurveFloat*                                 FloatCurve;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TaskGraphInitParam
// 0x0001
struct FTaskGraphInitParam
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponAnimAsset
// 0x0080
struct FWeaponAnimAsset
{
	struct FName                                       WeaponName;                                               // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponAnimAsset.AnimPose
	unsigned char                                      UnknownData01[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponAnimAsset.AnimAdd
	unsigned char                                      UnknownData02[0x28];                                      // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponAnimAsset.WeaponAnimBP
};

// ScriptStruct ShadowTrackerExtra.ReplacedSlotInfo
// 0x0008
struct FReplacedSlotInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.HideBoneData
// 0x0010
struct FHideBoneData
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x0000(0x0010) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MeshData
// 0x0060
struct FMeshData
{
	class UStaticMesh*                                 stMesh;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMesh*                               skMesh;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstance*                           matIns;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	TArray<class UMaterialInstance*>                   additionalMats;                                           // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	EMeshType                                          meshType;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	TArray<int>                                        hiddenSlots;                                              // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FReplacedSlotInfo>                   replacedSlots;                                            // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	TArray<struct FHideBoneData>                       hideBoneSlots;                                            // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, Transient)
	struct FItemDefineID                               definedID;                                                // 0x0040(0x0018) (Edit, BlueprintVisible, Transient)
	EAvatarSubSlot                                     subSlot;                                                  // 0x0058(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               functionValid;                                            // 0x0059(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MaterialSet
// 0x0030
struct FMaterialSet
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MaterialSet.targetMat
	EAvatarSlotType                                    targetSlot;                                               // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0029(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MeshPackage
// 0x0168
struct FMeshPackage
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.maleStMesh
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.femaleStMesh
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.maleSkMesh
	unsigned char                                      UnknownData03[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.femaleSkMesh
	unsigned char                                      UnknownData04[0x28];                                      // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.maleLODSkMesh
	unsigned char                                      UnknownData05[0x28];                                      // 0x00C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.femaleLODSkMesh
	unsigned char                                      UnknownData06[0x28];                                      // 0x00F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.maleMat
	unsigned char                                      UnknownData07[0x28];                                      // 0x0118(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.MeshPackage.femaleMat
	TArray<struct FMaterialSet>                        additionalMaleMats;                                       // 0x0140(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FMaterialSet>                        additionalFemaleMats;                                     // 0x014C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UMaterialInterface*                          baseMat;                                                  // 0x0158(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      animBP;                                                   // 0x015C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EMeshType                                          meshType;                                                 // 0x0160(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x7];                                       // 0x0161(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AvatarItemData
// 0x0010 (0x0090 - 0x0080)
struct FAvatarItemData : public FBattleItemData
{
	class USkeletalMesh*                               SkeletalMesh;                                             // 0x0080(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh;                                               // 0x0084(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstance*                           matInst;                                                  // 0x0088(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                meshType;                                                 // 0x008C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BodyAttachmentAttrModify
// 0x0014
struct FBodyAttachmentAttrModify
{
	struct FString                                     ModifyAttr;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	EAttrOperator                                      Op;                                                       // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              ModifyValue;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BodyAttachmentConfig
// 0x0024
struct FBodyAttachmentConfig
{
	struct FText                                       AttachmentID;                                             // 0x0000(0x000C) (Edit, DisableEditOnInstance)
	TArray<struct FBodyAttachmentAttrModify>           BodyAttachmentAttrModifiers;                              // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     BodyDurabilityIndexName;                                  // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.ItemDefineSortingInfo
// 0x0020
struct FItemDefineSortingInfo
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018) (BlueprintVisible)
	bool                                               bUsed;                                                    // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bMainHand;                                                // 0x0019(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x001A(0x0006) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SearchedPickUpItemResult
// 0x0038
struct FSearchedPickUpItemResult
{
	class APickUpWrapperActor*                         Wrapper;                                                  // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FPickUpItemData                             MainItemData;                                             // 0x0008(0x0030) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ShadowTrackerExtra.BattleSearchItemSortingInfo
// 0x0048
struct FBattleSearchItemSortingInfo
{
	struct FSearchedPickUpItemResult                   SearchItemResult;                                         // 0x0000(0x0038) (BlueprintVisible)
	bool                                               bHighPriority;                                            // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                pickCount;                                                // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BattleSearchBoxSortingInfo
// 0x0048
struct FBattleSearchBoxSortingInfo
{
	struct FSearchedPickUpItemResult                   pickUpItemResult;                                         // 0x0000(0x0038) (BlueprintVisible)
	bool                                               bHighPriority;                                            // 0x0038(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	int                                                pickCount;                                                // 0x003C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0040(0x0008) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BattleItemSortingInfo
// 0x0020
struct FBattleItemSortingInfo
{
	struct FItemDefineID                               ItemDefineID;                                             // 0x0000(0x0018) (BlueprintVisible)
	bool                                               bHighPriority;                                            // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0019(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BattleWeaponItemDisplayData
// 0x0018
struct FBattleWeaponItemDisplayData
{
	struct FString                                     ItemName;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FString                                     WhiteIconPath;                                            // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.PickUpWrapperItem
// 0x0040
struct FPickUpWrapperItem
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018) (BlueprintVisible)
	int                                                Count;                                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x001C(0x000C) (BlueprintVisible, ZeroConstructor)
	int                                                ParentIndex;                                              // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FName                                       ParentSideAssociationName;                                // 0x0030(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemInstanceID;                                           // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CreateBattleItemHandleAsyncRequest
// 0x0038
struct FCreateBattleItemHandleAsyncRequest
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018)
	class UObject*                                     Outer;                                                    // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Path;                                                     // 0x001C(0x000C) (ZeroConstructor)
	struct FScriptDelegate                             Callback;                                                 // 0x0028(0x0010) (ZeroConstructor, InstancedReference)
};

// ScriptStruct ShadowTrackerExtra.WeaponAttachmentAttrModify
// 0x0014
struct FWeaponAttachmentAttrModify
{
	struct FString                                     ModifyAttr;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	EAttrOperator                                      Op;                                                       // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              ModifyValue;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponAttachmentDesc
// 0x0018
struct FWeaponAttachmentDesc
{
	struct FText                                       Desc;                                                     // 0x0000(0x000C) (Edit, DisableEditOnInstance)
	struct FText                                       DescValue;                                                // 0x000C(0x000C) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.ParticleRes
// 0x0010
struct FParticleRes
{
	class UParticleSystem*                             ParticleRes;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponMeshCfg
// 0x00E0
struct FWeaponMeshCfg
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponMeshCfg.stMesh
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponMeshCfg.skMesh
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponMeshCfg.stMeshLod
	unsigned char                                      UnknownData03[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponMeshCfg.skMeshLod
	unsigned char                                      UnknownData04[0x28];                                      // 0x00A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.WeaponMeshCfg.MeshMat
	class UMaterialInterface*                          baseMat;                                                  // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FParticleRes>                        ParticleEffects;                                          // 0x00CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	EMeshType                                          meshType;                                                 // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData05[0x7];                                       // 0x00D9(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ReplacedAttament
// 0x00F0
struct FReplacedAttament
{
	TArray<struct FItemDefineID>                       targetWeaponIDList;                                       // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FWeaponMeshCfg                              replacedAttachmentCfg;                                    // 0x0010(0x00E0) (Edit, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.WeaponAttachmentConfig
// 0x0178
struct FWeaponAttachmentConfig
{
	struct FText                                       AttachmentName;                                           // 0x0000(0x000C) (Edit, DisableEditOnInstance)
	EWeaponAttachmentSocketType                        AttachmentSocketType;                                     // 0x000C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	EOpticalSightType                                  SightType;                                                // 0x000D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsExtendMaxBulletNumInOneClip;                            // 0x000E(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsSilencer;                                               // 0x000F(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsFireSuppressor;                                         // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsCompensator;                                            // 0x0011(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	TArray<struct FWeaponAttachmentAttrModify>         WeaponAttachmentAttrModifys;                              // 0x0014(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FWeaponAttachmentDesc>               WeaponAttachmentDescs;                                    // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	TMap<int, struct FName>                            socketTypeToName;                                         // 0x002C(0x0050) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FWeaponMeshCfg                              MeshPackage;                                              // 0x0068(0x00E0) (Edit, DisableEditOnInstance)
	TArray<struct FReplacedAttament>                   replacementWeapon;                                        // 0x0148(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<class UAnimationAsset*>                     AttachmentAnimList;                                       // 0x0154(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	struct FItemDefineID                               ParentID;                                                 // 0x0160(0x0018) (Edit, BlueprintVisible)
};

// ScriptStruct ShadowTrackerExtra.AIControllerCachedData
// 0x0028
struct FAIControllerCachedData
{
	class ASTExtraBaseCharacter*                       ControlledPawn;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x24];                                      // 0x0004(0x0024) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.GameModeParam
// 0x0050
struct FGameModeParam
{
	float                                              Radius0;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius1;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Radius3;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bUsingPolygon;                                            // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              Radius2;                                                  // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector2D>                           PolygonPoints;                                            // 0x0014(0x000C) (Edit, ZeroConstructor)
	float                                              BlueCircleRadius;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     MapCenter;                                                // 0x0024(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PlaneSpeed;                                               // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              PlaneHeight;                                              // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CanOpenParachuteHeight;                                   // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ForceOpenParachuteHeight;                                 // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CloseParachuteHeight;                                     // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        ResourcePointIDs;                                         // 0x0044(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.PlaneTypes
// 0x0010
struct FPlaneTypes
{
	int                                                SeasonIdx;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlaneClassFullPath;                                       // 0x0004(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.ClientSettingBaseOnGameMode
// 0x0004
struct FClientSettingBaseOnGameMode
{
	bool                                               bOnlyOpenMonsterCollisionWhenShooting;                    // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBulletImpactFXAttachToTarget;                            // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreSimulateClientBulletImpactFX;                      // 0x0002(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIgnoreSimulateClientMuzzleFX;                            // 0x0003(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirAttackOrder
// 0x001C
struct FAirAttackOrder
{
	int                                                waveindex;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             bombsPosition;                                            // 0x0004(0x000C) (ZeroConstructor)
	TArray<float>                                      bombsInterval;                                            // 0x0010(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.RTPCParamInfo
// 0x0014
struct FRTPCParamInfo
{
	struct FString                                     RTPCKey;                                                  // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              Value;                                                    // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                InterpolationTimeMs;                                      // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ReConnectGameStateInfo
// 0x0098
struct FReConnectGameStateInfo
{
	bool                                               bIsLessning;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              CircleStateStartServerWorldSecond;                        // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CircleStatusLastTime;                                     // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              CircleStatusElapsedTime;                                  // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECircleInfo>                           CircleStatus;                                             // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FVector                                     BlueCircle;                                               // 0x0014(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     OriginalBlueCircle;                                       // 0x0020(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     WhiteCircle;                                              // 0x002C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bActiveScreenSize;                                        // 0x0038(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              ScreenSizeFactor;                                         // 0x003C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ExtraRadius;                                              // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EAirAttackInfo>                        AirAttackStatus;                                          // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	struct FVector                                     AirAttackArea;                                            // 0x0048(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                AirAttackWave;                                            // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     AirplaneStartLocation;                                    // 0x0058(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AirplaneStopLocation;                                     // 0x0064(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AirplaneCanJumpLocation;                                  // 0x0070(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     AirplaneForceJumpLocation;                                // 0x007C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	int                                                PlayerNumOnPlane;                                         // 0x0088(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                BigYearBeastRefreshRemainTime;                            // 0x008C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GameEndRemainTime;                                        // 0x0090(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      LatestGameFlowCheckPointType;                             // 0x0094(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeatherChangeEvent
// 0x0002
struct FWeatherChangeEvent
{
	EWeatherStatusType                                 WeaterType;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeatherChangeEvent                                WeaterChangeEvent;                                        // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CorpsBaseInfo
// 0x0018
struct FCorpsBaseInfo
{
	int                                                ID;                                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     CorpsName;                                                // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                CorpsHeadIconID;                                          // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CorpsGrad;                                                // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CorpsDetailInfo
// 0x0034
struct FCorpsDetailInfo
{
	struct FCorpsBaseInfo                              CorpBaseInfo;                                             // 0x0000(0x0018) (BlueprintVisible, BlueprintReadOnly)
	int                                                CorpsLiveNumber;                                          // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                CorpsTotalNumber;                                         // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TotalKillNumber;                                          // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                OnOutGameRealTimeRank;                                    // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              MaxSurvivalTime;                                          // 0x0028(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              TotalDamage;                                              // 0x002C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bIsOutGame;                                               // 0x0030(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CorpsToPlayerKeyInfo
// 0x0008
struct FCorpsToPlayerKeyInfo
{
	uint32_t                                           PlayerKey;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                CorpsID;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CharacterAutoFollowStruct
// 0x0008
struct FCharacterAutoFollowStruct
{
	bool                                               IsFollowing;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class ASTExtraBaseCharacter*                       Target;                                                   // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CharacterLocAndRot
// 0x0018
struct FCharacterLocAndRot
{
	struct FVector                                     Loc;                                                      // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    Rot;                                                      // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DriveCarNotify
// 0x000C
struct FDriveCarNotify
{
	TEnumAsByte<EDriveCar>                             DriveCar;                                                 // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class ASTExtraBaseCharacter*                       Character;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraWheeledVehicle*                      Vehicle;                                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ActorSpawnData
// 0x0010
struct FActorSpawnData
{
	class UClass*                                      ActorClass;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FTransform>                          SpawnPoints;                                              // 0x0004(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.AIAttrObserver
// 0x0008
struct FAIAttrObserver
{
	EAITriggerAttrType                                 AttrType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAIAttrCompareType                                 CompareType;                                              // 0x0001(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ComparePercentValue;                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponType2Range
// 0x000C
struct FWeaponType2Range
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              NightRange;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponTypeToRange
// 0x0008
struct FWeaponTypeToRange
{
	TEnumAsByte<EWeaponTypeNew>                        WeaponType;                                               // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Range;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeatherToRange
// 0x000C
struct FWeatherToRange
{
	TArray<struct FWeaponTypeToRange>                  Ranges;                                                   // 0x0000(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.InTroubleTeleportConfig
// 0x000C
struct FInTroubleTeleportConfig
{
	float                                              SrcCheckRadius;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DstCheckRadius;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           TryFindDstLocNum;                                         // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DeliverControlRatingConfig
// 0x0010
struct FDeliverControlRatingConfig
{
	int                                                Rating;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius1;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius2;                                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              OuterRadius;                                              // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIDistantJudgeNoftify
// 0x0028
struct FAIDistantJudgeNoftify
{
	float                                              RightValue;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                SetBBValue;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FBlackboardKeySelector                      NotifyBlackBoardKey;                                      // 0x0008(0x0020) (Edit)
};

// ScriptStruct ShadowTrackerExtra.AIEquipSpawnItem
// 0x0014
struct FAIEquipSpawnItem
{
	EAIEquipSpawnItemType                              ItemType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                ItemSpecificID;                                           // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ExtraConfigValue;                                         // 0x000C(0x0008) (Edit, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AIEquipSpawnGroup
// 0x000C
struct FAIEquipSpawnGroup
{
	TArray<struct FAIEquipSpawnItem>                   Item;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.AIEquipSpawnGroupDataBase
// 0x0010
struct FAIEquipSpawnGroupDataBase
{
	float                                              RightTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<struct FAIEquipSpawnGroup>                  AIEquipSpawnGroupList;                                    // 0x0004(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TurnTargetData
// 0x000C
struct FTurnTargetData
{
	float                                              MaxCanTurnAngele;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TurnTargetVelocity;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsFixedTimeTurn;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TurnTargetDataHasCurve
// 0x0018
struct FTurnTargetDataHasCurve
{
	float                                              MaxCanTurnAngele;                                         // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              TurnTargetVelocity;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsFixedTimeTurn;                                          // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsUseCurve;                                               // 0x0009(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	struct FString                                     CurveName;                                                // 0x000C(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.FindBuildingRatingConfig
// 0x0008
struct FFindBuildingRatingConfig
{
	int                                                Rating;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SearchRadius;                                             // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BulletHitInfoUploadData
// 0x0070
struct FBulletHitInfoUploadData
{
	struct FVector                                     ImpactPoint;                                              // 0x0000(0x000C) (IsPlainOldData)
	struct FVector_NetQuantizeNormal                   ImpactNormal;                                             // 0x000C(0x000C)
	struct FVector                                     ImpactActorPos;                                           // 0x0018(0x000C) (IsPlainOldData)
	struct FVector                                     ShootMomentMuzzlePos;                                     // 0x0024(0x000C) (IsPlainOldData)
	struct FVector2D                                   ShootDir2D;                                               // 0x0030(0x0008) (IsPlainOldData)
	unsigned char                                      SurfaceType;                                              // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	uint32_t                                           ShootID;                                                  // 0x003C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint16_t                                           CompensationTime;                                         // 0x0040(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0042(0x0002) MISSED OFFSET
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;                                                // 0x004C(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                TimeStamp;                                                // 0x0054(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ClientTimeStamp;                                          // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      HitBodyType;                                              // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	uint32_t                                           CharacterImpactOffsetSquared;                             // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MuzzleFloorHeight;                                        // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageRate;                                               // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFirstImpact;                                           // 0x006C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x006D(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.LocalShootHitData
// 0x0078
struct FLocalShootHitData
{
	uint32_t                                           ShootID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector_NetQuantize                         ShootingDeviation;                                        // 0x0004(0x000C)
	struct FVector_NetQuantize                         BulletsBornPosition;                                      // 0x0010(0x000C)
	int                                                BulletFlyDistance;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletDown;                                               // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             CurBullet;                                                // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	int                                                ShootInterval;                                            // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletFlyTime;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletShootTime;                                          // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BulletHitTime;                                            // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AimFov;                                                   // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      bulletDamageReduceRatio;                                  // 0x003C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	struct FVector_NetQuantize                         ShootingRecoil;                                           // 0x0040(0x000C)
	unsigned char                                      UnknownData02[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
	int64_t                                            ClientStartTime;                                          // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<int>                                        MrpcsFlow;                                                // 0x0058(0x000C) (ZeroConstructor)
	int                                                AutoAimSpeed;                                             // 0x0064(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimSpeedRateMax;                                      // 0x0068(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeMax;                                          // 0x006C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AutoAimRangeRateMax;                                      // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0074(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CameraSettings
// 0x0014
struct FCameraSettings
{
	float                                              TargetArmLength;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              LagSpeed;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // 0x0008(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MeshSynData
// 0x0020
struct FMeshSynData
{
	struct FItemDefineID                               DefineID;                                                 // 0x0000(0x0018)
	int                                                gender;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	ESyncOperation                                     operationType;                                            // 0x001C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SpawnAndBackpackWeaponReplicatedData
// 0x0050
struct FSpawnAndBackpackWeaponReplicatedData
{
	class ASTExtraWeapon*                              TargetWeapon;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       LogicSocket;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUse;                                                 // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedSwitch;                                              // 0x0011(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0012(0x0006) MISSED OFFSET
	struct FItemDefineID                               ID;                                                       // 0x0018(0x0018) (BlueprintVisible)
	bool                                               bResetBulletNum;                                          // 0x0030(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	int                                                OperationIndex;                                           // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class ACharacter*                                  OwnerCharacter;                                           // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerCharacterName;                                       // 0x003C(0x000C) (BlueprintVisible, ZeroConstructor)
	bool                                               bIsValid;                                                 // 0x0048(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponSystemDataOnSimulateClient
// 0x0038
struct FWeaponSystemDataOnSimulateClient
{
	class ASTExtraWeapon*                              TargetWeapon;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       LogicSocket;                                              // 0x0008(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoUse;                                                 // 0x0010(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	struct FItemDefineID                               ID;                                                       // 0x0018(0x0018) (BlueprintVisible)
	int                                                OperationIndex;                                           // 0x0030(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BagLevel;                                                 // 0x0034(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponReconnectReplicateData
// 0x0058
struct FWeaponReconnectReplicateData
{
	class ASTExtraPlayerController*                    OwnerPlayerController;                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     OwnerPlayerName;                                          // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FName                                       WeaponInventoryLogicSocket;                               // 0x0010(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WeaponBulletNumInClip;                                    // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	uint32_t                                           WeaponShootID;                                            // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	uint32_t                                           WeaponClipID;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFreshWeaponStateType>                 CurWeaponState;                                           // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESTEWeaponShootType>                   CurShootType;                                             // 0x0025(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	int                                                CurShootTotalType;                                        // 0x0028(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
	struct FItemDefineID                               DefineID;                                                 // 0x0030(0x0018) (BlueprintVisible)
	int                                                BackpackPistolListIndex;                                  // 0x0048(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsCurrentWeapon;                                         // 0x004C(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	int                                                OperationIndex;                                           // 0x0050(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponReconnectReplicateDataWrapper
// 0x0060
struct FWeaponReconnectReplicateDataWrapper
{
	struct FWeaponReconnectReplicateData               WeaponReconnectReplicateData;                             // 0x0000(0x0058)
	class ASTExtraWeapon*                              Weapon;                                                   // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x005C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.QuickChatIDAndAudio
// 0x0004
struct FQuickChatIDAndAudio
{
	int                                                chatTextID;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.IngameFriendChatMsg
// 0x0024
struct FIngameFriendChatMsg
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     content;                                                  // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               isSelf;                                                   // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                MsgType;                                                  // 0x001C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bReply;                                                   // 0x0020(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.IngameFriendChat
// 0x000C
struct FIngameFriendChat
{
	TArray<struct FIngameFriendChatMsg>                ChatList;                                                 // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.QuickChatFlag
// 0x0018
struct FQuickChatFlag
{
	EChatFlagType                                      Type;                                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                chatID;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                AlternateChatID;                                          // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                FlagIndex;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                traceDist;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              minDist;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.QuickGroundFlag
// 0x0014
struct FQuickGroundFlag
{
	int                                                Index;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                flagID;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     hitPosition;                                              // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.InGameFilterChatMsg
// 0x0010
struct FInGameFilterChatMsg
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               isMe;                                                     // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.InGameChatMsg
// 0x0034
struct FInGameChatMsg
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (ZeroConstructor)
	uint32_t                                           playerIdentifier;                                         // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     msgContent;                                               // 0x0010(0x000C) (ZeroConstructor)
	int                                                msgID;                                                    // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                audioID;                                                  // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               hitValid;                                                 // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FVector                                     hitPosition;                                              // 0x0028(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CirCleCfg
// 0x0064
struct FCirCleCfg
{
	float                                              DelayTime;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RadiusWhenDestoryMap;                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SafeZoneAppeartime;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TArray<float>                                      BlueCirclePreWarning;                                     // 0x000C(0x000C) (Edit, ZeroConstructor)
	float                                              LastTime;                                                 // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              pain;                                                     // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomBluePoint;                                      // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	struct FVector2D                                   bluepoint;                                                // 0x0024(0x0008) (Edit, IsPlainOldData)
	float                                              blueradius;                                               // 0x002C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bUseCustomWhitePoint;                                     // 0x0030(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	struct FVector2D                                   whitepoint;                                               // 0x0034(0x0008) (Edit, IsPlainOldData)
	float                                              whiteradius;                                              // 0x003C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              alpha;                                                    // 0x0040(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DestinyChance;                                            // 0x0044(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bActiveScreenSize;                                        // 0x0048(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	float                                              ScreenSizeFactor;                                         // 0x004C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ExtraRadius;                                              // 0x0050(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableDamageMagnifier;                                   // 0x0054(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	float                                              DamageMagnifierRange;                                     // 0x0058(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              DamageMagnifier;                                          // 0x005C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 DamageMagnifierCurve;                                     // 0x0060(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CameraOffsetData
// 0x001C
struct FCameraOffsetData
{
	struct FVector                                     SocketOffset;                                             // 0x0000(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x000C(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	float                                              SpringArmLength;                                          // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.HUDRenderObject
// 0x0030
struct FHUDRenderObject
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0000(0x0004) MISSED OFFSET
	bool                                               bHidden;                                                  // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	float                                              RenderPriority;                                           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Position;                                                 // 0x000C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0014(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                RenderColor;                                              // 0x001C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              RenderOpacity;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TextureUVs
// 0x0010
struct FTextureUVs
{
	float                                              U;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.HUDRenderObject_Texture
// 0x003C (0x006C - 0x0030)
struct FHUDRenderObject_Texture : public FHUDRenderObject
{
	class UTexture*                                    Atlas;                                                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FTextureUVs                                 UVs;                                                      // 0x0034(0x0010) (Edit, BlueprintVisible)
	bool                                               bUseTeamColors;                                           // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	TArray<struct FLinearColor>                        TeamColorOverrides;                                       // 0x0048(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bIsBorderElement;                                         // 0x0054(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSlateElement;                                          // 0x0055(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0056(0x0002) MISSED OFFSET
	struct FVector2D                                   RenderOffset;                                             // 0x0058(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              Rotation;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   RotPivot;                                                 // 0x0064(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.HUDRenderObject_Text
// 0x0090 (0x00C0 - 0x0030)
struct FHUDRenderObject_Text : public FHUDRenderObject
{
	unsigned char                                      UnknownData00[0x40];                                      // 0x0030(0x0040) MISSED OFFSET
	struct FText                                       Text;                                                     // 0x0070(0x000C) (Edit, BlueprintVisible)
	class UFont*                                       Font;                                                     // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TextScale;                                                // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDrawShadow;                                              // 0x0084(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0085(0x0003) MISSED OFFSET
	struct FVector2D                                   ShadowDirection;                                          // 0x0088(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FLinearColor                                ShadowColor;                                              // 0x0090(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bDrawOutline;                                             // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00A1(0x0003) MISSED OFFSET
	struct FLinearColor                                OutlineColor;                                             // 0x00A4(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<ETextHorzPos>                          HorzPosition;                                             // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ETextVertPos>                          VertPosition;                                             // 0x00B5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xA];                                       // 0x00B6(0x000A) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.DamageNumber
// 0x0070
struct FDamageNumber
{
	unsigned char                                      UnknownData00[0x70];                                      // 0x0000(0x0070) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.FireEventConfig
// 0x0010
struct FFireEventConfig
{
	int                                                EventID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RandomOccur;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              RandomTimeRange;                                          // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                EventParam;                                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeatherControllerRepData
// 0x001C
struct FWeatherControllerRepData
{
	EWeatherChange                                     WeatherType;                                              // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStarted;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              ElapsedTime;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SaturateTime;                                             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeMultiplier;                                           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlendInStarted;                                           // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlendSaturated;                                           // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlendOutStarted;                                          // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BlendOutEnded;                                            // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeatherObject
// 0x005C
struct FWeatherObject
{
	float                                              MainLight_Density;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                MainLight_Color;                                          // 0x0004(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              MainLight_Temperature;                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SkyLight_Density;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                SkyLight_Color;                                           // 0x001C(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CustomFogLow_DensityCoefficient;                          // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CustomFogLow_Color;                                       // 0x0030(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              CustomFogHigh_DensityCoefficient;                         // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                CustomFogHigh_Color;                                      // 0x0044(0x0010) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              HeightFallOff;                                            // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartDistance;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeatherChangeWeight
// 0x0008
struct FWeatherChangeWeight
{
	EWeatherChange                                     NewWeather;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              Weight;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeatherChangeConfig
// 0x0030
struct FWeatherChangeConfig
{
	float                                              StartTimeMin;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StartTimeMax;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DurationTimeMin;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DurationTimeMax;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeatherChange                                     LastWeather;                                              // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	float                                              LastWeatherAppearTime;                                    // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FWeatherChangeWeight>                WeatherChangeWeights;                                     // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TimeMultiplier;                                           // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeatherChangeControl
// 0x001C
struct FWeatherChangeControl
{
	bool                                               WeatherChangeStarted;                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               WeatherChangeFinished;                                    // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              WeatherChangeStartTime;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ElapsedTime;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	EWeatherChange                                     NextWeather;                                              // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              NextDuration;                                             // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              WeatherTotalWeight;                                       // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TimelineOffset;                                           // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirplaneRouteData
// 0x0028
struct FAirplaneRouteData
{
	float                                              PlaneFlyingProcess;                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   CanJumpLocInMap;                                          // 0x0004(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   ForceJumpLocInMap;                                        // 0x000C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              RouteWidgetRotateAngle;                                   // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              RouteLengthInMap;                                         // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   PlaneLocInMap;                                            // 0x001C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              PlaneRotation;                                            // 0x0024(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MapRealTimeInfo
// 0x0080
struct FMapRealTimeInfo
{
	struct FVector                                     MapCenterToPlayer;                                        // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     MapCenterToBlueCircle;                                    // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     MapCenterToWhiteCircle;                                   // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   PlayerCoord;                                              // 0x0024(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   SpectatedPlayerCoord;                                     // 0x002C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   WhiteCircleCoord;                                         // 0x0034(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   BlueCircleCoord;                                          // 0x003C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              WhiteCircleRadius;                                        // 0x0044(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlueCircleRadius;                                         // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   LastDriveVehicleCoord;                                    // 0x004C(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               bCanPlayerSeeLastVehicle;                                 // 0x0054(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0055(0x0003) MISSED OFFSET
	struct FAirplaneRouteData                          PlaneRouteData;                                           // 0x0058(0x0028) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ShadowTrackerExtra.EquipmentBoxItemData
// 0x0008
struct FEquipmentBoxItemData
{
	int                                                ItemSpecificID;                                           // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.EquipmentBoxItemDataRow
// 0x000C
struct FEquipmentBoxItemDataRow
{
	TArray<struct FEquipmentBoxItemData>               EquipmentBoxItemDataRow;                                  // 0x0000(0x000C) (Edit, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.RepSnapshot
// 0x0034
struct FRepSnapshot
{
	float                                              TimeStamp;                                                // 0x0000(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (Transient, IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     LinearVelocity;                                           // 0x001C(0x000C) (Transient, IsPlainOldData)
	struct FVector                                     AngularVelocity;                                          // 0x0028(0x000C) (Transient, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ClientFatalDamageRecordData
// 0x007C
struct FClientFatalDamageRecordData
{
	struct FString                                     causer;                                                   // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     CauserUID;                                                // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     victimName;                                               // 0x0018(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VictimUID;                                                // 0x0024(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                DamageType;                                               // 0x0030(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                AdditionalParam;                                          // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                DamageWeaponSkin;                                         // 0x0038(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadshot;                                               // 0x003C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x003D(0x0003) MISSED OFFSET
	int                                                ResultHealthStatus;                                       // 0x0040(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFatalDamageRelationShip>              RecordRelationShip;                                       // 0x0044(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0045(0x0003) MISSED OFFSET
	int                                                PreviousHealthStatus;                                     // 0x0048(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                causerAnchorPlatformResID;                                // 0x004C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                causerAnchorPlatformColorID;                              // 0x0050(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                realKillerAnchorPlatformResID;                            // 0x0054(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                realKillerAnchorPlatformColorID;                          // 0x0058(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                victimAnchorPlatformResID;                                // 0x005C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                victimAnchorPlatformColorID;                              // 0x0060(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     CauserPicURL;                                             // 0x0064(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VictimPicURL;                                             // 0x0070(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.SensibilityMode
// 0x0020
struct FSensibilityMode
{
	float                                              NoAim;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sight1X;                                                  // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sight2X;                                                  // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sight3X;                                                  // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sight4X;                                                  // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sight6X;                                                  // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Sight8X;                                                  // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FPPNoAim;                                                 // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SightMaterialConfig
// 0x0008
struct FSightMaterialConfig
{
	int                                                Color;                                                    // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Type;                                                     // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SensibilityConfig
// 0x00AC
struct FSensibilityConfig
{
	struct FSensibilityMode                            NormalMode;                                               // 0x0000(0x0020) (BlueprintVisible)
	struct FSensibilityMode                            FireMode;                                                 // 0x0020(0x0020) (BlueprintVisible)
	struct FSensibilityMode                            MotionMode;                                               // 0x0040(0x0020) (BlueprintVisible)
	float                                              VehicleEye;                                               // 0x0060(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ParachuteEye;                                             // 0x0064(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FPPEye;                                                   // 0x0068(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SideMirrorModeC;                                          // 0x006C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<int, struct FSightMaterialConfig>             MaterialConfigs;                                          // 0x0070(0x0050) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.KillOrPutDownMessage
// 0x0044
struct FKillOrPutDownMessage
{
	TEnumAsByte<EKillOrPutDownMessageType>             MsgType;                                                  // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     AttackActionName;                                         // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     AttackName;                                               // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bIsHeadShot;                                              // 0x001C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x001D(0x0003) MISSED OFFSET
	int                                                KillNum;                                                  // 0x0020(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bShowKillNum;                                             // 0x0024(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FString                                     FullMsg;                                                  // 0x0028(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                victimAnchorPlatformResID;                                // 0x0034(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     VictimPlayerName;                                         // 0x0038(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.CameraData
// 0x0014
struct FCameraData
{
	float                                              CameraFOV;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     SpringArmSocketOffset;                                    // 0x0004(0x000C) (Edit, IsPlainOldData)
	float                                              SpringArmLength;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SwitchCameraData
// 0x0010 (0x0024 - 0x0014)
struct FSwitchCameraData : public FCameraData
{
	float                                              StartCameraSwitchDelayTimeFrom_Normal;                    // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartCameraSwitchDelayTimeFrom_Near;                      // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              StartCameraSwitchDelayTimeFrom_Aim;                       // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              CameraSwitchTime;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CommonCameraModeData
// 0x0024
struct FCommonCameraModeData
{
	struct FSwitchCameraData                           SwitchCameraData;                                         // 0x0000(0x0024) (Edit)
};

// ScriptStruct ShadowTrackerExtra.AimCameraModeData
// 0x0024
struct FAimCameraModeData
{
	struct FSwitchCameraData                           SwitchCameraData;                                         // 0x0000(0x0024) (Edit)
};

// ScriptStruct ShadowTrackerExtra.CameraViewPitchLimitData
// 0x0008
struct FCameraViewPitchLimitData
{
	float                                              ViewPitchMin;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              ViewPitchMax;                                             // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ServerHitEnemyReplicatedData
// 0x0008
struct FServerHitEnemyReplicatedData
{
	class ASTExtraBaseCharacter*                       HitTargetPawn;                                            // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	uint32_t                                           EventID;                                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponSystemReconnectReplicateData
// 0x0028
struct FWeaponSystemReconnectReplicateData
{
	struct FName                                       LastUseNoneGrenadeLogicSlot;                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FName                                       LastUseLogicSlot;                                         // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	TArray<struct FName>                               GrenadeLogicSlotList;                                     // 0x0010(0x000C) (ZeroConstructor)
	TArray<struct FItemDefineID>                       GrenadeDefineIDList;                                      // 0x001C(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TeamMateStateInfo
// 0x0020
struct FTeamMateStateInfo
{
	class ASTExtraPlayerState*                         PlayerState;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     Location;                                                 // 0x0004(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x0010(0x000C) (IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ObservedData
// 0x003C
struct FObservedData
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor)
	bool                                               ShowPicUrl;                                               // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                TeamID;                                                   // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FVector>                             PosList;                                                  // 0x0020(0x000C) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x10];                                      // 0x002C(0x0010) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ImpactMapValueData
// 0x000C
struct FImpactMapValueData
{
	TArray<class ASTEShootWeaponBulletImpactEffect*>   ImpactEffectList;                                         // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.FootprintActorInfo
// 0x0058
struct FFootprintActorInfo
{
	EPhysicalSurfaceDescription                        PhysicalSurface;                                          // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftClassProperty ShadowTrackerExtra.FootprintActorInfo.FootprintClass
	unsigned char                                      UnknownData02[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftClassProperty ShadowTrackerExtra.FootprintActorInfo.FootprintActorClass
};

// ScriptStruct ShadowTrackerExtra.FootprintActorBlock
// 0x000C
struct FFootprintActorBlock
{
	class AFootprintInstanceActor*                     SelfFootprintInstanceActor;                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AFootprintInstanceActor*                     TeammatesFootprintInstanceActor;                          // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AFootprintInstanceActor*                     OthersFootprintInstanceActor;                             // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.FootprintBlock
// 0x000C
struct FFootprintBlock
{
	class AFootprintActor*                             SelfFootprintActor;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AFootprintActor*                             TeammatesFootprintActor;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AFootprintActor*                             OthersFootprintActor;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.TrailMarkActorBlock
// 0x0018
struct FTrailMarkActorBlock
{
	TArray<class ATrailMarkActor*>                     WorkingList;                                              // 0x0000(0x000C) (ZeroConstructor)
	TArray<class ATrailMarkActor*>                     AssignableList;                                           // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.DeviceInfo
// 0x0060
struct FDeviceInfo
{
	struct FString                                     GPUFamily;                                                // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     GLVersion;                                                // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     OSVersion;                                                // 0x0018(0x000C) (ZeroConstructor)
	struct FString                                     DeviceMake;                                               // 0x0024(0x000C) (ZeroConstructor)
	struct FString                                     DeviceModel;                                              // 0x0030(0x000C) (ZeroConstructor)
	struct FString                                     VulkanVersion;                                            // 0x003C(0x000C) (ZeroConstructor)
	struct FString                                     MemorySizeInGB;                                           // 0x0048(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x0054(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WarPlayerStateScore
// 0x0018
struct FWarPlayerStateScore
{
	int                                                Rank;                                                     // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Score;                                                    // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	EWarScoreChangeReason                              ScoreChangeReason;                                        // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                ScoreChangeCauserPlayerID;                                // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HighestScore;                                             // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                FollowScore;                                              // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SearchedTombBoxAndWrapperListResult
// 0x0010
struct FSearchedTombBoxAndWrapperListResult
{
	class APlayerTombBox*                              Box;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FSearchedPickUpItemResult>           SearchedPickUpItemResultList;                             // 0x0004(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.GPProfileMatchItem
// 0x0010
struct FGPProfileMatchItem
{
	TEnumAsByte<EGPSourceType>                         SourceType;                                               // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EGPCompareType>                        CompareType;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	struct FString                                     MatchString;                                              // 0x0004(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.GPProfileMatch
// 0x0018
struct FGPProfileMatch
{
	struct FString                                     Profile;                                                  // 0x0000(0x000C) (ZeroConstructor)
	TArray<struct FGPProfileMatchItem>                 Match;                                                    // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.GrenadePredictResult
// 0x0028
struct FGrenadePredictResult
{
	TArray<struct FVector>                             SplinePoints;                                             // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               IsHitActor;                                               // 0x000C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     HitActorLocation;                                         // 0x0010(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FRotator                                    HitActorRotation;                                         // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.GuideInfo
// 0x001C
struct FGuideInfo
{
	class UWidget*                                     Widget;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                guildUI;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   Offset;                                                   // 0x0008(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   Size;                                                     // 0x0010(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	int                                                childData;                                                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ItemsBoxConfigDataAssetConfigItem
// 0x0010
struct FItemsBoxConfigDataAssetConfigItem
{
	float                                              ProbabilityPercent;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     CategoryFilter;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.ItemsBoxConfigDataAssetConfigGroup
// 0x0018
struct FItemsBoxConfigDataAssetConfigGroup
{
	struct FString                                     GroupName;                                                // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FItemsBoxConfigDataAssetConfigItem>  ConfigItems;                                              // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.ServerCheckBox
// 0x004C
struct FServerCheckBox
{
	TEnumAsByte<ESTEPoseState>                         PoseID;                                                   // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     BodyBoundBoxExtent;                                       // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     HeadBoundBoxExtent;                                       // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     PitchOffset;                                              // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ReferenceHSlope;                                          // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ReferenceVSlope;                                          // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HMinScale;                                                // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VMinScale;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HMaxScale;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VMaxScale;                                                // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CharacterHistoryData
// 0x0060
struct FCharacterHistoryData
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FBox                                        BoundBox;                                                 // 0x0018(0x001C) (IsPlainOldData)
	struct FBox                                        HeadBoundBox;                                             // 0x0034(0x001C) (IsPlainOldData)
	bool                                               IsInVehicle;                                              // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	struct FVector                                     VehicleLocation;                                          // 0x0054(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.HeightLOD
// 0x0008
struct FHeightLOD
{
	float                                              Height;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                LOD;                                                      // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.LensFlareElement
// 0x0028
struct FLensFlareElement
{
	float                                              Position;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Size;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   UV0;                                                      // 0x0008(0x0008) (Edit, IsPlainOldData)
	struct FVector2D                                   UVSize;                                                   // 0x0010(0x0008) (Edit, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // 0x0018(0x0010) (Edit, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.LobbyBgMatData
// 0x0008
struct FLobbyBgMatData
{
	TEnumAsByte<ELobbyBgMatType>                       matType;                                                  // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UMaterialInstance*                           matPtr;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MonsterStatusMat
// 0x0010
struct FMonsterStatusMat
{
	int                                                Status;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0004(0x000C) UNKNOWN PROPERTY: ArrayProperty ShadowTrackerExtra.MonsterStatusMat.matList
};

// ScriptStruct ShadowTrackerExtra.DamageFlow
// 0x0028
struct FDamageFlow
{
	struct FString                                     EnemyUserName;                                            // 0x0000(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	uint64_t                                           EnemyRoleUID;                                             // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     HurtTime;                                                 // 0x0018(0x000C) (ZeroConstructor)
	int                                                Damage;                                                   // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SpawnGroupItemInfo
// 0x000C
struct FSpawnGroupItemInfo
{
	int                                                PawnGroupID;                                              // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PawnID;                                                   // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PawnPercent;                                              // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SpawnTableData
// 0x0010
struct FSpawnTableData
{
	int                                                PawnID;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     PathName;                                                 // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.MoveCheatAntiStrategy
// 0x0080
struct FMoveCheatAntiStrategy
{
	uint32_t                                           bIsOpen;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxAllowClientSideTimeLag;                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CheckTimeSpeedIntervel;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowCheatMoveTimes;                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveDistanceScaleFactor;                               // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxPublishForbidMoveTime;                                 // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ServerSendPingIntervel;                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveSpeedValue;                                        // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxSpeedSplitNum;                                         // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxContinuousCheatMoveTimes;                              // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x58];                                      // 0x0028(0x0058) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MoveCheatAntiStrategy2
// 0x0050
struct FMoveCheatAntiStrategy2
{
	uint32_t                                           bIsOpen;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CheckTimeSpeedIntervel;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowCheatMoveTimes;                                   // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveDistanceScaleFactor;                               // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxPublishForbidMoveTime;                                 // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveSpeedValue;                                        // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxSpeedSplitNum;                                         // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x34];                                      // 0x001C(0x0034) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CharacterZMoveDistanceCheck
// 0x0034
struct FCharacterZMoveDistanceCheck
{
	uint32_t                                           bIsOpen;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MaxAllowCheatMoveTimes;                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              MaxAllowMoveZHeight;                                      // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x28];                                      // 0x000C(0x0028) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SubLevelComponentMapValue
// 0x00F4
struct FSubLevelComponentMapValue
{
	struct FString                                     Name;                                                     // 0x0000(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        IndexOffsetArray;                                         // 0x000C(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        VertexOffsetIndex;                                        // 0x0018(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex1;                                             // 0x0024(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex2;                                             // 0x0030(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex3;                                             // 0x003C(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndex4;                                             // 0x0048(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex1;                                        // 0x0054(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex2;                                        // 0x0060(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex3;                                        // 0x006C(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        UnderBorderIndex4;                                        // 0x0078(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer1;                                     // 0x0084(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer2;                                     // 0x0090(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer3;                                     // 0x009C(0x000C) (Edit, ZeroConstructor)
	TArray<int>                                        BorderIndicesBuffer4;                                     // 0x00A8(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Sibling1Name;                                             // 0x00B4(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Sibling2Name;                                             // 0x00C0(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Sibling3Name;                                             // 0x00CC(0x000C) (Edit, ZeroConstructor)
	struct FString                                     Sibling4Name;                                             // 0x00D8(0x000C) (Edit, ZeroConstructor)
	int                                                Sibling1Idx;                                              // 0x00E4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Sibling2Idx;                                              // 0x00E8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Sibling3Idx;                                              // 0x00EC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                Sibling4Idx;                                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.NewbieGuideItem
// 0x004C
struct FNewbieGuideItem
{
	int                                                ID;                                                       // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Name;                                                     // 0x0004(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	TEnumAsByte<ENewbieGuideType>                      Type;                                                     // 0x0010(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	int                                                MaxGuideCounts;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<TEnumAsByte<ENewbieGuidePlayerCategory>>    SubjectPlayerTypes;                                       // 0x0018(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	int                                                Priority;                                                 // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MuteFlag;                                                 // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                PreconditionID;                                           // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PreconditionTipTimeGap;                                   // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class USTNewbieGuideConditionBase*>         Conditions;                                               // 0x0034(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	class USTNewbieGuideSuccessListenerBase*           QuickFinishedListener;                                    // 0x0040(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	float                                              Duration;                                                 // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0048(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PlaneData
// 0x0074
struct FPlaneData
{
	int                                                FlightNo;                                                 // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bStarted;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
	class AActor*                                      ThePlane;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bCanJump;                                                 // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FVector                                     PlaneVelocity;                                            // 0x0010(0x000C) (IsPlainOldData)
	struct FVector                                     PlaneStartLoc;                                            // 0x001C(0x000C) (IsPlainOldData)
	struct FVector                                     PlaneEndLoc;                                              // 0x0028(0x000C) (IsPlainOldData)
	struct FVector2D                                   CanJumpLoc;                                               // 0x0034(0x0008) (IsPlainOldData)
	struct FVector2D                                   ForceJumpLoc;                                             // 0x003C(0x0008) (IsPlainOldData)
	int                                                TotalPlayerNum;                                           // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class APlayerController*>                   TotalPlayers;                                             // 0x0048(0x000C) (ZeroConstructor)
	TArray<class APlayerController*>                   CurPlayers;                                               // 0x0054(0x000C) (ZeroConstructor)
	int                                                TotalAINum;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class AAIController*>                       TotalAIs;                                                 // 0x0064(0x000C) (ZeroConstructor)
	int                                                CurAINum;                                                 // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RandomPropData
// 0x0020
struct FRandomPropData
{
	TArray<int>                                        ItemIDs;                                                  // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor, Transient)
	TArray<int>                                        ItemCounts;                                               // 0x000C(0x000C) (BlueprintVisible, ZeroConstructor, Transient)
	int                                                RuleID;                                                   // 0x0018(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                Weight;                                                   // 0x001C(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DropItemConfig
// 0x0010
struct FDropItemConfig
{
	int                                                ItemDropPercent;                                          // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemDropRuleStartID;                                      // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemDropRuleEndID;                                        // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemDropMode;                                             // 0x000C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DropPropData
// 0x000C
struct FDropPropData
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                ItemCount;                                                // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	int                                                DropMode;                                                 // 0x0008(0x0004) (BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RespawnItem
// 0x0008
struct FRespawnItem
{
	int                                                ItemTableID;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Count;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RespawnItemMinorGroup
// 0x0010
struct FRespawnItemMinorGroup
{
	int                                                RandomWeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FRespawnItem>                        ItemList;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.RespawnItemMajorGroup
// 0x0010
struct FRespawnItemMajorGroup
{
	int                                                RandomTimes;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FRespawnItemMinorGroup>              MinorGroupList;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.RespawnRuleConfig
// 0x000C
struct FRespawnRuleConfig
{
	int                                                RoundIndex;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ActiveTime;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              RespawnTime;                                              // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STPointDamageEvent
// 0x0000 (0x00A0 - 0x00A0)
struct FSTPointDamageEvent : public FPointDamageEvent
{

};

// ScriptStruct ShadowTrackerExtra.ShootWeaponDamageEvent
// 0x0020 (0x00C0 - 0x00A0)
struct FShootWeaponDamageEvent : public FSTPointDamageEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SecurityLogHitTargetInfo
// 0x0020
struct FSecurityLogHitTargetInfo
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.FPSMonitorConfigSwitch
// 0x0014
struct FFPSMonitorConfigSwitch
{
	bool                                               bFPSMonitor;                                              // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              FPSCollectInternal;                                       // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FPSCollectCountForGroup;                                  // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FPSThreshold;                                             // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FPSLowActionType;                                         // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.FXDistancaScaleStruct
// 0x0010
struct FFXDistancaScaleStruct
{
	float                                              FXStartScaleDistance;                                     // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXEndScaleDistance;                                       // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXStartScaleValue;                                        // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FXEndScaleValue;                                          // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SurviveTableRowBase
// 0x0008 (0x000C - 0x0004)
struct FSurviveTableRowBase : public FTableRowBase
{
	int                                                ID;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                PickUpSoundID;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PickUpGlobalDataTableRow
// 0x00F4 (0x0100 - 0x000C)
struct FPickUpGlobalDataTableRow : public FSurviveTableRowBase
{
	TEnumAsByte<ESurvivePickUpGlobalCategory>          SurvivePickUpGlobalCategory;                              // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	struct FSlateBrush                                 SmallProfileImage;                                        // 0x0010(0x0068) (Edit, BlueprintVisible)
	struct FSlateBrush                                 LargerProfileImage;                                       // 0x0078(0x0068) (Edit, BlueprintVisible)
	struct FString                                     Name;                                                     // 0x00E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Description;                                              // 0x00EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                DisplayPriority;                                          // 0x00F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponComponentDataTableRow
// 0x000C (0x0018 - 0x000C)
struct FWeaponComponentDataTableRow : public FSurviveTableRowBase
{
	int                                                WeaponComponentID;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EWeaponComponentType>                  Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	class UStaticMesh*                                 ShowMesh;                                                 // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponComponentItemData
// 0x0118
struct FWeaponComponentItemData
{
	struct FPickUpGlobalDataTableRow                   PickUpGlobalDataTableRow;                                 // 0x0000(0x0100) (BlueprintVisible, BlueprintReadOnly)
	struct FWeaponComponentDataTableRow                WeaponComponentDataTableRow;                              // 0x0100(0x0018) (BlueprintVisible, BlueprintReadOnly)
};

// ScriptStruct ShadowTrackerExtra.WeaponHitPartCoff
// 0x0014
struct FWeaponHitPartCoff
{
	float                                              Head;                                                     // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Body;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Limbs;                                                    // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Hand;                                                     // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Foot;                                                     // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SRangeAttenuateConfig
// 0x000C
struct FSRangeAttenuateConfig
{
	int                                                rangeStart;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                rangeEnd;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              rangeAttenuateFactor;                                     // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AutoAimingRangeConfig
// 0x0048
struct FAutoAimingRangeConfig
{
	float                                              Speed;                                                    // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeRate;                                                // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedRate;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RangeRateSight;                                           // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpeedRateSight;                                           // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CrouchRate;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ProneRate;                                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DyingRate;                                                // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DriveVehicleRate;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InVehicleRate;                                            // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FreeFallRate;                                             // 0x0028(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OpeningRate;                                              // 0x002C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LandingRate;                                              // 0x0030(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              adsorbMaxRange;                                           // 0x0034(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              adsorbMinRange;                                           // 0x0038(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              adsorbMinAttenuationDis;                                  // 0x003C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              adsorbMaxAttenuationDis;                                  // 0x0040(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              adsorbActiveMinRange;                                     // 0x0044(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AutoAimingConfig
// 0x0094
struct FAutoAimingConfig
{
	struct FAutoAimingRangeConfig                      OuterRange;                                               // 0x0000(0x0048) (Edit)
	struct FAutoAimingRangeConfig                      InnerRange;                                               // 0x0048(0x0048) (Edit)
	float                                              followTimeMax;                                            // 0x0090(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SRecoilInfo
// 0x0064
struct FSRecoilInfo
{
	float                                              VerticalRecoilMin;                                        // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoilMax;                                        // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoilVariation;                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoveryModifier;                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoveryClamp;                                    // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VerticalRecoveryMax;                                      // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LeftMax;                                                  // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RightMax;                                                 // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              HorizontalTendency;                                       // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveVector*                                RecoilCurve;                                              // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BulletPerSwitch;                                          // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TimePerSwitch;                                            // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               SwitchOnTime;                                             // 0x0030(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0031(0x0003) MISSED OFFSET
	float                                              RecoilSpeedVertical;                                      // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilSpeedHorizontal;                                    // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecovertySpeedVertical;                                   // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilValueClimb;                                         // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilValueFail;                                          // 0x0044(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilModifierStand;                                      // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilModifierCrouch;                                     // 0x004C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilModifierProne;                                      // 0x0050(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RecoilHorizontalMinScalar;                                // 0x0054(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              BurstEmptyDelay;                                          // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ShootSightReturn;                                         // 0x005C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	float                                              ShootSightReturnSpeed;                                    // 0x0060(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SDeviation
// 0x0040
struct FSDeviation
{
	float                                              DeviationBase;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationBaseAim;                                         // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationBaseADS;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationRecoilGain;                                      // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationRecoilGainAim;                                   // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationRecoilGainADS;                                   // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMax;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMinMove;                                         // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMaxMove;                                         // 0x0020(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMoveMultiplier;                                  // 0x0024(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMoveMinRefrence;                                 // 0x0028(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationMoveMaxRefrence;                                 // 0x002C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceStand;                                     // 0x0030(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceCrouch;                                    // 0x0034(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceProne;                                     // 0x0038(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeviationStanceJump;                                      // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SimulateSyncSmooth
// 0x00E8
struct FSimulateSyncSmooth
{
	float                                              MaxPredictMoveTime;                                       // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularDeltaThreshold;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularInterpAlpha;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AngularRecipFixTime;                                      // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearDeltaThresholdSq;                                   // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearInterpAlpha;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LinearRecipFixTime;                                       // 0x0018(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SpeedThresholdSq;                                         // 0x001C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MaxMoveDeltaTime;                                         // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmoothNetUpdateTime;                                      // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SmoothNetUpdateRotationTime;                              // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xBC];                                      // 0x002C(0x00BC) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SegamentData
// 0x0010
struct FSegamentData
{
	struct FVector                                     TargetLocation;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              MoveSpeed;                                                // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.GiftFanPickerData
// 0x0018
struct FGiftFanPickerData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HightDiff;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsShowDebugFan;                                           // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTrace;                                             // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              LowerTraceRatio;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SweepSingleSize;                                          // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.anPickerData
// 0x0014
struct FanPickerData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Offset;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsShowDebugFan;                                           // 0x000C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableTrace;                                             // 0x000D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000E(0x0002) MISSED OFFSET
	float                                              LowerTraceRatio;                                          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DecalData
// 0x001C
struct FDecalData
{
	float                                              DecalSize;                                                // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              LifeSpan;                                                 // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterial*                                   DecalMaterial;                                            // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactEffectStartScaleDistance;                           // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactEffectEndScaleDistance;                             // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactEffectStartScaleValue;                              // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ImpactEffectEndScaleValue;                                // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AirborneSpeed
// 0x0040
struct FAirborneSpeed
{
	struct FVector                                     minSpeed;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MaxSpeed;                                                 // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     NormalSpeed;                                              // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     VerticalSpeed;                                            // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TurnSpeed;                                                // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     TurnSpeedV;                                               // 0x0034(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SceneCompUpdateOptimizationItem
// 0x0005
struct FSceneCompUpdateOptimizationItem
{
	unsigned char                                      UnknownData00[0x5];                                       // 0x0000(0x0005) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponAttrModifyData
// 0x0014
struct FWeaponAttrModifyData
{
	struct FString                                     ModifyAttr;                                               // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	EAttrOperator                                      Op;                                                       // 0x000C(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              ModifyValue;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponAttrModifyConfig
// 0x0018
struct FWeaponAttrModifyConfig
{
	struct FString                                     ModifyConfigID;                                           // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FWeaponAttrModifyData>               WeaponAttrModifiers;                                      // 0x000C(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.YearBeastTurnSectionData
// 0x0010
struct FYearBeastTurnSectionData
{
	float                                              AngelMin;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       SectionName;                                              // 0x0008(0x0008) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponSlotSwitchTimeData
// 0x000C
struct FWeaponSlotSwitchTimeData
{
	TEnumAsByte<ESurviveWeaponPropSlot>                EquipSlot;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	float                                              TotalTime;                                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AttachWeaponTime;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BodyTypeDef
// 0x0008
struct FBodyTypeDef
{
	int                                                UpThreshold;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                DownThreshold;                                            // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SyncAKEvent
// 0x0010
struct FSyncAKEvent
{
	int                                                AkEventID;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     AkLocation;                                               // 0x0004(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DamageCauserRecordData
// 0x0014
struct FDamageCauserRecordData
{
	class AController*                                 causer;                                                   // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Time;                                                     // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                StatusChangeMargin;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DamageType;                                               // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AdditionalParam;                                          // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SimViewData
// 0x0006
struct FSimViewData
{
	unsigned char                                      ViewPitch;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0001(0x0001) MISSED OFFSET
	uint16_t                                           ViewYaw;                                                  // 0x0002(0x0002) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ViewRoll;                                                 // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               FreeCamera;                                               // 0x0005(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.KilledTipsBlock
// 0x0028
struct FKilledTipsBlock
{
	TEnumAsByte<EDamageType>                           DamageType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     attackerName;                                             // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     WeaponName;                                               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     DeadName;                                                 // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.PoseChangeTime
// 0x0010
struct FPoseChangeTime
{
	float                                              PoseChange_Prone_Stand;                                   // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseChange_Prone_Move;                                    // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseChange_UnProne_Stand;                                 // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              PoseChange_UnProne_Move;                                  // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AnimParamList
// 0x00C4
struct FAnimParamList
{
	struct FVector                                     Velocity;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MoveDir;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterPoseType>                    PoseType;                                                 // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x001A(0x0002) MISSED OFFSET
	struct FRotator                                    ViewRotation;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    ControlRotation;                                          // 0x0028(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EWeaponType>                           WeaponType;                                               // 0x0034(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponHoldType>                       WeaponHoldType;                                           // 0x0035(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EFreshWeaponStateType>                 WeaponState;                                              // 0x0036(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponReloadMethod>                   WeaponReloadMethod;                                       // 0x0037(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESightType>                            SightType;                                                // 0x0038(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	float                                              RecoilKickADS;                                            // 0x003C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForegripParam;                                            // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetFPPLocation;                                        // 0x0044(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetFPPRotation;                                        // 0x0050(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetFPPCrouchLocation;                                  // 0x005C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetFPPCrouchRotation;                                  // 0x0068(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     OffsetFPPProneLocation;                                   // 0x0074(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FRotator                                    OffsetFPPProneRotation;                                   // 0x0080(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHurting;                                                // 0x008C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsNearDeathStatus;                                        // 0x008D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsRescueing;                                              // 0x008E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSprinting;                                              // 0x008F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCastingGenerate;                                        // 0x0090(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0091(0x0003) MISSED OFFSET
	struct FVector                                     HurtDir;                                                  // 0x0094(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsDying;                                                  // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsJumping;                                                // 0x00A1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ECharacterJumpType>                    JumpType;                                                 // 0x00A2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EParachuteState>                       ParachuteState;                                           // 0x00A3(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsParachuteLanding;                                      // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsTurning;                                                // 0x00A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsOnVehicle;                                              // 0x00A6(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDisableAim;                                             // 0x00A7(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HandleFolderFactor;                                       // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CharacterYawRotateRate;                                   // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldPauseAnim;                                          // 0x00B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x13];                                      // 0x00B1(0x0013) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AnimVehParamList
// 0x0020
struct FAnimVehParamList
{
	bool                                               IsLeanOut;                                                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDriver;                                                 // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSwitchingSeat;                                          // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              VacateHight;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsVehicleMotorbike;                                       // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FRotator                                    VehViewRotation;                                          // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EVHSeatWeaponHoldType>                 SeatWeaponHoldType;                                       // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVHSeatSpecialType>                    SeatSpecialType;                                          // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleType                                VehicleType;                                              // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x001B(0x0001) MISSED OFFSET
	float                                              LeanOutPercentage;                                        // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AnimStatusKeyList
// 0x0020
struct FAnimStatusKeyList
{
	unsigned char                                      UnknownData00[0x1C];                                      // 0x0000(0x001C) MISSED OFFSET
	class ASTExtraWeapon*                              EquipWeapon;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BodyPartCfg
// 0x001C
struct FBodyPartCfg
{
	float                                              DamageScale;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Durability;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageReduceScale;                                        // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     BodyDurabilityIndexName;                                  // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UClass*                                      ImpactEffectOverride;                                     // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CharacterEnergyPhase
// 0x0010
struct FCharacterEnergyPhase
{
	float                                              MakeEffectSection;                                        // 0x0000(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     BuffName;                                                 // 0x0004(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.CharacterEnergyData
// 0x002C
struct FCharacterEnergyData
{
	TArray<struct FCharacterEnergyPhase>               EnergyEffactPhase;                                        // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              EnergyMax;                                                // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              EnergyCurrent;                                            // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AttenuationPeriod;                                        // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	float                                              AttenuationAmount;                                        // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.HealthPredictShowData
// 0x0018
struct FHealthPredictShowData
{
	struct FString                                     ShowDataKey;                                              // 0x0000(0x000C) (Edit, ZeroConstructor)
	TEnumAsByte<EHealthPredictShowType>                ShowType;                                                 // 0x000C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
	float                                              Value;                                                    // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              LimitValue;                                               // 0x0014(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STParachuteState
// 0x0018
struct FSTParachuteState
{
	float                                              ThrottleInput;                                            // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              SteerInput;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int8_t                                             State;                                                    // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	struct FRotator                                    ControlRotation;                                          // 0x000C(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STReplicatedMoveState
// 0x0024
struct FSTReplicatedMoveState
{
	struct FVector                                     Location;                                                 // 0x0000(0x000C) (IsPlainOldData)
	struct FRotator                                    Rotation;                                                 // 0x000C(0x000C) (IsPlainOldData)
	struct FVector                                     Velocity;                                                 // 0x0018(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ParachuteFollowState
// 0x0008
struct FParachuteFollowState
{
	EFollowState                                       FollowState;                                              // 0x0000(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                LeaderIdx;                                                // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CharacterCompOutOfVisionOptimizationItem
// 0x0006
struct FCharacterCompOutOfVisionOptimizationItem
{
	unsigned char                                      UnknownData00[0x6];                                       // 0x0000(0x0006) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponOverrideAttrs
// 0x0018
struct FWeaponOverrideAttrs
{
	float                                              GameModeOverride_DeviationMoveModifier;                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              GameModeOverride_DeviationStanceJumpModifier;             // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              GameModeOverride_MeleeDamageAmountModifier;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              GameModeOverride_GrenadeDamageRadiusModifier;             // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              GameModeOverride_GrenadeDamageAmountModifier;             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              GameModeOverride_GunsDamageAmountModifier;                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CharacterOverrideAttrs
// 0x0010
struct FCharacterOverrideAttrs
{
	float                                              GameModeOverride_SpeedScaleModifier;                      // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              GameModeOverride_SwimSpeedScaleModifier;                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              GameModeOverride_EnergySpeedScaleModifier;                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              GameModeOverride_LastBreathSpeedScaleModifier;            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.LastEmoteInfo
// 0x000C
struct FLastEmoteInfo
{
	int                                                EmoteId;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                AreaID;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              EmoteTime;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SimpleDamageRepData
// 0x0018
struct FSimpleDamageRepData
{
	float                                              Damage;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              CurrentHeath;                                             // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsFatalHealthCost;                                        // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsHeadShotDamage;                                         // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x000A(0x0002) MISSED OFFSET
	class APawn*                                       DamageInstigatorPawn;                                     // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	class APawn*                                       DamageReceiver;                                           // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                NetCounter;                                               // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.VehicleDamageEvent
// 0x0000 (0x00A0 - 0x00A0)
struct FVehicleDamageEvent : public FSTPointDamageEvent
{

};

// ScriptStruct ShadowTrackerExtra.PoisonDamageEvent
// 0x0000 (0x00A0 - 0x00A0)
struct FPoisonDamageEvent : public FSTPointDamageEvent
{

};

// ScriptStruct ShadowTrackerExtra.MeleeDamageEvent
// 0x0020 (0x00C0 - 0x00A0)
struct FMeleeDamageEvent : public FSTPointDamageEvent
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x00A0(0x0020) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.FallingDamageEvent
// 0x0010 (0x00B0 - 0x00A0)
struct FFallingDamageEvent : public FSTPointDamageEvent
{
	unsigned char                                      UnknownData00[0x10];                                      // 0x00A0(0x0010) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.DrowningDamageEvent
// 0x0000 (0x00A0 - 0x00A0)
struct FDrowningDamageEvent : public FSTPointDamageEvent
{

};

// ScriptStruct ShadowTrackerExtra.STBurningDamageEvent
// 0x0018 (0x00B8 - 0x00A0)
struct FSTBurningDamageEvent : public FSTPointDamageEvent
{
	unsigned char                                      UnknownData00[0x18];                                      // 0x00A0(0x0018) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.STAirAttackRadialDamageEvent
// 0x0000 (0x0034 - 0x0034)
struct FSTAirAttackRadialDamageEvent : public FRadialDamageEvent
{

};

// ScriptStruct ShadowTrackerExtra.UTBuffAttachment
// 0x0018
struct FUTBuffAttachment
{
	class USceneComponent*                             Component;                                                // 0x0000(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             ComponentEnemy;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShowOnlyFirstPersonView;                                 // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bConsiderParentMeshScale;                                 // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	class USceneComponent*                             ComponentInstance;                                        // 0x0014(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BuffAnimationItem
// 0x00A8
struct FBuffAnimationItem
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BuffAnimationItem.AnimationAssetToPlay
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BuffAnimationItem.AnimationAssetToPlayFPP
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BuffAnimationItem.AnimationMontageToPlay
	unsigned char                                      UnknownData03[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.BuffAnimationItem.AnimationMontageToPlayFPP
	bool                                               NeedReplayByChangFirstView;                               // 0x00A0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x00A1(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BuffAnimationTagItem
// 0x0028
struct FBuffAnimationTagItem
{
	struct FName                                       AnimationAssetTag;                                        // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimationAssetTagFPP;                                     // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimationMontageTag;                                      // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AnimationMontageTagFPP;                                   // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               NeedReplayByChangFirstView;                               // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0021(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SetMatData
// 0x0038
struct FSetMatData
{
	struct FName                                       ParamName;                                                // 0x0000(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESetMatParamType>                      ParamType;                                                // 0x0008(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                MatIndex;                                                 // 0x000C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              ScalarValue;                                              // 0x0010(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector                                     VectorValue;                                              // 0x0014(0x000C) (Edit, IsPlainOldData)
	class UTexture*                                    TextureValue;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                ColorValue;                                               // 0x0024(0x0010) (Edit, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BuffApplierConditionPair
// 0x001C
struct FBuffApplierConditionPair
{
	TEnumAsByte<EBuffApplierCondition>                 ConditionVar;                                             // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowDebugLine;                                          // 0x0001(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0002(0x0002) MISSED OFFSET
	float                                              InSightCheckAngle;                                        // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              InnerRangeDistance;                                       // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UCurveFloat*                                 CurveExpirePerDistance;                                   // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FName>                               BuffNameArray;                                            // 0x0010(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.VehicleSimViewData
// 0x0004
struct FVehicleSimViewData
{
	unsigned char                                      ViewPitch;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ViewYaw;                                                  // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      ViewRoll;                                                 // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               FreeCamera;                                               // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RenderQualitySettings
// 0x0003
struct FRenderQualitySettings
{
	TEnumAsByte<ERenderQuality>                        RenderQualitySetting;                                     // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ERenderStyle>                          RenderStyleSetting;                                       // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               RenderMSAASetting;                                        // 0x0002(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SwitchesItem
// 0x0020
struct FSwitchesItem
{
	struct FString                                     Key;                                                      // 0x0000(0x000C) (ZeroConstructor)
	float                                              Value;                                                    // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     DependKey;                                                // 0x0010(0x000C) (ZeroConstructor)
	float                                              DependValue;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SwitchesInMaps
// 0x0018
struct FSwitchesInMaps
{
	struct FString                                     MapName;                                                  // 0x0000(0x000C) (ZeroConstructor)
	TArray<struct FSwitchesItem>                       Switches;                                                 // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.RenderItem
// 0x0010
struct FRenderItem
{
	struct FString                                     RenderKey;                                                // 0x0000(0x000C) (ZeroConstructor)
	float                                              RenderValue;                                              // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.GM
// 0x0004
struct FGM
{
	unsigned char                                      GrassEnable : 1;                                          // 0x0000(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BuildingSearchPathLink
// 0x0010
struct FBuildingSearchPathLink
{
	TArray<struct FVector>                             WayPointList;                                             // 0x0000(0x000C) (ZeroConstructor)
	int                                                targetSpotIndex;                                          // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BuildingSearchPath
// 0x0010
struct FBuildingSearchPath
{
	TArray<struct FBuildingSearchPathLink>             itemPosLinkList;                                          // 0x0000(0x000C) (ZeroConstructor)
	int8_t                                             buildingPartIndext;                                       // 0x000C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x000D(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CameraParams
// 0x0008
struct FCameraParams
{
	float                                              FieldOfView;                                              // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bLocktoHmd;                                               // 0x0004(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SpringArmParams
// 0x0050
struct FSpringArmParams
{
	struct FCameraParams                               CameraParam;                                              // 0x0000(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	class USceneComponent*                             ParentComp;                                               // 0x0008(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       ParentSocketName;                                         // 0x0010(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TargetArmALength;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SocketOffset;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     TargetOffset;                                             // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, IsPlainOldData)
	float                                              ProbeSize;                                                // 0x0040(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<ECollisionChannel>                     ProbeChannel;                                             // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDoCollisionTest;                                         // 0x0045(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUsePawnControlRotation;                                  // 0x0046(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableCameraLag;                                         // 0x0047(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CameraLagSpeed;                                           // 0x0048(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bEnableCustomSpringArm;                                   // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ActicityDisallowedData
// 0x0010
struct FActicityDisallowedData
{
	TArray<EPawnState>                                 DisallowedStates;                                         // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ActivityID;                                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SimpleCharAnimParamList
// 0x0048
struct FSimpleCharAnimParamList
{
	struct FVector                                     Velocity;                                                 // 0x0000(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     MoveDir;                                                  // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         MovementMode;                                             // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	struct FRotator                                    ViewRotation;                                             // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsHurting;                                                // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FVector                                     HurtDir;                                                  // 0x002C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               IsDying;                                                  // 0x0038(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsTurning;                                                // 0x0039(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldPauseAnim;                                          // 0x003A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xD];                                       // 0x003B(0x000D) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WheelHubSetup
// 0x0010
struct FWheelHubSetup
{
	class UClass*                                      WheelClass;                                               // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       TireBoneName;                                             // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STReplicatedVehicleState
// 0x0005
struct FSTReplicatedVehicleState
{
	int8_t                                             SteeringInput;                                            // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             ThrottleInput;                                            // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             BrakeInput;                                               // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             HandbrakeInput;                                           // 0x0003(0x0001) (ZeroConstructor, IsPlainOldData)
	int8_t                                             CurrentGear;                                              // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AppearanceMatData
// 0x0018
struct FAppearanceMatData
{
	struct FString                                     AppearanceKey;                                            // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance)
	float                                              LifeSpan;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInterface*                          ParentMaterial;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMaterialInstanceDynamic*                    AppearanceMat;                                            // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ScreenParticleEffectData
// 0x0048
struct FScreenParticleEffectData
{
	TEnumAsByte<EScreenParticleEffectType>             EffectType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	unsigned char                                      UnknownData01[0x28];                                      // 0x0001(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.ScreenParticleEffectData.ParticleEffect
	struct FName                                       ParticleParamName;                                        // 0x0030(0x0008) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystemComponent*                    EffectComponent;                                          // 0x0038(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               KeepWorldRotation;                                        // 0x003C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsShowing;                                                // 0x003D(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x003E(0x0002) MISSED OFFSET
	float                                              CurrentParamValue;                                        // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0044(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CanvasIcon2D
// 0x0014
struct FCanvasIcon2D
{
	class UTexture2D*                                  Texture;                                                  // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              U;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              V;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              UL;                                                       // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              VL;                                                       // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponCrossHairIconData
// 0x001C
struct FWeaponCrossHairIconData
{
	struct FCanvasIcon2D                               Icon;                                                     // 0x0000(0x0014) (Edit, DisableEditOnInstance)
	float                                              alpha;                                                    // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              Rotate;                                                   // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.HitPerformData
// 0x0058
struct FHitPerformData
{
	TArray<struct FWeaponCrossHairIconData>            IconList;                                                 // 0x0000(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	float                                              DefaultSpread;                                            // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadMax;                                                // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AddSpreadScale;                                           // 0x0014(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SpreadDecreaseSpeed;                                      // 0x0018(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultOffset;                                            // 0x001C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DefaultAlpha;                                             // 0x0020(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AlphaDecreaseSpeed;                                       // 0x0024(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsHeadshot;                                               // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	struct FLinearColor                                HitBodyDrawColor;                                         // 0x002C(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                HitHeadDrawColor;                                         // 0x003C(0x0010) (Edit, DisableEditOnInstance, IsPlainOldData)
	float                                              CurCrosshairSpread;                                       // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0050(0x0008) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TaskAreaData
// 0x0010
struct FTaskAreaData
{
	int                                                TaskAreaType;                                             // 0x0000(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     TaskAreaAnchorsStr;                                       // 0x0004(0x000C) (BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.TrailMarkInputData
// 0x0050
struct FTrailMarkInputData
{
	bool                                               bContainValidData;                                        // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0001(0x000F) MISSED OFFSET
	struct FTransform                                  Trans;                                                    // 0x0010(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     Normal;                                                   // 0x0040(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x004C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.FocusTargetItem
// 0x0034
struct FFocusTargetItem
{
	TWeakObjectPtr<class AActor>                       Actor;                                                    // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Position;                                                 // 0x0008(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	bool                                               IsStartTurnTarget;                                        // 0x0014(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	float                                              TurnTargetVelocity;                                       // 0x0018(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    LastActorRotation;                                        // 0x001C(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FString                                     CurveName;                                                // 0x0028(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.SkillAction_AttachActorCreateData
// 0x0030
struct FSkillAction_AttachActorCreateData
{
	class UClass*                                      ActorTemplate;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       AttachSocketName;                                         // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     RelativeLocation;                                         // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RelativeRotation;                                         // 0x001C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               DestroyAfterSkill;                                        // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               DestroyAfterPhase;                                        // 0x0029(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x002A(0x0006) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SkillPoseMontageData
// 0x00A0
struct FSkillPoseMontageData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.SkillPoseMontageData.AnimMontage_Stand
	unsigned char                                      UnknownData01[0x28];                                      // 0x0028(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.SkillPoseMontageData.AnimMontage_Crouch
	unsigned char                                      UnknownData02[0x28];                                      // 0x0050(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.SkillPoseMontageData.AnimMontage_Prone
	unsigned char                                      UnknownData03[0x28];                                      // 0x0078(0x0028) UNKNOWN PROPERTY: SoftObjectProperty ShadowTrackerExtra.SkillPoseMontageData.AnimMontage_Vehicle
};

// ScriptStruct ShadowTrackerExtra.RandomActionGroup
// 0x000C
struct FRandomActionGroup
{
	TArray<class UUTSkillAction*>                      Actions;                                                  // 0x0000(0x000C) (Edit, ExportObject, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.SkillReplaceCharAnimData
// 0x001C
struct FSkillReplaceCharAnimData
{
	TEnumAsByte<ECharacterAnimType>                    CharacterAnimType;                                        // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	unsigned char                                      UnknownData01[0xC];                                       // 0x0001(0x000C) UNKNOWN PROPERTY: ArrayProperty ShadowTrackerExtra.SkillReplaceCharAnimData.PoseAnimList
	unsigned char                                      UnknownData02[0xC];                                       // 0x0010(0x000C) UNKNOWN PROPERTY: ArrayProperty ShadowTrackerExtra.SkillReplaceCharAnimData.FPPPoseAnimList
};

// ScriptStruct ShadowTrackerExtra.SkillAction_SpawnActorCreateData
// 0x0050
struct FSkillAction_SpawnActorCreateData
{
	class UClass*                                      ActorTemplate;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUTSkillLocationPicker*                      LocationPicker;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               bLocalSpawn;                                              // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepActor;                                               // 0x0009(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableAttach;                                            // 0x000A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x000B(0x0005) MISSED OFFSET
	struct FName                                       AttachSocket;                                             // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetLocationStand;                                      // 0x0018(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OffsetLocationCrouch;                                     // 0x0024(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     OffsetLocationProne;                                      // 0x0030(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x003C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               bAllowChangePoseWillUpdating;                             // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0049(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.SkillAction_SpawnProjectileCreateData
// 0x001C
struct FSkillAction_SpawnProjectileCreateData
{
	class UClass*                                      ProjectileTemplate;                                       // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     OffsetLocation;                                           // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    OffsetRotation;                                           // 0x0010(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UTSkillEntryConfig
// 0x0014
struct FUTSkillEntryConfig
{
	EUTSkillEntry                                      Entry;                                                    // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                SkillIndex;                                               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     Interrupts;                                               // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
};

// ScriptStruct ShadowTrackerExtra.UTSkillPicker_FanCreateData
// 0x0038
struct FUTSkillPicker_FanCreateData
{
	float                                              Radius;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FreeCollisionRadiusRation;                                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              angle;                                                    // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Offset;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	bool                                               Random;                                                   // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsCheckHeadshot;                                          // 0x0019(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsShowDebugFan;                                           // 0x001A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPickUpMonsters;                                          // 0x001B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FName                                       IgnoreByTag;                                              // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UClass*>                              IgnoredActors;                                            // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ComparableGrenadeItemType
// 0x0088
struct FComparableGrenadeItemType
{
	struct FBattleItemData                             BattleItemData;                                           // 0x0000(0x0080) (Edit, BlueprintVisible)
	int                                                GrenadeItemID;                                            // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ItemPriority;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CompatableComsumableItemType
// 0x0088
struct FCompatableComsumableItemType
{
	struct FBattleItemData                             BattleItemData;                                           // 0x0000(0x0080) (Edit, BlueprintVisible)
	TEnumAsByte<EConsumeItemType>                      ConsumableItemType;                                       // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0081(0x0003) MISSED OFFSET
	int                                                ItemPriority;                                             // 0x0084(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UTSkillAppearance_ParticleSystem_Item
// 0x0068
struct FUTSkillAppearance_ParticleSystem_Item
{
	class UUTSkillPicker*                              TargetPicker;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystem*                             TemplateSelfTeam_Effect;                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TemplateEnermyTeam_Effect;                                // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TemplateSelfTeamFPP_Effect;                               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              Scale;                                                    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FName                                       SocketName;                                               // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     LocationOffset;                                           // 0x0020(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffset;                                           // 0x002C(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector                                     LocationOffsetTPP;                                        // 0x0038(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	struct FRotator                                    RotationOffsetTPP;                                        // 0x0044(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              ScaleTPP;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0054(0x0004) MISSED OFFSET
	struct FName                                       HurtRotationSocketName;                                   // 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              AutoDispearTime;                                          // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAttachToPawn;                                            // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.UTSkillAppearance_SoundCue_Item
// 0x000C
struct FUTSkillAppearance_SoundCue_Item
{
	EUTSkill_SoundCue_ListenType                       ListenType;                                               // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLoop;                                                    // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.GeneralLocationSetup
// 0x0020
struct FGeneralLocationSetup
{
	TEnumAsByte<ELocationFunctionType>                 LocationFunctionType;                                     // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldTraceToGround;                                     // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseOwnerAsCenter;                                        // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	struct FVector                                     SpawnLocation;                                            // 0x0004(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              TraceDepth;                                               // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	struct FName                                       BBvariableName;                                           // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STExtraVehicleWheelHP
// 0x0010
struct FSTExtraVehicleWheelHP
{
	float                                              HPMax;                                                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FName                                       BoneName;                                                 // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STVehicleWheelDust
// 0x0014
struct FSTVehicleWheelDust
{
	TEnumAsByte<EPhysicalSurface>                      ContactSurface;                                           // 0x0000(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	class UParticleSystem*                             MoveFx;                                                   // 0x0004(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             SlipFx;                                                   // 0x0008(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UParticleSystem*                             HubFx;                                                    // 0x000C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              minSpeed;                                                 // 0x0010(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STExtraVehicleSeat
// 0x0038
struct FSTExtraVehicleSeat
{
	ESTExtraVehicleSeatType                            SeatType;                                                 // 0x0000(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	struct FName                                       AnimCompTagName;                                          // 0x0008(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       EnterVehicleSocket;                                       // 0x0010(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       LeaveVehicleSocket;                                       // 0x0018(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EMovementMode>                         OccupyMovementMode;                                       // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVHSeatWeaponHoldType>                 HoldWeaponType;                                           // 0x0021(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EVHSeatSpecialType>                    SeatSpecialType;                                          // 0x0022(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               IsCanLeanOut;                                             // 0x0023(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                GUIDisplayIndex;                                          // 0x0024(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 MinViewPitchCurve;                                        // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    CharRotVsVehiRot;                                         // 0x002C(0x000C) (Edit, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.VehicleSyncPostPhysxTick
// 0x0004 (0x003C - 0x0038)
struct FVehicleSyncPostPhysxTick : public FTickFunction
{
	unsigned char                                      UnknownData00[0x4];                                       // 0x0038(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.VehicleUserReconnRepData
// 0x0010
struct FVehicleUserReconnRepData
{
	class ASTExtraVehicleBase*                         Vehicle;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraPlayerCharacter*                     Character;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	ESTExtraVehicleUserState                           VehicleUserState;                                         // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                SeatIdx;                                                  // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ProjectileLinePointData
// 0x0014
struct FProjectileLinePointData
{
	float                                              HeightPercentage;                                         // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TotalLenthPercentage;                                     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     Tangent;                                                  // 0x0008(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.VoiceCheckObjectNode
// 0x0028
struct FVoiceCheckObjectNode
{
	class ASTExtraBaseCharacter*                       nowCharacter;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	class ASTExtraVehicleBase*                         nowVehicle;                                               // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UImage*                                      moveImage;                                                // 0x0008(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      weaponImage;                                              // 0x000C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      silencerWeaponImage;                                      // 0x0010(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      VehicleImage;                                             // 0x0014(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UImage*                                      GlassImage;                                               // 0x0018(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.RespawnItemConfigInst
// 0x000C
struct FRespawnItemConfigInst
{
	int                                                RandomWeight;                                             // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UClass*                                      RespawnItemConfigClass;                                   // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSpecialUsage;                                            // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.GrandTheftScoreItem
// 0x0008
struct FGrandTheftScoreItem
{
	int                                                ItemSpecificID;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                Score;                                                    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ScoreChangeValue
// 0x0008
struct FScoreChangeValue
{
	int                                                Score_RescueOthers;                                       // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                Score_Kill;                                               // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CDInfo
// 0x000C
struct FCDInfo
{
	float                                              CDTime;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              FireTime;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              followTime;                                               // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AutoAimEnemyInfo
// 0x0014
struct FAutoAimEnemyInfo
{
	class ASTExtraPlayerCharacter*                     EnemyPawn;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DisToScreenCenter;                                        // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector                                     WorldLocation;                                            // 0x0008(0x000C) (IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.MiniItem
// 0x0008
struct FMiniItem
{
	int                                                Type;                                                     // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                TypeSpecificID;                                           // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.HandleMeshPack
// 0x00E8
struct FHandleMeshPack
{
	class UBackpackWeaponAttachHandle*                 Handle;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FWeaponMeshCfg                              meshCfg;                                                  // 0x0008(0x00E0)
};

// ScriptStruct ShadowTrackerExtra.ParticleEffectGroup
// 0x0018
struct FParticleEffectGroup
{
	TArray<class UParticleSystemComponent*>            ParticleCompList;                                         // 0x0000(0x000C) (ExportObject, ZeroConstructor)
	TArray<struct FParticleRes>                        ParticleRes;                                              // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WheelSfxOnSurface
// 0x000C
struct FWheelSfxOnSurface
{
	class UPhysicalMaterial*                           SurfaceMaterial;                                          // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               EventStart;                                               // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               EventStop;                                                // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WonderfulCutOutputData
// 0x001C
struct FWonderfulCutOutputData
{
	float                                              BeginTimeSecs;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EndTimeSecs;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	TEnumAsByte<EWonderfulCutOutputType>               WonderfulCutType;                                         // 0x0008(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	float                                              ShootDistance;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	struct FString                                     causerName;                                               // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
};

// ScriptStruct ShadowTrackerExtra.WonderfulCutContinuousKillOutputData
// 0x0010
struct FWonderfulCutContinuousKillOutputData
{
	float                                              BeginTimeSecs;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              EndTimeSecs;                                              // 0x0004(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	int                                                KillNum;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              FarthestKillDistance;                                     // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WonderfulCut_OneShootDamage
// 0x0018
struct FWonderfulCut_OneShootDamage
{
	bool                                               bVictimAI;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWonderfulCutCaptureType>              CaptureType;                                              // 0x0001(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWonderfulCutShootDamageType>          ShootDamageType;                                          // 0x0002(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0003(0x0001) MISSED OFFSET
	float                                              DamageTimeSecs;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              ShootDistance;                                            // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     causerName;                                               // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WonderfulCutShootDamageData
// 0x0010
struct FWonderfulCutShootDamageData
{
	int                                                DamagePlayerID;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FWonderfulCut_OneShootDamage>        ShootDamageList;                                          // 0x0004(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.WonderfulCutShootDamageSortData
// 0x001C
struct FWonderfulCutShootDamageSortData
{
	float                                              DamageIntervalSecs;                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DamageTimeSecs;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bVictimAI;                                                // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWonderfulCutCaptureType>              CaptureType;                                              // 0x0009(0x0001) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWonderfulCutShootDamageType>          ShootDamageType;                                          // 0x000A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x000B(0x0001) MISSED OFFSET
	float                                              ShootDistance;                                            // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     causerName;                                               // 0x0010(0x000C) (ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.AITriggerTupple
// 0x0030
struct FAITriggerTupple
{
	int                                                Probability;                                              // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FBlackboardKeySelector                      TriggerTarget;                                            // 0x0008(0x0020) (Edit)
	int                                                TriggerSetValue;                                          // 0x0028(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TaskGraphInitParam_DoorTest
// 0x001B (0x001C - 0x0001)
struct FTaskGraphInitParam_DoorTest : public FTaskGraphInitParam
{
	struct FVector2D                                   WorldSize;                                                // 0x0000(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	float                                              BlockLoadTime;                                            // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   WorldLeftTopCorner;                                       // 0x000C(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	struct FVector2D                                   BlockSize;                                                // 0x0014(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AsyncMeshLoadedRes
// 0x0020
struct FAsyncMeshLoadedRes
{
	struct FSoftObjectPath                             meshRes;                                                  // 0x0000(0x0018)
	class UBackpackAvatarHandle*                       avatarHandle;                                             // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MeshResSet
// 0x000C
struct FMeshResSet
{
	class UStaticMesh*                                 stMesh;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class USkeletalMesh*                               skMesh;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
	class UMaterialInstance*                           matIns;                                                   // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CorpsKillInfo
// 0x0008
struct FCorpsKillInfo
{
	int                                                ID;                                                       // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                KilledNum;                                                // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BitMsg
// 0x0020
struct FBitMsg
{
	unsigned char                                      UnknownData00[0x20];                                      // 0x0000(0x0020) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BitMsgDelta
// 0x0014
struct FBitMsgDelta
{
	unsigned char                                      UnknownData00[0x14];                                      // 0x0000(0x0014) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.BTTaskMoveAroundMemory
// 0x0090
struct FBTTaskMoveAroundMemory
{
	unsigned char                                      UnknownData00[0x60];                                      // 0x0000(0x0060) MISSED OFFSET
	class AActor*                                      FocusActor;                                               // 0x0060(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2C];                                      // 0x0064(0x002C) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.QuickChatOption
// 0x0008
struct FQuickChatOption
{
	int                                                chatTextID;                                               // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               audioEvent1;                                              // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.IngameInvitedNode
// 0x0018
struct FIngameInvitedNode
{
	struct FString                                     PlayerName;                                               // 0x0000(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     gid;                                                      // 0x000C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.KillInfoRecordData
// 0x0028
struct FKillInfoRecordData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.DrawCircleItemData
// 0x0028
struct FDrawCircleItemData
{
	unsigned char                                      UnknownData00[0x28];                                      // 0x0000(0x0028) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.DrawBoxItemData
// 0x0030
struct FDrawBoxItemData
{
	unsigned char                                      UnknownData00[0x30];                                      // 0x0000(0x0030) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeatherDebugView
// 0x0020
struct FWeatherDebugView
{
	struct FString                                     CurrentWeather;                                           // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	struct FString                                     WeatherStage;                                             // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst)
	float                                              TotalElapsedTime;                                         // 0x0018(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              WeatherElapsedTime;                                       // 0x001C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeatherStatus
// 0x0002
struct FWeatherStatus
{
	EWeatherStatusType                                 WeaterType;                                               // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	EWeatherChangeStatus                               WeaterStatus;                                             // 0x0001(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RenderStyleAndPPMaping
// 0x003C
struct FRenderStyleAndPPMaping
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ItemsBoxDataTableRow
// 0x004C (0x0050 - 0x0004)
struct FItemsBoxDataTableRow : public FTableRowBase
{
	struct FString                                     Category;                                                 // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Weight;                                                   // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TMap<class UClass*, int>                           ItemsData;                                                // 0x0014(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct ShadowTrackerExtra.MobAIStateData
// 0x0044
struct FMobAIStateData
{
	unsigned char                                      UnknownData00[0x44];                                      // 0x0000(0x0044) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponAttachmentSlot
// 0x0004
struct FWeaponAttachmentSlot
{
	int                                                TypeSpecificID;                                           // 0x0000(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SwitchWeaponReplicatedToOwnerData
// 0x0008
struct FSwitchWeaponReplicatedToOwnerData
{
	TEnumAsByte<ESurviveWeaponPropSlot>                Slot;                                                     // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                OperationIndex;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.DestroyWeaponReplicatedToOwnerData
// 0x0010
struct FDestroyWeaponReplicatedToOwnerData
{
	struct FName                                       LogicSocket;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                OperationIndex;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.DisUseWeaponReplicatedToOwnerData
// 0x0004
struct FDisUseWeaponReplicatedToOwnerData
{
	int                                                OperationIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UseWeaponReplicatedToOwnerData
// 0x0010
struct FUseWeaponReplicatedToOwnerData
{
	struct FName                                       LogicSocket;                                              // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bNeedWaitHandleSpawnFinishedOnClient;                     // 0x0008(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
	int                                                OperationIndex;                                           // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.WeaponNotifyActionData
// 0x0008
struct FWeaponNotifyActionData
{
	int                                                OperationIndex;                                           // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EWeaponAction>                         Action;                                                   // 0x0004(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0005(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponReloadData
// 0x000C
struct FWeaponReloadData
{
	float                                              FillTime;                                                 // 0x0000(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              SingleBulletPrepareTime;                                  // 0x0004(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              UploadTime;                                               // 0x0008(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STCustomRadialDamageEvent
// 0x0024 (0x0058 - 0x0034)
struct FSTCustomRadialDamageEvent : public FRadialDamageEvent
{
	unsigned char                                      UnknownData00[0x24];                                      // 0x0034(0x0024) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.TombboxLifeSpanStruct
// 0x0008
struct FTombboxLifeSpanStruct
{
	class UClass*                                      GameModeClass;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LifeSpan;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.SoundData
// 0x0014
struct FSoundData
{
	EFSoundType                                        SoundType;                                                // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FVector                                     SoundDir;                                                 // 0x0004(0x000C) (IsPlainOldData)
	float                                              SoundVolume;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.GrenadeSlotData
// 0x0008
struct FGrenadeSlotData
{
	int                                                ItemID;                                                   // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GrenadeCounts;                                            // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.AkEventTableRow
// 0x0008 (0x000C - 0x0004)
struct FAkEventTableRow : public FTableRowBase
{
	int                                                ID;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PickUpGlobalDAndWrapperTableRow
// 0x0008 (0x000C - 0x0004)
struct FPickUpGlobalDAndWrapperTableRow : public FTableRowBase
{
	int                                                ID;                                                       // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Template;                                                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PickUpActionReplicatedDataBroadcast
// 0x000C
struct FPickUpActionReplicatedDataBroadcast
{
	int                                                ActionID;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TargetPickUpItemID;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHandlePickUpActionReplicatedDataActionType> ActionType;                                               // 0x0008(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0009(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PickUpActionReplicatedData
// 0x0014
struct FPickUpActionReplicatedData
{
	int                                                ActionID;                                                 // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                TargetPickUpItemID;                                       // 0x0004(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ServerTargetActor;                                        // 0x0008(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class AActor*                                      WrapperActor;                                             // 0x000C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EHandlePickUpActionReplicatedDataActionType> ActionType;                                               // 0x0010(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ConsumeItemCDData
// 0x000C
struct FConsumeItemCDData
{
	unsigned char                                      UnknownData00[0xC];                                       // 0x0000(0x000C) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.ConsumeItemDataTableRow
// 0x0018 (0x0024 - 0x000C)
struct FConsumeItemDataTableRow : public FSurviveTableRowBase
{
	int                                                ConsumeItemID;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConsumeItemType>                      Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<EConsumeItemCategory>                  Category;                                                 // 0x0011(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x0012(0x0002) MISSED OFFSET
	float                                              ConsumeCD;                                                // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecoverHealthPercentage;                                  // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRecoverHealthPercentage;                               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RecoverEnegy;                                             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.PlayerEquipmentDataTableRow
// 0x0010 (0x001C - 0x000C)
struct FPlayerEquipmentDataTableRow : public FSurviveTableRowBase
{
	int                                                PlayerEquipmentID;                                        // 0x000C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<EPlayerEquipmentSlotType>              Type;                                                     // 0x0010(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	float                                              DamageMultiplyAdditionalRate;                             // 0x0014(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsAvata;                                                 // 0x0018(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.PlayerEquipmentItemData
// 0x0120
struct FPlayerEquipmentItemData
{
	struct FPickUpGlobalDataTableRow                   PickUpGlobalDataTableRow;                                 // 0x0000(0x0100) (BlueprintVisible, BlueprintReadOnly)
	struct FPlayerEquipmentDataTableRow                PlayerEquipmentDataTableRow;                              // 0x0100(0x001C) (BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WeaponDataTableRow
// 0x000C (0x0018 - 0x000C)
struct FWeaponDataTableRow : public FSurviveTableRowBase
{
	int                                                WeaponID;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      WeaponTemplate;                                           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivePickUpCategory>                SurvivePickUpCategory;                                    // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.MainSlotItemData
// 0x0120
struct FMainSlotItemData
{
	struct FPickUpGlobalDataTableRow                   PickUpGlobalDataTableRow;                                 // 0x0000(0x0100) (BlueprintVisible, BlueprintReadOnly)
	struct FWeaponDataTableRow                         WeaponDataTableRow;                                       // 0x0100(0x0018) (BlueprintVisible, BlueprintReadOnly)
	class AActor*                                      TargetActor;                                              // 0x0118(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x011C(0x0004) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.UseBackpackItemParams
// 0x0001
struct FUseBackpackItemParams
{
	TEnumAsByte<ESurviveWeaponPropSlot>                TargetEquipWeaponComponentMainSlot;                       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.BackpackItemData
// 0x0118
struct FBackpackItemData
{
	int                                                Num;                                                      // 0x0000(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	struct FPickUpGlobalDataTableRow                   BaseData;                                                 // 0x0008(0x0100) (BlueprintVisible, BlueprintReadOnly)
	bool                                               bIsUsing;                                                 // 0x0108(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0109(0x0003) MISSED OFFSET
	float                                              FinishPercentage;                                         // 0x010C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESurvivePickUpGlobalCategory>          SurvivePickUpGlobalCategory;                              // 0x0110(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0111(0x0007) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.FollowCandidateSortData
// 0x0004
struct FFollowCandidateSortData
{
	class ASTExtraBaseCharacter*                       Owner;                                                    // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.UserCmdBitMsg
// 0x00E8
struct FUserCmdBitMsg
{
	unsigned char                                      UnknownData00[0xE8];                                      // 0x0000(0x00E8) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.NearDeathRestoredOrignalHealthStruct
// 0x000C
struct FNearDeathRestoredOrignalHealthStruct
{
	class UClass*                                      GameModeClass;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Health;                                                   // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              BreathDecreathRate;                                       // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.RestoringDurationWithGameModeStruct
// 0x0008
struct FRestoringDurationWithGameModeStruct
{
	class UClass*                                      GameModeClass;                                            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Duration;                                                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CircleInfoInMap
// 0x0018
struct FCircleInfoInMap
{
	struct FVector2D                                   WhiteCircleCenter;                                        // 0x0000(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   BlueCircleCenter;                                         // 0x0008(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	float                                              WhiteCircleRadius;                                        // 0x0010(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              BlueCircleRadius;                                         // 0x0014(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.ParachuteStateParams
// 0x0034
struct FParachuteStateParams
{
	float                                              MinForwardForce;                                          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForwardForce;                                          // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragForceFractor;                                         // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinPitchAngle;                                            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxPitchAngle;                                            // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRollAngle;                                             // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRollAngle;                                             // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinForwardSpeed;                                          // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxForwardSpeed;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinRightSpeed;                                            // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRightSpeed;                                            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MinDownSpeed;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxDownSpeed;                                             // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STExtraVehicleSfxLoop
// 0x000C
struct FSTExtraVehicleSfxLoop
{
	class UAkComponent*                                AkComp;                                                   // 0x0000(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAkAudioEvent*                               AkEvent;                                                  // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                PostEventID;                                              // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.STExtraVehicleWheelSfxOnSurface
// 0x000C
struct FSTExtraVehicleWheelSfxOnSurface
{
	class UAkComponent*                                AkComp;                                                   // 0x0000(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UPhysicalMaterial*                           LastSurfaceMaterial;                                      // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	class UWheelSfxConfig*                             WheelSfxConfig;                                           // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.VoiceCheckSorttNode
// 0x0008
struct FVoiceCheckSorttNode
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.WarGameTeamScore
// 0x0010
struct FWarGameTeamScore
{
	int                                                CampID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamID;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamRank;                                                 // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TeamScore;                                                // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ShadowTrackerExtra.CampScoreData
// 0x0014
struct FCampScoreData
{
	int                                                CampID;                                                   // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BaseOccupyScore;                                          // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0008(0x000C) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.CompareEnemyInfo
// 0x0001
struct FCompareEnemyInfo
{
	unsigned char                                      UnknownData00[0x1];                                       // 0x0000(0x0001) MISSED OFFSET
};

// ScriptStruct ShadowTrackerExtra.AutoAimDebugEnemyInfo
// 0x0014
struct FAutoAimDebugEnemyInfo
{
	float                                              OutterRadius;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              InnerRadius;                                              // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EnemyScreenLocation;                                      // 0x0008(0x0008) (IsPlainOldData)
	bool                                               bDrawDebug;                                               // 0x0010(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
};

}

