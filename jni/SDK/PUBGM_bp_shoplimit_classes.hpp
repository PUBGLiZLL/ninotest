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

// ScriptBlueprintGeneratedClass bp_shoplimit.bp_shoplimit_C
// 0x0074 (0x0344 - 0x02D0)
class Abp_shoplimit_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_ShopLimitInfo>            BP_ARRAY_ShopLimitList;                                   // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShopLimitInfo                    BP_STRUCT_ShopLimitInfo;                                  // 0x02E0(0x005C) (Edit, BlueprintVisible)
	int                                                BP_ShopLimitBuyId;                                        // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_shoplimit.bp_shoplimit_C");
		return pStaticClass;
	}


	void EventShopLimitInitData_NoFetch();
	void EventShopLimitInitData();
	void EventShopLimitBuy_Push_NoFetch();
	void EventShopLimitBuy_Push();
	void EventShopLimitShowUI_NoFetch();
	void EventShopLimitShowUI();
	void UserConstructionScript();
};


}

