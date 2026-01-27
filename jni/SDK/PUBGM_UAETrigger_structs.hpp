#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UAETrigger.EUAETriggerActionState
enum class EUAETriggerActionState : uint8_t
{
	EUAETriggerActionState__Running = 0,
	EUAETriggerActionState__Deactive = 1,
	EUAETriggerActionState__EUAETriggerActionState_MAX = 2
};


// Enum UAETrigger.EUAETriggerRunType
enum class EUAETriggerRunType : uint8_t
{
	EUAETriggerRunType__RunOnDS    = 0,
	EUAETriggerRunType__RunOnClient = 1,
	EUAETriggerRunType__EUAETriggerRunType_MAX = 2
};


// Enum UAETrigger.EFlowNodeType
enum class EFlowNodeType : uint8_t
{
	EFlowNodeType__None            = 0,
	EFlowNodeType__Sequence        = 1,
	EFlowNodeType__Or              = 2,
	EFlowNodeType__And             = 3,
	EFlowNodeType__SubBranch       = 4,
	EFlowNodeType__EFlowNodeType_MAX = 5
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UAETrigger.TriggerEventListenerTrigger
// 0x0004
struct FTriggerEventListenerTrigger
{
	class UUAETriggerObject*                           ListenerTrigger;                                          // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UAETrigger.TriggerClassItem
// 0x0018
struct FTriggerClassItem
{
	struct FString                                     TagName;                                                  // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     ClassFullPath;                                            // 0x000C(0x000C) (ZeroConstructor)
};

// ScriptStruct UAETrigger.UFlowNodeRepData
// 0x0010
struct FUFlowNodeRepData
{
	struct FString                                     RepData;                                                  // 0x0000(0x000C) (ZeroConstructor)
	int                                                NodeID;                                                   // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct UAETrigger.EventFuncListenerTrigger
// 0x000C
struct FEventFuncListenerTrigger
{
	TArray<class UUAETriggerObject*>                   ListenerTriggers;                                         // 0x0000(0x000C) (ZeroConstructor)
};

// ScriptStruct UAETrigger.UAELevelDirectorRepData
// 0x0010
struct FUAELevelDirectorRepData
{
	struct FUFlowNodeRepData                           FlowNodeRepData;                                          // 0x0000(0x0010)
};

}

