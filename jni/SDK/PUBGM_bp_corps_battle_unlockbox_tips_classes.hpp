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

// ScriptBlueprintGeneratedClass bp_corps_battle_unlockbox_tips.bp_corps_battle_unlockbox_tips_C
// 0x003C (0x030C - 0x02D0)
class Abp_corps_battle_unlockbox_tips_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsBattleUnlockTips_DropData> BP_ARRAY_CorpsBattleUnlockTips_DropList;                  // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsBattleUnlockTips_Progress;                        // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleUnlockTips_CurProgressSegment;              // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsBattleUnlockTips_DropData   BP_STRUCT_CorpsBattleUnlockTips_DropData;                 // 0x02E8(0x000C) (Edit, BlueprintVisible)
	int                                                BP_CorpsBattleUnlockTips_Open_Type;                       // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleUnlockTips_CanGetSeasonHonor;               // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleUnlockTips_CurSeasonHonor;                  // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleUnlockTips_AvatarFrameID;                   // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsBattleUnlockTips_Treasury_ID;                     // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0308(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_battle_unlockbox_tips.bp_corps_battle_unlockbox_tips_C");
		return pStaticClass;
	}


	void EventCorpsBattleUnlockBoxTipsUICloseClick_NoFetch();
	void EventCorpsBattleUnlockBoxTipsUICloseClick();
	void EventCorpsBattleUnlockBoxTipsUIHelpClick_NoFetch();
	void EventCorpsBattleUnlockBoxTipsUIHelpClick();
	void UserConstructionScript();
};


}

