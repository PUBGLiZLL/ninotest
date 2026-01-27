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

// ScriptBlueprintGeneratedClass bp_alliance_recruit.bp_alliance_recruit_C
// 0x0144 (0x0414 - 0x02D0)
class Abp_alliance_recruit_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_AllianceRecruit>          BP_ARRAY_Alliance_ApplyList;                              // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Alliance_UpdateInnerIndex;                             // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_AllianceRecruitProfile>   BP_ARRAY_AllianceRecruit_Lite_Profile;                    // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_AllianceRecruitProfile           BP_STRUCT_AllianceRecruitProfile;                         // 0x02F0(0x000C) (Edit, BlueprintVisible)
	bool                                               BP_AllianceRecruit_IsShow;                                // 0x02FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_AllianceRecruitReadPoint;                              // 0x02FD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02FE(0x0002) MISSED OFFSET
	int                                                BP_Alliance_Recruit_Scroll_Start;                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_AllianceRecruitLeader;                                 // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	int                                                BP_Alliance_TargetType;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_AllianceRecruit>          BP_ARRAY_AllianceRecruit_Detail_Profile;                  // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_AllianceFriendNumStr;                                  // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_AllianceRecruit_InviterGid;                            // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Alliance_InvitedRemainNum;                             // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Alliance_Recruit_Scroll_End;                           // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_AllianceRecruit                  BP_STRUCT_AllianceRecruit;                                // 0x0338(0x00C8) (Edit, BlueprintVisible)
	struct FString                                     BP_AllianceApply_Gid;                                     // 0x0400(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_AllianceRecruit_CurType;                               // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0410(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_alliance_recruit.bp_alliance_recruit_C");
		return pStaticClass;
	}


	void EventAllianceRecruitArmyBtnClicked_NoFetch();
	void EventAllianceRecruitArmyBtnClicked();
	void EventAllianceRecruitScrollChanged_NoFetch();
	void EventAllianceRecruitScrollChanged();
	void EventAllianceRecruitRecentBtnClicked_NoFetch();
	void EventAllianceRecruitRecentBtnClicked();
	void EventClickRecruit_NoFetch();
	void EventClickRecruit();
	void EventHideUI_NoFetch();
	void EventHideUI();
	void EventClickHeadRecruit_NoFetch();
	void EventClickHeadRecruit();
	void EventAllianceRecruitPlatformInviteBtnClicked_NoFetch();
	void EventAllianceRecruitPlatformInviteBtnClicked();
	void EventAllianceRecruitFetchInfo_NoFetch();
	void EventAllianceRecruitFetchInfo();
	void EventClickApplyAgree_NoFetch();
	void EventClickApplyAgree();
	void EventAllianceRecruitFriendBtnClicked_NoFetch();
	void EventAllianceRecruitFriendBtnClicked();
	void EventClickHeadApply_NoFetch();
	void EventClickHeadApply();
	void EventClickApplyRefuse_NoFetch();
	void EventClickApplyRefuse();
	void EventAllianceRecruit_Push_NoFetch();
	void EventAllianceRecruit_Push();
	void EventAllianceRecruitNearbyBtnClicked_NoFetch();
	void EventAllianceRecruitNearbyBtnClicked();
	void EventShowApplyList_NoFetch();
	void EventShowApplyList();
	void UserConstructionScript();
};


}

