#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Global_Bp.Global_Bp_C.FetchServerKey
struct UGlobal_Bp_C_FetchServerKey_Params
{
};

// Function Global_Bp.Global_Bp_C.UpdateServerKey
struct UGlobal_Bp_C_UpdateServerKey_Params
{
};

// Function Global_Bp.Global_Bp_C.GetXGCreatePlayerTime
struct UGlobal_Bp_C_GetXGCreatePlayerTime_Params
{
};

// Function Global_Bp.Global_Bp_C.SetXGCreatePlayerTime
struct UGlobal_Bp_C_SetXGCreatePlayerTime_Params
{
};

// Function Global_Bp.Global_Bp_C.OnQueryCustomSettingHandle
struct UGlobal_Bp_C_OnQueryCustomSettingHandle_Params
{
};

// Function Global_Bp.Global_Bp_C.GetRankLargeLevelTexture
struct UGlobal_Bp_C_GetRankLargeLevelTexture_Params
{
	int                                                rankIntegral;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.GetRankLargeBaseTexture
struct UGlobal_Bp_C_GetRankLargeBaseTexture_Params
{
	int                                                rankIntegral;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.SetSeasonSwitchData
struct UGlobal_Bp_C_SetSeasonSwitchData_Params
{
};

// Function Global_Bp.Global_Bp_C.GetSeasonSwitchData
struct UGlobal_Bp_C_GetSeasonSwitchData_Params
{
};

// Function Global_Bp.Global_Bp_C.InnerPreviewAvatar
struct UGlobal_Bp_C_InnerPreviewAvatar_Params
{
};

// Function Global_Bp.Global_Bp_C.CancelPreviewAvatar
struct UGlobal_Bp_C_CancelPreviewAvatar_Params
{
};

// Function Global_Bp.Global_Bp_C.SetMatchTagGuideFlag
struct UGlobal_Bp_C_SetMatchTagGuideFlag_Params
{
};

// Function Global_Bp.Global_Bp_C.GetMatchTagGuideFlag
struct UGlobal_Bp_C_GetMatchTagGuideFlag_Params
{
	bool                                               hasGuide;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.SwitchCameraFarImmediate
struct UGlobal_Bp_C_SwitchCameraFarImmediate_Params
{
};

// Function Global_Bp.Global_Bp_C.SwitchWarzoneBG
struct UGlobal_Bp_C_SwitchWarzoneBG_Params
{
};

// Function Global_Bp.Global_Bp_C.TryPreviewAvatar
struct UGlobal_Bp_C_TryPreviewAvatar_Params
{
	int                                                NewParam;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.SwitchLobbyMeshBg
struct UGlobal_Bp_C_SwitchLobbyMeshBg_Params
{
};

// Function Global_Bp.Global_Bp_C.SwitchSceneCameraByIndex
struct UGlobal_Bp_C_SwitchSceneCameraByIndex_Params
{
};

// Function Global_Bp.Global_Bp_C.PreviewAvatar
struct UGlobal_Bp_C_PreviewAvatar_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.GetGlobalConfigData
struct UGlobal_Bp_C_GetGlobalConfigData_Params
{
};

// Function Global_Bp.Global_Bp_C.SetGlobalConfigData
struct UGlobal_Bp_C_SetGlobalConfigData_Params
{
};

// Function Global_Bp.Global_Bp_C.GetDragDropWidget
struct UGlobal_Bp_C_GetDragDropWidget_Params
{
	int                                                dragDropType;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.ClearWXYouxiquanRedPoint
struct UGlobal_Bp_C_ClearWXYouxiquanRedPoint_Params
{
};

// Function Global_Bp.Global_Bp_C.SetWXYouxiquanRedPoint
struct UGlobal_Bp_C_SetWXYouxiquanRedPoint_Params
{
};

// Function Global_Bp.Global_Bp_C.GetWXYouxiquanRedPoint
struct UGlobal_Bp_C_GetWXYouxiquanRedPoint_Params
{
};

// Function Global_Bp.Global_Bp_C.StopBGM
struct UGlobal_Bp_C_StopBGM_Params
{
};

// Function Global_Bp.Global_Bp_C.ResumeBGM
struct UGlobal_Bp_C_ResumeBGM_Params
{
};

// Function Global_Bp.Global_Bp_C.SetCorpsShopRedPoint
struct UGlobal_Bp_C_SetCorpsShopRedPoint_Params
{
};

// Function Global_Bp.Global_Bp_C.InitPlayerPrefsData
struct UGlobal_Bp_C_InitPlayerPrefsData_Params
{
};

// Function Global_Bp.Global_Bp_C.ClearLobbyBuffer
struct UGlobal_Bp_C_ClearLobbyBuffer_Params
{
};

// Function Global_Bp.Global_Bp_C.GetCorpsIconTexture
struct UGlobal_Bp_C_GetCorpsIconTexture_Params
{
	int                                                iconId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.CoverLobbyCamera
struct UGlobal_Bp_C_CoverLobbyCamera_Params
{
};

// Function Global_Bp.Global_Bp_C.RecoverLobbyCamera
struct UGlobal_Bp_C_RecoverLobbyCamera_Params
{
};

// Function Global_Bp.Global_Bp_C.TickHeadTexture
struct UGlobal_Bp_C_TickHeadTexture_Params
{
};

// Function Global_Bp.Global_Bp_C.StoreHeadTexture
struct UGlobal_Bp_C_StoreHeadTexture_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  headTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.GetHeadTexture
struct UGlobal_Bp_C_GetHeadTexture_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.GetRankTexture
struct UGlobal_Bp_C_GetRankTexture_Params
{
	int                                                rankIntegral;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.GetFrameTexture
struct UGlobal_Bp_C_GetFrameTexture_Params
{
	int                                                frameLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Global_Bp.Global_Bp_C.GetCloseLocation
struct UGlobal_Bp_C_GetCloseLocation_Params
{
};

// Function Global_Bp.Global_Bp_C.SetCloseLocation
struct UGlobal_Bp_C_SetCloseLocation_Params
{
};

// Function Global_Bp.Global_Bp_C.SetNearByRedPoint
struct UGlobal_Bp_C_SetNearByRedPoint_Params
{
};

// Function Global_Bp.Global_Bp_C.ClearYXXYRedPoint
struct UGlobal_Bp_C_ClearYXXYRedPoint_Params
{
};

// Function Global_Bp.Global_Bp_C.GetYXXYRedPoint
struct UGlobal_Bp_C_GetYXXYRedPoint_Params
{
};

// Function Global_Bp.Global_Bp_C.SetYXXYRedPoint
struct UGlobal_Bp_C_SetYXXYRedPoint_Params
{
};

// Function Global_Bp.Global_Bp_C.EnterCreateRoleDelay
struct UGlobal_Bp_C_EnterCreateRoleDelay_Params
{
};

// Function Global_Bp.Global_Bp_C.EnterCreateRole
struct UGlobal_Bp_C_EnterCreateRole_Params
{
};

// Function Global_Bp.Global_Bp_C.EnterFightStopMusic
struct UGlobal_Bp_C_EnterFightStopMusic_Params
{
};

// Function Global_Bp.Global_Bp_C.OpenPGUrl
struct UGlobal_Bp_C_OpenPGUrl_Params
{
};

// Function Global_Bp.Global_Bp_C.EventAndroidQuitGame
struct UGlobal_Bp_C_EventAndroidQuitGame_Params
{
};

// Function Global_Bp.Global_Bp_C.QuitGame
struct UGlobal_Bp_C_QuitGame_Params
{
};

// Function Global_Bp.Global_Bp_C.EnterLobby
struct UGlobal_Bp_C_EnterLobby_Params
{
};

// Function Global_Bp.Global_Bp_C.EnterLogin
struct UGlobal_Bp_C_EnterLogin_Params
{
};

// Function Global_Bp.Global_Bp_C.Construct
struct UGlobal_Bp_C_Construct_Params
{
};

// Function Global_Bp.Global_Bp_C.PreloadLobbyTextures
struct UGlobal_Bp_C_PreloadLobbyTextures_Params
{
};

// Function Global_Bp.Global_Bp_C.Destruct
struct UGlobal_Bp_C_Destruct_Params
{
};

// Function Global_Bp.Global_Bp_C.LockLobbyMaxFps
struct UGlobal_Bp_C_LockLobbyMaxFps_Params
{
};

// Function Global_Bp.Global_Bp_C.RecoverMaxFps
struct UGlobal_Bp_C_RecoverMaxFps_Params
{
};

// Function Global_Bp.Global_Bp_C.UpdateLobbyMenuOpenStatus
struct UGlobal_Bp_C_UpdateLobbyMenuOpenStatus_Params
{
};

// Function Global_Bp.Global_Bp_C.SwitchLobbySkin
struct UGlobal_Bp_C_SwitchLobbySkin_Params
{
};

// Function Global_Bp.Global_Bp_C.OnLoadStreamLevelCompleted
struct UGlobal_Bp_C_OnLoadStreamLevelCompleted_Params
{
};

// Function Global_Bp.Global_Bp_C.OnUnLoadStreamLevelCompleted
struct UGlobal_Bp_C_OnUnLoadStreamLevelCompleted_Params
{
};

// Function Global_Bp.Global_Bp_C.ExecuteUbergraph_Global_Bp
struct UGlobal_Bp_C_ExecuteUbergraph_Global_Bp_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

