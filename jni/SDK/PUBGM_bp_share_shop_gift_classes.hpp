#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:49 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_share_shop_gift.bp_share_shop_gift_C
// 0x0064 (0x0334 - 0x02D0)
class Abp_share_shop_gift_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ShareGiftRecv                    BP_STRUCT_ShareGiftRecv;                                  // 0x02D4(0x005C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_shop_gift.bp_share_shop_gift_C");
		return pStaticClass;
	}


	void EventShareShopGiftHide_NoFetch();
	void EventShareShopGiftHide();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void UserConstructionScript();
};


}

