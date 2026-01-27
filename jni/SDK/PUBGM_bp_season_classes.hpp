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

// ScriptBlueprintGeneratedClass bp_season.bp_season_C
// 0x0148 (0x0418 - 0x02D0)
class Abp_season_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Season_Segment_Name;                                      // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Season_Segment_Level;                                     // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Season_Sum_Score_Progress;                                // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Season_Sum_Score_ProgressNum;                             // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonInReward_Condition2_Txt1;                           // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               SeasonInReward_Condition1_Finish;                         // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	struct FString                                     SeasonEndReward_Txt;                                      // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SeasonEndReward_TakeState;                                // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Season_WeekMaxProgress;                                   // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Season_ID;                                                // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Season_BestFppMode;                                       // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Season_SeasonProgress;                                    // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Season_SeasonMaxProgress;                                 // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeasonInReward_ItemTime;                                  // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Season_Time;                                              // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SeasonInReward_TakeState;                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Season_Show_Score_ProgressNum;                            // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	int                                                SeasonEndReward_ItemID;                                   // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeasonEndReward_SeasonID;                                 // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                SeasonPlatform;                                           // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SeasonUI_DayTask>         BP_ARRAY_SeasonUI_DayTaskList;                            // 0x035C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SeasonInReward_ItemID;                                    // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SeasonInReward_Condition1_Txt;                            // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Season_SeasonReviewRedpoint;                              // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Season_HightLevel;                                        // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x037A(0x0002) MISSED OFFSET
	struct FString                                     SeasonInReward_Condition2_Txt2;                           // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonReview_Text;                                        // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_SeasonSegmentType>        BP_ARRAY_SeasonSegmentTypeList;                           // 0x0394(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SeasonReview_URL;                                         // 0x03A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Season_Name;                                              // 0x03AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Season_BestTppMode;                                       // 0x03B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Season_SelectMode;                                        // 0x03C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Season_WeekProgress;                                      // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Season_Sum_Score;                                         // 0x03D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                SeasonInReward_TakeId;                                    // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SeasonUI_DailyAward              BP_STRUCT_SeasonUI_DailyAward;                            // 0x03E4(0x0020) (Edit, BlueprintVisible)
	struct FString                                     Season_RankNo;                                            // 0x0404(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               SeasonInReward_Condition2_Finish;                         // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0414(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_season.bp_season_C");
		return pStaticClass;
	}


	void EventSeasonShowSeasonTaskWeek_NoFetch();
	void EventSeasonShowSeasonTaskWeek();
	void EventSeasonShowSeasonPassport_NoFetch();
	void EventSeasonShowSeasonPassport();
	void EventSeasonUIClose_NoFetch();
	void EventSeasonUIClose();
	void EventSeasonSelectMode_NoFetch();
	void EventSeasonSelectMode();
	void EventSeasonShowSeasonTaskDay_NoFetch();
	void EventSeasonShowSeasonTaskDay();
	void EventTakeSeasonEndReward_NoFetch();
	void EventTakeSeasonEndReward();
	void EventSeasonShowSeasonTaskSeason_NoFetch();
	void EventSeasonShowSeasonTaskSeason();
	void EventSeasonShowSeasonReview_NoFetch();
	void EventSeasonShowSeasonReview();
	void EventSeasonUIClickSeasonReview_NoFetch();
	void EventSeasonUIClickSeasonReview();
	void EventOpenShareRank_NoFetch();
	void EventOpenShareRank();
	void EventSeasonTips_NoFetch();
	void EventSeasonTips();
	void EventTakeSeasonInReward_NoFetch();
	void EventTakeSeasonInReward();
	void EventSeasonUIGetDailyAward_NoFetch();
	void EventSeasonUIGetDailyAward();
	void UserConstructionScript();
};


}

