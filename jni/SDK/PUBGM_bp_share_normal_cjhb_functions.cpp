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

// Function bp_share_normal_cjhb.bp_share_normal_cjhb_C.EventBtnCJHongbaoShared_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_share_normal_cjhb_C::EventBtnCJHongbaoShared_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_share_normal_cjhb.bp_share_normal_cjhb_C.EventBtnCJHongbaoShared_NoFetch");

	Abp_share_normal_cjhb_C_EventBtnCJHongbaoShared_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_share_normal_cjhb.bp_share_normal_cjhb_C.EventBtnCJHongbaoShared
// (BlueprintCallable, BlueprintEvent)

void Abp_share_normal_cjhb_C::EventBtnCJHongbaoShared()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_share_normal_cjhb.bp_share_normal_cjhb_C.EventBtnCJHongbaoShared");

	Abp_share_normal_cjhb_C_EventBtnCJHongbaoShared_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_share_normal_cjhb.bp_share_normal_cjhb_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_share_normal_cjhb_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_share_normal_cjhb.bp_share_normal_cjhb_C.UserConstructionScript");

	Abp_share_normal_cjhb_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

