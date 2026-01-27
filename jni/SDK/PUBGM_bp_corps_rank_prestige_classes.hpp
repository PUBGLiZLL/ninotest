#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:45 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_corps_rank_prestige.bp_corps_rank_prestige_C
// 0x0254 (0x0524 - 0x02D0)
class Abp_corps_rank_prestige_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CorpsPrestigeRank_PlayerData     BP_STRUCT_CorpsPrestigeRank_PlayerData;                   // 0x02D4(0x0030) (Edit, BlueprintVisible)
	int                                                bp_corps_rank_prestige_Trans_End_Index;                   // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Crops_Prestige_Rank_Now_Type;                          // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x030C(0x0040) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Corps_Rank_Top_Member1_Info      BP_STRUCT_Corps_Rank_Top_Member1_Info;                    // 0x034C(0x0044) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Corps_Rank_Top_Member2_Info      BP_STRUCT_Corps_Rank_Top_Member2_Info;                    // 0x0390(0x0044) (Edit, BlueprintVisible)
	int                                                BP_Corps_Rank_Prestige_Current_ID;                        // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Corps_Rank_Top_Member4_Info      BP_STRUCT_Corps_Rank_Top_Member4_Info;                    // 0x03D8(0x0044) (Edit, BlueprintVisible)
	struct FString                                     BP_Corps_Rank_Prestige_Click_Leader_ID;                   // 0x041C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsPrestigeUinInfo             BP_STRUCT_CorpsPrestigeUinInfo;                           // 0x0428(0x0004) (Edit, BlueprintVisible)
	bool                                               BP_Corps_Rank_Prestige_Is_Lock_SelfInfo;                  // 0x042C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x042D(0x0003) MISSED OFFSET
	int                                                BP_Crops_Prestige_Rank_Now_Super_Type;                    // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CorpsPrestigeRankSelectItemUid;                        // 0x0434(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Corps_Rank_Top_Member3_Info      BP_STRUCT_Corps_Rank_Top_Member3_Info;                    // 0x0440(0x0044) (Edit, BlueprintVisible)
	bool                                               BP_Corps_Rank_Prestige_Is_Lock_Uin;                       // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	struct FBP_STRUCT_MyCorpsPrestigeRankInfo          BP_STRUCT_MyCorpsPrestigeRankInfo;                        // 0x0488(0x002C) (Edit, BlueprintVisible)
	struct FString                                     BP_Crops_Prestige_Rank_Select_LeaderName;                 // 0x04B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsPrestigeUinInfo>     BP_ARRAY_Corps_RankPrestigeUinList;                       // 0x04C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Crops_Prestige_Rank_Select_LeaderSex;                  // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                bp_corps_rank_prestige_Trans_Begin_Index;                 // 0x04D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_STRUCT_MyCorpsPrestigeRankNumPro;                      // 0x04D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_STRUCT_MyCorpsPrestigeRankNum;                         // 0x04D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsPrestigeRankInfo            BP_STRUCT_CorpsPrestigeRankInfo;                          // 0x04DC(0x002C) (Edit, BlueprintVisible)
	struct FString                                     BP_Corps_Rank_Prestige_Click_Player_ID;                   // 0x0508(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsPrestigeRankInfo>    BP_ARRAY_Corps_RankPrestigeInfoList;                      // 0x0514(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0520(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_rank_prestige.bp_corps_rank_prestige_C");
		return pStaticClass;
	}


	void EventCorpsPrestigeRankOpenLBSRank_NoFetch();
	void EventCorpsPrestigeRankOpenLBSRank();
	void EventCorpsPrestigeRankOnHide_NoFetch();
	void EventCorpsPrestigeRankOnHide();
	void EventCorpsPrestigeRankShowUI_NoFetch();
	void EventCorpsPrestigeRankShowUI();
	void EventCorpsRankPreSelectItem_NoFetch();
	void EventCorpsRankPreSelectItem();
	void EventCorpsPrestigeRankTypeChange_NoFetch();
	void EventCorpsPrestigeRankTypeChange();
	void EventCorpsPrestigeRankGetNextInfo_NoFetch();
	void EventCorpsPrestigeRankGetNextInfo();
	void EventCorpsPrestigeRankOpenHelp_NoFetch();
	void EventCorpsPrestigeRankOpenHelp();
	void EventCorpsPrestigeRankShowLeaderDetails_NoFetch();
	void EventCorpsPrestigeRankShowLeaderDetails();
	void EventCorpsPrestigeRankShowPlayerDetails_NoFetch();
	void EventCorpsPrestigeRankShowPlayerDetails();
	void EventCorpsPrestigeRankShowCorpsDetails_NoFetch();
	void EventCorpsPrestigeRankShowCorpsDetails();
	void EventCorpsPrestigeRankOnShow_NoFetch();
	void EventCorpsPrestigeRankOnShow();
	void EventCorpsPrestigeRankOpenTotalRank_NoFetch();
	void EventCorpsPrestigeRankOpenTotalRank();
	void EventCorpsPrestigeRankHideUI_NoFetch();
	void EventCorpsPrestigeRankHideUI();
	void UserConstructionScript();
};


}

