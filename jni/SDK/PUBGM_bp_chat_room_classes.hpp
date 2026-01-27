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

// ScriptBlueprintGeneratedClass bp_chat_room.bp_chat_room_C
// 0x0268 (0x0538 - 0x02D0)
class Abp_chat_room_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ChatRoom_EmptyRoomAnnouncement;                        // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_UpdateOnePlayerIndex;                         // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ChatRoomInfo>             BP_ARRAY_ChatRoomInfoList;                                // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_RecommendTypeHot;                             // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ChatRoomLabel>            BP_ARRAY_ChatRoomLabelList;                               // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatRoom_ClickMenuPlayerInMyTeam;                      // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0301(0x0003) MISSED OFFSET
	struct FString                                     BP_ChatRoom_SearchRoomID;                                 // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_SearchRoomPassword;                           // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_MyRoomAnnouncement;                           // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_MyRoomID;                                     // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatRoom_MyRoomNeedKey;                                // 0x0334(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0335(0x0003) MISSED OFFSET
	struct FString                                     BP_ChatRoom_SetWindowTitle;                               // 0x0338(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_ScrollEnd;                                    // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatRoom_InputString;                                  // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_CreatePassword;                               // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_MyChatRoomPassword;                           // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_UpdateMemberIndex;                            // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ChatRoomLitePlayer               BP_STRUCT_ChatRoomLitePlayer;                             // 0x0370(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ChatRoomInfo>             BP_ARRAY_ChatRoomRecommendList;                           // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_MyRoomPlayerCount;                            // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ChatRoomLabel>            BP_ARRAY_ChatRoomLabelSelectedList;                       // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatRoom_WillMarkRoomState;                            // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatRoomLitePlayer>       BP_ARRAY_ChatRoomPlayerLiteList;                          // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ChatRoomPlayer>           BP_ARRAY_ChatRoomPlayerDetailList;                        // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatRoom_ClickMenuPlayerIsFriend;                      // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03B5(0x0003) MISSED OFFSET
	struct FString                                     BP_ChatRoom_ClickMenuPlayerID;                            // 0x03B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_ClickLabelId;                                 // 0x03C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatRoom_LabelIntroduce;                               // 0x03C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatRoom_ClickMenuPlayerIsPullBlack;                   // 0x03D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x03D5(0x0003) MISSED OFFSET
	struct FString                                     BP_ChatRoom_DefaultCreateName;                            // 0x03D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ChatRoomInfo                     BP_STRUCT_ChatRoomInfo;                                   // 0x03E4(0x0064) (Edit, BlueprintVisible)
	struct FString                                     BP_ChatRoom_MyRoomName;                                   // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_ClickMenuPlayerGender;                        // 0x0454(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ChatRoomPlayer                   BP_STRUCT_ChatRoomPlayer;                                 // 0x0458(0x0064) (Edit, BlueprintVisible)
	int                                                BP_ChatRoom_RecommendTypeFriend;                          // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatRoom_WillMarkRoomID;                               // 0x04C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_RecommendTypeOfficial;                        // 0x04CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatRoom_MyRoomIsMarked;                               // 0x04D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04D1(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_ChatRoomPlayer>           BP_ARRAY_ChatRoomPlayerList;                              // 0x04D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatShowHelpContent;                                   // 0x04E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ChatRoomLabel                    BP_STRUCT_ChatRoomLabel;                                  // 0x04EC(0x0014) (Edit, BlueprintVisible)
	bool                                               BP_ChatRoom_MyRoomIsSelfCreate;                           // 0x0500(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0501(0x0003) MISSED OFFSET
	int                                                BP_ChatRoom_RecommendTypeRandom;                          // 0x0504(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatRoom_CreateName;                                   // 0x0508(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatRoom_CreateWindowTitle;                            // 0x0514(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_ScrollStart;                                  // 0x0520(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatRoom_Announcement;                                 // 0x0524(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatRoom_MaxLabelNum;                                  // 0x0530(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0534(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_room.bp_chat_room_C");
		return pStaticClass;
	}


	void EventClickMarkState_NoFetch();
	void EventClickMarkState();
	void EventChatRoomJoinTeam_NoFetch();
	void EventChatRoomJoinTeam();
	void EventChatRoomUpdateOnMemberAddOrRemove_NoFetch();
	void EventChatRoomUpdateOnMemberAddOrRemove();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventOpenChatRoomPassword_NoFetch();
	void EventOpenChatRoomPassword();
	void EventChatRoomChangeScroll_NoFetch();
	void EventChatRoomChangeScroll();
	void EventOpenCreateChatRoomPanel_NoFetch();
	void EventOpenCreateChatRoomPanel();
	void EventAlertNeedPassword_NoFetch();
	void EventAlertNeedPassword();
	void EventCreateChatRoom_NoFetch();
	void EventCreateChatRoom();
	void EventSaveChatRoom_NoFetch();
	void EventSaveChatRoom();
	void EventJoinChatRoom_NoFetch();
	void EventJoinChatRoom();
	void EventQuitChatRoom_NoFetch();
	void EventQuitChatRoom();
	void EventClickChatRoomPlayerInfo_NoFetch();
	void EventClickChatRoomPlayerInfo();
	void EventClickRemoveRoom_NoFetch();
	void EventClickRemoveRoom();
	void EventChatRoomMenuOpen_NoFetch();
	void EventChatRoomMenuOpen();
	void EventAlertNeedRoomName_NoFetch();
	void EventAlertNeedRoomName();
	void EventChatRoomRefreshRecommend_NoFetch();
	void EventChatRoomRefreshRecommend();
	void EventChatRoomPlayerInfo_NoFetch();
	void EventChatRoomPlayerInfo();
	void EventChatRoomUpdateClickMenuPlayer_NoFetch();
	void EventChatRoomUpdateClickMenuPlayer();
	void EventChatRoomAddFriend_NoFetch();
	void EventChatRoomAddFriend();
	void EventChatRoomPullBlack_NoFetch();
	void EventChatRoomPullBlack();
	void EventChatRoomInviteTeam_NoFetch();
	void EventChatRoomInviteTeam();
	void EventChatRoomOnShowList_NoFetch();
	void EventChatRoomOnShowList();
	void EventChatRoomOnMyRoom_NoFetch();
	void EventChatRoomOnMyRoom();
	void EventOpenSetChatRoomPanel_NoFetch();
	void EventOpenSetChatRoomPanel();
	void EventChatRoomCheckAnnouncement_NoFetch();
	void EventChatRoomCheckAnnouncement();
	void EventChatRoomCheckPassword_NoFetch();
	void EventChatRoomCheckPassword();
	void EventChatRoomCheckName_NoFetch();
	void EventChatRoomCheckName();
	void EventChatRoomReplaceSpace_NoFetch();
	void EventChatRoomReplaceSpace();
	void EventAlertNeedRoomID_NoFetch();
	void EventAlertNeedRoomID();
	void EventChatRoomClickLabel_NoFetch();
	void EventChatRoomClickLabel();
	void EventChatRoomScrollMemberList_NoFetch();
	void EventChatRoomScrollMemberList();
	void EventClickSearchAndJoinRoom_NoFetch();
	void EventClickSearchAndJoinRoom();
	void UserConstructionScript();
};


}

