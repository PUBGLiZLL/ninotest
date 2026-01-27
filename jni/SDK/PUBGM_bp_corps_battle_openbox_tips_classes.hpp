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

// ScriptBlueprintGeneratedClass bp_corps_battle_openbox_tips.bp_corps_battle_openbox_tips_C
// 0x00E0 (0x03B0 - 0x02D0)
class Abp_corps_battle_openbox_tips_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsBattleOpenBoxTips_Open_Type;                      // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CorpsBattleOpenBoxTips_CurSelectItemUID;               // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsBattleOpenBoxTipsRoleInfo   BP_STRUCT_CorpsBattleOpenBoxTipsRoleInfo;                 // 0x02E4(0x0040) (Edit, BlueprintVisible)
	int                                                BP_CorpsBattleOpenBoxTips_Treasury_ID;                    // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsBattleOpenBoxTipsRoleInfo> BP_ARRAY_CorpsBattleOpenBoxTipsRankList;                  // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsBattleOpenBoxTips_Progress;                       // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleOpenBoxTips_CurProgressSegment;             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleOpenBoxTips_CanGetSeasonHonor;              // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleOpenBoxTips_CurSelectItemIdx;               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleOpenBoxTips_CurAddFriendGender;             // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsBattleOpenBoxTips_PlayerData BP_STRUCT_CorpsBattleOpenBoxTips_PlayerData;              // 0x0348(0x0030) (Edit, BlueprintVisible)
	int                                                BP_CorpsBattleOpenBoxTips_CurSeasonHonor;                 // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleOpenBoxTips_Previous_Treasury_ID;           // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsBattleOpenBoxTips_DropData  BP_STRUCT_CorpsBattleOpenBoxTips_DropData;                // 0x0380(0x000C) (Edit, BlueprintVisible)
	struct FString                                     BP_CorpsBattleOpenBoxTips_CurAddFriendUID;                // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsBattleOpenBoxTips_AvatarFrameID;                  // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleOpenBoxTips_CurSelectItemOldIdx;            // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsBattleOpenBoxTips_DropData> BP_ARRAY_CorpsBattleOpenBoxTips_DropList;                 // 0x03A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_battle_openbox_tips.bp_corps_battle_openbox_tips_C");
		return pStaticClass;
	}


	void EventCorpsBattleOpenBoxTipsUIAddFriend_NoFetch();
	void EventCorpsBattleOpenBoxTipsUIAddFriend();
	void EventCorpsBattleOpenBoxTipsUISelectItemHeadClick_NoFetch();
	void EventCorpsBattleOpenBoxTipsUISelectItemHeadClick();
	void EventCorpsBattleOpenBoxTipsUIClickHelpClick_NoFetch();
	void EventCorpsBattleOpenBoxTipsUIClickHelpClick();
	void EventCorpsBattleOpenBoxTipsUICloseClick_NoFetch();
	void EventCorpsBattleOpenBoxTipsUICloseClick();
	void EventCorpsBattleOpenBoxTipsUISelectItem_NoFetch();
	void EventCorpsBattleOpenBoxTipsUISelectItem();
	void UserConstructionScript();
};


}

