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

// ScriptBlueprintGeneratedClass bp_chat_main.bp_chat_main_C
// 0x04B8 (0x0788 - 0x02D0)
class Abp_chat_main_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_ChatMyGender;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatVoicePlayFileId;                                   // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChannelTitleName;                                      // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatIsTeamUp;                                          // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	struct FString                                     BP_ChatSelectedGID;                                       // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChannelType;                                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatMainValid;                                         // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	int                                                BP_RoomNewMessageCount;                                   // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SelectedFriendGID;                                     // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatMyUrl;                                             // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatVoiceTotalLimit;                                   // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatVoiceToTextContent;                                // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatVoiceUploadMsgId;                                  // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatVoiceDownloadFileId;                               // 0x0340(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatMyNickName;                                        // 0x034C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatVoiceTeamRoom;                                     // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatHoverIsFriend;                                     // 0x0364(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0365(0x0003) MISSED OFFSET
	struct FString                                     BP_ChatShowHelpContent;                                   // 0x0368(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatProfileRspUrl;                                     // 0x0374(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ChatMessageSingleData            BP_STRUCT_ChatMessageSingleData;                          // 0x0380(0x0094) (Edit, BlueprintVisible)
	int                                                BP_ChatMyAvatarBox;                                       // 0x0414(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatProfileRspWarZoneUseTitleImagePath;                // 0x0418(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatVoiceDownloadMsgLength;                            // 0x0424(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatProfileRspGender;                                  // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatProfileReqMsgId;                                   // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Chat_FriendScrollEnd;                                  // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatInputContent;                                      // 0x0434(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatProfileRspWarZoneUseTitlePetalImagePath;           // 0x0440(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamNewMessageCount;                                   // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatMainMyRoomId;                                      // 0x0450(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatHoverGID;                                          // 0x045C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatMyWarZoneUseTitlePetalImagePath;                   // 0x0468(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatMyHolidayTitleId;                                  // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatMainShown;                                         // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0479(0x0003) MISSED OFFSET
	struct FBP_STRUCT_ChatLiteFriendData               BP_STRUCT_ChatLiteFriendData;                             // 0x047C(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_WorldChatList;                                   // 0x0488(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_FriendChatList;                                  // 0x0494(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_RoomChatList;                                    // 0x04A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatCurrentTime;                                       // 0x04AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatRecruitJoinGid;                                    // 0x04B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ChatVoiceDownloadData>    BP_ARRAY_ChatVoiceDownloadList;                           // 0x04BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatVoiceBan;                                          // 0x04C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatVoiceUploadTime;                                   // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ChatBriefFriendData>      BP_ARRAY_CorpsBattleResultMember;                         // 0x04D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatMainClearGID;                                      // 0x04DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatMsgID;                                             // 0x04E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatIsInCorps;                                         // 0x04EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x04ED(0x0003) MISSED OFFSET
	int                                                BP_WorldNewMessageCount;                                  // 0x04F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatIsInRoom;                                          // 0x04F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04F5(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatUnreadMsgCount>       BP_ARRAY_ChatFriendUnreadList;                            // 0x04F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatVoiceDownloadChannel;                              // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatHoverIsPullBlack;                                  // 0x0508(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0509(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_ChatroomChatList;                                // 0x050C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatMyWarZoneUseTitleId;                               // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatMyLevel;                                           // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_TeamChatList;                                    // 0x0520(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatMySegmentMax;                                      // 0x052C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatProfileRspNickName;                                // 0x0530(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatVoiceDownloadOwnerGid;                             // 0x053C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatMyWarZoneUseTitleLevel;                            // 0x0548(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_FriendNewMessageCount;                                 // 0x054C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ReceiverName;                                          // 0x0550(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatProfileRspHolidayTitle;                            // 0x055C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatMyWarZoneUseTitleImagePath;                        // 0x0560(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatProfileRspLevel;                                   // 0x056C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatVoiceDownloadMsgId;                                // 0x0570(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatProfileReqGid;                                     // 0x0574(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRecruitTeamID;                                     // 0x0580(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatScrollSelectFriendGID;                             // 0x058C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ChatLiteFriendData>       BP_ARRAY_ChatLiteFriendList;                              // 0x0598(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ChatBriefFriendData>      BP_ARRAY_ChatFriendList;                                  // 0x05A4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatOnlineFriendCout;                                  // 0x05B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatMain_LbsTitleOpenStatus;                           // 0x05B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x05B5(0x0003) MISSED OFFSET
	struct FString                                     BP_ChatHoverName;                                         // 0x05B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatCorpsNotice;                                       // 0x05C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoomNewMessageCount;                               // 0x05D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatSelectedGender;                                    // 0x05D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatTodayDate;                                         // 0x05D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatVoiceMode;                                         // 0x05E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_NewChatList;                                     // 0x05E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatInputFilteredContent;                              // 0x05F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatTotalFriendCount;                                  // 0x0600(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ChatVoiceDownloadData            BP_STRUCT_ChatVoiceDownloadData;                          // 0x0604(0x0018) (Edit, BlueprintVisible)
	bool                                               BP_ChatMainFirstShow;                                     // 0x061C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x061D(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatMessageSingleData>    BP_ARRAY_CorpsChatList;                                   // 0x0620(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatProfileRspWarZoneUseTitleId;                       // 0x062C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatMyGID;                                             // 0x0630(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsNewMessageCount;                                  // 0x063C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatHoverContent;                                      // 0x0640(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatContent;                                           // 0x064C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatProfileRspWarZoneUseTitle;                         // 0x0658(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatProfileRspGid;                                     // 0x0664(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatProfileRspWarZoneUseTitleLevel;                    // 0x0670(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatVoiceOpenMic;                                      // 0x0674(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x0675(0x0003) MISSED OFFSET
	int                                                BP_ChatProfileRspAvatarBox;                               // 0x0678(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ChatBriefFriendData              BP_STRUCT_ChatBriefFriendData;                            // 0x067C(0x00B4) (Edit, BlueprintVisible)
	struct FString                                     BP_ChatProfileRspMsgList;                                 // 0x0730(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ChatUnreadMsgCount               BP_STRUCT_ChatUnreadMsgCount;                             // 0x073C(0x0010) (Edit, BlueprintVisible)
	bool                                               BP_ChatVoiceOpenSpeaker;                                  // 0x074C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x074D(0x0003) MISSED OFFSET
	int                                                BP_Chat_FriendScrollStart;                                // 0x0750(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ReceiverGID;                                           // 0x0754(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatEmojiClickItem;                                    // 0x0760(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatMyWarZoneUseTitle;                                 // 0x0764(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoomMaster;                                        // 0x0770(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatProfileRspMaxSegment;                              // 0x077C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatTickBufferList;                                    // 0x0780(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x3];                                       // 0x0781(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0784(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_main.bp_chat_main_C");
		return pStaticClass;
	}


	void EventScrollFriendList_NoFetch();
	void EventScrollFriendList();
	void EventHoverInviteTeam_NoFetch();
	void EventHoverInviteTeam();
	void EventInputChatMsg_NoFetch();
	void EventInputChatMsg();
	void EventSendChatMsg_NoFetch();
	void EventSendChatMsg();
	void EventDownloadVoiceFile_NoFetch();
	void EventDownloadVoiceFile();
	void EventGetProfile_NoFetch();
	void EventGetProfile();
	void EventPopMessageBuffer_NoFetch();
	void EventPopMessageBuffer();
	void EventSwitchToFriendChat_NoFetch();
	void EventSwitchToFriendChat();
	void EventTryStartRecordVoice_NoFetch();
	void EventTryStartRecordVoice();
	void EventTryCancelRecordVoice_NoFetch();
	void EventTryCancelRecordVoice();
	void EventTryStopPlayRecordVoice_NoFetch();
	void EventTryStopPlayRecordVoice();
	void EventHideChatMainWnd_NoFetch();
	void EventHideChatMainWnd();
	void EventFetchFriendData_NoFetch();
	void EventFetchFriendData();
	void EventNotifyOutofTextRange_NoFetch();
	void EventNotifyOutofTextRange();
	void EventNotifyVoiceChatFailToRecord_NoFetch();
	void EventNotifyVoiceChatFailToRecord();
	void EventNotifyVoiceRecordTooShort_NoFetch();
	void EventNotifyVoiceRecordTooShort();
	void EventNotifyNoText_NoFetch();
	void EventNotifyNoText();
	void EventChangeChannelType_NoFetch();
	void EventChangeChannelType();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventCheckBlackList_NoFetch();
	void EventCheckBlackList();
	void EventShowEmoji_NoFetch();
	void EventShowEmoji();
	void EventHoverShowFriendInfo_NoFetch();
	void EventHoverShowFriendInfo();
	void EventHideEmoji_NoFetch();
	void EventHideEmoji();
	void EventHoverAddFriend_NoFetch();
	void EventHoverAddFriend();
	void EventHoverJoinTeam_NoFetch();
	void EventHoverJoinTeam();
	void EventHoverReportTarget_NoFetch();
	void EventHoverReportTarget();
	void EventChangeVoiceChatMode_NoFetch();
	void EventChangeVoiceChatMode();
	void EventClickCorpsRecruit_NoFetch();
	void EventClickCorpsRecruit();
	void EventClickCorpsGoto_NoFetch();
	void EventClickCorpsGoto();
	void EventOpenRecruitPanel_NoFetch();
	void EventOpenRecruitPanel();
	void EventClickFriendItem_NoFetch();
	void EventClickFriendItem();
	void EventChatMainBeforeHide_NoFetch();
	void EventChatMainBeforeHide();
	void EventAchieveVoiceRoom_NoFetch();
	void EventAchieveVoiceRoom();
	void EventInitJoinRoom_NoFetch();
	void EventInitJoinRoom();
	void EventChatMainBeforeShow_NoFetch();
	void EventChatMainBeforeShow();
	void EventCheckTodayDate_NoFetch();
	void EventCheckTodayDate();
	void EventOnAfterShowWnd_NoFetch();
	void EventOnAfterShowWnd();
	void EventChatVoiceBanInfo_NoFetch();
	void EventChatVoiceBanInfo();
	void EventOnAfterHideWnd_NoFetch();
	void EventOnAfterHideWnd();
	void EventRefreshSelfProfile_NoFetch();
	void EventRefreshSelfProfile();
	void EventShowHover_NoFetch();
	void EventShowHover();
	void EventTryStopRecordVoice_NoFetch();
	void EventTryStopRecordVoice();
	void EventChatVoiceCheckBan_NoFetch();
	void EventChatVoiceCheckBan();
	void EventCheckFriendList_NoFetch();
	void EventCheckFriendList();
	void EventSendChatVoiceMsg_NoFetch();
	void EventSendChatVoiceMsg();
	void EventNotifyFriendChatRequireSelect_NoFetch();
	void EventNotifyFriendChatRequireSelect();
	void EventHideHover_NoFetch();
	void EventHideHover();
	void EventHoverBlockTarget_NoFetch();
	void EventHoverBlockTarget();
	void EventRequireHoverTeamup_NoFetch();
	void EventRequireHoverTeamup();
	void EventRecruitMember_NoFetch();
	void EventRecruitMember();
	void UserConstructionScript();
};


}

