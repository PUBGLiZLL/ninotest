//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Editor_login.Editor_login_C.UpdateAspect
// (Public, BlueprintCallable, BlueprintEvent)

void AEditor_login_C::UpdateAspect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.UpdateAspect");

	AEditor_login_C_UpdateAspect_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.InitSplashUI
// (Public, BlueprintCallable, BlueprintEvent)

void AEditor_login_C::InitSplashUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.InitSplashUI");

	AEditor_login_C_InitSplashUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.InitLoginUI
// (Public, BlueprintCallable, BlueprintEvent)

void AEditor_login_C::InitLoginUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.InitLoginUI");

	AEditor_login_C_InitLoginUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_4
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEditor_login_C::InpActEvt_Android_Back_K2Node_InputKeyEvent_4(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.InpActEvt_Android_Back_K2Node_InputKeyEvent_4");

	AEditor_login_C_InpActEvt_Android_Back_K2Node_InputKeyEvent_4_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.InpActEvt_Escape_K2Node_InputKeyEvent_3
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void AEditor_login_C::InpActEvt_Escape_K2Node_InputKeyEvent_3(const struct FKey& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.InpActEvt_Escape_K2Node_InputKeyEvent_3");

	AEditor_login_C_InpActEvt_Escape_K2Node_InputKeyEvent_3_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AEditor_login_C::ReceiveBeginPlay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.ReceiveBeginPlay");

	AEditor_login_C_ReceiveBeginPlay_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Editor_login.Editor_login_C.ExecuteUbergraph_Editor_login
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AEditor_login_C::ExecuteUbergraph_Editor_login(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Editor_login.Editor_login_C.ExecuteUbergraph_Editor_login");

	AEditor_login_C_ExecuteUbergraph_Editor_login_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

