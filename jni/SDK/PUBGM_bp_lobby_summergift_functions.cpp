//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:45 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_lobby_summergift.bp_lobby_summergift_C.EventOnClickJump_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_lobby_summergift_C::EventOnClickJump_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_lobby_summergift.bp_lobby_summergift_C.EventOnClickJump_NoFetch");

	Abp_lobby_summergift_C_EventOnClickJump_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_lobby_summergift.bp_lobby_summergift_C.EventOnClickJump
// (BlueprintCallable, BlueprintEvent)

void Abp_lobby_summergift_C::EventOnClickJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_lobby_summergift.bp_lobby_summergift_C.EventOnClickJump");

	Abp_lobby_summergift_C_EventOnClickJump_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_lobby_summergift.bp_lobby_summergift_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_lobby_summergift_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_lobby_summergift.bp_lobby_summergift_C.UserConstructionScript");

	Abp_lobby_summergift_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

