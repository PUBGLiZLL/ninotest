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

// ScriptBlueprintGeneratedClass bp_market_gun_main.bp_market_gun_main_C
// 0x0040 (0x0310 - 0x02D0)
class Abp_market_gun_main_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_MarketGunSelectTypeIdx;                                // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_MarketGunTypeNameList;                           // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MarketGunSelectGunIdx;                                 // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketGunSelectIdx;                                    // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketGun_ReloadDonotJump;                             // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET
	TArray<struct FString>                             BP_ARRAY_MarketGunItemList;                               // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_MarketGunTypeIconList;                           // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MarketGunMainUI_NotOwn;                                // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x030C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_gun_main.bp_market_gun_main_C");
		return pStaticClass;
	}


	void EventMarketGunMainUIBuy_NoFetch();
	void EventMarketGunMainUIBuy();
	void EventMarketGunMainUISelect_NoFetch();
	void EventMarketGunMainUISelect();
	void EventMarketGunMainUISelectType_NoFetch();
	void EventMarketGunMainUISelectType();
	void EventMarketGunMainUIToggleOwn_NoFetch();
	void EventMarketGunMainUIToggleOwn();
	void EventMarketGunMainUISelectGun_NoFetch();
	void EventMarketGunMainUISelectGun();
	void UserConstructionScript();
};


}

