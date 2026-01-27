#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_treasure_hunt.bp_treasure_hunt_C
// 0x0054 (0x0324 - 0x02D0)
class Abp_treasure_hunt_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_TREASURE_HUNT_BATTLE_UI;                               // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	struct FString                                     BP_TREASURE_HUNT_BOX_SHARED_TIME;                         // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_TREASURE_HUNT_BATTLE_RETURNED_FLAG;                    // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	struct FString                                     BP_TREASURE_HUNT_ACTIVITY_HELP_TITLE;                     // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TREASURE_HUNT_CUR_BOX_ID;                              // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TREASURE_HUNT_TREASURE_EXIST;                          // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x02F9(0x0003) MISSED OFFSET
	struct FString                                     BP_TREASURE_HUNT_BOX_REQ_TIME;                            // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_TREASURE_HUNT_BOX_CREATE_TIME;                         // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_TREASURE_HUNT_ACTIVITY_DETAIL;                         // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0320(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_treasure_hunt.bp_treasure_hunt_C");
		return pStaticClass;
	}


	void EventTreasureHuntRule_NoFetch();
	void EventTreasureHuntRule();
	void EventTreasureHuntCloseUI_NoFetch();
	void EventTreasureHuntCloseUI();
	void EventTreasureHuntInviteFriends_NoFetch();
	void EventTreasureHuntInviteFriends();
	void UserConstructionScript();
};


}

