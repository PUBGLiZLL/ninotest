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

// ScriptBlueprintGeneratedClass bp_room_create.bp_room_create_C
// 0x01F4 (0x04C4 - 0x02D0)
class Abp_room_create_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CreateRoom_Passwd;                                     // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CreateRoom_PlayerNumMax;                               // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_RoomSecondTypeInfo>       BP_ARRAY_RoomCreateSecondTypeList;                        // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomCreateSecondTypeInfo         BP_STRUCT_RoomCreateSecondTypeInfo;                       // 0x02F0(0x0044) (Edit, BlueprintVisible)
	struct FString                                     BP_CreateRoom_SelectedPlayMethod;                         // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomCreateBombingAreaInfo        BP_STRUCT_RoomCreateBombingAreaInfo;                      // 0x0340(0x0004) (Edit, BlueprintVisible)
	int                                                BP_CreateRoom_TeamModeID;                                 // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRoom_RoomModeID;                                 // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRoom_RoomTableID;                                // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CreateRoom_AllowInvite;                                // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	struct FString                                     BP_CreateRoom_WeatherModeName;                            // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CreateRoom_WeatherModeEN;                              // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CreateRoom_RoomModeImage;                              // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomCreateAutoPickInfo           BP_STRUCT_RoomCreateAutoPickInfo;                         // 0x0378(0x0004) (Edit, BlueprintVisible)
	int                                                BP_CreateRoom_WeatherModeID;                              // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RoomCreateAimAssistInfo          BP_STRUCT_RoomCreateAimAssistInfo;                        // 0x0380(0x0004) (Edit, BlueprintVisible)
	TArray<struct FString>                             BP_ARRAY_RoomCreateTeamModeNameList;                      // 0x0384(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoomCreatePerspectiveList;                       // 0x0390(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoomCreateWeatherModeCNList;                     // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoomCreateWeatherModeENList;                     // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_RoomCreate_SelfName;                                   // 0x03B4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CreateRoom_Perspective;                                // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomCreateAutoOpenDoorInfo       BP_STRUCT_RoomCreateAutoOpenDoorInfo;                     // 0x03CC(0x0004) (Edit, BlueprintVisible)
	bool                                               BP_IsCreateRoom;                                          // 0x03D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x03D1(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_RoomCreateSecondTypeInfo> BP_ARRAY_RoomCreateShrinkSpeedList;                       // 0x03D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CreateRoom_IsRoomMaster;                               // 0x03E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CreateRoom_IsAdvParaChanged;                           // 0x03E1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_CreateRoom_NeedLoadAdvPara;                            // 0x03E2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1];                                       // 0x03E3(0x0001) MISSED OFFSET
	struct FString                                     BP_CreateRoom_SelectedMapName;                            // 0x03E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CreateRoom_SelectedWeatherName;                        // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CreateRoom_IsAnchor;                                   // 0x03FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x03FD(0x0003) MISSED OFFSET
	int                                                BP_CreateRoom_MapID;                                      // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RoomCreateBuckleBulletInfo       BP_STRUCT_RoomCreateBuckleBulletInfo;                     // 0x0404(0x0004) (Edit, BlueprintVisible)
	struct FString                                     BP_CreateRoom_TeamModeName;                               // 0x0408(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_RoomCreateCustomNumList;                         // 0x0414(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_RoomCreateWeatherModeIDList;                     // 0x0420(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CreateRoom_RoomModeName;                               // 0x042C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RoomCreateFirstTypeInfo          BP_STRUCT_RoomCreateFirstTypeInfo;                        // 0x0438(0x000C) (Edit, BlueprintVisible)
	struct FString                                     BP_CreateRoom_Name;                                       // 0x0444(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_RoomCreatePlayMethodList;                        // 0x0450(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_RoomCreateFirstTypeInfo>  BP_ARRAY_RoomCreateFirstTypeList;                         // 0x045C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CreateRoom_IsFPP;                                      // 0x0468(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0469(0x0003) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_RoomCreateMapNameList;                           // 0x046C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CreateRoom_MapName;                                    // 0x0478(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CreateRoom_PlayerNumMin;                               // 0x0484(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CreateRoom_CurCustomNum;                               // 0x0488(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RoomCreateSoundVisualInfo        BP_STRUCT_RoomCreateSoundVisualInfo;                      // 0x048C(0x0004) (Edit, BlueprintVisible)
	struct FString                                     BP_CreateRoom_PlayMethod;                                 // 0x0490(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CreateRoom_RoomModeDesc;                               // 0x049C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CreateRoom_RoomCardInfo;                               // 0x04A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CreateRoom_IsLocked;                                   // 0x04B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x04B5(0x0003) MISSED OFFSET
	int                                                BP_CreateRoom_PlayerNum;                                  // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_RoomCreateCommonSwitchParaInfo   BP_STRUCT_RoomCreateCommonSwitchParaInfo;                 // 0x04BC(0x0004) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_room_create.bp_room_create_C");
		return pStaticClass;
	}


	void EventResetRoomAdvancedCustomPara_NoFetch();
	void EventResetRoomAdvancedCustomPara();
	void EventSelectPerspective_NoFetch();
	void EventSelectPerspective();
	void EventSaveParaInRoom_NoFetch();
	void EventSaveParaInRoom();
	void EventRefreshCurRoomCardInfo_NoFetch();
	void EventRefreshCurRoomCardInfo();
	void EventSetResetAndSaveBtnEnable_NoFetch();
	void EventSetResetAndSaveBtnEnable();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventCreateRoom_NoFetch();
	void EventCreateRoom();
	void EventRoomCreateRelease_NoFetch();
	void EventRoomCreateRelease();
	void EventSetPSWOK_NoFetch();
	void EventSetPSWOK();
	void EventOpenRoomModeChatUI_NoFetch();
	void EventOpenRoomModeChatUI();
	void EventCloseRoomModeChatUI_NoFetch();
	void EventCloseRoomModeChatUI();
	void EventModifyVariable_NoFetch();
	void EventModifyVariable();
	void EventAdjustParaDisableOnThisMode_NoFetch();
	void EventAdjustParaDisableOnThisMode();
	void EventAdjustParaOnlyRoomMaster_NoFetch();
	void EventAdjustParaOnlyRoomMaster();
	void EventAdjustParaDisableInRoom_NoFetch();
	void EventAdjustParaDisableInRoom();
	void EventSetSaveBtnEnable_NoFetch();
	void EventSetSaveBtnEnable();
	void EventCreateRoomCheckNameEmpty_NoFetch();
	void EventCreateRoomCheckNameEmpty();
	void EventClickMode_NoFetch();
	void EventClickMode();
	void EventSelectMap_NoFetch();
	void EventSelectMap();
	void EventSelectPlayMethod_NoFetch();
	void EventSelectPlayMethod();
	void EventSelectWeatherMode_NoFetch();
	void EventSelectWeatherMode();
	void EventSelectTeamMode_NoFetch();
	void EventSelectTeamMode();
	void UserConstructionScript();
};


}

