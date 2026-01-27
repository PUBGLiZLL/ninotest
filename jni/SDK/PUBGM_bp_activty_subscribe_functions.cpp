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

// Function bp_activty_subscribe.bp_activty_subscribe_C.EventActivtySubscribeUIClickImg_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_activty_subscribe_C::EventActivtySubscribeUIClickImg_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_activty_subscribe.bp_activty_subscribe_C.EventActivtySubscribeUIClickImg_NoFetch");

	Abp_activty_subscribe_C_EventActivtySubscribeUIClickImg_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_activty_subscribe.bp_activty_subscribe_C.EventActivtySubscribeUIClickImg
// (BlueprintCallable, BlueprintEvent)

void Abp_activty_subscribe_C::EventActivtySubscribeUIClickImg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_activty_subscribe.bp_activty_subscribe_C.EventActivtySubscribeUIClickImg");

	Abp_activty_subscribe_C_EventActivtySubscribeUIClickImg_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_activty_subscribe.bp_activty_subscribe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_activty_subscribe_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_activty_subscribe.bp_activty_subscribe_C.UserConstructionScript");

	Abp_activty_subscribe_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

