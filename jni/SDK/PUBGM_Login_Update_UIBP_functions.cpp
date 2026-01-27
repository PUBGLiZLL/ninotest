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

// Function Login_Update_UIBP.Login_Update_UIBP_C.GetDownloadSpeed
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 downloadspeed                  (Parm, OutParm, ZeroConstructor)

void ULogin_Update_UIBP_C::GetDownloadSpeed(struct FString* downloadspeed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.GetDownloadSpeed");

	ULogin_Update_UIBP_C_GetDownloadSpeed_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (downloadspeed != nullptr)
		*downloadspeed = params.downloadspeed;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.StopShaderPreCompileTimer
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::StopShaderPreCompileTimer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.StopShaderPreCompileTimer");

	ULogin_Update_UIBP_C_StopShaderPreCompileTimer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.OnShaderPreCompileTimer
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::OnShaderPreCompileTimer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.OnShaderPreCompileTimer");

	ULogin_Update_UIBP_C_OnShaderPreCompileTimer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.UIHide
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::UIHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.UIHide");

	ULogin_Update_UIBP_C_UIHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.HideReconnectAndUpdateInfo
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::HideReconnectAndUpdateInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.HideReconnectAndUpdateInfo");

	ULogin_Update_UIBP_C_HideReconnectAndUpdateInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.UpdateProgressShaderPreCompile
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::UpdateProgressShaderPreCompile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.UpdateProgressShaderPreCompile");

	ULogin_Update_UIBP_C_UpdateProgressShaderPreCompile_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.UpdateStartShaderPreCompile
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::UpdateStartShaderPreCompile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.UpdateStartShaderPreCompile");

	ULogin_Update_UIBP_C_UpdateStartShaderPreCompile_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.HideUpdateBg
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::HideUpdateBg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.HideUpdateBg");

	ULogin_Update_UIBP_C_HideUpdateBg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.ShowUpdateBg
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::ShowUpdateBg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.ShowUpdateBg");

	ULogin_Update_UIBP_C_ShowUpdateBg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.CancelResUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::CancelResUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.CancelResUpdate");

	ULogin_Update_UIBP_C_CancelResUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.CancelAppUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::CancelAppUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.CancelAppUpdate");

	ULogin_Update_UIBP_C_CancelAppUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.GrayShowWaiting
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::GrayShowWaiting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.GrayShowWaiting");

	ULogin_Update_UIBP_C_GrayShowWaiting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.RetryDownload
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::RetryDownload()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.RetryDownload");

	ULogin_Update_UIBP_C_RetryDownload_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.NoWifiStartUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::NoWifiStartUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.NoWifiStartUpdate");

	ULogin_Update_UIBP_C_NoWifiStartUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.ShowWaiting
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::ShowWaiting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.ShowWaiting");

	ULogin_Update_UIBP_C_ShowWaiting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.OnFinished
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::OnFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.OnFinished");

	ULogin_Update_UIBP_C_OnFinished_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.OnShow
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::OnShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.OnShow");

	ULogin_Update_UIBP_C_OnShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.ShowUpdateUI
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::ShowUpdateUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.ShowUpdateUI");

	ULogin_Update_UIBP_C_ShowUpdateUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.UpdateFinish
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::UpdateFinish()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.UpdateFinish");

	ULogin_Update_UIBP_C_UpdateFinish_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.StartUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::StartUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.StartUpdate");

	ULogin_Update_UIBP_C_StartUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.CancelUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::CancelUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.CancelUpdate");

	ULogin_Update_UIBP_C_CancelUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.NoticeUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::NoticeUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.NoticeUpdate");

	ULogin_Update_UIBP_C_NoticeUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.SetCurStage
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 stage                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void ULogin_Update_UIBP_C::SetCurStage(const struct FString& stage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.SetCurStage");

	ULogin_Update_UIBP_C_SetCurStage_Params params;
	params.stage = stage;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.RefreshProgress
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULogin_Update_UIBP_C::RefreshProgress()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.RefreshProgress");

	ULogin_Update_UIBP_C_RefreshProgress_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULogin_Update_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.Construct");

	ULogin_Update_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULogin_Update_UIBP_C::BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULogin_Update_UIBP_C_BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.BndEvt__Button_Updated_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULogin_Update_UIBP_C::BndEvt__Button_Updated_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.BndEvt__Button_Updated_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature");

	ULogin_Update_UIBP_C_BndEvt__Button_Updated_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Update_UIBP.Login_Update_UIBP_C.ExecuteUbergraph_Login_Update_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULogin_Update_UIBP_C::ExecuteUbergraph_Login_Update_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Update_UIBP.Login_Update_UIBP_C.ExecuteUbergraph_Login_Update_UIBP");

	ULogin_Update_UIBP_C_ExecuteUbergraph_Login_Update_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

