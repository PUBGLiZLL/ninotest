//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:48 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.EventRankDetailRelease_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_roleinfo_rankdetail_C::EventRankDetailRelease_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.EventRankDetailRelease_NoFetch");

	Abp_roleinfo_rankdetail_C_EventRankDetailRelease_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.EventRankDetailRelease
// (BlueprintCallable, BlueprintEvent)

void Abp_roleinfo_rankdetail_C::EventRankDetailRelease()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.EventRankDetailRelease");

	Abp_roleinfo_rankdetail_C_EventRankDetailRelease_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_roleinfo_rankdetail_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_roleinfo_rankdetail.bp_roleinfo_rankdetail_C.UserConstructionScript");

	Abp_roleinfo_rankdetail_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

