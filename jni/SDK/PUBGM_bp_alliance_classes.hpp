#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:46 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_alliance.bp_alliance_C
// 0x04E4 (0x07B4 - 0x02D0)
class Abp_alliance_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_AllianceInfo>             BP_ARRAY_Alliance_Applyed_List;                           // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Alliance_Rules;                                        // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Alliance_Notice;                                       // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Alliance_SelectIconId;                                 // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Alliance_TeamName;                                     // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Alliance_Current_Selected_Tab;                         // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Alliance_Selected_Member_Id;                           // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_AllianceMemberProfile>    BP_ARRAY_Alliance_Member_Profile_List;                    // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_AllianceMemberProfile            BP_STRUCT_AllianceMemberProfile;                          // 0x0324(0x00F0) (Edit, BlueprintVisible)
	struct FString                                     BP_Alliance_SelfUID;                                      // 0x0414(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Alliance_FROMMAINPANEL;                                // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Invite_Alliance_Info             BP_STRUCT_Invite_Alliance_Info;                           // 0x0424(0x0078) (Edit, BlueprintVisible)
	int                                                BP_Alliance_FROMCREATEPANEL;                              // 0x049C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Alliance_SelfJoinGroup;                                // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	struct FString                                     BP_Alliance_Selected_Team_ID;                             // 0x04A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_AllianceInfo>             BP_ARRAY_Alliance_Info_List;                              // 0x04B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Selected_Team_Captain_Profile    BP_STRUCT_Selected_Team_Captain_Profile;                  // 0x04BC(0x00F0) (Edit, BlueprintVisible)
	bool                                               BP_Alliance_RecruitRedPointStatus;                        // 0x05AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05AD(0x0003) MISSED OFFSET
	struct FString                                     BP_Alliance_Applyed_Team_ID;                              // 0x05B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Alliance_IsOpenMainPanel;                              // 0x05BC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05BD(0x0003) MISSED OFFSET
	int                                                BP_Alliance_SelectIconFrom;                               // 0x05C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Selected_Member_Profile          BP_STRUCT_Selected_Member_Profile;                        // 0x05C4(0x00F0) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_AllianceMemberProfile>    BP_ARRAY_Alliance_SelectTeam_Friend_Profile_List;         // 0x06B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Selected_Alliance_Info           BP_STRUCT_Selected_Alliance_Info;                         // 0x06C0(0x0078) (Edit, BlueprintVisible)
	struct FBP_STRUCT_AllianceInfo                     BP_STRUCT_AllianceInfo;                                   // 0x0738(0x0078) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x07B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_alliance.bp_alliance_C");
		return pStaticClass;
	}


	void EventAllianceClickUnbindQQGroup_NoFetch();
	void EventAllianceClickUnbindQQGroup();
	void EventAllianceChangeTeamNotice_NoFetch();
	void EventAllianceChangeTeamNotice();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickAllianceCreateTeamBtn_NoFetch();
	void EventClickAllianceCreateTeamBtn();
	void EventClickShowSelectIconMainPanel_FromCreatePanel_NoFetch();
	void EventClickShowSelectIconMainPanel_FromCreatePanel();
	void EventClickAllianceRandomNameBtn_NoFetch();
	void EventClickAllianceRandomNameBtn();
	void EventAllianceClickRecommendTeam_NoFetch();
	void EventAllianceClickRecommendTeam();
	void EventAllianceFinishCreation_NoFetch();
	void EventAllianceFinishCreation();
	void EventAllianceChangeTeamName_NoFetch();
	void EventAllianceChangeTeamName();
	void EventAllianceChangeTeamIcon_NoFetch();
	void EventAllianceChangeTeamIcon();
	void EventAllianceClickChat_NoFetch();
	void EventAllianceClickChat();
	void EventAllianceCreateTeamFilterName_NoFetch();
	void EventAllianceCreateTeamFilterName();
	void EventAllianceClickRecruit_NoFetch();
	void EventAllianceClickRecruit();
	void EventAllianceClickExitTeam_NoFetch();
	void EventAllianceClickExitTeam();
	void EventAllianceClickRecruitApplyList_NoFetch();
	void EventAllianceClickRecruitApplyList();
	void EventAllianceClickBuildQQGroup_NoFetch();
	void EventAllianceClickBuildQQGroup();
	void EventAllianceClickKickout_NoFetch();
	void EventAllianceClickKickout();
	void EventAllianceClickAppointment_NoFetch();
	void EventAllianceClickAppointment();
	void EventAllianceQueryWxGroupTest_NoFetch();
	void EventAllianceQueryWxGroupTest();
	void EventAllianceClickJoinWxGroup_NoFetch();
	void EventAllianceClickJoinWxGroup();
	void EventAllianceClickUnbindWxGroup_NoFetch();
	void EventAllianceClickUnbindWxGroup();
	void EventAllianceClickOpenView_NoFetch();
	void EventAllianceClickOpenView();
	void EventAllianceClickJoinQQGroup_NoFetch();
	void EventAllianceClickJoinQQGroup();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventClickAllianceCloseMainPanel_NoFetch();
	void EventClickAllianceCloseMainPanel();
	void EventAllianceClickJoinTeam_NoFetch();
	void EventAllianceClickJoinTeam();
	void EventAllianceClickRules_NoFetch();
	void EventAllianceClickRules();
	void EventAllianceInviteClickAccepted_NoFetch();
	void EventAllianceInviteClickAccepted();
	void EventAllianceClickAddFriend_NoFetch();
	void EventAllianceClickAddFriend();
	void EventAllianceClickApplyedList_NoFetch();
	void EventAllianceClickApplyedList();
	void EventAllianceClickRecommendList_NoFetch();
	void EventAllianceClickRecommendList();
	void EventAllianceRecommendListReport_NoFetch();
	void EventAllianceRecommendListReport();
	void EventAllianceQueryWxGroupTest2_NoFetch();
	void EventAllianceQueryWxGroupTest2();
	void EventAllianceSelfTeamReport_NoFetch();
	void EventAllianceSelfTeamReport();
	void EventAllianceClickBuildWxGroup_NoFetch();
	void EventAllianceClickBuildWxGroup();
	void EventAllianceClickBuildWxGroupTest2_NoFetch();
	void EventAllianceClickBuildWxGroupTest2();
	void EventClickAllianceSelectIcon_NoFetch();
	void EventClickAllianceSelectIcon();
	void EventClickShowSelectIconMainPanel_FromMainPanel_NoFetch();
	void EventClickShowSelectIconMainPanel_FromMainPanel();
	void EventAllianceClickBuildWxGroupTest_NoFetch();
	void EventAllianceClickBuildWxGroupTest();
	void UserConstructionScript();
};


}

