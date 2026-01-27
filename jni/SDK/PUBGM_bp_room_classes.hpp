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

// ScriptBlueprintGeneratedClass bp_room.bp_room_C
// 0x00E8 (0x03B8 - 0x02D0)
class Abp_room_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SelectRoomID;                                          // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_GroupType>                BP_ARRAY_GroupTypeList;                                   // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_EnterRoom_Type;                                        // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Room_SelfName;                                         // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Room_IsAnchor;                                         // 0x02F4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02F5(0x0003) MISSED OFFSET
	int                                                BP_Room_RefreshLeftTime;                                  // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_EnterRoom_ID;                                          // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Room_ClientVersion;                                    // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoomInfo>                 BP_ARRAY_RoomList;                                        // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomInfo                         BP_STRUCT_RoomInfo;                                       // 0x0320(0x0078) (Edit, BlueprintVisible)
	struct FString                                     BP_EnterRoom_Passwd;                                      // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GroupType                        BP_STRUCT_GroupType;                                      // 0x03A4(0x0010) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_room.bp_room_C");
		return pStaticClass;
	}


	void EventEnterGamingRoomNotice_NoFetch();
	void EventEnterGamingRoomNotice();
	void EventRoomRelease_NoFetch();
	void EventRoomRelease();
	void EventRequestRoomList_NoFetch();
	void EventRequestRoomList();
	void EventCheckInputRoomID_NoFetch();
	void EventCheckInputRoomID();
	void EventEnterRoom_NoFetch();
	void EventEnterRoom();
	void EventOpenRoomChatUI_NoFetch();
	void EventOpenRoomChatUI();
	void EventCloseRoomChatUI_NoFetch();
	void EventCloseRoomChatUI();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventCompareClickRefreshTime_NoFetch();
	void EventCompareClickRefreshTime();
	void EventAfterEnterRoomList_NoFetch();
	void EventAfterEnterRoomList();
	void EventNotAnchor_NoFetch();
	void EventNotAnchor();
	void EventAfterLeaveRoomList_NoFetch();
	void EventAfterLeaveRoomList();
	void EventVersionNotMatched_NoFetch();
	void EventVersionNotMatched();
	void EventShowRoomCreateUI_NoFetch();
	void EventShowRoomCreateUI();
	void EventRequestJoinRoom_NoFetch();
	void EventRequestJoinRoom();
	void UserConstructionScript();
};


}

