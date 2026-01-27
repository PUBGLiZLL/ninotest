#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:43 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_chat_entrance.bp_chat_entrance_C
// 0x006C (0x033C - 0x02D0)
class Abp_chat_entrance_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_ChatEntranceTeamed;                                    // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	struct FString                                     BP_ChatEntranceClearGID;                                  // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatEntranceEnterCorps;                                // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	int                                                BP_ChatEntranceQuickMsgId;                                // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ChatEntranceNewMsg;                                    // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatEntranceNewSender;                                 // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ChatEntranceEnterWaitingRoom;                          // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	int                                                BP_ChatEntranceChatroomNewMsgCount;                       // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatEntranceEnterRoom;                                 // 0x030C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatEntranceValid;                                     // 0x030D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x030E(0x0002) MISSED OFFSET
	struct FString                                     BP_ChatEntranceVoiceRoomId;                               // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ChatEntranceQuickMsgStr;                               // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChatEntranceNewChannel;                                // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatEntranceTickBufferList;                            // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CorpsLobbyUI_Hide_Background_Image;                    // 0x032D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ChatEntranceFriendListInRoom;                          // 0x032E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x032F(0x0001) MISSED OFFSET
	int                                                BP_ChatFriendNewMsgCount;                                 // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatEntranceOnlineFriendNum;                           // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0338(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_chat_entrance.bp_chat_entrance_C");
		return pStaticClass;
	}


	void EventOpenChatWindow_NoFetch();
	void EventOpenChatWindow();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventTestQuitRoom_NoFetch();
	void EventTestQuitRoom();
	void EventTestJoinGameRoom_NoFetch();
	void EventTestJoinGameRoom();
	void EventSendTeamQuickMsg_NoFetch();
	void EventSendTeamQuickMsg();
	void EventClickBtnRoomRecruit_NoFetch();
	void EventClickBtnRoomRecruit();
	void EventClickBtnFriendList_NoFetch();
	void EventClickBtnFriendList();
	void EventClickBtnRecruit_NoFetch();
	void EventClickBtnRecruit();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventAchieveQuickMsgStr_NoFetch();
	void EventAchieveQuickMsgStr();
	void EventPopMessageBuffer_NoFetch();
	void EventPopMessageBuffer();
	void EventOpenFriendNewChat_NoFetch();
	void EventOpenFriendNewChat();
	void EventOpenChatUI_NoFetch();
	void EventOpenChatUI();
	void UserConstructionScript();
};


}

