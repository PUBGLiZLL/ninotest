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

// Function bp_reflux_training_award.bp_reflux_training_award_C.EventRefluxTrainingAwardUIClose_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_reflux_training_award_C::EventRefluxTrainingAwardUIClose_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_reflux_training_award.bp_reflux_training_award_C.EventRefluxTrainingAwardUIClose_NoFetch");

	Abp_reflux_training_award_C_EventRefluxTrainingAwardUIClose_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_reflux_training_award.bp_reflux_training_award_C.EventRefluxTrainingAwardUIClose
// (BlueprintCallable, BlueprintEvent)

void Abp_reflux_training_award_C::EventRefluxTrainingAwardUIClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_reflux_training_award.bp_reflux_training_award_C.EventRefluxTrainingAwardUIClose");

	Abp_reflux_training_award_C_EventRefluxTrainingAwardUIClose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_reflux_training_award.bp_reflux_training_award_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_reflux_training_award_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_reflux_training_award.bp_reflux_training_award_C.UserConstructionScript");

	Abp_reflux_training_award_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

