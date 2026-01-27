//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UUAEUserWidget**         Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::AddWidgetInternal(class UUAEUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.AddWidgetInternal");

	UGlobalUIContainer_BP_C_AddWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.RemoveWidgetInternal
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UUAEUserWidget**         Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::RemoveWidgetInternal(class UUAEUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.RemoveWidgetInternal");

	UGlobalUIContainer_BP_C_RemoveWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.ExecuteUbergraph_GlobalUIContainer_BP
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIContainer_BP_C::ExecuteUbergraph_GlobalUIContainer_BP(int EntryPoint)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIContainer_BP.GlobalUIContainer_BP_C.ExecuteUbergraph_GlobalUIContainer_BP");

	UGlobalUIContainer_BP_C_ExecuteUbergraph_GlobalUIContainer_BP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

