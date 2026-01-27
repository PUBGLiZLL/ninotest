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

// ScriptBlueprintGeneratedClass bp_teamup_invite.bp_teamup_invite_C
// 0x0124 (0x03F4 - 0x02D0)
class Abp_teamup_invite_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     TEAMUP_INVITE_TIP;                                        // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TEAMUP_APPLY_TIMEOUT_TIP;                                 // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TEAMUP_APPLY_TIP;                                         // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TopTipProfileInfo                BP_STRUCT_TopTipProfileInfo;                              // 0x02F8(0x0068) (Edit, BlueprintVisible)
	struct FBP_STRUCT_TopTipRefuseInfo                 BP_STRUCT_TopTipRefuseInfo;                               // 0x0360(0x000C) (Edit, BlueprintVisible)
	struct FString                                     BP_TopTip_ClickHeadID;                                    // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_TeamUpRecruitFlagTwo;                                  // 0x0378(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamUp_Applyer_Name;                                      // 0x0384(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TEAMUP_INVITE_TIMEOUT_TIP;                                // 0x0390(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_TeamUpRecruitFlagOne;                                  // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                TeamUp_Invite_Apply_Type;                                 // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUpRecruitDistance;                                 // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_TeamUpRecruitFirstTime;                                // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	struct FString                                     BP_TeamUpInviterSource;                                   // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               TeamUp_Auto_Refuse;                                       // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	int                                                TeamUp_Invite_GameType;                                   // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TeamUp_Count_Down;                                        // 0x03C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_TopTipRefuseInfo>         BP_ARRAY_TopTipRefuseInfos;                               // 0x03CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     TeamUp_Inviter_Name;                                      // 0x03D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_TopTipApplyMessage;                                    // 0x03E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup_invite.bp_teamup_invite_C");
		return pStaticClass;
	}


	void EventTeamupHide_NoFetch();
	void EventTeamupHide();
	void EventTeamUpClickHead_NoFetch();
	void EventTeamUpClickHead();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventTeamUpInviteApplyRefuse_NoFetch();
	void EventTeamUpInviteApplyRefuse();
	void EventTeamUpInviteApplyAutoRefuse_NoFetch();
	void EventTeamUpInviteApplyAutoRefuse();
	void EventTeamUpSelectRefuseInfo_NoFetch();
	void EventTeamUpSelectRefuseInfo();
	void EventTeamUpInviteApplyPermit_NoFetch();
	void EventTeamUpInviteApplyPermit();
	void EventInvitePermitFromWatchingBackToLobby_NoFetch();
	void EventInvitePermitFromWatchingBackToLobby();
	void UserConstructionScript();
};


}

