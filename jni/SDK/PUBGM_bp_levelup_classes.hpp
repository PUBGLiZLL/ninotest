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

// ScriptBlueprintGeneratedClass bp_levelup.bp_levelup_C
// 0x00D0 (0x03A0 - 0x02D0)
class Abp_levelup_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_LevelUp_OldRank_RankBgPath;                            // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LevelUp_OldRank_RankName;                              // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_OldRankMinIntergral;                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_NewRankLevel;                                  // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_NewRankMinIntergral;                           // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_OldRankMaxIntergral;                           // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LevelUp_PromoteToHigherRank;                           // 0x02FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	int                                                BP_LevelUp_OldRankStarNum;                                // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_HistoryHighestRankLevel;                       // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_OldRankPoint;                                  // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_HasLevelupShareNum;                                    // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_RankType;                                      // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsShareAwardGold;                                      // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LevelUp_ShowLevelUp;                                   // 0x0315(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0316(0x0002) MISSED OFFSET
	int                                                BP_LevelUp_NewRankPoint;                                  // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_RankBgPath;                                            // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_OldLevel;                                      // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LevelUp_RankTypeName;                                  // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_NewRankMaxIntergral;                           // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_RankModeType;                                  // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LevelUp_OldRankName;                                   // 0x0340(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LevelUp_NewRankName;                                   // 0x034C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RankFgPath;                                            // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_RankImproveNum;                                // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_NewRankStarNum;                                // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LevelUp_OldRankLevel;                                  // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LevelUp_ShowRankUp;                                    // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	struct FString                                     BP_RankName;                                              // 0x0374(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LevelUp_RankAnimation;                                 // 0x0380(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LevelUp_OldRank_RankFgPath;                            // 0x0384(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LevelUp_RankModeTypeName;                              // 0x0390(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x039C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_levelup.bp_levelup_C");
		return pStaticClass;
	}


	void EventLevelUpShareRank_NoFetch();
	void EventLevelUpShareRank();
	void EventLevelUpClosePanel_NoFetch();
	void EventLevelUpClosePanel();
	void EventLevelUpShareLevel_NoFetch();
	void EventLevelUpShareLevel();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

