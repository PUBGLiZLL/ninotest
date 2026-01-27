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

// ScriptBlueprintGeneratedClass bp_come_back.bp_come_back_C
// 0x00B0 (0x0380 - 0x02D0)
class Abp_come_back_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_ComeBack_IsShowClose;                                  // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	int                                                BP_ComeBack_PanelType;                                    // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ComeBack_AwardItemData           BP_STRUCT_ComeBack_AwardItemData;                         // 0x02DC(0x000C) (Edit, BlueprintVisible)
	struct FString                                     BP_ComeBack_PlayerName;                                   // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ComeBack_LoginGiftSubPanel> BP_ARRAY_ComeBack_LoginGiftSubPanelList;                  // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ComeBack_AwardItemData>   BP_ARRAY_ComeBack_FirstGameGiftList;                      // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_ComeBack_FriendSelectd;                          // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ComeBack_AwardItemData>   BP_ARRAY_ComeBack_TaskAwardPreview;                       // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ComeBack_NotifyFriendData        BP_STRUCT_ComeBack_NotifyFriendData;                      // 0x0324(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ComeBack_LoginGiftSubPanel       BP_STRUCT_ComeBack_LoginGiftSubPanel;                     // 0x0354(0x0018) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ComeBack_NotifyFriendData> BP_ARRAY_ComeBack_FriendList;                             // 0x036C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ComeBack_LeaveDayCount;                                // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_come_back.bp_come_back_C");
		return pStaticClass;
	}


	void EventComeBackClickJumpToTask_NoFetch();
	void EventComeBackClickJumpToTask();
	void EventComeBackClickClose_NoFetch();
	void EventComeBackClickClose();
	void EventComeBackClickGetAward_NoFetch();
	void EventComeBackClickGetAward();
	void EventComeBackClickGetLoginGift_NoFetch();
	void EventComeBackClickGetLoginGift();
	void EventComeBackClickNotifyFriends_NoFetch();
	void EventComeBackClickNotifyFriends();
	void EventComeBackClickPlayNow_NoFetch();
	void EventComeBackClickPlayNow();
	void UserConstructionScript();
};


}

