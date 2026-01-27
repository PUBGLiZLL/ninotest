#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_master_task.bp_master_task_C
// 0x00A0 (0x0370 - 0x02D0)
class Abp_master_task_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_MasterTaskAwardItem              BP_STRUCT_MasterTaskAwardItem;                            // 0x02D4(0x0018) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MasterTaskAwardItem>      BP_ARRAY_MasterTaskAwardInfo;                             // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MasterTask_CurrentTaskId;                              // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_MasterTaskInfo                   BP_STRUCT_MasterTaskInfo;                                 // 0x02FC(0x0024) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MasterTaskCondition              BP_STRUCT_MasterTaskCondition;                            // 0x0320(0x0024) (Edit, BlueprintVisible)
	int                                                BP_MasterTask_MasterAwardResId;                           // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MasterTask_CurrentJump;                                // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MasterTaskCondition>      BP_ARRAY_MasterTaskCondition;                             // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MasterTaskInfo>           BP_ARRAY_MasterTaskInfo;                                  // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x036C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_task.bp_master_task_C");
		return pStaticClass;
	}


	void EventMasterTaskConditionJump_NoFetch();
	void EventMasterTaskConditionJump();
	void EventMasterTaskGetAward_NoFetch();
	void EventMasterTaskGetAward();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

