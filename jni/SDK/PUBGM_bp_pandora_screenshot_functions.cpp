//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_pandora_screenshot.bp_pandora_screenshot_C.EventPandoraScreenShotCaptured_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_pandora_screenshot_C::EventPandoraScreenShotCaptured_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_pandora_screenshot.bp_pandora_screenshot_C.EventPandoraScreenShotCaptured_NoFetch");

	Abp_pandora_screenshot_C_EventPandoraScreenShotCaptured_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_pandora_screenshot.bp_pandora_screenshot_C.EventPandoraScreenShotCaptured
// (BlueprintCallable, BlueprintEvent)

void Abp_pandora_screenshot_C::EventPandoraScreenShotCaptured()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_pandora_screenshot.bp_pandora_screenshot_C.EventPandoraScreenShotCaptured");

	Abp_pandora_screenshot_C_EventPandoraScreenShotCaptured_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_pandora_screenshot.bp_pandora_screenshot_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_pandora_screenshot_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_pandora_screenshot.bp_pandora_screenshot_C.UserConstructionScript");

	Abp_pandora_screenshot_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

