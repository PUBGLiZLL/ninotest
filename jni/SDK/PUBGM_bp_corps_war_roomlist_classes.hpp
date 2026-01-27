#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:44 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_corps_war_roomlist.bp_corps_war_roomlist_C
// 0x00B0 (0x0380 - 0x02D0)
class Abp_corps_war_roomlist_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_CorpsWarRoomListUI_EnableAutoJoin;                     // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	struct FString                                     BP_CorpsWarRoomlistUI_CurrentOperateRoomID;               // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsWarRoomlistUI_AvatarUID;                          // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsWarRoomListPlayerInfo       BP_STRUCT_CorpsWarRoomListPlayerInfo;                     // 0x02F0(0x0040) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsWarRoomlistRoomData         BP_STRUCT_CorpsWarRoomlistRoomData;                       // 0x0330(0x0038) (Edit, BlueprintVisible)
	int                                                BP_CorpsWarRoomListUI_ShowPlatformInviteBtnClickTime;     // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsWarRoomlistRoomData> BP_ARRAY_CorpsWarRoomList;                                // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CorpsWarRoomListUI_ShowPlatformInviteBtn;              // 0x0378(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0379(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_war_roomlist.bp_corps_war_roomlist_C");
		return pStaticClass;
	}


	void EventCorpsWarRoomlistUIJoinButtonClicked_NoFetch();
	void EventCorpsWarRoomlistUIJoinButtonClicked();
	void EventCorpsWarRoomlistUIQuickJoinButtonClicked_NoFetch();
	void EventCorpsWarRoomlistUIQuickJoinButtonClicked();
	void EventCorpsWarRoomlistUICloseButtonClicked_NoFetch();
	void EventCorpsWarRoomlistUICloseButtonClicked();
	void EventCorpsWarRoomlistUIAvatarButtonClicked_NoFetch();
	void EventCorpsWarRoomlistUIAvatarButtonClicked();
	void EventCorpsWarRoomlistUIPlatformInviteButtonClicked_NoFetch();
	void EventCorpsWarRoomlistUIPlatformInviteButtonClicked();
	void EventCorpsWarRoomlistUIUpdateButtonClicked_NoFetch();
	void EventCorpsWarRoomlistUIUpdateButtonClicked();
	void EventCorpsWarRoomlistUICreateButtonClicked_NoFetch();
	void EventCorpsWarRoomlistUICreateButtonClicked();
	void UserConstructionScript();
};


}

