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

// Function bp_newer_guide.bp_newer_guide_C.EventNewerGuideSelection_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_newer_guide_C::EventNewerGuideSelection_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_newer_guide.bp_newer_guide_C.EventNewerGuideSelection_NoFetch");

	Abp_newer_guide_C_EventNewerGuideSelection_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_newer_guide.bp_newer_guide_C.EventNewerGuideSelection
// (BlueprintCallable, BlueprintEvent)

void Abp_newer_guide_C::EventNewerGuideSelection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_newer_guide.bp_newer_guide_C.EventNewerGuideSelection");

	Abp_newer_guide_C_EventNewerGuideSelection_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_newer_guide.bp_newer_guide_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_newer_guide_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_newer_guide.bp_newer_guide_C.UserConstructionScript");

	Abp_newer_guide_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

