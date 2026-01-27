#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:48 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_roleinfo.bp_roleinfo_C
// 0x0680 (0x0950 - 0x02D0)
class Abp_roleinfo_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_FPPCombatTotalInfo               BP_STRUCT_FPPCombatTotalInfo;                             // 0x02D4(0x0048) (Edit, BlueprintVisible)
	struct FString                                     BP_RoleInfoCard_play_date;                                // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleInfoCard_city2;                                    // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CombatModelType;                                       // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_FPPCombatGradeInfo               BP_STRUCT_FPPCombatGradeInfo;                             // 0x0338(0x0054) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CombatBattleInfo                 BP_STRUCT_CombatBattleInfo;                               // 0x038C(0x003C) (Edit, BlueprintVisible)
	struct FString                                     BP_CombatReview_Text;                                     // 0x03C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfo_CanBeMaster;                                  // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	int                                                BP_RolePlatform;                                          // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_RoleInfo_Corps_War_Open;                               // 0x03DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03DD(0x0003) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardTagList;                             // 0x03E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfoIsEditCard;                                    // 0x03EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ShowAddFriend;                                         // 0x03ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x03EE(0x0002) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListExpertArea;              // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleName;                                              // 0x03FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfo_SeasonIsOpen;                                 // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	struct FString                                     BP_RoleInfoCard_play_time;                                // 0x040C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FPPPersonalTotalRankInfo         BP_STRUCT_FPPPersonalTotalRankInfo;                       // 0x0418(0x000C) (Edit, BlueprintVisible)
	struct FString                                     BP_RoleID;                                                // 0x0424(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_OpenCorpsCanJoin;                                      // 0x0430(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0431(0x0003) MISSED OFFSET
	struct FBP_STRUCT_CombatSurviveInfo                BP_STRUCT_CombatSurviveInfo;                              // 0x0434(0x0060) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CombatGradeInfo                  BP_STRUCT_CombatGradeInfo;                                // 0x0494(0x0054) (Edit, BlueprintVisible)
	int                                                BP_ShareNum;                                              // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_RoleInfoSeasonIDList;                            // 0x04EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RoleInfo_SeasonID;                                     // 0x04F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_PersonalTotalScoreInfo           BP_STRUCT_PersonalTotalScoreInfo;                         // 0x04FC(0x000C) (Edit, BlueprintVisible)
	int                                                BP_RoleInfo_CombatModelTypeMax;                           // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CombatTotalInfo>          BP_ARRAY_CombatTotalInfoList;                             // 0x050C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FPPCombatTotalInfo>       BP_ARRAY_FPPCombatTotalInfoList;                          // 0x0518(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleInfoCard_city1;                                    // 0x0524(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfo_LbsTitleOpen;                                 // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	struct FBP_STRUCT_IntimateInfo                     BP_STRUCT_IntimateInfo;                                   // 0x0534(0x0004) (Edit, BlueprintVisible)
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListCity2;                   // 0x0538(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleInfoCard_expert_area;                              // 0x0544(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FPPCombatSurviveInfo>     BP_ARRAY_FPPCombatSurviveInfoList;                        // 0x0550(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Sign;                                                  // 0x055C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsShareAwardGold;                                      // 0x0568(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsMaxLevel;                                            // 0x0569(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x056A(0x0002) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_RoleInfoSeasonNameList;                          // 0x056C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CombatUrl;                                             // 0x0578(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleInfoCard_tendency;                                 // 0x0584(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoleInfoCard_expert_area1;                             // 0x0590(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_PersonalBasicInfo                BP_STRUCT_PersonalBasicInfo;                              // 0x059C(0x00F8) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CombatGradeInfo>          BP_ARRAY_CombatGradeInfoList;                             // 0x0694(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CorpsShowOpenAnimation;                                // 0x06A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x06A1(0x0003) MISSED OFFSET
	struct FString                                     BP_SignHintText;                                          // 0x06A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CombatSurviveInfo>        BP_ARRAY_CombatSurviveInfoList;                           // 0x06B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_IntimateInfo>             BP_ARRAY_IntimateInfoList;                                // 0x06BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfo_HistoryRedpoint;                              // 0x06C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x06C9(0x0003) MISSED OFFSET
	struct FBP_STRUCT_PersonalTotalRankInfo            BP_STRUCT_PersonalTotalRankInfo;                          // 0x06CC(0x000C) (Edit, BlueprintVisible)
	int                                                BP_RoleInfo_BaseShootTypeID;                              // 0x06D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CombatBattleInfo>         BP_ARRAY_CombatBattleInfoList;                            // 0x06DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoleInfoShootTypeNameList;                       // 0x06E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FPPCombatSurviveInfo             BP_STRUCT_FPPCombatSurviveInfo;                           // 0x06F4(0x0060) (Edit, BlueprintVisible)
	int                                                BP_RoleInfoSeason_ListID;                                 // 0x0754(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_FPPPersonalTotalScoreInfo        BP_STRUCT_FPPPersonalTotalScoreInfo;                      // 0x0758(0x000C) (Edit, BlueprintVisible)
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListTendency;                // 0x0764(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CombatScoreInfo>          BP_ARRAY_CombatScoreInfoList;                             // 0x0770(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FPPCombatBattleInfo              BP_STRUCT_FPPCombatBattleInfo;                            // 0x077C(0x003C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CombatScoreInfo                  BP_STRUCT_CombatScoreInfo;                                // 0x07B8(0x0024) (Edit, BlueprintVisible)
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListDate;                    // 0x07DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SelfCorpsID;                                           // 0x07E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfo_SocialCardRedpoint;                           // 0x07F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x07F5(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_FPPCombatScoreInfo>       BP_ARRAY_FPPCombatScoreInfoList;                          // 0x07F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_FPPCombatBattleInfo>      BP_ARRAY_FPPCombatBattleInfoList;                         // 0x0804(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListCity1;                   // 0x0810(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfo_CanBeDisciple;                                // 0x081C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x081D(0x0003) MISSED OFFSET
	int                                                BP_RoleInfo_CombatShootTypeID;                            // 0x0820(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FPPCombatGradeInfo>       BP_ARRAY_FPPCombatGradeInfoList;                          // 0x0824(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FPPCombatScoreInfo               BP_STRUCT_FPPCombatScoreInfo;                             // 0x0830(0x0024) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsSummary                     BP_STRUCT_CorpsSummary;                                   // 0x0854(0x0070) (Edit, BlueprintVisible)
	struct FString                                     BP_RoleInfo_MaxSetgemtTips;                               // 0x08C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SelfID;                                                // 0x08D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SignNullText;                                          // 0x08DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoleInfoCardEditInfoListTime;                    // 0x08E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CombatTotalInfo                  BP_STRUCT_CombatTotalInfo;                                // 0x08F4(0x0048) (Edit, BlueprintVisible)
	struct FString                                     BP_CorpsHistoryUrl;                                       // 0x093C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RoleInfo_ShootTypeMax;                                 // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x094C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo.bp_roleinfo_C");
		return pStaticClass;
	}


	void EventRoleInfoBaseInfoShootType_NoFetch();
	void EventRoleInfoBaseInfoShootType();
	void EventSetInfoForOpenCorpsWnd_NoFetch();
	void EventSetInfoForOpenCorpsWnd();
	void EventRoleInfoOpenCorpsWnd_NoFetch();
	void EventRoleInfoOpenCorpsWnd();
	void EventRoleInfoSetShootType_NoFetch();
	void EventRoleInfoSetShootType();
	void EventRoleInfoClickCancelCard_NoFetch();
	void EventRoleInfoClickCancelCard();
	void EventCopyID_NoFetch();
	void EventCopyID();
	void EventAddFriend_NoFetch();
	void EventAddFriend();
	void EventRoleInfoAvatarClicked_NoFetch();
	void EventRoleInfoAvatarClicked();
	void EventRoleInfoCardSelectExpertArea_NoFetch();
	void EventRoleInfoCardSelectExpertArea();
	void EventRoleInfoClickEditCardTag_NoFetch();
	void EventRoleInfoClickEditCardTag();
	void EventRoleInfoClickEditCard_NoFetch();
	void EventRoleInfoClickEditCard();
	void EventCheckCardTab_NoFetch();
	void EventCheckCardTab();
	void EventRoleInfoCardSelectCity2_NoFetch();
	void EventRoleInfoCardSelectCity2();
	void EventRoleInfoCardSelectDate_NoFetch();
	void EventRoleInfoCardSelectDate();
	void EventRoleInfoClickSaveCard_NoFetch();
	void EventRoleInfoClickSaveCard();
	void EventCopyName_NoFetch();
	void EventCopyName();
	void EventRoleInfoClickHonorWall_NoFetch();
	void EventRoleInfoClickHonorWall();
	void EventRoleInfoClickHistory_NoFetch();
	void EventRoleInfoClickHistory();
	void EventRoleInfoClickApplyToMaster_NoFetch();
	void EventRoleInfoClickApplyToMaster();
	void EventRoleInfoClickApplyToDisciple_NoFetch();
	void EventRoleInfoClickApplyToDisciple();
	void EventRoleInfoClickComplaint_NoFetch();
	void EventRoleInfoClickComplaint();
	void EventRoleInfoClickAvatar_NoFetch();
	void EventRoleInfoClickAvatar();
	void EventRoleInfoSelectSeason_NoFetch();
	void EventRoleInfoSelectSeason();
	void EventRoleInfoCombatInfoShootType_NoFetch();
	void EventRoleInfoCombatInfoShootType();
	void EventCorpsOverRoleInfo_NoFetch();
	void EventCorpsOverRoleInfo();
	void EventRoleInfoSendInviteCorps_NoFetch();
	void EventRoleInfoSendInviteCorps();
	void EventRoleInfoRelease_NoFetch();
	void EventRoleInfoRelease();
	void EventRoleInfoCardSelectTime_NoFetch();
	void EventRoleInfoCardSelectTime();
	void EventRankDetailBtnClicked_NoFetch();
	void EventRankDetailBtnClicked();
	void EventShareCombatBtnClicked_NoFetch();
	void EventShareCombatBtnClicked();
	void EventRoleInfoCardSelectTendency_NoFetch();
	void EventRoleInfoCardSelectTendency();
	void EventRoleInfoCardSelectCity1_NoFetch();
	void EventRoleInfoCardSelectCity1();
	void EventSetCombatModelType_NoFetch();
	void EventSetCombatModelType();
	void EventRoleInfoCardWarZoneTitleClick_NoFetch();
	void EventRoleInfoCardWarZoneTitleClick();
	void EventCheckIntimateTab_NoFetch();
	void EventCheckIntimateTab();
	void UserConstructionScript();
};


}

