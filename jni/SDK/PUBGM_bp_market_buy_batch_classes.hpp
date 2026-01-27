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

// ScriptBlueprintGeneratedClass bp_market_buy_batch.bp_market_buy_batch_C
// 0x00E0 (0x03B0 - 0x02D0)
class Abp_market_buy_batch_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_MarketBuyBatchItemInfo           BP_STRUCT_MarketBuyBatchItemInfo;                         // 0x02D4(0x00A4) (Edit, BlueprintVisible)
	int                                                BP_MarketBuyBatch_MoneyType2;                             // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_MarketBuyBatchItemInfo>   BP_ARRAY_MarketBuyBatchItemList;                          // 0x037C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MarketBuyBatch_SwitchSelectedItemIndex;                // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketBuyBatch_MoneyPrice1;                            // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketBuyBatch_MoneyType1;                             // 0x0390(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuyBatch_MoneyEnough2;                           // 0x0394(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0395(0x0003) MISSED OFFSET
	int                                                BP_MarketBuyBatch_CheckBoxClickTimeIndex;                 // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuyBatch_BuyBtn_Enable;                          // 0x039C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x039D(0x0003) MISSED OFFSET
	int                                                BP_MarketBuyBatch_MoneyPrice2;                            // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketBuyBatch_CheckBoxClickItemIndex;                 // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketBuyBatch_MoneyEnough1;                           // 0x03A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x03A9(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_buy_batch.bp_market_buy_batch_C");
		return pStaticClass;
	}


	void EventMarketBuyBatchUIOnDisableBuy_NoFetch();
	void EventMarketBuyBatchUIOnDisableBuy();
	void EventMarketBuyBatchUIClose_NoFetch();
	void EventMarketBuyBatchUIClose();
	void EventOnCheckBoxChecked_NoFetch();
	void EventOnCheckBoxChecked();
	void EventOnSwitchItemSelected_NoFetch();
	void EventOnSwitchItemSelected();
	void EventMarketBuyBatchUIOnBuy_NoFetch();
	void EventMarketBuyBatchUIOnBuy();
	void UserConstructionScript();
};


}

