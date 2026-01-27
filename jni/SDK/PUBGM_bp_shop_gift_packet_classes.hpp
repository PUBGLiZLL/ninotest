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

// ScriptBlueprintGeneratedClass bp_shop_gift_packet.bp_shop_gift_packet_C
// 0x00E4 (0x03B4 - 0x02D0)
class Abp_shop_gift_packet_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_Shop_GiftPack_Data>       BP_ARRAY_GiftPack_PackStyle;                              // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SHOPGIFT_UITYPE;                                       // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Shop_GiftPack_Item_Info          BP_STRUCT_Shop_GiftPack_Item_Info;                        // 0x02E4(0x0098) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Shop_GiftPack_Data               BP_STRUCT_Shop_GiftPack_Data;                             // 0x037C(0x0024) (Edit, BlueprintVisible)
	struct FString                                     BP_SHOPGIFT_CHECKBOX_NAME;                                // 0x03A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_SHOPGIFTPACK_UI_SHOW;                                  // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03AD(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_shop_gift_packet.bp_shop_gift_packet_C");
		return pStaticClass;
	}


	void EventUpdateCheckIdx_NoFetch();
	void EventUpdateCheckIdx();
	void EventGiftPacketUISendGift_NoFetch();
	void EventGiftPacketUISendGift();
	void EventGiftPacketWaiting_NoFetch();
	void EventGiftPacketWaiting();
	void EventAnimationCallBack_NoFetch();
	void EventAnimationCallBack();
	void EventPushValue_NoFetch();
	void EventPushValue();
	void EventOpenSendGiftPanel_NoFetch();
	void EventOpenSendGiftPanel();
	void EventGiftPacketUIRequireGift_NoFetch();
	void EventGiftPacketUIRequireGift();
	void UserConstructionScript();
};


}

