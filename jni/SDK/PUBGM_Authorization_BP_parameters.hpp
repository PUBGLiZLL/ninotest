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

// Function Authorization_BP.Authorization_BP_C.ShowHelpBtn
struct UAuthorization_BP_C_ShowHelpBtn_Params
{
};

// Function Authorization_BP.Authorization_BP_C.SetSettingVars
struct UAuthorization_BP_C_SetSettingVars_Params
{
	class USettingConfig_C*                            Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.IsServiceAccepted
struct UAuthorization_BP_C_IsServiceAccepted_Params
{
	bool                                               accept;                                                   // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.SetCheckBox
struct UAuthorization_BP_C_SetCheckBox_Params
{
	bool                                               isCheck;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.SetScreenLightness
struct UAuthorization_BP_C_SetScreenLightness_Params
{
	class USettingConfig_C*                            Config;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.SetLocalSavedQuickMsgSetting
struct UAuthorization_BP_C_SetLocalSavedQuickMsgSetting_Params
{
};

// Function Authorization_BP.Authorization_BP_C.SetServiceAndPolicyCallType
struct UAuthorization_BP_C_SetServiceAndPolicyCallType_Params
{
	int                                                calltype;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.SetServiceAndPolicyChecked
struct UAuthorization_BP_C_SetServiceAndPolicyChecked_Params
{
};

// Function Authorization_BP.Authorization_BP_C.ReleaseLoginButtons
struct UAuthorization_BP_C_ReleaseLoginButtons_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BlockLoginButtons
struct UAuthorization_BP_C_BlockLoginButtons_Params
{
};

// Function Authorization_BP.Authorization_BP_C.updateLoginButtons
struct UAuthorization_BP_C_updateLoginButtons_Params
{
};

// Function Authorization_BP.Authorization_BP_C.HideHelpBtn
struct UAuthorization_BP_C_HideHelpBtn_Params
{
};

// Function Authorization_BP.Authorization_BP_C.GetMaxSupportFps
struct UAuthorization_BP_C_GetMaxSupportFps_Params
{
	int                                                maxFpsIndex;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.SendPictureSetting
struct UAuthorization_BP_C_SendPictureSetting_Params
{
};

// Function Authorization_BP.Authorization_BP_C.CheckRendingSafe
struct UAuthorization_BP_C_CheckRendingSafe_Params
{
};

// Function Authorization_BP.Authorization_BP_C.RefreshGameVersion
struct UAuthorization_BP_C_RefreshGameVersion_Params
{
};

// Function Authorization_BP.Authorization_BP_C.ShowEffects
struct UAuthorization_BP_C_ShowEffects_Params
{
	bool                                               Is_show;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.UIShow2
struct UAuthorization_BP_C_UIShow2_Params
{
};

// Function Authorization_BP.Authorization_BP_C.ShowUI
struct UAuthorization_BP_C_ShowUI_Params
{
};

// Function Authorization_BP.Authorization_BP_C.InitAuthorizationUI
struct UAuthorization_BP_C_InitAuthorizationUI_Params
{
};

// Function Authorization_BP.Authorization_BP_C.InitLoginUI
struct UAuthorization_BP_C_InitLoginUI_Params
{
};

// Function Authorization_BP.Authorization_BP_C.doAutoLogin
struct UAuthorization_BP_C_doAutoLogin_Params
{
};

// Function Authorization_BP.Authorization_BP_C.UpdateRelatedSetting
struct UAuthorization_BP_C_UpdateRelatedSetting_Params
{
};

// Function Authorization_BP.Authorization_BP_C.DoUpdate
struct UAuthorization_BP_C_DoUpdate_Params
{
};

// Function Authorization_BP.Authorization_BP_C.SetFpsByIndex
struct UAuthorization_BP_C_SetFpsByIndex_Params
{
	int                                                Index;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.InitFps
struct UAuthorization_BP_C_InitFps_Params
{
	class USettingConfig_C*                            settingConfig;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.SetLbsOffAndDisableMicphone
struct UAuthorization_BP_C_SetLbsOffAndDisableMicphone_Params
{
	class USettingConfig_C*                            settingObj;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.InitVoiceSetting
struct UAuthorization_BP_C_InitVoiceSetting_Params
{
	class USettingConfig_C*                            settingObj;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.SetSoudsSetting
struct UAuthorization_BP_C_SetSoudsSetting_Params
{
	struct FName                                       ParamName;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ParamValue;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.InitUserSetting
struct UAuthorization_BP_C_InitUserSetting_Params
{
};

// Function Authorization_BP.Authorization_BP_C.setLoginLimit
struct UAuthorization_BP_C_setLoginLimit_Params
{
};

// Function Authorization_BP.Authorization_BP_C.addLoginCount
struct UAuthorization_BP_C_addLoginCount_Params
{
};

// Function Authorization_BP.Authorization_BP_C.clearLoginCount
struct UAuthorization_BP_C_clearLoginCount_Params
{
};

// Function Authorization_BP.Authorization_BP_C.redoAutoAuthorization
struct UAuthorization_BP_C_redoAutoAuthorization_Params
{
};

// Function Authorization_BP.Authorization_BP_C.doAuthorization
struct UAuthorization_BP_C_doAuthorization_Params
{
};

// Function Authorization_BP.Authorization_BP_C.hideButtons
struct UAuthorization_BP_C_hideButtons_Params
{
};

// Function Authorization_BP.Authorization_BP_C.showButtons
struct UAuthorization_BP_C_showButtons_Params
{
};

// Function Authorization_BP.Authorization_BP_C.QuitGame
struct UAuthorization_BP_C_QuitGame_Params
{
};

// Function Authorization_BP.Authorization_BP_C.hideAuthorizationUI
struct UAuthorization_BP_C_hideAuthorizationUI_Params
{
};

// Function Authorization_BP.Authorization_BP_C.startAuthorization
struct UAuthorization_BP_C_startAuthorization_Params
{
};

// Function Authorization_BP.Authorization_BP_C.showAuthorizationUI
struct UAuthorization_BP_C_showAuthorizationUI_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Login_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_Login_K2Node_ComponentBoundEvent_249_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Button_VisitorEnter0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_Button_VisitorEnter0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_QQ2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_QQ2_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_WX1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_WX1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature
struct UAuthorization_BP_C_BndEvt__CheckBox_0_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature_Params
{
	bool                                               bIsChecked;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Service3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_Service3_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.StartAutoAuthorization
struct UAuthorization_BP_C_StartAutoAuthorization_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_1_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_1_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_2_K2Node_ComponentBoundEvent_51_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_LeavePlane_K2Node_ComponentBoundEvent_112_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Help_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_Help_K2Node_ComponentBoundEvent_129_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_LoginOut_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_LoginOut_K2Node_ComponentBoundEvent_62_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Repair_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_Repair_K2Node_ComponentBoundEvent_37_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.BndEvt__Button_Policy_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature
struct UAuthorization_BP_C_BndEvt__Button_Policy_K2Node_ComponentBoundEvent_146_OnButtonClickedEvent__DelegateSignature_Params
{
};

// Function Authorization_BP.Authorization_BP_C.Construct
struct UAuthorization_BP_C_Construct_Params
{
};

// Function Authorization_BP.Authorization_BP_C.ExecuteUbergraph_Authorization_BP
struct UAuthorization_BP_C_ExecuteUbergraph_Authorization_BP_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Authorization_BP.Authorization_BP_C.startGameSounds__DelegateSignature
struct UAuthorization_BP_C_startGameSounds__DelegateSignature_Params
{
};

}

