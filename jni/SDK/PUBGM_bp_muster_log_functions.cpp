//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_muster_log.bp_muster_log_C.EventMusterLogUIHide_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_muster_log_C::EventMusterLogUIHide_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_muster_log.bp_muster_log_C.EventMusterLogUIHide_NoFetch");

	Abp_muster_log_C_EventMusterLogUIHide_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_muster_log.bp_muster_log_C.EventMusterLogUIHide
// (BlueprintCallable, BlueprintEvent)

void Abp_muster_log_C::EventMusterLogUIHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_muster_log.bp_muster_log_C.EventMusterLogUIHide");

	Abp_muster_log_C_EventMusterLogUIHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_muster_log.bp_muster_log_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_muster_log_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_muster_log.bp_muster_log_C.UserConstructionScript");

	Abp_muster_log_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

