#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:49 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_share_history_ranking.bp_share_history_ranking_C
// 0x0148 (0x0418 - 0x02D0)
class Abp_share_history_ranking_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ShareHistoryRanking_TeammateInfo BP_STRUCT_ShareHistoryRanking_TeammateInfo;               // 0x02D4(0x0064) (Edit, BlueprintVisible)
	int                                                BP_ShareHistoryRanking_MyKillNum;                         // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ShareHistoryRanking_DoubleScoreReason;                 // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_ShareHistoryRanking_MyTitleIDList;               // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShareHistoryRanking_DetailInfo   BP_STRUCT_ShareHistoryRanking_DetailInfo;                 // 0x0354(0x0090) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ShareHistoryRanking_ExploreInfo  BP_STRUCT_ShareHistoryRanking_ExploreInfo;                // 0x03E4(0x0014) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ShareHistoryRanking_TeammateInfo> BP_ARRAY_ShareHistoryRanking_TeammateInfoList;            // 0x03F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShareHistoryRanking_ContributionInfo BP_STRUCT_ShareHistoryRanking_ContributionInfo;           // 0x0404(0x0010) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0414(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_history_ranking.bp_share_history_ranking_C");
		return pStaticClass;
	}


	void EventShareHistoryRankingHide_NoFetch();
	void EventShareHistoryRankingHide();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

