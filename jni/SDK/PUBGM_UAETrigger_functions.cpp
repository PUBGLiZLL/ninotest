//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UAETrigger.UAELevelDirector.StartLevelDirector
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::StartLevelDirector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.StartLevelDirector");

	AUAELevelDirector_StartLevelDirector_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.SetTriggerRunType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// EUAETriggerRunType             RunType                        (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::SetTriggerRunType(const struct FString& TriggerName, EUAETriggerRunType RunType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.SetTriggerRunType");

	AUAELevelDirector_SetTriggerRunType_Params params;
	params.TriggerName = TriggerName;
	params.RunType = RunType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAETrigger.UAELevelDirector.RequestTriggerComplete
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UUAETriggerObject*       CompleteTrigger                (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::RequestTriggerComplete(class UUAETriggerObject* CompleteTrigger)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.RequestTriggerComplete");

	AUAELevelDirector_RequestTriggerComplete_Params params;
	params.CompleteTrigger = CompleteTrigger;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAETrigger.UAELevelDirector.OnRep_LevelDirectorData
// (Final, Native, Private)

void AUAELevelDirector::OnRep_LevelDirectorData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.OnRep_LevelDirectorData");

	AUAELevelDirector_OnRep_LevelDirectorData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAETrigger.UAELevelDirector.InitialLevelDirector
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::InitialLevelDirector()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.InitialLevelDirector");

	AUAELevelDirector_InitialLevelDirector_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.GetDataSet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVariableSet*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UVariableSet* AUAELevelDirector::GetDataSet()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.GetDataSet");

	AUAELevelDirector_GetDataSet_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.FlowControllSubControll
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllSubControll(TArray<struct FString> TriggerNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllSubControll");

	AUAELevelDirector_FlowControllSubControll_Params params;
	params.TriggerNames = TriggerNames;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.FlowControllOr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllOr(TArray<struct FString> TriggerNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllOr");

	AUAELevelDirector_FlowControllOr_Params params;
	params.TriggerNames = TriggerNames;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.FlowControllOneSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllOneSequence(const struct FString& TriggerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllOneSequence");

	AUAELevelDirector_FlowControllOneSequence_Params params;
	params.TriggerName = TriggerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.FlowControllMultiSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllMultiSequence(TArray<struct FString> TriggerNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllMultiSequence");

	AUAELevelDirector_FlowControllMultiSequence_Params params;
	params.TriggerNames = TriggerNames;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.FlowControllAnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FString>         TriggerNames                   (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::FlowControllAnd(TArray<struct FString> TriggerNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.FlowControllAnd");

	AUAELevelDirector_FlowControllAnd_Params params;
	params.TriggerNames = TriggerNames;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.AddTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  TriggerClass                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool AUAELevelDirector::AddTrigger(const struct FString& TriggerName, class UClass* TriggerClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddTrigger");

	AUAELevelDirector_AddTrigger_Params params;
	params.TriggerName = TriggerName;
	params.TriggerClass = TriggerClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.AddEventToTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  Event                          (Parm, ZeroConstructor, IsPlainOldData)

void AUAELevelDirector::AddEventToTrigger(const struct FString& TriggerName, class UClass* Event)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddEventToTrigger");

	AUAELevelDirector_AddEventToTrigger_Params params;
	params.TriggerName = TriggerName;
	params.Event = Event;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UAETrigger.UAELevelDirector.AddConditionToTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTriggerCondition*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTriggerCondition* AUAELevelDirector::AddConditionToTrigger(const struct FString& TriggerName, class UClass* Condition)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddConditionToTrigger");

	AUAELevelDirector_AddConditionToTrigger_Params params;
	params.TriggerName = TriggerName;
	params.Condition = Condition;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UAETrigger.UAELevelDirector.AddActionToTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TriggerName                    (Parm, ZeroConstructor)
// class UClass*                  Action                         (Parm, ZeroConstructor, IsPlainOldData)
// class UTriggerAction*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTriggerAction* AUAELevelDirector::AddActionToTrigger(const struct FString& TriggerName, class UClass* Action)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UAETrigger.UAELevelDirector.AddActionToTrigger");

	AUAELevelDirector_AddActionToTrigger_Params params;
	params.TriggerName = TriggerName;
	params.Action = Action;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

