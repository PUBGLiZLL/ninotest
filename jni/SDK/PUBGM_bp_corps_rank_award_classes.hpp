#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:44 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_corps_rank_award.bp_corps_rank_award_C
// 0x0154 (0x0424 - 0x02D0)
class Abp_corps_rank_award_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x02D4(0x0040) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Corps_Rank_Award_Member2_Info    BP_STRUCT_Corps_Rank_Award_Member2_Info;                  // 0x0314(0x0044) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Corps_Rank_Award_Member3_Info    BP_STRUCT_Corps_Rank_Award_Member3_Info;                  // 0x0358(0x0044) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsAwardInfo                   BP_STRUCT_CorpsAwardInfo;                                 // 0x039C(0x0034) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Corps_Rank_Award_Member1_Info    BP_STRUCT_Corps_Rank_Award_Member1_Info;                  // 0x03D0(0x0044) (Edit, BlueprintVisible)
	struct FString                                     BP_CorpsRankAward_Player_ID;                              // 0x0414(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0420(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_rank_award.bp_corps_rank_award_C");
		return pStaticClass;
	}


	void EventCorpsRankAwardUICloseWeekSendSeason_NoFetch();
	void EventCorpsRankAwardUICloseWeekSendSeason();
	void EventCorpsRankAwardUICloseSeaon_NoFetch();
	void EventCorpsRankAwardUICloseSeaon();
	void EventCorpsRankAwardUIShowPlayerDetails_NoFetch();
	void EventCorpsRankAwardUIShowPlayerDetails();
	void UserConstructionScript();
};


}

