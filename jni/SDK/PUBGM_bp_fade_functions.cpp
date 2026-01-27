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

// Function bp_fade.bp_fade_C.EventFadeIn_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_fade_C::EventFadeIn_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_fade.bp_fade_C.EventFadeIn_NoFetch");

	Abp_fade_C_EventFadeIn_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_fade.bp_fade_C.EventFadeIn
// (BlueprintCallable, BlueprintEvent)

void Abp_fade_C::EventFadeIn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_fade.bp_fade_C.EventFadeIn");

	Abp_fade_C_EventFadeIn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_fade.bp_fade_C.EventFadeHide_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_fade_C::EventFadeHide_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_fade.bp_fade_C.EventFadeHide_NoFetch");

	Abp_fade_C_EventFadeHide_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_fade.bp_fade_C.EventFadeHide
// (BlueprintCallable, BlueprintEvent)

void Abp_fade_C::EventFadeHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_fade.bp_fade_C.EventFadeHide");

	Abp_fade_C_EventFadeHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_fade.bp_fade_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_fade_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_fade.bp_fade_C.UserConstructionScript");

	Abp_fade_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

