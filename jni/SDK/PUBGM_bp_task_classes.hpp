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

// ScriptBlueprintGeneratedClass bp_task.bp_task_C
// 0x012C (0x03FC - 0x02D0)
class Abp_task_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_TaskActiveNum;                                         // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_RefreshTaskTimeLast;                                   // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ActiveAwardInfo>          BP_ARRAY_ActiveAwardInfos;                                // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurrentOperateAwardId;                                 // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_LevelTaskInfos                   BP_STRUCT_LevelTaskInfos;                                 // 0x02EC(0x0024) (Edit, BlueprintVisible)
	int                                                BP_CurrentOperateDropId;                                  // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CurrentOperateLevelTask          BP_STRUCT_CurrentOperateLevelTask;                        // 0x0314(0x0008) (Edit, BlueprintVisible)
	bool                                               BP_HasTaskDone;                                           // 0x031C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x031D(0x0003) MISSED OFFSET
	struct FBP_STRUCT_LevelTaskInfo                    BP_STRUCT_LevelTaskInfo;                                  // 0x0320(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_TaskInfo                         BP_STRUCT_TaskInfo;                                       // 0x0338(0x0020) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_TaskCategory>             BP_ARRAY_TaskInfos;                                       // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ActiveAwardInfo>          BP_ARRAY_WeekActiveAwardInfos;                            // 0x0364(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TaskDropItem                     BP_STRUCT_TaskDropItem;                                   // 0x0370(0x0010) (Edit, BlueprintVisible)
	struct FBP_STRUCT_TaskCategory                     BP_STRUCT_TaskCategory;                                   // 0x0380(0x001C) (Edit, BlueprintVisible)
	int                                                BP_CurrentOperateTaskId;                                  // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TaskWeekActiveNum;                                     // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       BP_Array_TaskUI_RedPoint;                                 // 0x03A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_TaskDropItem>             BP_ARRAY_CurrentDropList;                                 // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActiveAwardItem                  BP_STRUCT_ActiveAwardItem;                                // 0x03BC(0x0018) (Edit, BlueprintVisible)
	int                                                BP_RefreshWeekAwardTimeLast;                              // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_RefreshAwardTimeLast;                                  // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Task_CurrentToggleID;                                  // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Task_BackflowTaskIsOpen;                               // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	struct FBP_STRUCT_ActiveAwardInfo                  BP_STRUCT_ActiveAwardInfo;                                // 0x03E4(0x0014) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_task.bp_task_C");
		return pStaticClass;
	}


	void EventLevelTaskGetAward_Push_NoFetch();
	void EventLevelTaskGetAward_Push();
	void EventGetDropsList_NoFetch();
	void EventGetDropsList();
	void EventTaskGetAllAward_NoFetch();
	void EventTaskGetAllAward();
	void EventTaskGetReward_Push_NoFetch();
	void EventTaskGetReward_Push();
	void EventTaskGoTo_Push_NoFetch();
	void EventTaskGoTo_Push();
	void EventTaskShowUI_NoFetch();
	void EventTaskShowUI();
	void EventTaskOnUIClose_NoFetch();
	void EventTaskOnUIClose();
	void EventLevelTaskGoto_Push_NoFetch();
	void EventLevelTaskGoto_Push();
	void EventTaskShowRewardDetailPopup_Push_NoFetch();
	void EventTaskShowRewardDetailPopup_Push();
	void EventTaskClickAwarded_Push_NoFetch();
	void EventTaskClickAwarded_Push();
	void EventTaskOnToggleClicked_NoFetch();
	void EventTaskOnToggleClicked();
	void EventTaskUpdateRedPoint_NoFetch();
	void EventTaskUpdateRedPoint();
	void EventTestAddProgress_Push_NoFetch();
	void EventTestAddProgress_Push();
	void EventTaskHideUI_NoFetch();
	void EventTaskHideUI();
	void EventLevelTaskShowRewardDetailPopup_Push_NoFetch();
	void EventLevelTaskShowRewardDetailPopup_Push();
	void EventTaskFinishTask_Push_NoFetch();
	void EventTaskFinishTask_Push();
	void EventTaskGetTaskReward_Push_NoFetch();
	void EventTaskGetTaskReward_Push();
	void UserConstructionScript();
};


}

