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

// ScriptBlueprintGeneratedClass bp_season_pass.bp_season_pass_C
// 0x0108 (0x03D8 - 0x02D0)
class Abp_season_pass_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_SeasonPassPassLevelData          BP_STRUCT_SeasonPassPassLevelData;                        // 0x02D4(0x0014) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_SeasonPassRewardItem>     BP_ARRAY_SeasonPassRewardItem;                            // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SeasonPassSeasonInfo             BP_STRUCT_SeasonPassSeasonInfo;                           // 0x02F4(0x0030) (Edit, BlueprintVisible)
	struct FString                                     BP_SeasonPass_BannerText;                                 // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_SeasonPass_IsPlayAnimation;                            // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	int                                                BP_SeasonPass_LevelItemClickIndex;                        // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SeasonPass_IsChallengeRedPoint;                        // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0339(0x0003) MISSED OFFSET
	struct FString                                     BP_SeasonPass_CollectBtnImgPath;                          // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SeasonPassHighLightItem          BP_STRUCT_SeasonPassHighLightItem;                        // 0x0348(0x0014) (Edit, BlueprintVisible)
	bool                                               BP_SeasonPass_IsCollectProgressOpen;                      // 0x035C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x035D(0x0003) MISSED OFFSET
	int                                                BP_SeasonPass_LobbyMeshBgIdx;                             // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SeasonRank_PlayerData            BP_STRUCT_SeasonRank_PlayerData;                          // 0x0364(0x0024) (Edit, BlueprintVisible)
	struct FString                                     BP_SeasonPass_PreviewItemLockText;                        // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonPass_LevelItemSelectedIndex;                     // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SeasonPassPreviewItemData        BP_STRUCT_SeasonPassPreviewItemData;                      // 0x0398(0x0034) (Edit, BlueprintVisible)
	int                                                BP_SeasonPass_LastLevelItemInView;                        // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SeasonPass_IsRedPoint;                                 // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SeasonPass_QuicklyGetVisibility;                       // 0x03D1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x03D2(0x0002) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_season_pass.bp_season_pass_C");
		return pStaticClass;
	}


	void EventSeasonPassOnClickRank_NoFetch();
	void EventSeasonPassOnClickRank();
	void EventSeasonPassOnClickGetStar_NoFetch();
	void EventSeasonPassOnClickGetStar();
	void EventSeasonPassOnClickRule_NoFetch();
	void EventSeasonPassOnClickRule();
	void EventSeasonPassOnClickShowWeapon_NoFetch();
	void EventSeasonPassOnClickShowWeapon();
	void EventSeasonPassOnScrolled_NoFetch();
	void EventSeasonPassOnScrolled();
	void EventSeasonPassOnClickLevelItem_NoFetch();
	void EventSeasonPassOnClickLevelItem();
	void EventSeasonPassOnClickBanner_NoFetch();
	void EventSeasonPassOnClickBanner();
	void EventSeasonPassOnClickClose_NoFetch();
	void EventSeasonPassOnClickClose();
	void EventSeasonPassOnClickCarryWeapon_NoFetch();
	void EventSeasonPassOnClickCarryWeapon();
	void EventSeasonPassOnClickTask_NoFetch();
	void EventSeasonPassOnClickTask();
	void EventSeasonPassOnClickQuicklyGet_NoFetch();
	void EventSeasonPassOnClickQuicklyGet();
	void UserConstructionScript();
};


}

