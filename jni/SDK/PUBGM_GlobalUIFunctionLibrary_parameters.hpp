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

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeSecToSimpleTimeStr
struct UGlobalUIFunctionLibrary_C_TimeSecToSimpleTimeStr_Params
{
	int                                                TimeSec;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TimeStr;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShouldTouchDispatch
struct UGlobalUIFunctionLibrary_C_ShouldTouchDispatch_Params
{
	struct FPointerEvent                               PointerEventData;                                         // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               IsLeftRightMove;                                          // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldDispatch;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              DealtaValue;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCorpsRomanNumerals
struct UGlobalUIFunctionLibrary_C_GetCorpsRomanNumerals_Params
{
	int                                                Num;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     String;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsRankLevel
struct UGlobalUIFunctionLibrary_C_SetCorpsRankLevel_Params
{
	class UImage*                                      iconImage;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  levelText;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                levelId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Style;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSeasonPassImg
struct UGlobalUIFunctionLibrary_C_SetSeasonPassImg_Params
{
	int                                                SeasonID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PassType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBigIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      Img;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetChineseNumber
struct UGlobalUIFunctionLibrary_C_GetChineseNumber_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Ret;                                                      // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetSeasonPassImgPath
struct UGlobalUIFunctionLibrary_C_GetSeasonPassImgPath_Params
{
	int                                                SeasonID;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                PassType;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsBigIcon;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     imgPath;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetDefaultAvatarInfo
struct UGlobalUIFunctionLibrary_C_GetDefaultAvatarInfo_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                HeadId;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                gender;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        AvatarList;                                               // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CancelPreviewAvatar
struct UGlobalUIFunctionLibrary_C_CancelPreviewAvatar_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty
struct UGlobalUIFunctionLibrary_C_SetLobbyDefaultLightProperty_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty
struct UGlobalUIFunctionLibrary_C_SetSceneSkyLightProperty_Params
{
	struct FString                                     lightName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTransform                                  Trans;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSystemCameraByIndex
struct UGlobalUIFunctionLibrary_C_SwitchSystemCameraByIndex_Params
{
	struct FString                                     ManagerName;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     posOffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     abnormalPosOffset;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyCameraByIndex
struct UGlobalUIFunctionLibrary_C_SwitchLobbyCameraByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               forceSwitch;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     posOffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     abnormalPosOffset;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Success;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TryPreviewAvatarInfo
struct UGlobalUIFunctionLibrary_C_TryPreviewAvatarInfo_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseTouchTips
struct UGlobalUIFunctionLibrary_C_CloseTouchTips_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowTouchTipsByButton
struct UGlobalUIFunctionLibrary_C_ShowTouchTipsByButton_Params
{
	struct FString                                     str;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UButton*                                     btn;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              offsetX;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              offsetY;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     titleStr;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg
struct UGlobalUIFunctionLibrary_C_SwitchLobbyMeshBg_Params
{
	int                                                BgIdx;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PreviewAvatarInfo
struct UGlobalUIFunctionLibrary_C_PreviewAvatarInfo_Params
{
	int                                                resID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetOnLineColor
struct UGlobalUIFunctionLibrary_C_GetOnLineColor_Params
{
	int                                                onlineflag;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isonline;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FSlateColor                                 Color;                                                    // (Parm, OutParm)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGameGender
struct UGlobalUIFunctionLibrary_C_GetGameGender_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                gender;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetItemQuality
struct UGlobalUIFunctionLibrary_C_SetItemQuality_Params
{
	int                                                itemquality;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UImage*                                      imageres;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty
struct UGlobalUIFunctionLibrary_C_SetScenePointLightProperty_Params
{
	struct FString                                     lightName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTransform                                  targetTrans;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	int                                                inverseSquareFalloff;                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               useTemperature;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty
struct UGlobalUIFunctionLibrary_C_SetSceneDirectionalLightProperty_Params
{
	struct FString                                     lightName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FTransform                                  targetTrans;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	float                                              Intensity;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateIntimacyRelationIcon
struct UGlobalUIFunctionLibrary_C_UpdateIntimacyRelationIcon_Params
{
	int                                                relation;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UCanvasPanel*                                panel;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UWidgetSwitcher*                             switcher;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  TextBlock;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetIntimacy
struct UGlobalUIFunctionLibrary_C_SetIntimacy_Params
{
	class UImage*                                      heart;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                intimacynum;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  intimacyText;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSceneCameraByIndex
struct UGlobalUIFunctionLibrary_C_SwitchSceneCameraByIndex_Params
{
	int                                                Idx;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     posOffset;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     abnormalPosOffset;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsSegmentLimit
struct UGlobalUIFunctionLibrary_C_SetCorpsSegmentLimit_Params
{
	class UCommon_RankIntegralLevel_Style_Small_UIBP_C* segmentWidget;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTextBlock*                                  textWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                levelId;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsLevelLimit
struct UGlobalUIFunctionLibrary_C_SetCorpsLevelLimit_Params
{
	class UTextBlock*                                  textWidget;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon
struct UGlobalUIFunctionLibrary_C_GetLobbyCorpsIcon_Params
{
	int                                                iconId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseHelpTips
struct UGlobalUIFunctionLibrary_C_CloseHelpTips_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowHelpTipsByButton
struct UGlobalUIFunctionLibrary_C_ShowHelpTipsByButton_Params
{
	int                                                StrID;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeSecToTimeStr
struct UGlobalUIFunctionLibrary_C_TimeSecToTimeStr_Params
{
	int                                                Second;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TimeStr;                                                  // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyHeadTexture
struct UGlobalUIFunctionLibrary_C_GetLobbyHeadTexture_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Value;                                                    // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.StoreLobbyHeadTexture
struct UGlobalUIFunctionLibrary_C_StoreLobbyHeadTexture_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UTexture2D*                                  headTexture;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyRankTexture
struct UGlobalUIFunctionLibrary_C_GetLobbyRankTexture_Params
{
	int                                                rankIntegral;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture
struct UGlobalUIFunctionLibrary_C_GetLobbyFrameTexture_Params
{
	int                                                frameLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  Output;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp
struct UGlobalUIFunctionLibrary_C_GetLobbyGlobalBp_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGlobal_Bp_C*                                AsGlobal_Bp;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunctionNoFetch
struct UGlobalUIFunctionLibrary_C_InvoleBpFunctionNoFetch_Params
{
	struct FName                                       bp_name;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     func_name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPlayerPrefs
struct UGlobalUIFunctionLibrary_C_GetPlayerPrefs_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UPlayerPrefs_C*                              bp_playerprefs;                                           // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenUseItemUI
struct UGlobalUIFunctionLibrary_C_OpenUseItemUI_Params
{
	struct FString                                     itemInsID;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowLobbyMenuEnterAnimation
struct UGlobalUIFunctionLibrary_C_ShowLobbyMenuEnterAnimation_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyMenuStatus
struct UGlobalUIFunctionLibrary_C_SetLobbyMenuStatus_Params
{
	int                                                MenuId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Status;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen
struct UGlobalUIFunctionLibrary_C_CheckIfMenuOpen_Params
{
	int                                                MenuId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Ret;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidStringAll
struct UGlobalUIFunctionLibrary_C_GetValidStringAll_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               CanBeEnglish;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeSpace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeChinese;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     validText;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateLobbyRedpointStatus
struct UGlobalUIFunctionLibrary_C_UpdateLobbyRedpointStatus_Params
{
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                modeId;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS_Server
struct UGlobalUIFunctionLibrary_C_GetItemTimeS_Server_Params
{
	int                                                expire_ts;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                valid_hours;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     time_s;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               is_have_limit;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS
struct UGlobalUIFunctionLibrary_C_GetItemTimeS_Params
{
	int                                                res_id;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                FirstTimeNum;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     time_s;                                                   // (Parm, OutParm, ZeroConstructor)
	bool                                               is_have_limit;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeNumToTimeS
struct UGlobalUIFunctionLibrary_C_TimeNumToTimeS_Params
{
	int                                                time_num;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     time_s;                                                   // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsWithItemInfo
struct UGlobalUIFunctionLibrary_C_ShowItemTipsWithItemInfo_Params
{
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CommonItemData                   item_info;                                                // (BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                               ignoreJump;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton
struct UGlobalUIFunctionLibrary_C_ShowItemTipsByButton_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UButton*                                     Button;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips
struct UGlobalUIFunctionLibrary_C_CloseItemTips_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByPos
struct UGlobalUIFunctionLibrary_C_ShowItemTipsByPos_Params
{
	int                                                ItemID;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   pos;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget
struct UGlobalUIFunctionLibrary_C_CreateUAEUserWidget_Params
{
	class UClass*                                      Class;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Parent;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton
struct UGlobalUIFunctionLibrary_C_PlaySoundCloseButton_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect
struct UGlobalUIFunctionLibrary_C_ShowEffect_Params
{
	TArray<class UWidget*>                             Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               IsShow;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible
struct UGlobalUIFunctionLibrary_C_IsWidgetVisible_Params
{
	class UWidget*                                     Widget;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Visible;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton
struct UGlobalUIFunctionLibrary_C_PlaySoundClickButton_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsChinese
struct UGlobalUIFunctionLibrary_C_IsChinese_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport
struct UGlobalUIFunctionLibrary_C_SendBAReport_Params
{
	int                                                ButtonType;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Reason;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsValidChar
struct UGlobalUIFunctionLibrary_C_IsValidChar_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               CanBeEnglish;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeSpace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeChinese;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsNumber
struct UGlobalUIFunctionLibrary_C_IsNumber_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsSpace
struct UGlobalUIFunctionLibrary_C_IsSpace_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               Result;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength
struct UGlobalUIFunctionLibrary_C_GetTextLength_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               chineseSensity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Length;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible
struct UGlobalUIFunctionLibrary_C_BoolToVisible_Params
{
	bool                                               Visible;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               collapse;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isButton;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	ESlateVisibility                                   Visibility;                                               // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidString
struct UGlobalUIFunctionLibrary_C_GetValidString_Params
{
	int                                                maxLength;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               CanBeEnglish;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeNumber;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeSpace;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               CanBeChinese;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               chineseSensity;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     validText;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.isEnglish
struct UGlobalUIFunctionLibrary_C_isEnglish_Params
{
	struct FString                                     Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               isEnglish;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenURL
struct UGlobalUIFunctionLibrary_C_OpenURL_Params
{
	struct FString                                     URL;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	EScreenDir                                         Direction;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               hastoken;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankName
struct UGlobalUIFunctionLibrary_C_UpdateRankName_Params
{
	class UTextBlock*                                  Text;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankIcon
struct UGlobalUIFunctionLibrary_C_UpdateRankIcon_Params
{
	class UImage*                                      imageObj;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Level;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData
struct UGlobalUIFunctionLibrary_C_GetGlobalData_Params
{
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class Abp_global_C*                                globalObj;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunction
struct UGlobalUIFunctionLibrary_C_InvoleBpFunction_Params
{
	struct FName                                       bp_name;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     func_name;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString
struct UGlobalUIFunctionLibrary_C_GetLocalizeString_Params
{
	int                                                ID;                                                       // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     string1;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     string2;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	struct FString                                     string3;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TextValue;                                                // (Parm, OutParm, ZeroConstructor)
};

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalUIEventDispatcher
struct UGlobalUIFunctionLibrary_C_GetGlobalUIEventDispatcher_Params
{
	class UFrontendHUD*                                FrontendHUD;                                              // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     __WorldContext;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGlobalUIEventDispatcher_BP_C*               NewParam;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

