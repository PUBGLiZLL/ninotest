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

// Function Login_Movie_UIBP.Login_Movie_UIBP_C.showAuthorization
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Movie_UIBP_C::showAuthorization()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Movie_UIBP.Login_Movie_UIBP_C.showAuthorization");

	ULogin_Movie_UIBP_C_showAuthorization_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Movie_UIBP.Login_Movie_UIBP_C.UIShow
// (Public, BlueprintCallable, BlueprintEvent)

void ULogin_Movie_UIBP_C::UIShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Movie_UIBP.Login_Movie_UIBP_C.UIShow");

	ULogin_Movie_UIBP_C_UIShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Movie_UIBP.Login_Movie_UIBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void ULogin_Movie_UIBP_C::Construct()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Movie_UIBP.Login_Movie_UIBP_C.Construct");

	ULogin_Movie_UIBP_C_Construct_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Movie_UIBP.Login_Movie_UIBP_C.BndEvt__Button_SkipMovie_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)

void ULogin_Movie_UIBP_C::BndEvt__Button_SkipMovie_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Movie_UIBP.Login_Movie_UIBP_C.BndEvt__Button_SkipMovie_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature");

	ULogin_Movie_UIBP_C_BndEvt__Button_SkipMovie_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Login_Movie_UIBP.Login_Movie_UIBP_C.ExecuteUbergraph_Login_Movie_UIBP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULogin_Movie_UIBP_C::ExecuteUbergraph_Login_Movie_UIBP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Login_Movie_UIBP.Login_Movie_UIBP_C.ExecuteUbergraph_Login_Movie_UIBP");

	ULogin_Movie_UIBP_C_ExecuteUbergraph_Login_Movie_UIBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

