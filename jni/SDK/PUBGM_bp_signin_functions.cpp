//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_signin.bp_signin_C.EventRelease_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_signin_C::EventRelease_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_signin.bp_signin_C.EventRelease_NoFetch");

	Abp_signin_C_EventRelease_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_signin.bp_signin_C.EventRelease
// (BlueprintCallable, BlueprintEvent)

void Abp_signin_C::EventRelease()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_signin.bp_signin_C.EventRelease");

	Abp_signin_C_EventRelease_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_signin.bp_signin_C.EventGetAwardBtnClick_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_signin_C::EventGetAwardBtnClick_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_signin.bp_signin_C.EventGetAwardBtnClick_NoFetch");

	Abp_signin_C_EventGetAwardBtnClick_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_signin.bp_signin_C.EventGetAwardBtnClick
// (BlueprintCallable, BlueprintEvent)

void Abp_signin_C::EventGetAwardBtnClick()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_signin.bp_signin_C.EventGetAwardBtnClick");

	Abp_signin_C_EventGetAwardBtnClick_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_signin.bp_signin_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_signin_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_signin.bp_signin_C.UserConstructionScript");

	Abp_signin_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

