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

// ScriptBlueprintGeneratedClass bp_teamup_friend.bp_teamup_friend_C
// 0x01F0 (0x04C0 - 0x02D0)
class Abp_teamup_friend_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_TeamUPFriendIsShow;                                    // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	struct FString                                     BP_FriendHeadClickGid;                                    // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_Teamup_Friend_Detail_Profile;                    // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TeamupFriendLiteProfile          BP_STRUCT_TeamupFriendLiteProfile;                        // 0x02F0(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_Corps_Friend_Detail_Profile;                     // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MyPlyerCount;                                          // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TeamUp_OneFriend_Watch_IsFinalFighting;                // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x030D(0x0003) MISSED OFFSET
	struct FString                                     BP_InviteFriendID;                                        // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_TeamUp_Corps_Friend;                             // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_TeamUp_Friend_IsGuideEveryDay;                         // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TeamUp_Friend_IsGuideFirstTime;                        // 0x0329(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x032A(0x0002) MISSED OFFSET
	struct FString                                     BP_TeamUp_OneFriend_Watch_NickName;                       // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUp_OneFriend_Watch_TimeSinceGameBegin;             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TeamUp_EnterRoom;                                      // 0x033C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x033D(0x0003) MISSED OFFSET
	struct FString                                     BP_TeamUp_OneFriend_Watch_UID;                            // 0x0340(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUp_OneFriend_Watch_SubMode;                        // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_TeamupFriendLiteProfile>  BP_ARRAY_Teamup_Friend_Lite_Profile;                      // 0x0350(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_InviteFriendName;                                      // 0x035C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_TargetHeadIsFriend;                                    // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	int                                                BP_TeamUp_Friend_Scroll_End;                              // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_TeamupCorpsLiteProfile>   BP_ARRAY_Corps_Lite_Profile;                              // 0x0370(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TeamupCorpsLiteProfile           BP_STRUCT_TeamupCorpsLiteProfile;                         // 0x037C(0x000C) (Edit, BlueprintVisible)
	bool                                               BP_TeamUp_EnterRoomWaiting;                               // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	struct FString                                     BP_TeamUPFriend_Alliance_Team_Bonus_String;               // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUp_Friend_Num;                                     // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUp_Corps_Scroll_Start;                             // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUp_Friend_Online_Num;                              // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ReservationState;                                      // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUp_Friend_Scroll_Start;                            // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_Recent_Friend;                                   // 0x03AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_TEAMUP_FRIEND_IS_WATCHING_OPEN;                        // 0x03B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03B9(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_TeamUp_Near_By_Friend;                           // 0x03BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUp_OneFriend_Watch_GameMode;                       // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUp_Corps_Scroll_End;                               // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_Teamuup_Friend_Profile;                          // 0x03D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_TEAMUP_FRIEND_WATCH_ID;                                // 0x03DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_InviteFriendProfile              BP_STRUCT_InviteFriendProfile;                            // 0x03E8(0x00C4) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_InviteFriendProfile>      BP_ARRAY_CarTeam_Friend;                                  // 0x04AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUp_Friend_Menu_Type;                               // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup_friend.bp_teamup_friend_C");
		return pStaticClass;
	}


	void EventSwitchCarTeam_NoFetch();
	void EventSwitchCarTeam();
	void EventSwitchFriend_NoFetch();
	void EventSwitchFriend();
	void EventTeamUpFriendCheckIsFinalFighting_NoFetch();
	void EventTeamUpFriendCheckIsFinalFighting();
	void EventClickOfflineShare_NoFetch();
	void EventClickOfflineShare();
	void EventFetchTeamupFriendInfo_NoFetch();
	void EventFetchTeamupFriendInfo();
	void EventClickHeadBtn_NoFetch();
	void EventClickHeadBtn();
	void EventClickAddFriendBtn_NoFetch();
	void EventClickAddFriendBtn();
	void EventSetEnterRoomWaitingFalse_NoFetch();
	void EventSetEnterRoomWaitingFalse();
	void EventCheckReservationState_NoFetch();
	void EventCheckReservationState();
	void EventClickJoinBtn_NoFetch();
	void EventClickJoinBtn();
	void EventTeamupFriendClickAddFriend_NoFetch();
	void EventTeamupFriendClickAddFriend();
	void EventClickInviteFriendBtn_NoFetch();
	void EventClickInviteFriendBtn();
	void EventClickStartChat_NoFetch();
	void EventClickStartChat();
	void EventTeamupFriendScrollChanged_NoFetch();
	void EventTeamupFriendScrollChanged();
	void EventTeamUpFriendClickRecruit_NoFetch();
	void EventTeamUpFriendClickRecruit();
	void EventClickPlatformInviteWXMiniApp_NoFetch();
	void EventClickPlatformInviteWXMiniApp();
	void EventTeamUpFriendClickNearBy_NoFetch();
	void EventTeamUpFriendClickNearBy();
	void EventSwitchRecent_NoFetch();
	void EventSwitchRecent();
	void EventClickPlatformInviteQRCode_NoFetch();
	void EventClickPlatformInviteQRCode();
	void EventTeamupFriendSwitchMenu_NoFetch();
	void EventTeamupFriendSwitchMenu();
	void EventCorpsFriendScrollChanged_NoFetch();
	void EventCorpsFriendScrollChanged();
	void EventClickReserveFriend_NoFetch();
	void EventClickReserveFriend();
	void EventBlockReserveTips_NoFetch();
	void EventBlockReserveTips();
	void EventTeamUpFriendWatch_NoFetch();
	void EventTeamUpFriendWatch();
	void EventCheckWatchingSwitch_NoFetch();
	void EventCheckWatchingSwitch();
	void EventTeamupFriendCheckIsFriend_NoFetch();
	void EventTeamupFriendCheckIsFriend();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventShowListCallBack_NoFetch();
	void EventShowListCallBack();
	void EventClickPlatformInvite_NoFetch();
	void EventClickPlatformInvite();
	void EventSwitchCorps_NoFetch();
	void EventSwitchCorps();
	void UserConstructionScript();
};


}

