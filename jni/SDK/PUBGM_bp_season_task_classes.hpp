#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:48 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_season_task.bp_season_task_C
// 0x0180 (0x0450 - 0x02D0)
class Abp_season_task_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SeasonTaskUI_CurPage;                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SeasonTaskUI_WeekNum;                                  // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SeasonTaskUI_CurWeek;                                  // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SeasonTaskUI_MaxStars;                                 // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SeasonTaskUI_FullTime;                                 // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonTaskUI_CurSeason;                                // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CurSeasonTaskProgressAward       BP_STRUCT_CurSeasonTaskProgressAward;                     // 0x02F4(0x0034) (Edit, BlueprintVisible)
	bool                                               BP_SeasonTaskUI_Redpoint_PageWeek;                        // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	struct FString                                     BP_SeasonTaskUI_SurviveTimeStr;                           // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonTaskUI_RealCurWeek;                              // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SeasonTaskUI_TaskLevelItem> BP_ARRAY_SeasonTaskUI_TaskLevelList;                      // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonTaskUI_WeekTask_SelectWeekId;                    // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SeasonTaskUI_Redpoint_Pass;                            // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	int                                                BP_SeasonTaskUI_PassDisplayType;                          // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SeasonTaskUI_WeeklyLeftTime;                           // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CollectTextTaskInfo>      BP_ARRAY_CollectTextTaskList;                             // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SeasonTaskInfo                   BP_STRUCT_SeasonTaskInfo;                                 // 0x036C(0x002C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CollectTextTaskInfo              BP_STRUCT_CollectTextTaskInfo;                            // 0x0398(0x0010) (Edit, BlueprintVisible)
	struct FString                                     BP_SeasonTaskUI_JumpToMode;                               // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SeasonTaskUI_SelectTaskCategory;                       // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonTaskUI_Stars;                                    // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SeasonTaskUI_TaskLevelItem       BP_STRUCT_SeasonTaskUI_TaskLevelItem;                     // 0x03C4(0x003C) (Edit, BlueprintVisible)
	bool                                               BP_SeasonTaskUI_Redpoint_PageNew;                         // 0x0400(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SeasonTaskUI_Redpoint_PageDay;                         // 0x0401(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SeasonTaskUI_Redpoint_PageWin;                         // 0x0402(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x0403(0x0001) MISSED OFFSET
	int                                                BP_SeasonTaskUI_LevelTask_TaskId;                         // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SeasonTaskUI_LobbyMeshBgIdx;                           // 0x0408(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SeasonTaskInfo>           BP_ARRAY_CurTaskInfoList;                                 // 0x040C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       BP_ARRAY_WeeklyRedPointList;                              // 0x0418(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_SeasonTaskUI_Redpoint_PageLevel;                       // 0x0424(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0425(0x0003) MISSED OFFSET
	int                                                BP_SeasonTaskUI_SelectTaskID;                             // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SeasonTaskUI_WeeklyBeginLeftTime;                      // 0x042C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_EachWeeklyTaskStateList;                         // 0x0438(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonTaskUI_SeasonTask_CurPage;                       // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SeasonTaskUI_PassLevel;                                // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x044C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_season_task.bp_season_task_C");
		return pStaticClass;
	}


	void EventSeasonTaskUIJumpToTaskMode_NoFetch();
	void EventSeasonTaskUIJumpToTaskMode();
	void EventSeasonTaskUIWeekTaskSelectWeekId_NoFetch();
	void EventSeasonTaskUIWeekTaskSelectWeekId();
	void EventSeasonTaskUIClose_NoFetch();
	void EventSeasonTaskUIClose();
	void EventSeasonTaskUISelectPage_NoFetch();
	void EventSeasonTaskUISelectPage();
	void EventSeasonTaskUIOnTaskPageLevelSeasonEnd_NoFetch();
	void EventSeasonTaskUIOnTaskPageLevelSeasonEnd();
	void EventSeasonTaskUIGetProgressAward_NoFetch();
	void EventSeasonTaskUIGetProgressAward();
	void EventSeasonTaskUIComputeRedpoint_NoFetch();
	void EventSeasonTaskUIComputeRedpoint();
	void EventSeasonTaskUIShowSeasonPassport_NoFetch();
	void EventSeasonTaskUIShowSeasonPassport();
	void EventSeasonTaskUISelectSeasonTaskPage_NoFetch();
	void EventSeasonTaskUISelectSeasonTaskPage();
	void EventSeasonTaskUIClickRule_NoFetch();
	void EventSeasonTaskUIClickRule();
	void EventSeasonTaskUIGetTaskAward_NoFetch();
	void EventSeasonTaskUIGetTaskAward();
	void EventSeasonTaskUIGiveUpSeasonDayTask_NoFetch();
	void EventSeasonTaskUIGiveUpSeasonDayTask();
	void EventSeasonTaskUIOnTaskPageLevel_NoFetch();
	void EventSeasonTaskUIOnTaskPageLevel();
	void UserConstructionScript();
};


}

