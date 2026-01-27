#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UAETrigger.TriggerAction
// 0x001C (0x0038 - 0x001C)
class UTriggerAction : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	bool                                               bEnableActionTick;                                        // 0x0020(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	class UUAETriggerObject*                           ParentTrigger;                                            // 0x0024(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.TriggerAction");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerCondition
// 0x0014 (0x0030 - 0x001C)
class UTriggerCondition : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	class UUAETriggerObject*                           ParentTrigger;                                            // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.TriggerCondition");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerEvent
// 0x004C (0x0068 - 0x001C)
class UTriggerEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	TMap<struct FString, struct FTriggerEventListenerTrigger> RelevantListener;                                         // 0x002C(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEvent");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerFuncLib
// 0x000C (0x0028 - 0x001C)
class UUAETriggerFuncLib : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerFuncLib");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerParamFuncLib
// 0x0000 (0x0028 - 0x0028)
class UUAETriggerParamFuncLib : public UUAETriggerFuncLib
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerParamFuncLib");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerEventFuncLib
// 0x0000 (0x0028 - 0x0028)
class UUAETriggerEventFuncLib : public UUAETriggerFuncLib
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerEventFuncLib");
		return pStaticClass;
	}

};


// Class UAETrigger.UAETriggerObject
// 0x00FC (0x0118 - 0x001C)
class UUAETriggerObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     TriggerName;                                              // 0x0020(0x000C) (Edit, ZeroConstructor, EditConst)
	bool                                               bEnableTick;                                              // 0x002C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x002D(0x0003) MISSED OFFSET
	float                                              TickInterval;                                             // 0x0030(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	class AActor*                                      OuterActor;                                               // 0x0034(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3C];                                      // 0x0038(0x003C) UNKNOWN PROPERTY: SetProperty UAETrigger.UAETriggerObject.CompleteActions
	TArray<class UTriggerCondition*>                   TriggerConditions;                                        // 0x0074(0x000C) (ZeroConstructor, Transient)
	TArray<class UClass*>                              TriggerEventsClass;                                       // 0x0080(0x000C) (ZeroConstructor)
	TArray<class UTriggerAction*>                      TriggerActions;                                           // 0x008C(0x000C) (ZeroConstructor)
	class UFlowNodeBase*                               CarrierFlowNode;                                          // 0x0098(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x009C(0x003C) UNKNOWN PROPERTY: SetProperty UAETrigger.UAETriggerObject.TriggeredEvents
	unsigned char                                      UnknownData04[0x4];                                       // 0x00D8(0x0004) MISSED OFFSET
	TMap<struct FString, TWeakObjectPtr<class AActor>> TriggerSpawnedActorMap;                                   // 0x00DC(0x0050) (ZeroConstructor, Transient)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.UAETriggerObject");
		return pStaticClass;
	}

};


// Class UAETrigger.FlowNodeBase
// 0x002C (0x0048 - 0x001C)
class UFlowNodeBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FUFlowNodeRepData                           RepData;                                                  // 0x0020(0x0010)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0030(0x0004) MISSED OFFSET
	class UTriggersFlowTree*                           CarriedFlowTree;                                          // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)
	EFlowNodeType                                      NodeType;                                                 // 0x0038(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0039(0x0003) MISSED OFFSET
	TArray<class UUAETriggerObject*>                   TriggerObjects;                                           // 0x003C(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.FlowNodeBase");
		return pStaticClass;
	}

};


// Class UAETrigger.AndFlowNode
// 0x0040 (0x0088 - 0x0048)
class UAndFlowNode : public UFlowNodeBase
{
public:
	unsigned char                                      UnknownData00[0x40];                                      // 0x0048(0x0040) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.AndFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.BranchFlowNode
// 0x0000 (0x0048 - 0x0048)
class UBranchFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.BranchFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.LevelEventCenter
// 0x0044 (0x0060 - 0x001C)
class ULevelEventCenter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET
	class UVariableSet*                                EventUpdateData;                                          // 0x0058(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.LevelEventCenter");
		return pStaticClass;
	}

};


// Class UAETrigger.OrFlowNode
// 0x0000 (0x0048 - 0x0048)
class UOrFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.OrFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.SequenceFlowNode
// 0x0008 (0x0050 - 0x0048)
class USequenceFlowNode : public UFlowNodeBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0048(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.SequenceFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.SubBranchFlowNode
// 0x0000 (0x0048 - 0x0048)
class USubBranchFlowNode : public UFlowNodeBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.SubBranchFlowNode");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerAction_CallFunction
// 0x0010 (0x0048 - 0x0038)
class UTriggerAction_CallFunction : public UTriggerAction
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0038(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.TriggerAction_CallFunction");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerCondition_Comparison
// 0x0000 (0x0030 - 0x0030)
class UTriggerCondition_Comparison : public UTriggerCondition
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.TriggerCondition_Comparison");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerEvent_Implementable
// 0x0060 (0x00C8 - 0x0068)
class UTriggerEvent_Implementable : public UTriggerEvent
{
public:
	struct FString                                     EventName;                                                // 0x0068(0x000C) (ZeroConstructor)
	TArray<class UProperty*>                           Params;                                                   // 0x0074(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0080(0x0008) MISSED OFFSET
	TMap<struct FString, struct FEventFuncListenerTrigger> EventFuncListener;                                        // 0x0088(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEvent_Implementable");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggerEventBroadcastInterface
// 0x0000 (0x0020 - 0x0020)
class UTriggerEventBroadcastInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.TriggerEventBroadcastInterface");
		return pStaticClass;
	}

};


// Class UAETrigger.TriggersFlowTree
// 0x001C (0x0038 - 0x001C)
class UTriggersFlowTree : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	class UFlowNodeBase*                               TailNode;                                                 // 0x0020(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UFlowNodeBase*                               CurrentNode;                                              // 0x0024(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0028(0x000C) MISSED OFFSET
	class AUAELevelDirector*                           OwnerLevelDirector;                                       // 0x0034(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.TriggersFlowTree");
		return pStaticClass;
	}

};


// Class UAETrigger.UAELevelDirector
// 0x0080 (0x0338 - 0x02B8)
class AUAELevelDirector : public AActor
{
public:
	struct FString                                     ConfigFilePath;                                           // 0x02B8(0x000C) (Edit, ZeroConstructor)
	TArray<struct FString>                             ClassPaths;                                               // 0x02C4(0x000C) (Edit, ZeroConstructor)
	struct FUAELevelDirectorRepData                    LevelDirectorRepData;                                     // 0x02D0(0x0010) (Net, Transient)
	TArray<class UUAETriggerFuncLib*>                  FunctionLibList;                                          // 0x02E0(0x000C) (ZeroConstructor)
	class UTriggersFlowTree*                           TriggersFlowTree;                                         // 0x02EC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TMap<struct FString, class UUAETriggerObject*>     TriggerObjectMap;                                         // 0x02F0(0x0050) (ZeroConstructor)
	class UVariableSet*                                AllVariableSet;                                           // 0x032C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0330(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.UAELevelDirector");
		return pStaticClass;
	}


	bool StartLevelDirector();
	void SetTriggerRunType(const struct FString& TriggerName, EUAETriggerRunType RunType);
	void RequestTriggerComplete(class UUAETriggerObject* CompleteTrigger);
	void OnRep_LevelDirectorData();
	bool InitialLevelDirector();
	class UVariableSet* GetDataSet();
	bool FlowControllSubControll(TArray<struct FString> TriggerNames);
	bool FlowControllOr(TArray<struct FString> TriggerNames);
	bool FlowControllOneSequence(const struct FString& TriggerName);
	bool FlowControllMultiSequence(TArray<struct FString> TriggerNames);
	bool FlowControllAnd(TArray<struct FString> TriggerNames);
	bool AddTrigger(const struct FString& TriggerName, class UClass* TriggerClass);
	void AddEventToTrigger(const struct FString& TriggerName, class UClass* Event);
	class UTriggerCondition* AddConditionToTrigger(const struct FString& TriggerName, class UClass* Condition);
	class UTriggerAction* AddActionToTrigger(const struct FString& TriggerName, class UClass* Action);
};


// Class UAETrigger.UAELevelEventCenterInterface
// 0x0000 (0x0020 - 0x0020)
class UUAELevelEventCenterInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.UAELevelEventCenterInterface");
		return pStaticClass;
	}

};


// Class UAETrigger.Variable
// 0x0004 (0x0020 - 0x001C)
class UVariable : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.Variable");
		return pStaticClass;
	}

};


// Class UAETrigger.VariableSet
// 0x003C (0x0058 - 0x001C)
class UVariableSet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UAETrigger.VariableSet");
		return pStaticClass;
	}

};


}

