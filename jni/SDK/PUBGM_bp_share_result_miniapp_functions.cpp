//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:49 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_share_result_miniapp.bp_share_result_miniapp_C.EventShareResultMiniAppShare_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_share_result_miniapp_C::EventShareResultMiniAppShare_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_share_result_miniapp.bp_share_result_miniapp_C.EventShareResultMiniAppShare_NoFetch");

	Abp_share_result_miniapp_C_EventShareResultMiniAppShare_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_share_result_miniapp.bp_share_result_miniapp_C.EventShareResultMiniAppShare
// (BlueprintCallable, BlueprintEvent)

void Abp_share_result_miniapp_C::EventShareResultMiniAppShare()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_share_result_miniapp.bp_share_result_miniapp_C.EventShareResultMiniAppShare");

	Abp_share_result_miniapp_C_EventShareResultMiniAppShare_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_share_result_miniapp.bp_share_result_miniapp_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_share_result_miniapp_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_share_result_miniapp.bp_share_result_miniapp_C.UserConstructionScript");

	Abp_share_result_miniapp_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

