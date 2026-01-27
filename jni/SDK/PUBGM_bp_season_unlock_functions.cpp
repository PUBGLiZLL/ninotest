//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:48 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_season_unlock.bp_season_unlock_C.EventSeasonUnlockClose_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_season_unlock_C::EventSeasonUnlockClose_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_season_unlock.bp_season_unlock_C.EventSeasonUnlockClose_NoFetch");

	Abp_season_unlock_C_EventSeasonUnlockClose_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_season_unlock.bp_season_unlock_C.EventSeasonUnlockClose
// (BlueprintCallable, BlueprintEvent)

void Abp_season_unlock_C::EventSeasonUnlockClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_season_unlock.bp_season_unlock_C.EventSeasonUnlockClose");

	Abp_season_unlock_C_EventSeasonUnlockClose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_season_unlock.bp_season_unlock_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_season_unlock_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_season_unlock.bp_season_unlock_C.UserConstructionScript");

	Abp_season_unlock_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

