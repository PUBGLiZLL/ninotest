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

// ScriptBlueprintGeneratedClass bp_global.bp_global_C
// 0x0168 (0x0438 - 0x02D0)
class Abp_global_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Global_Url_Direction;                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_GlobalConfigTempStringValue;                           // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CHECK_MENU_OPEN_RESULT;                                // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IS_SHOW_2D_CODE;                                       // 0x02E5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02E6(0x0002) MISSED OFFSET
	int                                                BP_UIElem_SaveTime1;                                      // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_REASON;                                             // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ItemTimeLimitInfo_ExTime;                              // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CHECK_MENU_OPEN_ID;                                    // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IOS_CHECK;                                             // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0301(0x0003) MISSED OFFSET
	struct FString                                     BP_SeasonSwitch_SaveData;                                 // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Platform;                                              // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_FstRechargeState;                               // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_HasMatchTagGuide;                               // 0x0318(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GLOBAL_SET_MENU_OPEN_STATUS;                           // 0x0319(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x031A(0x0002) MISSED OFFSET
	struct FString                                     BP_GLOBAL_USE_ITEM;                                       // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalConfigOperateType;                               // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GLOBAL_SET_MENU_OPEN_ID;                               // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalTips_ItemID;                                     // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Global_Url;                                            // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_GlobalSwitchCameraIndex;                               // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GlobalSwitchLobbyMeshBgIndex;                          // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_Cur_Lobby_Skin_Id;                              // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_Default_CharacterHeadId;                        // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_BA_BUTTON_TYPE;                                        // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_Default_CharacterGender;                        // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_Global_Default_CharacterAvatarList;              // 0x0358(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_GlobalConfigOperateKey;                                // 0x0364(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_played_cg;                                             // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_Last_Lobby_Skin_Id;                             // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_GlobalConfigTempBooleanValue;                          // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	int                                                BP_Global_AvatarPreviewTarget;                            // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_XGClock_Create_Player_TimeStampData;                   // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_GlobalHelpTips_Pos               BP_STRUCT_GlobalHelpTips_Pos;                             // 0x038C(0x0008) (Edit, BlueprintVisible)
	bool                                               BP_NearBy_RedPoint;                                       // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	struct FString                                     BP_Global_SelfUID;                                        // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_YXXY_RedPoint;                                         // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GlobalTips_Pos                   BP_STRUCT_GlobalTips_Pos;                                 // 0x03A8(0x0008) (Edit, BlueprintVisible)
	bool                                               BP_IsAppleAudit;                                          // 0x03B0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x03B1(0x0003) MISSED OFFSET
	int                                                BP_GlobalConfigTempIntValue;                              // 0x03B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GlobalTips_TimeInfo              BP_STRUCT_GlobalTips_TimeInfo;                            // 0x03B8(0x0010) (Edit, BlueprintVisible)
	bool                                               BP_HadPlayAnimation;                                      // 0x03C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03C9(0x0003) MISSED OFFSET
	int                                                BP_BP_ItemTimeLimitInfo_FindId;                           // 0x03CC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_String_ServerTime;                                     // 0x03D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Global_CorpsShopLevelForRedPiont;                      // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Global_ExcitingTourTimeSecForRedPoint;                 // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Global_TouchTitleString;                               // 0x03E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Global_ServerKey;                                      // 0x03F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_StartUpType;                                           // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_GameGender;                                            // 0x0400(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WXYouxiquan_RedPoint;                                  // 0x0404(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_Url_HasToken;                                   // 0x0408(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0409(0x0003) MISSED OFFSET
	int                                                BP_GlobalHelpTips_StringID;                               // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ChatBan;                                               // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_IS_EXTERNAL_CHANNEL;                                   // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData08[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	int                                                BP_UIElem_SaveTime2;                                      // 0x0418(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Global_CloseLocation;                                  // 0x041C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x041D(0x0003) MISSED OFFSET
	float                                              BP_GlobalConfigTempFloatValue_f;                          // 0x0420(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Global_TouchTipString;                                 // 0x0424(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Global_MysticalDivineTimeSecForRedPoint;               // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0434(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_global.bp_global_C");
		return pStaticClass;
	}


	void EventChatBanInfo_NoFetch();
	void EventChatBanInfo();
	void EventAndroidQuitGame_NoFetch();
	void EventAndroidQuitGame();
	void EventGlobalShowTouchTips_Push_NoFetch();
	void EventGlobalShowTouchTips_Push();
	void EventCheckIfMenuOpen_NoFetch();
	void EventCheckIfMenuOpen();
	void EventGlobalGetDefaultCharacterAvatarInfo_NoFetch();
	void EventGlobalGetDefaultCharacterAvatarInfo();
	void EventShowPlatQQVip_NoFetch();
	void EventShowPlatQQVip();
	void EventShowPlatWXStartup_NoFetch();
	void EventShowPlatWXStartup();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventShowPlatQQStartup_NoFetch();
	void EventShowPlatQQStartup();
	void EventGlobalUseItem_NoFetch();
	void EventGlobalUseItem();
	void EventOnLobbyRecoverCamera_NoFetch();
	void EventOnLobbyRecoverCamera();
	void EventSetPlayedCG_NoFetch();
	void EventSetPlayedCG();
	void EventGlobalCloseHelpTips_NoFetch();
	void EventGlobalCloseHelpTips();
	void EventChatCheckBan_NoFetch();
	void EventChatCheckBan();
	void EventOnLobbyMenuOpenStatusReceived_NoFetch();
	void EventOnLobbyMenuOpenStatusReceived();
	void EventSetLobbyMenuOpenStatus_NoFetch();
	void EventSetLobbyMenuOpenStatus();
	void EventConfirmUIElemDownload_NoFetch();
	void EventConfirmUIElemDownload();
	void EventOnLobbyCoverCamera_NoFetch();
	void EventOnLobbyCoverCamera();
	void EventGlobalCloseTouchTips_NoFetch();
	void EventGlobalCloseTouchTips();
	void EventGetItemLimitTimeInfo_NoFetch();
	void EventGetItemLimitTimeInfo();
	void EventGlobalShowItemTips_Push_NoFetch();
	void EventGlobalShowItemTips_Push();
	void EventGlobalShowHelpTips_NoFetch();
	void EventGlobalShowHelpTips();
	void EventSendBAReport_NoFetch();
	void EventSendBAReport();
	void EventGlobalCloseItemTips_NoFetch();
	void EventGlobalCloseItemTips();
	void EventUpdateServerTime_NoFetch();
	void EventUpdateServerTime();
	void EventShowPlatIconTips_NoFetch();
	void EventShowPlatIconTips();
	void EventOnPreviewAvatar_NoFetch();
	void EventOnPreviewAvatar();
	void EventJumpUrl_NoFetch();
	void EventJumpUrl();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

