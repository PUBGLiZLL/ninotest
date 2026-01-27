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

// ScriptBlueprintGeneratedClass bp_room_waiting.bp_room_waiting_C
// 0x01F4 (0x04C4 - 0x02D0)
class Abp_room_waiting_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_KickedMemberPos;                                       // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RoomWaitingInfo                  BP_STRUCT_RoomWaitingInfo;                                // 0x02D8(0x0070) (Edit, BlueprintVisible)
	struct FString                                     BP_Room_Passwd;                                           // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Room_SelfOldPos;                                       // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Room_SelfID;                                           // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomGroupType                    BP_STRUCT_RoomGroupType;                                  // 0x0364(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_RoomMemberInfo>           BP_ARRAY_RoomMemberList;                                  // 0x0374(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoomGroupType>            BP_ARRAY_RoomGroupTypeList;                               // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Room_KeepCountDown;                                    // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RoleOldPos;                                            // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Room_IsObEditState;                                    // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Room_IsKickMultiplayerBtnEnable;                       // 0x039D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x039E(0x0002) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_RoomLockInfoList;                                // 0x03A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomMemberInfo                   BP_STRUCT_RoomMemberInfo;                                 // 0x03AC(0x004C) (Edit, BlueprintVisible)
	struct FString                                     BP_Room_ModeMapName;                                      // 0x03F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoomMemberInfo>           BP_ARRAY_RoomOldMemberInfoList;                           // 0x0404(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Room_SelectedRoleID;                                   // 0x0410(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Room_CanGetProfile;                                    // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	struct FBP_STRUCT_RoomSelfInfo                     BP_STRUCT_RoomSelfInfo;                                   // 0x0420(0x004C) (Edit, BlueprintVisible)
	bool                                               BP_IsRoomOwner;                                           // 0x046C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x046D(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_RoomMemberInfo>           BP_ARRAY_RoomNewMemberInfoList;                           // 0x0470(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Room_UnLockedPos;                                      // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Room_InitiativeLeave;                                  // 0x0480(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0481(0x0003) MISSED OFFSET
	int                                                BP_RoleNewPos;                                            // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Room_LockedPos;                                        // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Room_ChangeName;                                       // 0x048C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Room_IsInRoom;                                         // 0x0498(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0499(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_RoomMemberInfo>           BP_ARRAY_RoomNewMemberAllInfoList;                        // 0x049C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Room_QRIamgePath;                                      // 0x04A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SelectNewPos;                                          // 0x04B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SelectedGroupType;                                     // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SelectedMapID;                                         // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_room_waiting.bp_room_waiting_C");
		return pStaticClass;
	}


	void EventCloseRoomWaitingChatUI_NoFetch();
	void EventCloseRoomWaitingChatUI();
	void EventChangeRoomType_NoFetch();
	void EventChangeRoomType();
	void EventChangeToObEditState_NoFetch();
	void EventChangeToObEditState();
	void EventRoomWaitingRelease_NoFetch();
	void EventRoomWaitingRelease();
	void EventExitRoom_NoFetch();
	void EventExitRoom();
	void EventRequestChangeRoomPos_NoFetch();
	void EventRequestChangeRoomPos();
	void EventStarGame_NoFetch();
	void EventStarGame();
	void EventChangeMap_NoFetch();
	void EventChangeMap();
	void EventOnlyRoomMasterCanClick_NoFetch();
	void EventOnlyRoomMasterCanClick();
	void EventWhetherLeaveRoom_NoFetch();
	void EventWhetherLeaveRoom();
	void EventRefreshRoomKeepCountdown_NoFetch();
	void EventRefreshRoomKeepCountdown();
	void EventSaveSuccess_NoFetch();
	void EventSaveSuccess();
	void EventKickRoleDisable_NoFetch();
	void EventKickRoleDisable();
	void EventBtnDisableInGaming_NoFetch();
	void EventBtnDisableInGaming();
	void EventGetNewMemberProfInfo_NoFetch();
	void EventGetNewMemberProfInfo();
	void EventOpenRoomWaitingChatUI_NoFetch();
	void EventOpenRoomWaitingChatUI();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventLockObPos_NoFetch();
	void EventLockObPos();
	void EventUnLockObPos_NoFetch();
	void EventUnLockObPos();
	void EventWhetherDisbandRoom_NoFetch();
	void EventWhetherDisbandRoom();
	void EventAfterLeaveRoomWaiting_NoFetch();
	void EventAfterLeaveRoomWaiting();
	void EventCreateQRImage_NoFetch();
	void EventCreateQRImage();
	void EventChangeToObEditDisableState_NoFetch();
	void EventChangeToObEditDisableState();
	void EventClickKickMultiplayerBtn_NoFetch();
	void EventClickKickMultiplayerBtn();
	void EventOpenRoleInfo_NoFetch();
	void EventOpenRoleInfo();
	void EventRequestKickMember_NoFetch();
	void EventRequestKickMember();
	void EventAfterEnterRoomWaiting_NoFetch();
	void EventAfterEnterRoomWaiting();
	void EventOpenRoomCustomSettingUI_NoFetch();
	void EventOpenRoomCustomSettingUI();
	void EventChangeRoomName_NoFetch();
	void EventChangeRoomName();
	void UserConstructionScript();
};


}

