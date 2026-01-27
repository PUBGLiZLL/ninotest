#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_shop.bp_shop_C
// 0x00B4 (0x0384 - 0x02D0)
class Abp_shop_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_Shop_ItemInfo                    BP_STRUCT_Shop_ItemInfo;                                  // 0x02D4(0x0054) (Edit, BlueprintVisible)
	int                                                BP_SHOP_DIAMOND;                                          // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SHOP_HELP_DESC;                                        // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SelectType;                                            // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SelectSubType;                                         // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_Shop_ItemInfo>            BP_ARRAY_Shop_ItemList;                                   // 0x0340(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Shop_DropInfo                    BP_STRUCT_Shop_DropInfo;                                  // 0x034C(0x0010) (Edit, BlueprintVisible)
	int                                                BP_SHOP_Buy_Shop_Item_ID;                                 // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_Shop_DropInfo>            BP_ARRAY_Look_DropList;                                   // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_SHOP_ISINITING;                                        // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	int                                                BP_SHOP_GOLD;                                             // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SHOP_Avatar_Item_Index;                                // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SHOP_Look_Shop_Item_ID;                                // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SHOP_PutOff_Avatar_Index;                              // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_shop.bp_shop_C");
		return pStaticClass;
	}


	void EventLookItem_NoFetch();
	void EventLookItem();
	void EventRequestBuyItem_NoFetch();
	void EventRequestBuyItem();
	void EventShopChangeAvatar_NoFetch();
	void EventShopChangeAvatar();
	void EventShopHide_NoFetch();
	void EventShopHide();
	void EventGetHelpTip_NoFetch();
	void EventGetHelpTip();
	void EventRequestData_NoFetch();
	void EventRequestData();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

