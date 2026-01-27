//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Global_Bp.Global_Bp_C.FetchServerKey
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::FetchServerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.FetchServerKey");

	UGlobal_Bp_C_FetchServerKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.UpdateServerKey
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::UpdateServerKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.UpdateServerKey");

	UGlobal_Bp_C_UpdateServerKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.GetXGCreatePlayerTime
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::GetXGCreatePlayerTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetXGCreatePlayerTime");

	UGlobal_Bp_C_GetXGCreatePlayerTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SetXGCreatePlayerTime
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SetXGCreatePlayerTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetXGCreatePlayerTime");

	UGlobal_Bp_C_SetXGCreatePlayerTime_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.OnQueryCustomSettingHandle
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::OnQueryCustomSettingHandle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.OnQueryCustomSettingHandle");

	UGlobal_Bp_C_OnQueryCustomSettingHandle_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.GetRankLargeLevelTexture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::GetRankLargeLevelTexture(int rankIntegral, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetRankLargeLevelTexture");

	UGlobal_Bp_C_GetRankLargeLevelTexture_Params params;
	params.rankIntegral = rankIntegral;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Global_Bp.Global_Bp_C.GetRankLargeBaseTexture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::GetRankLargeBaseTexture(int rankIntegral, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetRankLargeBaseTexture");

	UGlobal_Bp_C_GetRankLargeBaseTexture_Params params;
	params.rankIntegral = rankIntegral;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Global_Bp.Global_Bp_C.SetSeasonSwitchData
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SetSeasonSwitchData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetSeasonSwitchData");

	UGlobal_Bp_C_SetSeasonSwitchData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.GetSeasonSwitchData
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::GetSeasonSwitchData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetSeasonSwitchData");

	UGlobal_Bp_C_GetSeasonSwitchData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InnerPreviewAvatar
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::InnerPreviewAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InnerPreviewAvatar");

	UGlobal_Bp_C_InnerPreviewAvatar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.CancelPreviewAvatar
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::CancelPreviewAvatar()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.CancelPreviewAvatar");

	UGlobal_Bp_C_CancelPreviewAvatar_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SetMatchTagGuideFlag
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SetMatchTagGuideFlag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetMatchTagGuideFlag");

	UGlobal_Bp_C_SetMatchTagGuideFlag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.GetMatchTagGuideFlag
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hasGuide                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::GetMatchTagGuideFlag(bool* hasGuide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetMatchTagGuideFlag");

	UGlobal_Bp_C_GetMatchTagGuideFlag_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (hasGuide != nullptr)
		*hasGuide = params.hasGuide;
}


// Function Global_Bp.Global_Bp_C.SwitchCameraFarImmediate
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SwitchCameraFarImmediate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SwitchCameraFarImmediate");

	UGlobal_Bp_C_SwitchCameraFarImmediate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SwitchWarzoneBG
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SwitchWarzoneBG()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SwitchWarzoneBG");

	UGlobal_Bp_C_SwitchWarzoneBG_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.TryPreviewAvatar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            NewParam                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::TryPreviewAvatar(int NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.TryPreviewAvatar");

	UGlobal_Bp_C_TryPreviewAvatar_Params params;
	params.NewParam = NewParam;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SwitchLobbyMeshBg
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SwitchLobbyMeshBg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SwitchLobbyMeshBg");

	UGlobal_Bp_C_SwitchLobbyMeshBg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SwitchSceneCameraByIndex
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SwitchSceneCameraByIndex()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SwitchSceneCameraByIndex");

	UGlobal_Bp_C_SwitchSceneCameraByIndex_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.PreviewAvatar
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::PreviewAvatar(int resID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.PreviewAvatar");

	UGlobal_Bp_C_PreviewAvatar_Params params;
	params.resID = resID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.GetGlobalConfigData
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::GetGlobalConfigData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetGlobalConfigData");

	UGlobal_Bp_C_GetGlobalConfigData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SetGlobalConfigData
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SetGlobalConfigData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetGlobalConfigData");

	UGlobal_Bp_C_SetGlobalConfigData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.GetDragDropWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            dragDropType                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::GetDragDropWidget(int dragDropType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetDragDropWidget");

	UGlobal_Bp_C_GetDragDropWidget_Params params;
	params.dragDropType = dragDropType;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.ClearWXYouxiquanRedPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::ClearWXYouxiquanRedPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.ClearWXYouxiquanRedPoint");

	UGlobal_Bp_C_ClearWXYouxiquanRedPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SetWXYouxiquanRedPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SetWXYouxiquanRedPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetWXYouxiquanRedPoint");

	UGlobal_Bp_C_SetWXYouxiquanRedPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.GetWXYouxiquanRedPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::GetWXYouxiquanRedPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetWXYouxiquanRedPoint");

	UGlobal_Bp_C_GetWXYouxiquanRedPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.StopBGM
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::StopBGM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.StopBGM");

	UGlobal_Bp_C_StopBGM_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.ResumeBGM
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::ResumeBGM()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.ResumeBGM");

	UGlobal_Bp_C_ResumeBGM_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SetCorpsShopRedPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SetCorpsShopRedPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetCorpsShopRedPoint");

	UGlobal_Bp_C_SetCorpsShopRedPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.InitPlayerPrefsData
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::InitPlayerPrefsData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.InitPlayerPrefsData");

	UGlobal_Bp_C_InitPlayerPrefsData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.ClearLobbyBuffer
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::ClearLobbyBuffer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.ClearLobbyBuffer");

	UGlobal_Bp_C_ClearLobbyBuffer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.GetCorpsIconTexture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            iconId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::GetCorpsIconTexture(int iconId, class UTexture2D** Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetCorpsIconTexture");

	UGlobal_Bp_C_GetCorpsIconTexture_Params params;
	params.iconId = iconId;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Global_Bp.Global_Bp_C.CoverLobbyCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::CoverLobbyCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.CoverLobbyCamera");

	UGlobal_Bp_C_CoverLobbyCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.RecoverLobbyCamera
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::RecoverLobbyCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.RecoverLobbyCamera");

	UGlobal_Bp_C_RecoverLobbyCamera_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.TickHeadTexture
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::TickHeadTexture()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.TickHeadTexture");

	UGlobal_Bp_C_TickHeadTexture_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.StoreHeadTexture
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              headTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::StoreHeadTexture(const struct FString& URL, class UTexture2D* headTexture)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.StoreHeadTexture");

	UGlobal_Bp_C_StoreHeadTexture_Params params;
	params.URL = URL;
	params.headTexture = headTexture;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.GetHeadTexture
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::GetHeadTexture(const struct FString& URL, class UTexture2D** Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetHeadTexture");

	UGlobal_Bp_C_GetHeadTexture_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function Global_Bp.Global_Bp_C.GetRankTexture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::GetRankTexture(int rankIntegral, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetRankTexture");

	UGlobal_Bp_C_GetRankTexture_Params params;
	params.rankIntegral = rankIntegral;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Global_Bp.Global_Bp_C.GetFrameTexture
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            frameLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::GetFrameTexture(int frameLevel, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetFrameTexture");

	UGlobal_Bp_C_GetFrameTexture_Params params;
	params.frameLevel = frameLevel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Global_Bp.Global_Bp_C.GetCloseLocation
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::GetCloseLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetCloseLocation");

	UGlobal_Bp_C_GetCloseLocation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SetCloseLocation
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SetCloseLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetCloseLocation");

	UGlobal_Bp_C_SetCloseLocation_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SetNearByRedPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SetNearByRedPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetNearByRedPoint");

	UGlobal_Bp_C_SetNearByRedPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.ClearYXXYRedPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::ClearYXXYRedPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.ClearYXXYRedPoint");

	UGlobal_Bp_C_ClearYXXYRedPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.GetYXXYRedPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::GetYXXYRedPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.GetYXXYRedPoint");

	UGlobal_Bp_C_GetYXXYRedPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SetYXXYRedPoint
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SetYXXYRedPoint()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SetYXXYRedPoint");

	UGlobal_Bp_C_SetYXXYRedPoint_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.EnterCreateRoleDelay
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::EnterCreateRoleDelay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.EnterCreateRoleDelay");

	UGlobal_Bp_C_EnterCreateRoleDelay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.EnterCreateRole
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::EnterCreateRole()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.EnterCreateRole");

	UGlobal_Bp_C_EnterCreateRole_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.EnterFightStopMusic
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::EnterFightStopMusic()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.EnterFightStopMusic");

	UGlobal_Bp_C_EnterFightStopMusic_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.OpenPGUrl
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::OpenPGUrl()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.OpenPGUrl");

	UGlobal_Bp_C_OpenPGUrl_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.EventAndroidQuitGame
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::EventAndroidQuitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.EventAndroidQuitGame");

	UGlobal_Bp_C_EventAndroidQuitGame_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::QuitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.QuitGame");

	UGlobal_Bp_C_QuitGame_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.EnterLobby
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::EnterLobby()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.EnterLobby");

	UGlobal_Bp_C_EnterLobby_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.EnterLogin
// (Public, BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::EnterLogin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.EnterLogin");

	UGlobal_Bp_C_EnterLogin_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGlobal_Bp_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.Construct");

	UGlobal_Bp_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.PreloadLobbyTextures
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::PreloadLobbyTextures()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.PreloadLobbyTextures");

	UGlobal_Bp_C_PreloadLobbyTextures_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UGlobal_Bp_C::Destruct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.Destruct");

	UGlobal_Bp_C_Destruct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.LockLobbyMaxFps
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::LockLobbyMaxFps()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.LockLobbyMaxFps");

	UGlobal_Bp_C_LockLobbyMaxFps_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.RecoverMaxFps
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::RecoverMaxFps()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.RecoverMaxFps");

	UGlobal_Bp_C_RecoverMaxFps_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.UpdateLobbyMenuOpenStatus
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::UpdateLobbyMenuOpenStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.UpdateLobbyMenuOpenStatus");

	UGlobal_Bp_C_UpdateLobbyMenuOpenStatus_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.SwitchLobbySkin
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::SwitchLobbySkin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.SwitchLobbySkin");

	UGlobal_Bp_C_SwitchLobbySkin_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.OnLoadStreamLevelCompleted
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::OnLoadStreamLevelCompleted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.OnLoadStreamLevelCompleted");

	UGlobal_Bp_C_OnLoadStreamLevelCompleted_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.OnUnLoadStreamLevelCompleted
// (BlueprintCallable, BlueprintEvent)

void UGlobal_Bp_C::OnUnLoadStreamLevelCompleted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.OnUnLoadStreamLevelCompleted");

	UGlobal_Bp_C_OnUnLoadStreamLevelCompleted_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Global_Bp.Global_Bp_C.ExecuteUbergraph_Global_Bp
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobal_Bp_C::ExecuteUbergraph_Global_Bp(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Global_Bp.Global_Bp_C.ExecuteUbergraph_Global_Bp");

	UGlobal_Bp_C_ExecuteUbergraph_Global_Bp_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

