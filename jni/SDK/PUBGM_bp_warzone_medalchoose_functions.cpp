//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_warzone_medalchoose.bp_warzone_medalchoose_C.EventWarZoneMedalChooseClose_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_warzone_medalchoose_C::EventWarZoneMedalChooseClose_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_warzone_medalchoose.bp_warzone_medalchoose_C.EventWarZoneMedalChooseClose_NoFetch");

	Abp_warzone_medalchoose_C_EventWarZoneMedalChooseClose_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_warzone_medalchoose.bp_warzone_medalchoose_C.EventWarZoneMedalChooseClose
// (BlueprintCallable, BlueprintEvent)

void Abp_warzone_medalchoose_C::EventWarZoneMedalChooseClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_warzone_medalchoose.bp_warzone_medalchoose_C.EventWarZoneMedalChooseClose");

	Abp_warzone_medalchoose_C_EventWarZoneMedalChooseClose_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_warzone_medalchoose.bp_warzone_medalchoose_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_warzone_medalchoose_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_warzone_medalchoose.bp_warzone_medalchoose_C.UserConstructionScript");

	Abp_warzone_medalchoose_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

