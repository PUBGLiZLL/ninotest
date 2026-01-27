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

// ScriptBlueprintGeneratedClass bp_season_rank.bp_season_rank_C
// 0x00DC (0x03AC - 0x02D0)
class Abp_season_rank_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_SeasonRankInfo                   BP_STRUCT_SeasonRankInfo;                                 // 0x02D4(0x0050) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_SeasonRankInfo>           BP_ARRAY_SeasonRankList;                                  // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SeasonRankInfoMe                 BP_STRUCT_SeasonRankInfoMe;                               // 0x0330(0x0050) (Edit, BlueprintVisible)
	int                                                BP_SeasonRankType;                                        // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SeasonRankAllZoneMax;                                  // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SeasonRank_Select_Item_UID;                            // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SeasonRank_Select_Head_UID;                            // 0x0394(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonRankSelfRankNum;                                 // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SeasonRankID;                                          // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_season_rank.bp_season_rank_C");
		return pStaticClass;
	}


	void EventSeasonRankShowAvatar_NoFetch();
	void EventSeasonRankShowAvatar();
	void EventSeasonRankShowRoleInfo_NoFetch();
	void EventSeasonRankShowRoleInfo();
	void EventSeasonRankPushToLua_NoFetch();
	void EventSeasonRankPushToLua();
	void EventSeasonRankClose_NoFetch();
	void EventSeasonRankClose();
	void UserConstructionScript();
};


}

