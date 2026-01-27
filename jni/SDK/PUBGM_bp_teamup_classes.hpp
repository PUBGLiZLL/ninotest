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

// ScriptBlueprintGeneratedClass bp_teamup.bp_teamup_C
// 0x0178 (0x0448 - 0x02D0)
class Abp_teamup_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     TEAMUP_CHS_NAME_DOUBLE;                                   // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamUp_CrtTeam_ID;                                        // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TeamUP_Shield_Lock_Solo;                                  // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	struct FString                                     TEAMUP_CHS_NAME_SOLO;                                     // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamUp_Click_Player_Name;                                 // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TeamUp_Click_Player_IS_FRIEND;                            // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_Click_Switch_Camera;                               // 0x0309(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Teamup_Show_NewteachingGuide;                             // 0x030A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x030B(0x0001) MISSED OFFSET
	int                                                BP_EFFECT_POSITION;                                       // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamUp_Fill;                                              // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamUp_GameType;                                          // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_IsSelfHost;                                        // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUP_Shield_Lock_Double;                                // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUP_Shield_Lock_Quad;                                  // 0x031A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x031B(0x0001) MISSED OFFSET
	struct FString                                     TeamUp_Quick_Msg_GID;                                     // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TeamUpMenuInfo                   BP_STRUCT_TeamUpMenuInfo;                                 // 0x0328(0x0084) (Edit, BlueprintVisible)
	struct FString                                     TEAMUP_CHS_NAME_QUAD;                                     // 0x03AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TEAMUP_TEAM_TYPE_DOUBLE;                                  // 0x03B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamUp_CrtTeam_Count;                                     // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     TeamUp_My_User_ID;                                        // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TeamUp_Click_Switch_Camera_Time;                          // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_IS_LOCK_QUAD;                                      // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	struct FString                                     TeamUp_Host_ID;                                           // 0x03D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TeamUp_IS_LOCK_DOUBLE;                                    // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03E1(0x0003) MISSED OFFSET
	struct FString                                     TeamUp_Quick_Msg_Content;                                 // 0x03E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamUp_Click_Player_ID;                                   // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TeamUp_IS_LOCK_SOLO;                                      // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_DestinyIsLock;                                         // 0x03FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x2];                                       // 0x03FE(0x0002) MISSED OFFSET
	int                                                TEAMUP_TEAM_TYPE_SOLO;                                    // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     TEAMUP_CHS_NAME_NONE;                                     // 0x0404(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamUp_Team_Type_Name;                                    // 0x0410(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_TeamUpMenuInfo>           BP_ARRAY_TeamUpMenuInfoList;                              // 0x041C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TEAMUP_TEAM_TYPE_QUAD;                                    // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamUp_Team_Type;                                         // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_Is_Matching;                                       // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	int                                                TeamUp_Will_Change_Fill;                                  // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamUp_Change_Team_Type;                                  // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TeamUp_AutoMatch;                                         // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	int                                                TeamUp_Change_Game_Type;                                  // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0444(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup.bp_teamup_C");
		return pStaticClass;
	}


	void EventTeamUpClickCreateRoomBtn_NoFetch();
	void EventTeamUpClickCreateRoomBtn();
	void EventTeamUpEnterTrainingMode_NoFetch();
	void EventTeamUpEnterTrainingMode();
	void EventTeamUpFailOnMatching_NoFetch();
	void EventTeamUpFailOnMatching();
	void EventShowTopTip_NoFetch();
	void EventShowTopTip();
	void EventTeamUpChangeClassicGameType_NoFetch();
	void EventTeamUpChangeClassicGameType();
	void EventFetchTeamUpInfo_NoFetch();
	void EventFetchTeamUpInfo();
	void EventTeamUpUI_Push_NoFetch();
	void EventTeamUpUI_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventTeamUpLeaveTeam_NoFetch();
	void EventTeamUpLeaveTeam();
	void EventTeamUpNoRightForMatching_NoFetch();
	void EventTeamUpNoRightForMatching();
	void EventTeamUpClickQuit_NoFetch();
	void EventTeamUpClickQuit();
	void EventTeamUpClickPlayerInfo_NoFetch();
	void EventTeamUpClickPlayerInfo();
	void EventTeamUpAddFriend_NoFetch();
	void EventTeamUpAddFriend();
	void EventTeamUpClickTrainingBtn_NoFetch();
	void EventTeamUpClickTrainingBtn();
	void EventTeamUpClickAutoMatchBtn_NoFetch();
	void EventTeamUpClickAutoMatchBtn();
	void EventTeamUpUpdateClickPlayerInfo_NoFetch();
	void EventTeamUpUpdateClickPlayerInfo();
	void EventSetHasGuideNewteaching_NoFetch();
	void EventSetHasGuideNewteaching();
	void EventTeamUpDestinyLimit_NoFetch();
	void EventTeamUpDestinyLimit();
	void EventTeamUpChangeRingGameType_NoFetch();
	void EventTeamUpChangeRingGameType();
	void EventTeamUpChangeTeamType_NoFetch();
	void EventTeamUpChangeTeamType();
	void EventTeamUpClickKick_NoFetch();
	void EventTeamUpClickKick();
	void EventTeamUpChangeLeader_NoFetch();
	void EventTeamUpChangeLeader();
	void EventTeamUpNoHostRight_NoFetch();
	void EventTeamUpNoHostRight();
	void EventTeamUpClickExpand_NoFetch();
	void EventTeamUpClickExpand();
	void UserConstructionScript();
};


}

