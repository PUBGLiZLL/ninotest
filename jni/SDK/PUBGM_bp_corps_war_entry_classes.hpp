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

// ScriptBlueprintGeneratedClass bp_corps_war_entry.bp_corps_war_entry_C
// 0x00D8 (0x03A8 - 0x02D0)
class Abp_corps_war_entry_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsWarEntry_RemainTime;                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_SeasonHonor;                             // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_JoinMax;                                 // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_Hornor;                                  // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_PlayChestID;                             // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_KillNum;                                 // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsWarEntry_IsShowRankButton;                        // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsWarEntry_AvatarInfo> BP_ARRAY_CorpsWarEntry_ChestAvatarList;                   // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsWarEntry_BeginString;                             // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsWarEntry_ChestInfo>  BP_ARRAY_CorpsWarEntry_ChestList;                         // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsWarEntry_Name;                                    // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsWarEntry_LevelID;                                 // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_WinNum;                                  // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_RemainJoinCount;                         // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_DefeatNum;                               // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_ClickChestID;                            // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_PlayCount;                               // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_JoinedMemberCount;                       // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_WeekHonor;                               // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_PlayChestStatus;                         // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_SeasonID;                                // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsWarEntry_AvatarInfo         BP_STRUCT_CorpsWarEntry_AvatarInfo;                       // 0x0348(0x0024) (Edit, BlueprintVisible)
	int                                                BP_CorpsWarEntry_JoinStatus;                              // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_Icon;                                    // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsWarEntry_GameNum;                                 // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsWarEntry_ChestInfo          BP_STRUCT_CorpsWarEntry_ChestInfo;                        // 0x0378(0x0020) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CorpsWarEntry_AvatarInfo> BP_ARRAY_CorpsWarEntry_JoinedMembers;                     // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03A4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_war_entry.bp_corps_war_entry_C");
		return pStaticClass;
	}


	void EventCorpsWarEntryOnClose_NoFetch();
	void EventCorpsWarEntryOnClose();
	void EventCorpsWarEntryClickJoinDisabled_NoFetch();
	void EventCorpsWarEntryClickJoinDisabled();
	void EventCorpsWarEntryOnRank_NoFetch();
	void EventCorpsWarEntryOnRank();
	void EventCorpsWarEntryOnShare_NoFetch();
	void EventCorpsWarEntryOnShare();
	void EventCorpsWarEntryOnClickSegmentHelp_NoFetch();
	void EventCorpsWarEntryOnClickSegmentHelp();
	void EventCorpsWarEntryOnClickHelp_NoFetch();
	void EventCorpsWarEntryOnClickHelp();
	void EventCorpsWarEntryOnWeekReport_NoFetch();
	void EventCorpsWarEntryOnWeekReport();
	void EventCorpsWarEntryOnClickDoc_NoFetch();
	void EventCorpsWarEntryOnClickDoc();
	void EventCorpsWarEntryOnJoin_NoFetch();
	void EventCorpsWarEntryOnJoin();
	void EventCorpsWarEntryOnClickRankAward_NoFetch();
	void EventCorpsWarEntryOnClickRankAward();
	void EventCorpsWarEntryOnPersonalChest_NoFetch();
	void EventCorpsWarEntryOnPersonalChest();
	void UserConstructionScript();
};


}

