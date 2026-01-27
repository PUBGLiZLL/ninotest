#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:42 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C
// 0x0268 (0x0538 - 0x02D0)
class Abp_lobby_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Lobby_PlayerMaxRankLevel;                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CurrentRedPointStatus;                                 // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	TArray<bool>                                       BP_ARRAY_SecondEntranceRedPointState;                     // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ActivityBtnDisplay               BP_STRUCT_ActivityBtnDisplay;                             // 0x02E8(0x003C) (Edit, BlueprintVisible)
	bool                                               EmulatorCheck_FirstinLobby;                               // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	struct FString                                     BP_SystemTargetCameraSysName;                             // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_LevelChange;                                           // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_SeasonPass_IsRedPoint;                           // 0x0335(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0336(0x0002) MISSED OFFSET
	int                                                BP_LobbyTargetCameraIndex;                                // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TeamUpRingsChange                BP_STRUCT_TeamUpRingsChange;                              // 0x033C(0x0010) (Edit, BlueprintVisible)
	bool                                               DataMgrInit;                                              // 0x034C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	int                                                BP_PlayerExp;                                             // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SystemTargetCameraIndex;                               // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LOBBY_SPAWNPOS;                                        // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurrentMenuId;                                         // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_FriendApplyMessageCount;                               // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerName;                                            // 0x0364(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SystemTargetCameraBlendTime;                           // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_LOBBY_GoldExp_BuffInfo>   BP_ARRAY_Lobby_GoldBuffInfo;                              // 0x0374(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_LOBBY_AnySecondRedPoint;                               // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Exciting_Party_Open;                                   // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	int                                                BP_PlayerGold;                                            // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LOBBY_GameJoyRecordOn;                                 // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0389(0x0003) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_LobbyAvatarHiddenSlotList;                       // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_LobbyAvatarHiddenGid;                                  // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_LobbyAvatarHiddenMapItem> BP_ARRAY_LobbyAvatarSlotHiddenMap;                        // 0x03A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_COLLECT_EQUIPMENT_Open;                                // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_UpdateNoticeInGame_IsRedPoint;                   // 0x03B1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x03B2(0x0002) MISSED OFFSET
	struct FBP_STRUCT_ShopLimit                        BP_STRUCT_ShopLimit;                                      // 0x03B4(0x0018) (Edit, BlueprintVisible)
	bool                                               BP_Lobby_MenuOpen;                                        // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_Has_Exp_Rate;                                    // 0x03CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x03CE(0x0002) MISSED OFFSET
	int                                                BP_PlayerPassLevel;                                       // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LobbyTargetCameraBlendTime;                            // 0x03D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_TransformUseList                 BP_STRUCT_TransformUseList;                               // 0x03D8(0x0008) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ActivityBtnDisplay>       BP_ARRAY_LobbyActivityBtnDisplayList;                     // 0x03E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_Lobby_ActivityNotOpenList;                       // 0x03EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Lobby_RankChange;                                      // 0x03F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x03F9(0x0003) MISSED OFFSET
	int                                                BP_Lobby_Gold_Rate;                                       // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LobbySwitchCameraPosOffsetExtend;                      // 0x0400(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurrentMaxExp;                                         // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SpawnPlayerData>          BP_ARRAY_LobbyPlayerDataList;                             // 0x0410(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Lobby_Role_Avatar_Frame;                               // 0x041C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Free_Data_Open;                                        // 0x0420(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0421(0x0003) MISSED OFFSET
	int                                                BP_LobbyNetworkDelay;                                     // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_PlayerUid;                                             // 0x0428(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_LobbyNetworkStatus;                                    // 0x0434(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0435(0x0003) MISSED OFFSET
	struct FString                                     BP_LobbySwitchCameraRotOffset;                            // 0x0438(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Lobby_WeaponStatusChange_WeaponResId;                  // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_LOBBY_GoldExp_BuffInfo           BP_STRUCT_LOBBY_GoldExp_BuffInfo;                         // 0x0448(0x0018) (Edit, BlueprintVisible)
	float                                              BP_LobbyCorpsMatchTime_f;                                 // 0x0460(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_Has_Gold_Rate;                                   // 0x0464(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0465(0x0003) MISSED OFFSET
	int                                                BP_Lobby_Exp_Rate;                                        // 0x0468(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SpawnPlayerData                  BP_STRUCT_SpawnPlayerData;                                // 0x046C(0x002C) (Edit, BlueprintVisible)
	struct FString                                     BP_Lobby_ShowEmoteAction_UID;                             // 0x0498(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Lobby_ShowEmoteAction_EmoteResId;                      // 0x04A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_LOBBY_GoldExp_BuffInfo>   BP_ARRAY_Lobby_ExpBuffInfo;                               // 0x04A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_XinyueRedPointSvrOpen;                                 // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	struct FString                                     BP_PlayerIconUrl;                                         // 0x04B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_PlayerGender;                                          // 0x04C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               LobbyModeSwitched;                                        // 0x04C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x04C9(0x0003) MISSED OFFSET
	int                                                BP_LOBBY_CurSeasonId;                                     // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LobbySwitchCameraPosOffset;                            // 0x04D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_LobbyAvatarHiddenMapItem         BP_STRUCT_LobbyAvatarHiddenMapItem;                       // 0x04DC(0x0010) (Edit, BlueprintVisible)
	struct FString                                     BP_Lobby_WeaponStatusChange_UID;                          // 0x04EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_LOBBY_SeasonRedPointStatus;                            // 0x04F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x04F9(0x0003) MISSED OFFSET
	struct FString                                     BP_LOBBY_RankEffectUID;                                   // 0x04FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_LobbyPlayerNum;                                        // 0x0508(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_LobbySwitchCameraForceSwitch;                          // 0x050C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_UpdateNoticeInGame_IsTagGuideShow;               // 0x050D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_OpenShoporWardrobe;                              // 0x050E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData15[0x1];                                       // 0x050F(0x0001) MISSED OFFSET
	int                                                BP_PlayerQQVip;                                           // 0x0510(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_AvatarChange                     BP_STRUCT_AvatarChange;                                   // 0x0514(0x0010) (Edit, BlueprintVisible)
	int                                                BP_LOBBY_SecondEntranceRedPointPos;                       // 0x0524(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_CanOpenUrl;                                      // 0x0528(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData16[0x3];                                       // 0x0529(0x0003) MISSED OFFSET
	int                                                BP_PlayerLevel;                                           // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Lobby_SecurityCenter_IsRedPoint;                       // 0x0530(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x3];                                       // 0x0531(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0534(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_lobby.bp_lobby_C");
		return pStaticClass;
	}


	void EventClickQQAround_NoFetch();
	void EventClickQQAround();
	void EventLobbyLeaveFriend_NoFetch();
	void EventLobbyLeaveFriend();
	void EventOpenActivityGroupUI_NoFetch();
	void EventOpenActivityGroupUI();
	void EventEnterTeamUp_NoFetch();
	void EventEnterTeamUp();
	void EventTestScrollMsg_NoFetch();
	void EventTestScrollMsg();
	void EventLobbyExpressionShow_NoFetch();
	void EventLobbyExpressionShow();
	void EventLobbyEnterAlliance_NoFetch();
	void EventLobbyEnterAlliance();
	void EventLobbyTestUnEquipWeapon_NoFetch();
	void EventLobbyTestUnEquipWeapon();
	void EventEnterWarzone_NoFetch();
	void EventEnterWarzone();
	void EventOpenChatUI_NoFetch();
	void EventOpenChatUI();
	void EventEnterConfig_NoFetch();
	void EventEnterConfig();
	void EventCanOpenUrl_NoFetch();
	void EventCanOpenUrl();
	void EventEnterRoom_NoFetch();
	void EventEnterRoom();
	void EventLeaveWardrobe_NoFetch();
	void EventLeaveWardrobe();
	void EventLobbyLeaveRankList_NoFetch();
	void EventLobbyLeaveRankList();
	void EventLobbyLeaveTask_NoFetch();
	void EventLobbyLeaveTask();
	void EventLobbyExpressionHide_NoFetch();
	void EventLobbyExpressionHide();
	void EventEnterMarket_NoFetch();
	void EventEnterMarket();
	void EventLobbyLeaveSeason_NoFetch();
	void EventLobbyLeaveSeason();
	void EventClickDailyShareBtn_NoFetch();
	void EventClickDailyShareBtn();
	void EventInitActivityListComplete_NoFetch();
	void EventInitActivityListComplete();
	void EventLobbyLeaveUpdateNoticeInGame_NoFetch();
	void EventLobbyLeaveUpdateNoticeInGame();
	void EventGetFriendProfile_NoFetch();
	void EventGetFriendProfile();
	void EventOpenPassUI_NoFetch();
	void EventOpenPassUI();
	void EventLobbyLeaveSetting_NoFetch();
	void EventLobbyLeaveSetting();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventHideScrollMsg_NoFetch();
	void EventHideScrollMsg();
	void EventTestSpawnPlayer3_NoFetch();
	void EventTestSpawnPlayer3();
	void EventLobbyLeaveItemGet_NoFetch();
	void EventLobbyLeaveItemGet();
	void EventTestSpawnPlayer_NoFetch();
	void EventTestSpawnPlayer();
	void EventTestRemovePlayer_NoFetch();
	void EventTestRemovePlayer();
	void EventTestRemovePlayer3_NoFetch();
	void EventTestRemovePlayer3();
	void EventLobbyTestShowEmote_NoFetch();
	void EventLobbyTestShowEmote();
	void EventTestRedpoint_NoFetch();
	void EventTestRedpoint();
	void EventLobbyOpenArmory_NoFetch();
	void EventLobbyOpenArmory();
	void EventEnterMailGift_NoFetch();
	void EventEnterMailGift();
	void EventClickWXAround_NoFetch();
	void EventClickWXAround();
	void EventOnClickYearActivity_NoFetch();
	void EventOnClickYearActivity();
	void EventOpenShopLimitUI_NoFetch();
	void EventOpenShopLimitUI();
	void EventOpenGMMenu_NoFetch();
	void EventOpenGMMenu();
	void EventLeaveWeekSignUp_NoFetch();
	void EventLeaveWeekSignUp();
	void EventLobbyLeaveSeasonChallengeTask_NoFetch();
	void EventLobbyLeaveSeasonChallengeTask();
	void EventLobbyLeaveWarzoneRank_NoFetch();
	void EventLobbyLeaveWarzoneRank();
	void EventTestSpawnPlayer2_NoFetch();
	void EventTestSpawnPlayer2();
	void EventEnterMail_NoFetch();
	void EventEnterMail();
	void EventOpenWorldView_NoFetch();
	void EventOpenWorldView();
	void EventEnterFriendList_NoFetch();
	void EventEnterFriendList();
	void EventInvitePlatformFriend_NoFetch();
	void EventInvitePlatformFriend();
	void EventEnterRank_NoFetch();
	void EventEnterRank();
	void EventLobbyHideShop_NoFetch();
	void EventLobbyHideShop();
	void EventOnClickCorps_NoFetch();
	void EventOnClickCorps();
	void EventAvatarChange_NoFetch();
	void EventAvatarChange();
	void EventOpenWatchingPanel_NoFetch();
	void EventOpenWatchingPanel();
	void EventEnterShop_NoFetch();
	void EventEnterShop();
	void EventGetCollectEquipOpenState_NoFetch();
	void EventGetCollectEquipOpenState();
	void EventOpenGetExcitingPartyUI_NoFetch();
	void EventOpenGetExcitingPartyUI();
	void EventOpenMissionUI_NoFetch();
	void EventOpenMissionUI();
	void EventClickDesertCircleRun_NoFetch();
	void EventClickDesertCircleRun();
	void EventGetExcitingPartyOpenState_NoFetch();
	void EventGetExcitingPartyOpenState();
	void EventOpenXinyue_NoFetch();
	void EventOpenXinyue();
	void EventOpenESportTV_NoFetch();
	void EventOpenESportTV();
	void EventOpenContestUrl_NoFetch();
	void EventOpenContestUrl();
	void EventOpenUpdateNoticeInGame_NoFetch();
	void EventOpenUpdateNoticeInGame();
	void EventOpenGuardPopupPanel_NoFetch();
	void EventOpenGuardPopupPanel();
	void EventClearPlatformTagGuide_NoFetch();
	void EventClearPlatformTagGuide();
	void EventOpenFreeDataUrl_NoFetch();
	void EventOpenFreeDataUrl();
	void EventEnterFirstRecharge_NoFetch();
	void EventEnterFirstRecharge();
	void EventLobbyLeaveWorldView_NoFetch();
	void EventLobbyLeaveWorldView();
	void EventClickRoom_Push_NoFetch();
	void EventClickRoom_Push();
	void EventClickTraining_Push_NoFetch();
	void EventClickTraining_Push();
	void EventClickTeach_Push_NoFetch();
	void EventClickTeach_Push();
	void EventOpenQQVip_NoFetch();
	void EventOpenQQVip();
	void EventOpenCommunityInLobby_NoFetch();
	void EventOpenCommunityInLobby();
	void EventLobbyLeaveCorps_NoFetch();
	void EventLobbyLeaveCorps();
	void EventOpenHuati_NoFetch();
	void EventOpenHuati();
	void EventSwitchLobbyCameraByIndex_NoFetch();
	void EventSwitchLobbyCameraByIndex();
	void EventLobbyShowDoubleCard_NoFetch();
	void EventLobbyShowDoubleCard();
	void EventEnterRoleInfo_NoFetch();
	void EventEnterRoleInfo();
	void EventEnterWardrobe_NoFetch();
	void EventEnterWardrobe();
	void EventOpenQQlibao_NoFetch();
	void EventOpenQQlibao();
	void EventTestLevelUp_NoFetch();
	void EventTestLevelUp();
	void EventOpenCollectEquipment_NoFetch();
	void EventOpenCollectEquipment();
	void EventclickDecompose_NoFetch();
	void EventclickDecompose();
	void EventLobbyUpdateDoubleCardButton_NoFetch();
	void EventLobbyUpdateDoubleCardButton();
	void EventEnterCorpsTotalRank_NoFetch();
	void EventEnterCorpsTotalRank();
	void EventLobbyEnterSecurityFeedback_NoFetch();
	void EventLobbyEnterSecurityFeedback();
	void EventOpenActivityPanel_NoFetch();
	void EventOpenActivityPanel();
	void EventEnterLobbyNewRank_NoFetch();
	void EventEnterLobbyNewRank();
	void EventEnterSeason_NoFetch();
	void EventEnterSeason();
	void EventTeamUpRings_NoFetch();
	void EventTeamUpRings();
	void EventLobbySecondEntranceRedPointClick_NoFetch();
	void EventLobbySecondEntranceRedPointClick();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventEnterSigninSystem_NoFetch();
	void EventEnterSigninSystem();
	void EventLobbyLeaveRoleInfo_NoFetch();
	void EventLobbyLeaveRoleInfo();
	void EventLobbyExpressionLeave_NoFetch();
	void EventLobbyExpressionLeave();
	void EventSwitchSystemCameraByIndex_NoFetch();
	void EventSwitchSystemCameraByIndex();
	void EventOpenGuidePanel_NoFetch();
	void EventOpenGuidePanel();
	void EventLobbyUIActivtiyYearMonster_NoFetch();
	void EventLobbyUIActivtiyYearMonster();
	void EventRerollAllScrollMsg_NoFetch();
	void EventRerollAllScrollMsg();
	void EventLobbyLeaveSeasonPass_NoFetch();
	void EventLobbyLeaveSeasonPass();
	void EventLobbyLeaveMail_NoFetch();
	void EventLobbyLeaveMail();
	void EventTestRemovePlayer2_NoFetch();
	void EventTestRemovePlayer2();
	void EventGetShopLimitTitle_NoFetch();
	void EventGetShopLimitTitle();
	void EventLobbyLeaveChatWnd_NoFetch();
	void EventLobbyLeaveChatWnd();
	void EventOpenTP_NoFetch();
	void EventOpenTP();
	void EventReportOpenedMomentSetting_NoFetch();
	void EventReportOpenedMomentSetting();
	void EventLobbyLeaveGuidePanel_NoFetch();
	void EventLobbyLeaveGuidePanel();
	void EventLobbyTestEquipWeapon_NoFetch();
	void EventLobbyTestEquipWeapon();
	void UserConstructionScript();
};


}

