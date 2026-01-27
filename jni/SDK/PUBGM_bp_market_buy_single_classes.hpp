#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:46 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_market_buy_single.bp_market_buy_single_C
// 0x00F0 (0x03C0 - 0x02D0)
class Abp_market_buy_single_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_MarketBuySingle_ItemCount;                             // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MarketBuySingleInfo              BP_STRUCT_MarketBuySingleInfo;                            // 0x02E0(0x00B8) (Edit, BlueprintVisible)
	struct FString                                     BP_MarketBuySingle_TotalPrice;                            // 0x0398(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MarketBuySingle_GiftMoneyEnough;                       // 0x03A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03A5(0x0003) MISSED OFFSET
	int                                                BP_MarketBuySingle_Checked_Index;                         // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuySingle_GiftBtn_Visible;                       // 0x03AC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuySingle_BuyBtn_Enable;                         // 0x03AD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuySingle_GiftBtn_Enable;                        // 0x03AE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuySingle_MoneyEnough;                           // 0x03AF(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MarketBuySingle_GiftPrice;                             // 0x03B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_buy_single.bp_market_buy_single_C");
		return pStaticClass;
	}


	void EventMarketBuySingleCheckBoxStateChanged_NoFetch();
	void EventMarketBuySingleCheckBoxStateChanged();
	void EventMarketBuySingleUIOnDisableGift_NoFetch();
	void EventMarketBuySingleUIOnDisableGift();
	void EventMarketBuySingleUIClose_NoFetch();
	void EventMarketBuySingleUIClose();
	void EventMarketBuySingleUIOnAdd_NoFetch();
	void EventMarketBuySingleUIOnAdd();
	void EventMarketBuySingleUIOnAddTen_NoFetch();
	void EventMarketBuySingleUIOnAddTen();
	void EventMarketBuySingleUIOnSub_NoFetch();
	void EventMarketBuySingleUIOnSub();
	void EventMarketBuySingleUIOnBuy_NoFetch();
	void EventMarketBuySingleUIOnBuy();
	void EventMarketBuySingleUIOnDisableBuy_NoFetch();
	void EventMarketBuySingleUIOnDisableBuy();
	void EventMarketBuySingleUIOnGift_NoFetch();
	void EventMarketBuySingleUIOnGift();
	void UserConstructionScript();
};


}

