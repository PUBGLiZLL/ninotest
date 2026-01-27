//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:42 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_result_countdown.bp_result_countdown_C.EventSkipToShowBattleResult_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_result_countdown_C::EventSkipToShowBattleResult_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_result_countdown.bp_result_countdown_C.EventSkipToShowBattleResult_NoFetch");

	Abp_result_countdown_C_EventSkipToShowBattleResult_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_result_countdown.bp_result_countdown_C.EventSkipToShowBattleResult
// (BlueprintCallable, BlueprintEvent)

void Abp_result_countdown_C::EventSkipToShowBattleResult()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_result_countdown.bp_result_countdown_C.EventSkipToShowBattleResult");

	Abp_result_countdown_C_EventSkipToShowBattleResult_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_result_countdown.bp_result_countdown_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_result_countdown_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_result_countdown.bp_result_countdown_C.UserConstructionScript");

	Abp_result_countdown_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

