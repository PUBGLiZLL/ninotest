#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:49 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_shop_gift_msgcenter.bp_shop_gift_msgcenter_C
// 0x0204 (0x04D4 - 0x02D0)
class Abp_shop_gift_msgcenter_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_Shop_GiftRecv>            BP_ARRAY_Shop_GiftRecvList;                               // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Shop_GiftSend>            BP_ARRAY_Shop_GiftSendList;                               // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Gift_MsgCenter_ClickIndex;                             // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Shop_GiftBeg                     BP_STRUCT_Shop_GiftBeg;                                   // 0x02F0(0x0090) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Shop_GiftBeg>             BP_ARRAY_Shop_GiftBegList;                                // 0x0380(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Shop_GiftSend                    BP_STRUCT_Shop_GiftSend;                                  // 0x038C(0x0080) (Edit, BlueprintVisible)
	int                                                BP_Gift_MsgCenter_TabType;                                // 0x040C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Gift_MsgCenter_MyGender;                               // 0x0410(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Gift_MsgCenter_RefuseBeg;                              // 0x0414(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0415(0x0003) MISSED OFFSET
	struct FString                                     BP_Gift_MsgCenter_ClickUid;                               // 0x0418(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Gift_MsgCenter_MyName;                                 // 0x0424(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Shop_GiftRecv                    BP_STRUCT_Shop_GiftRecv;                                  // 0x0430(0x0090) (Edit, BlueprintVisible)
	struct FString                                     BP_Gift_MsgCenter_Uid;                                    // 0x04C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Gift_MsgCenter_IsPlatformFriend;                       // 0x04CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x04CD(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_shop_gift_msgcenter.bp_shop_gift_msgcenter_C");
		return pStaticClass;
	}


	void EventGiftMsgCenterClickBeg_NoFetch();
	void EventGiftMsgCenterClickBeg();
	void EventGiftMsgCenterClickThanks_NoFetch();
	void EventGiftMsgCenterClickThanks();
	void EventGiftMsgCenterClickBegRefuse_NoFetch();
	void EventGiftMsgCenterClickBegRefuse();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventGiftMsgCenterClickRemoveRedPoint_NoFetch();
	void EventGiftMsgCenterClickRemoveRedPoint();
	void EventGiftMsgCenterOpenGiftAnimation_NoFetch();
	void EventGiftMsgCenterOpenGiftAnimation();
	void EventGiftMsgCenterOpenGiftGetView_NoFetch();
	void EventGiftMsgCenterOpenGiftGetView();
	void EventGiftMsgCenterShare_NoFetch();
	void EventGiftMsgCenterShare();
	void EventGiftMsgCenterClickHelpInfo_NoFetch();
	void EventGiftMsgCenterClickHelpInfo();
	void EventGiftMsgCenterClickRecv_NoFetch();
	void EventGiftMsgCenterClickRecv();
	void EventGiftMsgCenterTellFriend_NoFetch();
	void EventGiftMsgCenterTellFriend();
	void EventGiftMsgCenterClickBegAccept_NoFetch();
	void EventGiftMsgCenterClickBegAccept();
	void EventGiftMsgCenterClickSend_NoFetch();
	void EventGiftMsgCenterClickSend();
	void EventGiftMsgCenterClickPlayerInfo_NoFetch();
	void EventGiftMsgCenterClickPlayerInfo();
	void EventGiftMsgCenterJumpMarket_NoFetch();
	void EventGiftMsgCenterJumpMarket();
	void EventGiftMsgCenterRequestGetGift_NoFetch();
	void EventGiftMsgCenterRequestGetGift();
	void EventGiftMsgCenterRequestPlayerInfo_NoFetch();
	void EventGiftMsgCenterRequestPlayerInfo();
	void UserConstructionScript();
};


}

