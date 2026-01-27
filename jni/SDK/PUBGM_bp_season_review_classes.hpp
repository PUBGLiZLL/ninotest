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

// ScriptBlueprintGeneratedClass bp_season_review.bp_season_review_C
// 0x0144 (0x0414 - 0x02D0)
class Abp_season_review_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_SeasonReview_Page_RankSubTab> BP_ARRAY_SeasonReview_Page_RankSubTab;                    // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SeasonReview_Tab                 BP_STRUCT_SeasonReview_Tab;                               // 0x02E0(0x0014) (Edit, BlueprintVisible)
	struct FBP_STRUCT_SeasonReview_Summary             BP_STRUCT_SeasonReview_Summary;                           // 0x02F4(0x0048) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_SeasonReview_Summary>     BP_ARRAY_SeasonReview_Summary;                            // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SeasonReview_Page_Rank           BP_STRUCT_SeasonReview_Page_Rank;                         // 0x0348(0x0020) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_SeasonReview_Page_RankItem> BP_ARRAY_SeasonReview_Page_RankItem;                      // 0x0368(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SeasonReview_Page_RankSubTab     BP_STRUCT_SeasonReview_Page_RankSubTab;                   // 0x0374(0x0014) (Edit, BlueprintVisible)
	struct FBP_STRUCT_SeasonReview_Page_SegmentItem    BP_STRUCT_SeasonReview_Page_SegmentItem;                  // 0x0388(0x0020) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_SeasonReview_Page_SegmentItem> BP_ARRAY_SeasonReview_Page_SegmentItem;                   // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonReview_CurSeasonTab;                             // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SeasonReview_Page_RankItem       BP_STRUCT_SeasonReview_Page_RankItem;                     // 0x03B8(0x0038) (Edit, BlueprintVisible)
	struct FString                                     BP_SeasonReview_Segment_Title;                            // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonReview_CurSeasonSubTab;                          // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SeasonReview_Tab>         BP_ARRAY_SeasonReview_Tab;                                // 0x0400(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonReview_CurSeasonID;                              // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_season_review.bp_season_review_C");
		return pStaticClass;
	}


	void EventClickSummaryRankTabButton_Push_NoFetch();
	void EventClickSummaryRankTabButton_Push();
	void EventClickSummaryItem_Push_NoFetch();
	void EventClickSummaryItem_Push();
	void EventClickSummaryTabButton_Push_NoFetch();
	void EventClickSummaryTabButton_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

