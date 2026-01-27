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

// ScriptBlueprintGeneratedClass bp_market_goods.bp_market_goods_C
// 0x0030 (0x0300 - 0x02D0)
class Abp_market_goods_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_MarketGoodsSelectTypeIdx;                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_MarketDropItem>           BP_ARRAY_MarketDropList;                                  // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MarketGoods_ReloadDonotJump;                           // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	struct FBP_STRUCT_MarketDropItem                   BP_STRUCT_MarketDropItem;                                 // 0x02E8(0x0010) (Edit, BlueprintVisible)
	int                                                BP_MarketGoodsSelectIdx;                                  // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_goods.bp_market_goods_C");
		return pStaticClass;
	}


	void EventMarketGoodsUIBuy_NoFetch();
	void EventMarketGoodsUIBuy();
	void EventMarketGoodsUISelect_NoFetch();
	void EventMarketGoodsUISelect();
	void EventMarketGoodsUISelectType_NoFetch();
	void EventMarketGoodsUISelectType();
	void UserConstructionScript();
};


}

