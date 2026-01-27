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

// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.InitSubTab
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::InitSubTab()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.InitSubTab");

	ULogin_ServerList_UIBP_C_InitSubTab_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.ShowSubList
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Tab                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Open                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULogin_ServerList_UIBP_C::ShowSubList(int Tab, bool Open)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.ShowSubList");

	ULogin_ServerList_UIBP_C_ShowSubList_Params params;
	params.Tab = Tab;
	params.Open = Open;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.AddServerInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 childWidget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_ServerInfo   serInfo                        (BlueprintVisible, BlueprintReadOnly, Parm)

void ULogin_ServerList_UIBP_C::AddServerInfo(class UWidget* childWidget, const struct FBP_STRUCT_ServerInfo& serInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.AddServerInfo");

	ULogin_ServerList_UIBP_C_AddServerInfo_Params params;
	params.childWidget = childWidget;
	params.serInfo = serInfo;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.EnterLogin
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::EnterLogin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.EnterLogin");

	ULogin_ServerList_UIBP_C_EnterLogin_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.UIHide
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::UIHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.UIHide");

	ULogin_ServerList_UIBP_C_UIHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.ShowCurrentSelect
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::ShowCurrentSelect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.ShowCurrentSelect");

	ULogin_ServerList_UIBP_C_ShowCurrentSelect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.HideScrollView
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::HideScrollView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.HideScrollView");

	ULogin_ServerList_UIBP_C_HideScrollView_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.ShowList
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::ShowList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.ShowList");

	ULogin_ServerList_UIBP_C_ShowList_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.EnterCreateRole
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::EnterCreateRole()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.EnterCreateRole");

	ULogin_ServerList_UIBP_C_EnterCreateRole_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.InitServerListScrollView
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::InitServerListScrollView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.InitServerListScrollView");

	ULogin_ServerList_UIBP_C_InitServerListScrollView_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.EnterLobby
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::EnterLobby()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.EnterLobby");

	ULogin_ServerList_UIBP_C_EnterLobby_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.UIShow
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::UIShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.UIShow");

	ULogin_ServerList_UIBP_C_UIShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULogin_ServerList_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.Construct");

	ULogin_ServerList_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_SelectedServer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULogin_ServerList_UIBP_C::BndEvt__Button_SelectedServer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_SelectedServer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULogin_ServerList_UIBP_C_BndEvt__Button_SelectedServer_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULogin_ServerList_UIBP_C::BndEvt__Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULogin_ServerList_UIBP_C_BndEvt__Button_StartGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_LoginOut_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULogin_ServerList_UIBP_C::BndEvt__Button_LoginOut_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_LoginOut_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");

	ULogin_ServerList_UIBP_C_BndEvt__Button_LoginOut_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.AutoSelectServer
// (BlueprintCallable, BlueprintEvent)

void ULogin_ServerList_UIBP_C::AutoSelectServer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.AutoSelectServer");

	ULogin_ServerList_UIBP_C_AutoSelectServer_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_Server1_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULogin_ServerList_UIBP_C::BndEvt__Button_Server1_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_Server1_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature");

	ULogin_ServerList_UIBP_C_BndEvt__Button_Server1_K2Node_ComponentBoundEvent_93_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_Server2_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULogin_ServerList_UIBP_C::BndEvt__Button_Server2_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_Server2_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature");

	ULogin_ServerList_UIBP_C_BndEvt__Button_Server2_K2Node_ComponentBoundEvent_115_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_Server3_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULogin_ServerList_UIBP_C::BndEvt__Button_Server3_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.BndEvt__Button_Server3_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature");

	ULogin_ServerList_UIBP_C_BndEvt__Button_Server3_K2Node_ComponentBoundEvent_136_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.ExecuteUbergraph_Login_ServerList_UIBP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULogin_ServerList_UIBP_C::ExecuteUbergraph_Login_ServerList_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_ServerList_UIBP.Login_ServerList_UIBP_C.ExecuteUbergraph_Login_ServerList_UIBP");

	ULogin_ServerList_UIBP_C_ExecuteUbergraph_Login_ServerList_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

