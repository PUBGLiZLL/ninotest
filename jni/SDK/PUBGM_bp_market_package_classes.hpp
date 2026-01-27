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

// ScriptBlueprintGeneratedClass bp_market_package.bp_market_package_C
// 0x004C (0x031C - 0x02D0)
class Abp_market_package_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_MarketPackageUIWearList;                         // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MarketPackageUISelectTypeIdx;                          // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketPackageUI_ChangeItemResId;                       // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketPackageUI_ReloadDonotJump;                       // 0x02E8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E9(0x0003) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_MarketPackageUITypeIconList;                     // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MarketPackageUIBuyIdx;                                 // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketPackageUINotOwn;                                 // 0x02FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	TArray<int>                                        BP_ARRAY_MarketPackageUISelectList;                       // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_MarketPackageUITypeNameList;                     // 0x030C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0318(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_package.bp_market_package_C");
		return pStaticClass;
	}


	void EventMarketPackageUISelect_NoFetch();
	void EventMarketPackageUISelect();
	void EventMarketPackageUIToggleOwn_NoFetch();
	void EventMarketPackageUIToggleOwn();
	void EventMarketPackageUIBuy_NoFetch();
	void EventMarketPackageUIBuy();
	void EventMarketPackageUISelectType_NoFetch();
	void EventMarketPackageUISelectType();
	void UserConstructionScript();
};


}

