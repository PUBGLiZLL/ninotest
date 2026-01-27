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

// Function bp_complaint_feedback.bp_complaint_feedback_C.EventComplaintFeedbackClicked_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_complaint_feedback_C::EventComplaintFeedbackClicked_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_complaint_feedback.bp_complaint_feedback_C.EventComplaintFeedbackClicked_NoFetch");

	Abp_complaint_feedback_C_EventComplaintFeedbackClicked_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_complaint_feedback.bp_complaint_feedback_C.EventComplaintFeedbackClicked
// (BlueprintCallable, BlueprintEvent)

void Abp_complaint_feedback_C::EventComplaintFeedbackClicked()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_complaint_feedback.bp_complaint_feedback_C.EventComplaintFeedbackClicked");

	Abp_complaint_feedback_C_EventComplaintFeedbackClicked_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_complaint_feedback.bp_complaint_feedback_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_complaint_feedback_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_complaint_feedback.bp_complaint_feedback_C.UserConstructionScript");

	Abp_complaint_feedback_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

