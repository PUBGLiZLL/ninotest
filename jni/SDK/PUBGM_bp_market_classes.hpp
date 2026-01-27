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

// ScriptBlueprintGeneratedClass bp_market.bp_market_C
// 0x00EC (0x03BC - 0x02D0)
class Abp_market_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Market_CameraIdx;                                      // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Market_Gold;                                           // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Market_Ticket;                                         // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Market_Diamond;                                        // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Market_BgIndex;                                        // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Market_Isopen;                                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_MarketAdvImageItem               BP_STRUCT_MarketAdvImageItem;                             // 0x0304(0x0028) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MarketAdvImageItem>       BP_ARRAY_MarketAdvImageList;                              // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MarketItem                       BP_STRUCT_MarketItem;                                     // 0x0338(0x005C) (Edit, BlueprintVisible)
	struct FString                                     BP_Market_ClosePage;                                      // 0x0394(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Market_OpenPage;                                       // 0x03A0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_MarketItem>               BP_ARRAY_MarketList;                                      // 0x03AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03B8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market.bp_market_C");
		return pStaticClass;
	}


	void EventMarketOpenMarketMainUIEnter_NoFetch();
	void EventMarketOpenMarketMainUIEnter();
	void EventMarketOnClosePage_NoFetch();
	void EventMarketOnClosePage();
	void EventMarketOnClose_NoFetch();
	void EventMarketOnClose();
	void EventMarketOnOpenPage_NoFetch();
	void EventMarketOnOpenPage();
	void EventMarketOnRecharge_NoFetch();
	void EventMarketOnRecharge();
	void EventMarketCloseMarketMainUIEnter_NoFetch();
	void EventMarketCloseMarketMainUIEnter();
	void EventMarketCloseMarketMainUI_NoFetch();
	void EventMarketCloseMarketMainUI();
	void UserConstructionScript();
};


}

