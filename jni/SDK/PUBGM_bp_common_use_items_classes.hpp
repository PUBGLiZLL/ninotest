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

// ScriptBlueprintGeneratedClass bp_common_use_items.bp_common_use_items_C
// 0x0068 (0x0338 - 0x02D0)
class Abp_common_use_items_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Common_Use_Items_UseCount;                             // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Common_Use_Items_Amount;                               // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Common_Use_Items_resID;                                // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Common_Use_Items_Desc;                                 // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Common_Use_Items_DropItem_ID;                          // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Common_Use_Items_DropCount;                            // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Common_Buy_Items_CostItemId;                           // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Common_HasLimitTime;                                   // 0x0300(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0301(0x0003) MISSED OFFSET
	struct FBP_STRUCT_CorpsShopBuyTimeToggleState      BP_STRUCT_CorpsShopBuyTimeToggleState;                    // 0x0304(0x0008) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CorpsShopBuyTimeToggleState> BP_ARRAY_CorpsShopBuyTimeToggleStates;                    // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Common_Use_Items_CorpsShopSelectDayToggleIdx;          // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Common_Use_Items_LongDescID;                           // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Common_Buy_Items_Cost;                                 // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Common_Use_Items_Name;                                 // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Common_Use_Items_DlgType;                              // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0334(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_use_items.bp_common_use_items_C");
		return pStaticClass;
	}


	void EventCommonUseItemsOnOkClick_NoFetch();
	void EventCommonUseItemsOnOkClick();
	void EventCorpsShopSelectDayToggle_NoFetch();
	void EventCorpsShopSelectDayToggle();
	void EventCommonUseItemBeyondMax_NoFetch();
	void EventCommonUseItemBeyondMax();
	void EventCommonUpdateUseCount_NoFetch();
	void EventCommonUpdateUseCount();
	void UserConstructionScript();
};


}

