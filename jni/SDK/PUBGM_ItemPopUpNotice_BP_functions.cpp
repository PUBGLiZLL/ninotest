//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.RemoveFastNotice
// (Public, BlueprintCallable, BlueprintEvent)

void UItemPopUpNotice_BP_C::RemoveFastNotice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.RemoveFastNotice");

	UItemPopUpNotice_BP_C_RemoveFastNotice_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.SetFastNotice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UItemPopUpNotice_BP_C::SetFastNotice(const struct FString& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.SetFastNotice");

	UItemPopUpNotice_BP_C_SetFastNotice_Params params;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.SetNotice
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Msg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UItemPopUpNotice_BP_C::SetNotice(const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.SetNotice");

	UItemPopUpNotice_BP_C_SetNotice_Params params;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.BndEvt__DX_Tips_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UItemPopUpNotice_BP_C::BndEvt__DX_Tips_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.BndEvt__DX_Tips_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UItemPopUpNotice_BP_C_BndEvt__DX_Tips_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.BndEvt__DX_Tips_1_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature
// (BlueprintEvent)

void UItemPopUpNotice_BP_C::BndEvt__DX_Tips_1_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.BndEvt__DX_Tips_1_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature");

	UItemPopUpNotice_BP_C_BndEvt__DX_Tips_1_K2Node_ComponentBoundEvent_0_OnWidgetAnimationPlaybackStatusChanged__DelegateSignature_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.ExecuteUbergraph_ItemPopUpNotice_BP
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UItemPopUpNotice_BP_C::ExecuteUbergraph_ItemPopUpNotice_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ItemPopUpNotice_BP.ItemPopUpNotice_BP_C.ExecuteUbergraph_ItemPopUpNotice_BP");

	UItemPopUpNotice_BP_C_ExecuteUbergraph_ItemPopUpNotice_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

