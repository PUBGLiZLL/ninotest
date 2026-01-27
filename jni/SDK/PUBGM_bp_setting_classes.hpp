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

// ScriptBlueprintGeneratedClass bp_setting.bp_setting_C
// 0x00B8 (0x0388 - 0x02D0)
class Abp_setting_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SettingIndexPickup;                                    // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_UrlStr1;                                               // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingIndexQuickMessage;                              // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginChannel;                                          // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexVehicle;                                   // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurSettingPage;                                        // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexSound;                                     // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingIsDingYueNewAct;                                // 0x02F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingShowWarzoneRank;                                // 0x02F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingIsDingYue;                                      // 0x02FA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02FB(0x0001) MISSED OFFSET
	int                                                BP_SettingIndexVideo;                                     // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingBattleWatchingInviteOpen;                       // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowEscapeNotice;                            // 0x0301(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0302(0x0002) MISSED OFFSET
	int                                                BP_SettingIndexSensibility;                               // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexOperate;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_DiyLimitLevel;                                         // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingShowCorpsWarzoneRank;                           // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	struct FString                                     BP_UrlStr2;                                               // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CanShowVideoSetting;                                   // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexSubsciption;                               // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsInLobby;                                             // 0x0328(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0329(0x0003) MISSED OFFSET
	int                                                BP_SettingCurrentOpenPage;                                // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingBattleWatchingInviteSetting;                    // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexBasic;                                     // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexPicture;                                   // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_UrlStr4;                                               // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingShowWatchingFlag;                               // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingFresherType;                                    // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_UrlStr3;                                               // 0x0350(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SettingSelectedPage;                                   // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanShowHistory;                                 // 0x0360(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0361(0x0003) MISSED OFFSET
	int                                                BP_SettingIndexOBSystem;                                  // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexPrivacy;                                   // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingIsWatchingOpen;                                 // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	int                                                BP_SettingPlayerLevel;                                    // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SettingIndexAimingMirrior;                             // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingHideCorpsWarzoneSetting;                        // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingCanChangeBLEState;                              // 0x0379(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingBattleWatchingDetailOpen;                       // 0x037A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x1];                                       // 0x037B(0x0001) MISSED OFFSET
	int                                                BP_SettingBattleWatchingDetailFlag;                       // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingIsDingYueNewVer;                                // 0x0380(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SettingShowBLESettings;                                // 0x0381(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x0382(0x0002) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0384(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting.bp_setting_C");
		return pStaticClass;
	}


	void EventTurnonManualRecord_NoFetch();
	void EventTurnonManualRecord();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSettingBLEStopConnect_NoFetch();
	void EventSettingBLEStopConnect();
	void EventSettingCurPicSettingNotSupportThisFps_NoFetch();
	void EventSettingCurPicSettingNotSupportThisFps();
	void EventSetDingYueNewAct_NoFetch();
	void EventSetDingYueNewAct();
	void EventCancelDingYueNewAct_NoFetch();
	void EventCancelDingYueNewAct();
	void EventCancelDingYue_NoFetch();
	void EventCancelDingYue();
	void EventShowBackToLobbyNotice_NoFetch();
	void EventShowBackToLobbyNotice();
	void EventForceSwitchToManulRecord_NoFetch();
	void EventForceSwitchToManulRecord();
	void EventSettingShowConfirmModifyFps_NoFetch();
	void EventSettingShowConfirmModifyFps();
	void EventConfirmPickUpResetMsg_NoFetch();
	void EventConfirmPickUpResetMsg();
	void EventInitiativeTurnOnWonderfulMoment_NoFetch();
	void EventInitiativeTurnOnWonderfulMoment();
	void EventSettingCannotSetHigherQuality_Push_NoFetch();
	void EventSettingCannotSetHigherQuality_Push();
	void EventInitiativeTurnOffFreedomREC_NoFetch();
	void EventInitiativeTurnOffFreedomREC();
	void EventShowNoticeFromWatchingBackToLobby_NoFetch();
	void EventShowNoticeFromWatchingBackToLobby();
	void EventSettingCannotSetHigherFps_Push_NoFetch();
	void EventSettingCannotSetHigherFps_Push();
	void EventSettingSendCanShowWatching_NoFetch();
	void EventSettingSendCanShowWatching();
	void EventShowQuickMsgModifiedSuccess_NoFetch();
	void EventShowQuickMsgModifiedSuccess();
	void EventTurnonBGMusic_NoFetch();
	void EventTurnonBGMusic();
	void EventShowDiyLimitLevelNotice_Push_NoFetch();
	void EventShowDiyLimitLevelNotice_Push();
	void EventForceSwitchToMomentRecord_NoFetch();
	void EventForceSwitchToMomentRecord();
	void EventSettingSendCanShowInviteWatching_NoFetch();
	void EventSettingSendCanShowInviteWatching();
	void EventCancelDingYueNewVer_NoFetch();
	void EventCancelDingYueNewVer();
	void EventShowDuplactedMsgSelected_NoFetch();
	void EventShowDuplactedMsgSelected();
	void EventShowQuickMsgBackToDefaultMsg_NoFetch();
	void EventShowQuickMsgBackToDefaultMsg();
	void EventRefreshSettingParameter_Push_NoFetch();
	void EventRefreshSettingParameter_Push();
	void EventChangeWarzoneShowState_NoFetch();
	void EventChangeWarzoneShowState();
	void EventSettingShowConfirmModifyHDR_NoFetch();
	void EventSettingShowConfirmModifyHDR();
	void EventSettingBLEStartConnect_NoFetch();
	void EventSettingBLEStartConnect();
	void EventSettingBLEShowStateNotice_NoFetch();
	void EventSettingBLEShowStateNotice();
	void EventSettingSwitchToHighSoundEffect_NoFetch();
	void EventSettingSwitchToHighSoundEffect();
	void EventSettingShowUIElemUI_NoFetch();
	void EventSettingShowUIElemUI();
	void EventShowSelectedPage_NoFetch();
	void EventShowSelectedPage();
	void EventInformPickUpNumZero_NoFetch();
	void EventInformPickUpNumZero();
	void EventSettingNoticeHighestArtClosed_NoFetch();
	void EventSettingNoticeHighestArtClosed();
	void EventSettingSwitchToSuperHighSoundEffect_NoFetch();
	void EventSettingSwitchToSuperHighSoundEffect();
	void EventSetDingYueNewVer_NoFetch();
	void EventSetDingYueNewVer();
	void EventSettingConfirmModifyArtQuality_Push_NoFetch();
	void EventSettingConfirmModifyArtQuality_Push();
	void EventShowLogOutNoticce_NoFetch();
	void EventShowLogOutNoticce();
	void EventSettingSendCanShowHistory_NoFetch();
	void EventSettingSendCanShowHistory();
	void EventInitiativeTurnOffWonderfulMoment_NoFetch();
	void EventInitiativeTurnOffWonderfulMoment();
	void EventInitiativeTurnOnFreedomREC_NoFetch();
	void EventInitiativeTurnOnFreedomREC();
	void EventSettingSwitchToLowSoundEffect_NoFetch();
	void EventSettingSwitchToLowSoundEffect();
	void EventHideLastOpennedPage_NoFetch();
	void EventHideLastOpennedPage();
	void EventSettingShowAASettingModifiedNotice_NoFetch();
	void EventSettingShowAASettingModifiedNotice();
	void EventOpenKefuUrl_NoFetch();
	void EventOpenKefuUrl();
	void EventSettingOpenLuaMemoryCheck_NoFetch();
	void EventSettingOpenLuaMemoryCheck();
	void EventShowNoQuickMsgSelected_NoFetch();
	void EventShowNoQuickMsgSelected();
	void EventClickSwitchButton_NoFetch();
	void EventClickSwitchButton();
	void EventShowMyRecordVideos_NoFetch();
	void EventShowMyRecordVideos();
	void EventSetDingYue_NoFetch();
	void EventSetDingYue();
	void EventSettingSendCanShowBattleWatchingDetail_NoFetch();
	void EventSettingSendCanShowBattleWatchingDetail();
	void EventTurnonMic_NoFetch();
	void EventTurnonMic();
	void EventShowOBBackToLobbyNotice_NoFetch();
	void EventShowOBBackToLobbyNotice();
	void EventSettingNotSupportHDR_NoFetch();
	void EventSettingNotSupportHDR();
	void EventShowBackToLobbyFromTrainingNotice_NoFetch();
	void EventShowBackToLobbyFromTrainingNotice();
	void EventInformAutoPickUpClosed_NoFetch();
	void EventInformAutoPickUpClosed();
	void EventTurnonMomentRecord_NoFetch();
	void EventTurnonMomentRecord();
	void EventChangeCorpsWarzoneShowState_NoFetch();
	void EventChangeCorpsWarzoneShowState();
	void UserConstructionScript();
};


}

