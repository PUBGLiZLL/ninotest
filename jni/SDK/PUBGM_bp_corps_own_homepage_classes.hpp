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

// ScriptBlueprintGeneratedClass bp_corps_own_homepage.bp_corps_own_homepage_C
// 0x011C (0x03EC - 0x02D0)
class Abp_corps_own_homepage_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_CorpsBindCorpsGroupFlag;                               // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	int                                                BP_CorpsSelfRankByWeekHonor;                              // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsHomePageCorpsMoney;                               // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsHomePage_WarOpenFlag;                             // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CorpsHomepage_CorpsWarOpenTimeText;                    // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CorpsHomePage_CorpsMatchRedPoint;                      // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsInGroup;                                          // 0x02F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x02F2(0x0002) MISSED OFFSET
	struct FBP_STRUCT_HomePageCorpsInfo                BP_STRUCT_HomePageCorpsInfo;                              // 0x02F4(0x0020) (Edit, BlueprintVisible)
	bool                                               BP_CorpsJoinCorpsGroupFlag;                               // 0x0314(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0315(0x0003) MISSED OFFSET
	int                                                BP_CorpsMemberNum;                                        // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsHomePage_SkipGroup;                               // 0x031C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x031D(0x0003) MISSED OFFSET
	struct FString                                     BP_CorpsHomePageAnnouncement;                             // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CorpsHomePage_TrainRedPoint;                           // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsHomePage_CorpsWarSystemSwitch;                    // 0x032D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x032E(0x0002) MISSED OFFSET
	int                                                BP_CorpsSelfRankByWeekActive;                             // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_BASE_INFO                        BP_STRUCT_BASE_INFO;                                      // 0x0334(0x0040) (Edit, BlueprintVisible)
	bool                                               BP_CorpsHomepageShowAnimation;                            // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsHomePage_NeedRemindInvite;                        // 0x0375(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsHasGroup;                                         // 0x0376(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CorpsGroupShow;                                           // 0x0377(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsHomePageActiveHelpPos       BP_STRUCT_CorpsHomePageActiveHelpPos;                     // 0x0378(0x0008) (Edit, BlueprintVisible)
	bool                                               BP_CorpsIsCommander;                                      // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsHomePageIsWX;                                     // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsIsSecCommander;                                   // 0x0382(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x0383(0x0001) MISSED OFFSET
	struct FBP_STRUCT_SelfMemberInfo                   BP_STRUCT_SelfMemberInfo;                                 // 0x0384(0x0064) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_own_homepage.bp_corps_own_homepage_C");
		return pStaticClass;
	}


	void EventCorpsHomepageChangeLocation_NoFetch();
	void EventCorpsHomepageChangeLocation();
	void EventClickCorpsHelp_NoFetch();
	void EventClickCorpsHelp();
	void EventClickCorpsExercise_NoFetch();
	void EventClickCorpsExercise();
	void EventClickCorpsTrain_NoFetch();
	void EventClickCorpsTrain();
	void EventCorpsGroupQQCreate_NoFetch();
	void EventCorpsGroupQQCreate();
	void EventShowInviteUI_NoFetch();
	void EventShowInviteUI();
	void EventCorpsGroupWXRemind_NoFetch();
	void EventCorpsGroupWXRemind();
	void EventCorpsActiveHelp_NoFetch();
	void EventCorpsActiveHelp();
	void EventCorpsGroupWXCreate_NoFetch();
	void EventCorpsGroupWXCreate();
	void EventClickCorpsMatch_NoFetch();
	void EventClickCorpsMatch();
	void EventCorpsGroupQQDismiss_NoFetch();
	void EventCorpsGroupQQDismiss();
	void EventCorpsGroupQQJoin_NoFetch();
	void EventCorpsGroupQQJoin();
	void EventCorpsOwnHomePagePlatformInviteBtnClicked_NoFetch();
	void EventCorpsOwnHomePagePlatformInviteBtnClicked();
	void EventCorpsHomepageShowJoinGroupTips_NoFetch();
	void EventCorpsHomepageShowJoinGroupTips();
	void EventCorpsGroupQQRemind_NoFetch();
	void EventCorpsGroupQQRemind();
	void EventCorpsGroupWXJoin_NoFetch();
	void EventCorpsGroupWXJoin();
	void EventCorpsSelfTeamReport_NoFetch();
	void EventCorpsSelfTeamReport();
	void EventNoticeChange_Push_NoFetch();
	void EventNoticeChange_Push();
	void EventCorpsHomepageChangeIcon_NoFetch();
	void EventCorpsHomepageChangeIcon();
	void EventCorpsGroupWXDismiss_NoFetch();
	void EventCorpsGroupWXDismiss();
	void UserConstructionScript();
};


}

