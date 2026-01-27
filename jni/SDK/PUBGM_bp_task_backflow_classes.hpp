#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_task_backflow.bp_task_backflow_C
// 0x00C8 (0x0398 - 0x02D0)
class Abp_task_backflow_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_TaskBackflowCurrentOperateAwardId;                     // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_TaskBackflowDropItem>     BP_ARRAY_TaskBackflowCurrDropList;                        // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TaskBackflowData                 BP_STRUCT_TaskBackflowData;                               // 0x02E4(0x0020) (Edit, BlueprintVisible)
	struct FBP_STRUCT_TaskBackflowCategory             BP_STRUCT_TaskBackflowCategory;                           // 0x0304(0x002C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_TaskBackflowActiveAwardInfo      BP_STRUCT_TaskBackflowActiveAwardInfo;                    // 0x0330(0x0018) (Edit, BlueprintVisible)
	int                                                BP_TaskBackflowActiveNum;                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TaskBackflowCurrentOperateTaskId;                      // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TaskBackflowActiveAwardItem      BP_STRUCT_TaskBackflowActiveAwardItem;                    // 0x0350(0x0018) (Edit, BlueprintVisible)
	int                                                BP_TaskBackflowCurrentCategoryID;                         // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TaskBackflowHasRedPoint;                               // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_TaskBackflowActiveAwardInfo> BP_ARRAY_TaskBackflowActiveAwardInfos;                    // 0x0370(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TaskBackflowDropItem             BP_STRUCT_TaskBackflowDropItem;                           // 0x037C(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_TaskBackflowCategory>     BP_ARRAY_TaskBackflowInfos;                               // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0394(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_task_backflow.bp_task_backflow_C");
		return pStaticClass;
	}


	void EventTaskBackflowShowRewardDetailPopup_Push_NoFetch();
	void EventTaskBackflowShowRewardDetailPopup_Push();
	void EventTsakBackflowClickedTab_NoFetch();
	void EventTsakBackflowClickedTab();
	void EventTaskBackflowGetReward_Push_NoFetch();
	void EventTaskBackflowGetReward_Push();
	void EventTaskBackflowGenTaskRewardData_Push_NoFetch();
	void EventTaskBackflowGenTaskRewardData_Push();
	void EventTaskBackflowGoTo_Push_NoFetch();
	void EventTaskBackflowGoTo_Push();
	void EventTaskBackflowGetActivenessReward_Push_NoFetch();
	void EventTaskBackflowGetActivenessReward_Push();
	void EventTaskBackflowClickAwarded_Push_NoFetch();
	void EventTaskBackflowClickAwarded_Push();
	void EventTaskBackflowShowHelpPopup_NoFetch();
	void EventTaskBackflowShowHelpPopup();
	void UserConstructionScript();
};


}

