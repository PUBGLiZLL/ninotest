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

// ScriptBlueprintGeneratedClass bp_armory.bp_armory_C
// 0x0214 (0x04E4 - 0x02D0)
class Abp_armory_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ShortHand                        BP_STRUCT_ShortHand;                                      // 0x02D4(0x0030) (Edit, BlueprintVisible)
	int                                                BP_Current_WeaponType;                                    // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Current_WeaponID;                                      // 0x0308(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Current_ShortHandType;                                 // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Armory_Market_Ticket;                                  // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WeaponSkinInfo                   BP_STRUCT_WeaponSkinInfo;                                 // 0x031C(0x0070) (Edit, BlueprintVisible)
	int                                                BP_Last_SelectSkinID;                                     // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ShortHand_Menu>           BP_ARRAY_ShortHand_MenuData;                              // 0x0390(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Armory_Market_Diamond;                                 // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Current_SelectSkinID;                                  // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ShortHand>                BP_ARRAY_ShortHandData;                                   // 0x03AC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ShortHand_Menu                   BP_STRUCT_ShortHand_Menu;                                 // 0x03B8(0x0018) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_WeaponSkinInfo>           BP_ARRAY_WeaponSkinData;                                  // 0x03D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Armory_Isopen;                                         // 0x03DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_WeaponAttr                       BP_STRUCT_WeaponAttr;                                     // 0x03E0(0x002C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Weapon_FirstMenu>         BP_ARRAY_Weapon_FirstMenuData;                            // 0x040C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Weapon_SecMenu>           BP_ARRAY_Weapon_SecMenuData;                              // 0x0418(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Weapon_FirstMenu                 BP_STRUCT_Weapon_FirstMenu;                               // 0x0424(0x0024) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ShortHand>                BP_ARRAY_CurrentShortHandEquip;                           // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WeaponDetailInfo                 BP_STRUCT_WeaponDetailInfo;                               // 0x0454(0x0044) (Edit, BlueprintVisible)
	int                                                BP_Current_ShortHandID;                                   // 0x0498(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_Weapon_SecMenu                   BP_STRUCT_Weapon_SecMenu;                                 // 0x049C(0x0038) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_WeaponAttr>               BP_ARRAY_WeaponAttrData;                                  // 0x04D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_armory.bp_armory_C");
		return pStaticClass;
	}


	void EventclickSkinShortHandItem_NoFetch();
	void EventclickSkinShortHandItem();
	void EventTestPutonEquipment_NoFetch();
	void EventTestPutonEquipment();
	void EventclickArmoryShorHandMenu_NoFetch();
	void EventclickArmoryShorHandMenu();
	void EventclickSkinShortHandMenu_NoFetch();
	void EventclickSkinShortHandMenu();
	void EventclickArmoryShortHandItem_NoFetch();
	void EventclickArmoryShortHandItem();
	void EventclickClearAllEquipment_NoFetch();
	void EventclickClearAllEquipment();
	void EventclickArmoryBuySkin_NoFetch();
	void EventclickArmoryBuySkin();
	void EventArmoryCloseArmoryMainUI_NoFetch();
	void EventArmoryCloseArmoryMainUI();
	void EventArmoryOnRecharge_NoFetch();
	void EventArmoryOnRecharge();
	void EventTestShowWeapon2_NoFetch();
	void EventTestShowWeapon2();
	void EventClickArmorySecMenu_NoFetch();
	void EventClickArmorySecMenu();
	void EventArmoryCloseArmoryMainUIEnter_NoFetch();
	void EventArmoryCloseArmoryMainUIEnter();
	void EventTestShowWeapon3_NoFetch();
	void EventTestShowWeapon3();
	void EventArmoryOpenArmoryMainUIEnter_NoFetch();
	void EventArmoryOpenArmoryMainUIEnter();
	void EventTestShowWeapon_NoFetch();
	void EventTestShowWeapon();
	void EventClickArmoryFirstMenu_NoFetch();
	void EventClickArmoryFirstMenu();
	void EventTestPutoffEquipment_NoFetch();
	void EventTestPutoffEquipment();
	void UserConstructionScript();
};


}

