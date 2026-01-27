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

// Function bp_reflux_new_back_list.bp_reflux_new_back_list_C.EventUIRefluxNewBackListClose_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_reflux_new_back_list_C::EventUIRefluxNewBackListClose_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_reflux_new_back_list.bp_reflux_new_back_list_C.EventUIRefluxNewBackListClose_NoFetch");

	Abp_reflux_new_back_list_C_EventUIRefluxNewBackListClose_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_reflux_new_back_list.bp_reflux_new_back_list_C.EventUIRefluxNewBackListClose
// (BlueprintCallable, BlueprintEvent)

void Abp_reflux_new_back_list_C::EventUIRefluxNewBackListClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_reflux_new_back_list.bp_reflux_new_back_list_C.EventUIRefluxNewBackListClose");

	Abp_reflux_new_back_list_C_EventUIRefluxNewBackListClose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_reflux_new_back_list.bp_reflux_new_back_list_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_reflux_new_back_list_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_reflux_new_back_list.bp_reflux_new_back_list_C.UserConstructionScript");

	Abp_reflux_new_back_list_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

