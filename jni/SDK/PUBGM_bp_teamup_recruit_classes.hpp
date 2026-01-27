#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_teamup_recruit.bp_teamup_recruit_C
// 0x00A4 (0x0374 - 0x02D0)
class Abp_teamup_recruit_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_TeamUPRecruit_AddFriendIndex;                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUPRecruit_InviteIndex;                             // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUPRecruit_Filter_Nature;                           // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUPRecruit_Filter_Gender;                           // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TeamUPRecruitSpawnPlayer         BP_STRUCT_TeamUPRecruitSpawnPlayer;                       // 0x02E4(0x006C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_TeamUPRecruitSpawnPlayer> BP_ARRAY_TeamUPRecruitSpawnPlayerList;                    // 0x0350(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUPRecruit_Filter_Map;                              // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUpRecruit_CrtTeam_Count;                           // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUPRecruit_Filter_Time;                             // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TeamUPRecruit_Isopen;                                  // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	int                                                BP_TeamUPRecruit_Filter_Team;                             // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup_recruit.bp_teamup_recruit_C");
		return pStaticClass;
	}


	void EventTeamUpRecruitNextGroup_NoFetch();
	void EventTeamUpRecruitNextGroup();
	void EventTeamUpRecruitFilterReset_NoFetch();
	void EventTeamUpRecruitFilterReset();
	void EventTeamUpRecruitClickPlayer_NoFetch();
	void EventTeamUpRecruitClickPlayer();
	void EventTeamUpRecruitFilterOK_NoFetch();
	void EventTeamUpRecruitFilterOK();
	void EventTeamUpRecruitClose_NoFetch();
	void EventTeamUpRecruitClose();
	void EventTeamUpRecruitAddFriend_NoFetch();
	void EventTeamUpRecruitAddFriend();
	void EventTeamUpRecruitInvite_NoFetch();
	void EventTeamUpRecruitInvite();
	void UserConstructionScript();
};


}

