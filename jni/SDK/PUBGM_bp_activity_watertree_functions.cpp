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

// Function bp_activity_watertree.bp_activity_watertree_C.EventWaterTreeGetAward_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_activity_watertree_C::EventWaterTreeGetAward_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_activity_watertree.bp_activity_watertree_C.EventWaterTreeGetAward_NoFetch");

	Abp_activity_watertree_C_EventWaterTreeGetAward_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_activity_watertree.bp_activity_watertree_C.EventWaterTreeGetAward
// (BlueprintCallable, BlueprintEvent)

void Abp_activity_watertree_C::EventWaterTreeGetAward()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_activity_watertree.bp_activity_watertree_C.EventWaterTreeGetAward");

	Abp_activity_watertree_C_EventWaterTreeGetAward_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_activity_watertree.bp_activity_watertree_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_activity_watertree_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_activity_watertree.bp_activity_watertree_C.UserConstructionScript");

	Abp_activity_watertree_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

