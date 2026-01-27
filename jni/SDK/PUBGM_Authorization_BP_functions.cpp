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

// Function Authorization_BP.Authorization_BP_C.ShowHelpBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::ShowHelpBtn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.ShowHelpBtn");

	UAuthorization_BP_C_ShowHelpBtn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.SetSettingVars
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::SetSettingVars(class USettingConfig_C* Config)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.SetSettingVars");

	UAuthorization_BP_C_SetSettingVars_Params params;
	params.Config = Config;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.IsServiceAccepted
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           accept                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::IsServiceAccepted(bool* accept)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.IsServiceAccepted");

	UAuthorization_BP_C_IsServiceAccepted_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (accept != nullptr)
		*accept = params.accept;
}


// Function Authorization_BP.Authorization_BP_C.SetCheckBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           isCheck                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::SetCheckBox(bool isCheck)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.SetCheckBox");

	UAuthorization_BP_C_SetCheckBox_Params params;
	params.isCheck = isCheck;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.SetScreenLightness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        Config                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::SetScreenLightness(class USettingConfig_C* Config)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.SetScreenLightness");

	UAuthorization_BP_C_SetScreenLightness_Params params;
	params.Config = Config;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.SetLocalSavedQuickMsgSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::SetLocalSavedQuickMsgSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.SetLocalSavedQuickMsgSetting");

	UAuthorization_BP_C_SetLocalSavedQuickMsgSetting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.SetServiceAndPolicyCallType
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            calltype                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::SetServiceAndPolicyCallType(int calltype)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.SetServiceAndPolicyCallType");

	UAuthorization_BP_C_SetServiceAndPolicyCallType_Params params;
	params.calltype = calltype;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.SetServiceAndPolicyChecked
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::SetServiceAndPolicyChecked()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.SetServiceAndPolicyChecked");

	UAuthorization_BP_C_SetServiceAndPolicyChecked_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.ReleaseLoginButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::ReleaseLoginButtons()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.ReleaseLoginButtons");

	UAuthorization_BP_C_ReleaseLoginButtons_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BlockLoginButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::BlockLoginButtons()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BlockLoginButtons");

	UAuthorization_BP_C_BlockLoginButtons_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.updateLoginButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::updateLoginButtons()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.updateLoginButtons");

	UAuthorization_BP_C_updateLoginButtons_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.HideHelpBtn
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::HideHelpBtn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.HideHelpBtn");

	UAuthorization_BP_C_HideHelpBtn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.GetMaxSupportFps
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            maxFpsIndex                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::GetMaxSupportFps(int* maxFpsIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.GetMaxSupportFps");

	UAuthorization_BP_C_GetMaxSupportFps_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (maxFpsIndex != nullptr)
		*maxFpsIndex = params.maxFpsIndex;
}


// Function Authorization_BP.Authorization_BP_C.SendPictureSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::SendPictureSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.SendPictureSetting");

	UAuthorization_BP_C_SendPictureSetting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.CheckRendingSafe
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::CheckRendingSafe()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.CheckRendingSafe");

	UAuthorization_BP_C_CheckRendingSafe_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.RefreshGameVersion
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::RefreshGameVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.RefreshGameVersion");

	UAuthorization_BP_C_RefreshGameVersion_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.ShowEffects
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Is_show                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::ShowEffects(bool Is_show)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.ShowEffects");

	UAuthorization_BP_C_ShowEffects_Params params;
	params.Is_show = Is_show;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.UIShow2
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::UIShow2()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.UIShow2");

	UAuthorization_BP_C_UIShow2_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.ShowUI
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::ShowUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.ShowUI");

	UAuthorization_BP_C_ShowUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.InitAuthorizationUI
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::InitAuthorizationUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.InitAuthorizationUI");

	UAuthorization_BP_C_InitAuthorizationUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.InitLoginUI
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::InitLoginUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.InitLoginUI");

	UAuthorization_BP_C_InitLoginUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.doAutoLogin
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::doAutoLogin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.doAutoLogin");

	UAuthorization_BP_C_doAutoLogin_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.UpdateRelatedSetting
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::UpdateRelatedSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.UpdateRelatedSetting");

	UAuthorization_BP_C_UpdateRelatedSetting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.DoUpdate
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::DoUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.DoUpdate");

	UAuthorization_BP_C_DoUpdate_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.SetFpsByIndex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::SetFpsByIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.SetFpsByIndex");

	UAuthorization_BP_C_SetFpsByIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.InitFps
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        settingConfig                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::InitFps(class USettingConfig_C* settingConfig)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.InitFps");

	UAuthorization_BP_C_InitFps_Params params;
	params.settingConfig = settingConfig;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.SetLbsOffAndDisableMicphone
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        settingObj                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::SetLbsOffAndDisableMicphone(class USettingConfig_C* settingObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.SetLbsOffAndDisableMicphone");

	UAuthorization_BP_C_SetLbsOffAndDisableMicphone_Params params;
	params.settingObj = settingObj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.InitVoiceSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USettingConfig_C*        settingObj                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::InitVoiceSetting(class USettingConfig_C* settingObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.InitVoiceSetting");

	UAuthorization_BP_C_InitVoiceSetting_Params params;
	params.settingObj = settingObj;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.SetSoudsSetting
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   ParamName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ParamValue                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::SetSoudsSetting(const struct FName& ParamName, float ParamValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.SetSoudsSetting");

	UAuthorization_BP_C_SetSoudsSetting_Params params;
	params.ParamName = ParamName;
	params.ParamValue = ParamValue;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.InitUserSetting
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::InitUserSetting()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.InitUserSetting");

	UAuthorization_BP_C_InitUserSetting_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.setLoginLimit
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::setLoginLimit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.setLoginLimit");

	UAuthorization_BP_C_setLoginLimit_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.addLoginCount
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::addLoginCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.addLoginCount");

	UAuthorization_BP_C_addLoginCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.clearLoginCount
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::clearLoginCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.clearLoginCount");

	UAuthorization_BP_C_clearLoginCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.redoAutoAuthorization
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::redoAutoAuthorization()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.redoAutoAuthorization");

	UAuthorization_BP_C_redoAutoAuthorization_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.doAuthorization
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::doAuthorization()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.doAuthorization");

	UAuthorization_BP_C_doAuthorization_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.hideButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::hideButtons()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.hideButtons");

	UAuthorization_BP_C_hideButtons_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.showButtons
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::showButtons()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.showButtons");

	UAuthorization_BP_C_showButtons_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.QuitGame
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::QuitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.QuitGame");

	UAuthorization_BP_C_QuitGame_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.hideAuthorizationUI
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::hideAuthorizationUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.hideAuthorizationUI");

	UAuthorization_BP_C_hideAuthorizationUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.startAuthorization
// (Public, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::startAuthorization()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.startAuthorization");

	UAuthorization_BP_C_startAuthorization_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.showAuthorizationUI
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::showAuthorizationUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.showAuthorizationUI");

	UAuthorization_BP_C_showAuthorizationUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Login_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_Login_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Login_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_Login_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Button_VisitorEnter0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_Button_VisitorEnter0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Button_VisitorEnter0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_Button_VisitorEnter0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_QQ2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_QQ2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_QQ2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_QQ2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_WX1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_WX1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_WX1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_WX1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                           bIsChecked                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature");

	UAuthorization_BP_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params params;
	params.bIsChecked = bIsChecked;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Service3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_Service3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Service3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_Service3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.StartAutoAuthorization
// (BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::StartAutoAuthorization()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.StartAutoAuthorization");

	UAuthorization_BP_C_StartAutoAuthorization_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_1_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Help_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_Help_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Help_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_Help_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_LoginOut_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_LoginOut_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_LoginOut_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_LoginOut_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Repair_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_Repair_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Repair_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_Repair_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Policy_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void UAuthorization_BP_C::BndEvt__Button_Policy_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Policy_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature");

	UAuthorization_BP_C_BndEvt__Button_Policy_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UAuthorization_BP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.Construct");

	UAuthorization_BP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.ExecuteUbergraph_Authorization_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAuthorization_BP_C::ExecuteUbergraph_Authorization_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.ExecuteUbergraph_Authorization_BP");

	UAuthorization_BP_C_ExecuteUbergraph_Authorization_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Authorization_BP.Authorization_BP_C.startGameSounds__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UAuthorization_BP_C::startGameSounds__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Authorization_BP.Authorization_BP_C.startGameSounds__DelegateSignature");

	UAuthorization_BP_C_startGameSounds__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

