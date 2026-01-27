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

// Function bp_corps_season_review.bp_corps_season_review_C.EventCorpsSeasonShowOver_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_season_review_C::EventCorpsSeasonShowOver_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_corps_season_review.bp_corps_season_review_C.EventCorpsSeasonShowOver_NoFetch");

	Abp_corps_season_review_C_EventCorpsSeasonShowOver_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_corps_season_review.bp_corps_season_review_C.EventCorpsSeasonShowOver
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_season_review_C::EventCorpsSeasonShowOver()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_corps_season_review.bp_corps_season_review_C.EventCorpsSeasonShowOver");

	Abp_corps_season_review_C_EventCorpsSeasonShowOver_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_corps_season_review.bp_corps_season_review_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_corps_season_review_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_corps_season_review.bp_corps_season_review_C.UserConstructionScript");

	Abp_corps_season_review_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

