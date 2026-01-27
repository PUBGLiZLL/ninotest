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

// ScriptBlueprintGeneratedClass bp_battleresult.bp_battleresult_C
// 0x0664 (0x0934 - 0x02D0)
class Abp_battleresult_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Ingame_GetOBInfo_Mode;                                    // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_RoleWarZoneUseTitleImagePath;                          // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsRank                        BP_STRUCT_CorpsRank;                                      // 0x02E4(0x0028) (Edit, BlueprintVisible)
	struct FBP_STRUCT_OBTeamResult                     BP_STRUCT_OBTeamResult;                                   // 0x030C(0x000C) (Edit, BlueprintVisible)
	struct FString                                     Ingame_PlayerTitle;                                       // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Ingame_GetOBInfo_ValidBattleInfo;                         // 0x0324(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0325(0x0003) MISSED OFFSET
	int                                                BP_WatchExit_DelayTime;                                   // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ServerTimeSecNow;                                      // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_PreReceiveTime;                                        // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_isLikeSysOpen;                                         // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	int                                                Ingame_GetOBInfo_TopTenCount;                             // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WatchGame_ReplyState;                                  // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BattleResultCanShowStrategyBtn;                        // 0x0340(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0341(0x0003) MISSED OFFSET
	int                                                Ingame_GetOBInfo_GameCount;                               // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_LikeOprPlayerId;                                       // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CurrWatchTeam>            BP_ARRAY_CurrWatchTeam;                                   // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_OBTeamResult>             BP_ARRAY_OBBattleResult;                                  // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Ingame_PlayerData_MatchMode;                              // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ServerRspLikedTeammate;                                // 0x0378(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_WatchGame_CanReservation;                              // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	struct FBP_STRUCT_TeammateProfile                  BP_STRUCT_TeammateProfile;                                // 0x0388(0x0020) (Edit, BlueprintVisible)
	bool                                               BP_CanShow_OneMoreGame;                                   // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	struct FBP_STRUCT_MemBTResultData                  BP_STRUCT_MemBTResultData;                                // 0x03AC(0x009C) (Edit, BlueprintVisible)
	struct FString                                     BP_LikeTargetPlayerId;                                    // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CurrWatchTeam                    BP_STRUCT_CurrWatchTeam;                                  // 0x0454(0x0018) (Edit, BlueprintVisible)
	int                                                BP_RoleWarZoneUseTitleLevel;                              // 0x046C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RecordDataTLogUpload             BP_STRUCT_RecordDataTLogUpload;                           // 0x0470(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_RADAR                            BP_STRUCT_RADAR;                                          // 0x0488(0x0078) (Edit, BlueprintVisible)
	struct FString                                     Ingame_PlayerData_MatchMode_PlayerNum;                    // 0x0500(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_InGamePlayerTitleInfo            BP_STRUCT_InGamePlayerTitleInfo;                          // 0x050C(0x000C) (Edit, BlueprintVisible)
	struct FString                                     BP_RoleWarZoneUseTitle;                                   // 0x0518(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_myname;                                                // 0x0524(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_mykill;                                                // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WatchGame_ReplyTip;                                    // 0x0534(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_BattleResultMurderName;                                // 0x0540(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_EXPLORE_DETAIL                   BP_STRUCT_EXPLORE_DETAIL;                                 // 0x054C(0x000C) (Edit, BlueprintVisible)
	struct FString                                     Ingame_GetOBInfo_KDNum;                                   // 0x0558(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Ingame_OBPlayer_BattleData_UID;                           // 0x0564(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_WatchGame_AcceptReservation;                           // 0x0570(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0571(0x0003) MISSED OFFSET
	struct FString                                     BP_BattleResultMurderUID;                                 // 0x0574(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_BattleResultIsIOSCheck;                                // 0x0580(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0581(0x0003) MISSED OFFSET
	struct FString                                     BP_RoleWarZoneUseTitlePetalImagePath;                     // 0x0584(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsReceiveResult;                                       // 0x0590(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0591(0x0003) MISSED OFFSET
	struct FBP_STRUCT_BTRating                         BP_STRUCT_BTRating;                                       // 0x0594(0x0018) (Edit, BlueprintVisible)
	struct FString                                     BP_WatchExitReason;                                       // 0x05AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TeammateLikeInfo                 BP_STRUCT_TeammateLikeInfo;                               // 0x05B8(0x0018) (Edit, BlueprintVisible)
	struct FString                                     BP_MyCorpsName;                                           // 0x05D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsShowOBGender;                                        // 0x05DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BattleResultIsClickReplay;                             // 0x05DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsShareAwardGold;                                      // 0x05DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_EnterSpectateMode;                                     // 0x05DF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Ingame_GetOBInfo_KillNum;                                 // 0x05E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Ingame_OBPlayer_BattleData_Mode;                          // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BPRecordAddFriendIndex;                                   // 0x05E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_TeamModeName;                                          // 0x05EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               testResult;                                               // 0x05F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsDroiyanMode;                                         // 0x05F9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x05FA(0x0002) MISSED OFFSET
	struct FBP_STRUCT_EXP_DETAIL                       BP_STRUCT_EXP_DETAIL;                                     // 0x05FC(0x003C) (Edit, BlueprintVisible)
	bool                                               BP_DirectShow;                                            // 0x0638(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0639(0x0003) MISSED OFFSET
	struct FBP_STRUCT_OBPersonalResult                 BP_STRUCT_OBPersonalResult;                               // 0x063C(0x0024) (Edit, BlueprintVisible)
	int                                                Ingame_GetOBInfo_WinCount;                                // 0x0660(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GOLD_DETAIL                      BP_STRUCT_GOLD_DETAIL;                                    // 0x0664(0x0030) (Edit, BlueprintVisible)
	int                                                BattleDataMatchMode;                                      // 0x0694(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Retry;                                                    // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x0699(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_TeammateProfile>          BP_ARRAY_TeammateProfile;                                 // 0x069C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Ingame_GetOBInfo_UID;                                     // 0x06A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsFightingState;                                       // 0x06B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x06B5(0x0003) MISSED OFFSET
	struct FString                                     BP_WatchGame_TargetName;                                  // 0x06B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CurrentLikeTeammate;                                   // 0x06C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_BattleResultData                 BP_STRUCT_BattleResultData;                               // 0x06D0(0x01CC) (Edit, BlueprintVisible)
	struct FBP_STRUCT_BattleResultMyInfo               BP_STRUCT_BattleResultMyInfo;                             // 0x089C(0x002C) (Edit, BlueprintVisible)
	int                                                BP_RoleWarZoneUseTitleId;                                 // 0x08C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IsTodayShareDone;                                      // 0x08CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x3];                                       // 0x08CD(0x0003) MISSED OFFSET
	int                                                BP_LoginChannel;                                          // 0x08D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RecordingUpload                  BP_STRUCT_RecordingUpload;                                // 0x08D4(0x004C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_TeammateLikeInfo>         BP_ARRAY_TeammateLikeInfoArray;                           // 0x0920(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_IsReportComplaintShow;                                 // 0x092C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BattleResultIsAI;                                      // 0x092D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData13[0x2];                                       // 0x092E(0x0002) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0930(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_battleresult.bp_battleresult_C");
		return pStaticClass;
	}


	void EventDelayCall_NoFetch();
	void EventDelayCall();
	void EventGetPlayerObBattleInfo_NoFetch();
	void EventGetPlayerObBattleInfo();
	void EventClientExitGame_NoFetch();
	void EventClientExitGame();
	void EventDoIgnoreDSError_Push_NoFetch();
	void EventDoIgnoreDSError_Push();
	void EventGetPlayerMatchMode_NoFetch();
	void EventGetPlayerMatchMode();
	void EventLogBattleData_Push_NoFetch();
	void EventLogBattleData_Push();
	void EventClientFreshToComplaint_NoFetch();
	void EventClientFreshToComplaint();
	void EventUpdateWatchTeamToComplaint_Push_NoFetch();
	void EventUpdateWatchTeamToComplaint_Push();
	void EventClientGetIsClickReply_NoFetch();
	void EventClientGetIsClickReply();
	void EventClientExitTraining_NoFetch();
	void EventClientExitTraining();
	void EventShowGameJoyGobackAndNoRecordsNotice_NoFetch();
	void EventShowGameJoyGobackAndNoRecordsNotice();
	void EventGameJoyVideoShareSuccess_NoFetch();
	void EventGameJoyVideoShareSuccess();
	void EventGetPlayerTitle_NoFetch();
	void EventGetPlayerTitle();
	void EventWatchGameOnSelect_NoFetch();
	void EventWatchGameOnSelect();
	void EventBattleResultControllerInterruptNotify_NoFetch();
	void EventBattleResultControllerInterruptNotify();
	void EventWatchGameClickReserveFriend_NoFetch();
	void EventWatchGameClickReserveFriend();
	void EventWatchGameUpdateReservationState_NoFetch();
	void EventWatchGameUpdateReservationState();
	void EventClickOnOneMoreGameBtn_NoFetch();
	void EventClickOnOneMoreGameBtn();
	void EventShowOnceMoreGameBtnNotice_NoFetch();
	void EventShowOnceMoreGameBtnNotice();
	void EventShowGameJoyReRecordNotice_NoFetch();
	void EventShowGameJoyReRecordNotice();
	void EventShowGameJoyRecordFailNotice_NoFetch();
	void EventShowGameJoyRecordFailNotice();
	void EventCheckZKForbiddenTime_NoFetch();
	void EventCheckZKForbiddenTime();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventShowGameJoyNoRecordsNotice_NoFetch();
	void EventShowGameJoyNoRecordsNotice();
	void EventAddFriendRequest_Push_NoFetch();
	void EventAddFriendRequest_Push();
	void EventBattleResult_BackToLobby_NoFetch();
	void EventBattleResult_BackToLobby();
	void EventOnLikeBtnClicked_Push_NoFetch();
	void EventOnLikeBtnClicked_Push();
	void EventCloseBattleResult_NoFetch();
	void EventCloseBattleResult();
	void EventClientFreshData_NoFetch();
	void EventClientFreshData();
	void UserConstructionScript();
};


}

