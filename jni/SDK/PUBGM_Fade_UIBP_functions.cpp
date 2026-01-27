//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:53 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Fade_UIBP.Fade_UIBP_C.UIHide
// (Public, BlueprintCallable, BlueprintEvent)

void UFade_UIBP_C::UIHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Fade_UIBP.Fade_UIBP_C.UIHide");

	UFade_UIBP_C_UIHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Fade_UIBP.Fade_UIBP_C.UIShowFadeOut
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFade_UIBP_C::UIShowFadeOut()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Fade_UIBP.Fade_UIBP_C.UIShowFadeOut");

	UFade_UIBP_C_UIShowFadeOut_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Fade_UIBP.Fade_UIBP_C.UIShowFadeIn
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UFade_UIBP_C::UIShowFadeIn()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Fade_UIBP.Fade_UIBP_C.UIShowFadeIn");

	UFade_UIBP_C_UIShowFadeIn_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

