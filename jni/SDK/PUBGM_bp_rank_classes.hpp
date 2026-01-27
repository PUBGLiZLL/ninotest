#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:43 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_rank.bp_rank_C
// 0x0228 (0x04F8 - 0x02D0)
class Abp_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_RankSelectMemberType;                                  // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RankInfoSelfBelow1wDisplay;                            // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Rank_PlayerData                  BP_STRUCT_Rank_PlayerData;                                // 0x02EC(0x0030) (Edit, BlueprintVisible)
	struct FString                                     BP_RankSelectType;                                        // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RankInfo>                 BP_ARRAY_RankList;                                        // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RankInfoMe                       BP_STRUCT_RankInfoMe;                                     // 0x0334(0x0074) (Edit, BlueprintVisible)
	struct FString                                     BP_RankRegionType;                                        // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RankSelectItemUid;                                     // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RankUpdateItemInfo               BP_STRUCT_RankUpdateItemInfo;                             // 0x03C0(0x0074) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Rank_RoleInfo                    BP_STRUCT_Rank_RoleInfo;                                  // 0x0434(0x002C) (Edit, BlueprintVisible)
	int                                                BP_RankUpdateIdx;                                         // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_RankShowRoleUid;                                       // 0x0464(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RankShowHelpContent;                                   // 0x0470(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RankInfo                         BP_STRUCT_RankInfo;                                       // 0x047C(0x0074) (Edit, BlueprintVisible)
	int                                                BP_RankScrollPos;                                         // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_rank.bp_rank_C");
		return pStaticClass;
	}


	void EventRankShowHelp_NoFetch();
	void EventRankShowHelp();
	void EventEnterWarZoneRank_NoFetch();
	void EventEnterWarZoneRank();
	void EventRankClose_NoFetch();
	void EventRankClose();
	void EventTestRank_NoFetch();
	void EventTestRank();
	void EventQueryRank_NoFetch();
	void EventQueryRank();
	void EventRankScrollPos_NoFetch();
	void EventRankScrollPos();
	void EventRankShowRole_NoFetch();
	void EventRankShowRole();
	void EventRankFetchInfo_NoFetch();
	void EventRankFetchInfo();
	void EventRankSelectItem_NoFetch();
	void EventRankSelectItem();
	void UserConstructionScript();
};


}

