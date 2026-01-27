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

// ScriptBlueprintGeneratedClass bp_corps_member.bp_corps_member_C
// 0x0118 (0x03E8 - 0x02D0)
class Abp_corps_member_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_CorpsTeamMemberIsShow;                                 // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	struct FString                                     BP_CorpsMember_InviteFriendName;                          // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsMember_FriendNum;                                 // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsMember_Scroll_Start;                              // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CORPSMEMBER_FRIEND_IS_WATCHING_OPEN;                   // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	struct FString                                     BP_CORPSMEMBER_FRIEND_WATCH_ID;                           // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MyPlyerCountCorpsMember;                               // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsMemberFriendProfile> BP_ARRAY_CorpsMember_Friend;                              // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsMemberFriendProfile         BP_STRUCT_CorpsMemberFriendProfile;                       // 0x030C(0x00C4) (Edit, BlueprintVisible)
	bool                                               BP_CorpsMember_TargetHeadIsFriend;                        // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	struct FString                                     BP_CorpsMember_InviteFriendID;                            // 0x03D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsMember_Scroll_End;                                // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_member.bp_corps_member_C");
		return pStaticClass;
	}


	void EventCorpsMemberClickStartChat_NoFetch();
	void EventCorpsMemberClickStartChat();
	void EventCorpsMemberRefresh_NoFetch();
	void EventCorpsMemberRefresh();
	void EventCorpsMemberCheckIsFriend_NoFetch();
	void EventCorpsMemberCheckIsFriend();
	void EventCorpsMemberFriendWatch_NoFetch();
	void EventCorpsMemberFriendWatch();
	void EventCorpsMemberClickJoinBtn_NoFetch();
	void EventCorpsMemberClickJoinBtn();
	void EventCorpsTeamMemberScrollChanged_NoFetch();
	void EventCorpsTeamMemberScrollChanged();
	void EventCorpsMemberClickInviteFriendBtn_NoFetch();
	void EventCorpsMemberClickInviteFriendBtn();
	void EventShowCorpsMemberCallBack_NoFetch();
	void EventShowCorpsMemberCallBack();
	void EventCorpsMemberClickHeadBtn_NoFetch();
	void EventCorpsMemberClickHeadBtn();
	void EventCorpsMemberClickAddFriend_NoFetch();
	void EventCorpsMemberClickAddFriend();
	void EventCorpsMemberCheckWatchingSwitch_NoFetch();
	void EventCorpsMemberCheckWatchingSwitch();
	void EventCorpsMemberShowList_NoFetch();
	void EventCorpsMemberShowList();
	void UserConstructionScript();
};


}

