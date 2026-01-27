//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:43 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_appraise.bp_appraise_C.EventGotoAppraise_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_appraise_C::EventGotoAppraise_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_appraise.bp_appraise_C.EventGotoAppraise_NoFetch");

	Abp_appraise_C_EventGotoAppraise_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_appraise.bp_appraise_C.EventGotoAppraise
// (BlueprintCallable, BlueprintEvent)

void Abp_appraise_C::EventGotoAppraise()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_appraise.bp_appraise_C.EventGotoAppraise");

	Abp_appraise_C_EventGotoAppraise_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_appraise.bp_appraise_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_appraise_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_appraise.bp_appraise_C.UserConstructionScript");

	Abp_appraise_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

