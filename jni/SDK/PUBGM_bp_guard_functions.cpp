//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:45 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_guard.bp_guard_C.EventOpenGuard_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_guard_C::EventOpenGuard_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_guard.bp_guard_C.EventOpenGuard_NoFetch");

	Abp_guard_C_EventOpenGuard_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_guard.bp_guard_C.EventOpenGuard
// (BlueprintCallable, BlueprintEvent)

void Abp_guard_C::EventOpenGuard()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_guard.bp_guard_C.EventOpenGuard");

	Abp_guard_C_EventOpenGuard_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_guard.bp_guard_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_guard_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_guard.bp_guard_C.UserConstructionScript");

	Abp_guard_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

