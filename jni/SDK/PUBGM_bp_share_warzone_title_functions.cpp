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

// Function bp_share_warzone_title.bp_share_warzone_title_C.EventShowShareWarZoneTitleUI_Push_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_share_warzone_title_C::EventShowShareWarZoneTitleUI_Push_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_share_warzone_title.bp_share_warzone_title_C.EventShowShareWarZoneTitleUI_Push_NoFetch");

	Abp_share_warzone_title_C_EventShowShareWarZoneTitleUI_Push_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_share_warzone_title.bp_share_warzone_title_C.EventShowShareWarZoneTitleUI_Push
// (BlueprintCallable, BlueprintEvent)

void Abp_share_warzone_title_C::EventShowShareWarZoneTitleUI_Push()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_share_warzone_title.bp_share_warzone_title_C.EventShowShareWarZoneTitleUI_Push");

	Abp_share_warzone_title_C_EventShowShareWarZoneTitleUI_Push_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_share_warzone_title.bp_share_warzone_title_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_share_warzone_title_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_share_warzone_title.bp_share_warzone_title_C.UserConstructionScript");

	Abp_share_warzone_title_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

