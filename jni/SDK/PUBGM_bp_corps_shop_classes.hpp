#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:45 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_corps_shop.bp_corps_shop_C
// 0x0064 (0x0334 - 0x02D0)
class Abp_corps_shop_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CorpsShopNewHeadpotraitInfo      BP_STRUCT_CorpsShopNewHeadpotraitInfo;                    // 0x02D4(0x0014) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CorpsShopNewClothingInfo> BP_ARRAY_CorpsShopNewClothingInfoList;                    // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsShop_Level;                                       // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsShop_Money;                                       // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsShopCurrentBuyShopItemId;                         // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsShopCurrentClickShopItemId;                       // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsShopNewHeadpotraitInfo> BP_ARRAY_CorpsShopNewHeadpotraitInfoList;                 // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsShopNewClothingInfo         BP_STRUCT_CorpsShopNewClothingInfo;                       // 0x0310(0x0014) (Edit, BlueprintVisible)
	int                                                BP_CorpsShopCurrentBuyShopItemKeyId;                      // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsShopCurrentBuyShopItemNum;                        // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsShopCurrentSelectPageIdx;                         // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_shop.bp_corps_shop_C");
		return pStaticClass;
	}


	void EventCorpsShopUIFetchInfo_Push_NoFetch();
	void EventCorpsShopUIFetchInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSwitchToClothingPage_NoFetch();
	void EventSwitchToClothingPage();
	void EventBuyCorpsShopItem_NoFetch();
	void EventBuyCorpsShopItem();
	void EventClickShowBaoxiangDrop_NoFetch();
	void EventClickShowBaoxiangDrop();
	void EventSwitchToHeadpotraitPage_NoFetch();
	void EventSwitchToHeadpotraitPage();
	void UserConstructionScript();
};


}

