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

// Function bp_corps_rank_s.bp_corps_rank_s_C.EventCorpsRank_S_HideUI_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_rank_s_C::EventCorpsRank_S_HideUI_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_corps_rank_s.bp_corps_rank_s_C.EventCorpsRank_S_HideUI_NoFetch");

	Abp_corps_rank_s_C_EventCorpsRank_S_HideUI_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_corps_rank_s.bp_corps_rank_s_C.EventCorpsRank_S_HideUI
// (BlueprintCallable, BlueprintEvent)

void Abp_corps_rank_s_C::EventCorpsRank_S_HideUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_corps_rank_s.bp_corps_rank_s_C.EventCorpsRank_S_HideUI");

	Abp_corps_rank_s_C_EventCorpsRank_S_HideUI_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_corps_rank_s.bp_corps_rank_s_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_corps_rank_s_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_corps_rank_s.bp_corps_rank_s_C.UserConstructionScript");

	Abp_corps_rank_s_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

