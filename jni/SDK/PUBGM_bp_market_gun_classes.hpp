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

// ScriptBlueprintGeneratedClass bp_market_gun.bp_market_gun_C
// 0x0028 (0x02F8 - 0x02D0)
class Abp_market_gun_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_MarketGunDetailSelectGunIdx;                           // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketGunDetailSelectGunResId;                         // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketGunDetailSelectGunMarketId;                      // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MarketGunDetailSelectGunName;                          // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_MarketGun_ReloadDonotJump;                             // 0x02EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketGun_CurHumanHoldWeapon;                          // 0x02ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02EE(0x0002) MISSED OFFSET
	int                                                BP_MarketGunSelectGunResId;                               // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_gun.bp_market_gun_C");
		return pStaticClass;
	}


	void EventMarketGunUIEquipWeapon_NoFetch();
	void EventMarketGunUIEquipWeapon();
	void EventMarketGunDetailUIRelease_NoFetch();
	void EventMarketGunDetailUIRelease();
	void EventMarketGunUISelectGun_NoFetch();
	void EventMarketGunUISelectGun();
	void EventMarketGunUISelect_NoFetch();
	void EventMarketGunUISelect();
	void EventMarketGunUIUnEquipWeapon_NoFetch();
	void EventMarketGunUIUnEquipWeapon();
	void EventMarketGunUIBuy_NoFetch();
	void EventMarketGunUIBuy();
	void UserConstructionScript();
};


}

