//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:44 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_corps_season_history.bp_corps_season_history_C.EventCorpsSeasonSelected_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_season_history_C::EventCorpsSeasonSelected_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_corps_season_history.bp_corps_season_history_C.EventCorpsSeasonSelected_NoFetch");

	Abp_corps_season_history_C_EventCorpsSeasonSelected_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_corps_season_history.bp_corps_season_history_C.EventCorpsSeasonSelected
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_season_history_C::EventCorpsSeasonSelected()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_corps_season_history.bp_corps_season_history_C.EventCorpsSeasonSelected");

	Abp_corps_season_history_C_EventCorpsSeasonSelected_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_corps_season_history.bp_corps_season_history_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_corps_season_history_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_corps_season_history.bp_corps_season_history_C.UserConstructionScript");

	Abp_corps_season_history_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

