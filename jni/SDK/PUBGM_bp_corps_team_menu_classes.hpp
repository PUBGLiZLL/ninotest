#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_corps_team_menu.bp_corps_team_menu_C
// 0x00E8 (0x03B8 - 0x02D0)
class Abp_corps_team_menu_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               CorpsTeam_Is_Matching;                                    // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	struct FBP_STRUCT_CorpsMenuInfo                    BP_STRUCT_CorpsMenuInfo;                                  // 0x02D8(0x0088) (Edit, BlueprintVisible)
	struct FString                                     CorpsTeam_Click_Player_ID;                                // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                CorpsTeam_CrtTeam_Count;                                  // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CorpsTeam_Click_Player_IS_FRIEND;                         // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	struct FString                                     CorpsTeam_Quick_Msg_GID;                                  // 0x0374(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CorpsTeam_Quick_Msg_Content;                              // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               CorpsTeam_IsSelfHost;                                     // 0x038C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x038D(0x0003) MISSED OFFSET
	struct FString                                     CorpsTeam_Host_ID;                                        // 0x0390(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     CorpsTeam_My_User_ID;                                     // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsMenuInfo>            BP_ARRAY_CorpsMenuInfoList;                               // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_team_menu.bp_corps_team_menu_C");
		return pStaticClass;
	}


	void EventCorpsTeamChangeLeader_NoFetch();
	void EventCorpsTeamChangeLeader();
	void EventCorpsTeamClickPlayerInfo_NoFetch();
	void EventCorpsTeamClickPlayerInfo();
	void EventCorpsTeamAddFriend_NoFetch();
	void EventCorpsTeamAddFriend();
	void EventCorpsTeamNoRightForMatching_NoFetch();
	void EventCorpsTeamNoRightForMatching();
	void EventCorpsTeamClickQuit_NoFetch();
	void EventCorpsTeamClickQuit();
	void EventCorpsTeamUpdateClickPlayerInfo_NoFetch();
	void EventCorpsTeamUpdateClickPlayerInfo();
	void EventCorpsTeamClickKick_NoFetch();
	void EventCorpsTeamClickKick();
	void UserConstructionScript();
};


}

