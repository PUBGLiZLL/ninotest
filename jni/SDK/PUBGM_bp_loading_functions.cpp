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

// Function bp_loading.bp_loading_C.EventFetchInfo_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_loading_C::EventFetchInfo_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_loading.bp_loading_C.EventFetchInfo_NoFetch");

	Abp_loading_C_EventFetchInfo_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_loading.bp_loading_C.EventFetchInfo
// (BlueprintCallable, BlueprintEvent)

void Abp_loading_C::EventFetchInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_loading.bp_loading_C.EventFetchInfo");

	Abp_loading_C_EventFetchInfo_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_loading.bp_loading_C.EventLoadingUIGetRandomImage_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_loading_C::EventLoadingUIGetRandomImage_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_loading.bp_loading_C.EventLoadingUIGetRandomImage_NoFetch");

	Abp_loading_C_EventLoadingUIGetRandomImage_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_loading.bp_loading_C.EventLoadingUIGetRandomImage
// (BlueprintCallable, BlueprintEvent)

void Abp_loading_C::EventLoadingUIGetRandomImage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_loading.bp_loading_C.EventLoadingUIGetRandomImage");

	Abp_loading_C_EventLoadingUIGetRandomImage_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_loading.bp_loading_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_loading_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_loading.bp_loading_C.UserConstructionScript");

	Abp_loading_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

