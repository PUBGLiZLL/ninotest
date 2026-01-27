#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UAETrigger.UAELevelDirector.StartLevelDirector
struct AUAELevelDirector_StartLevelDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.SetTriggerRunType
struct AUAELevelDirector_SetTriggerRunType_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	EUAETriggerRunType                                 RunType;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.RequestTriggerComplete
struct AUAELevelDirector_RequestTriggerComplete_Params
{
	class UUAETriggerObject*                           CompleteTrigger;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.OnRep_LevelDirectorData
struct AUAELevelDirector_OnRep_LevelDirectorData_Params
{
};

// Function UAETrigger.UAELevelDirector.InitialLevelDirector
struct AUAELevelDirector_InitialLevelDirector_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.GetDataSet
struct AUAELevelDirector_GetDataSet_Params
{
	class UVariableSet*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllSubControll
struct AUAELevelDirector_FlowControllSubControll_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllOr
struct AUAELevelDirector_FlowControllOr_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllOneSequence
struct AUAELevelDirector_FlowControllOneSequence_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllMultiSequence
struct AUAELevelDirector_FlowControllMultiSequence_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.FlowControllAnd
struct AUAELevelDirector_FlowControllAnd_Params
{
	TArray<struct FString>                             TriggerNames;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddTrigger
struct AUAELevelDirector_AddTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      TriggerClass;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddEventToTrigger
struct AUAELevelDirector_AddEventToTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      Event;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddConditionToTrigger
struct AUAELevelDirector_AddConditionToTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      Condition;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	class UTriggerCondition*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UAETrigger.UAELevelDirector.AddActionToTrigger
struct AUAELevelDirector_AddActionToTrigger_Params
{
	struct FString                                     TriggerName;                                              // (Parm, ZeroConstructor)
	class UClass*                                      Action;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UTriggerAction*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

