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

// Function bp_friend_apply.bp_friend_apply_C.EventFriendApplyReq_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_friend_apply_C::EventFriendApplyReq_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_friend_apply.bp_friend_apply_C.EventFriendApplyReq_NoFetch");

	Abp_friend_apply_C_EventFriendApplyReq_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_friend_apply.bp_friend_apply_C.EventFriendApplyReq
// (BlueprintCallable, BlueprintEvent)

void Abp_friend_apply_C::EventFriendApplyReq()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_friend_apply.bp_friend_apply_C.EventFriendApplyReq");

	Abp_friend_apply_C_EventFriendApplyReq_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_friend_apply.bp_friend_apply_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_friend_apply_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_friend_apply.bp_friend_apply_C.UserConstructionScript");

	Abp_friend_apply_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

