#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_wardrobe.bp_wardrobe_C
// 0x01FC (0x04CC - 0x02D0)
class Abp_wardrobe_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Wardrobe_UseButtonText;                                // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_String_Wardrobe_RemainTime;                            // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_Wardrobe_PageRedPoint;                           // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_Wardrobe_GunType;                                // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WARDROBE_Jump_Item_resID;                              // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Wardrobe_IsShowDecomposeButton;                        // 0x0308(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0309(0x0003) MISSED OFFSET
	int                                                BP_Wardrobe_Closet_Max_Count;                             // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Wardrobe_ResetAvatar_ShowRedPoint;                     // 0x0310(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0311(0x0003) MISSED OFFSET
	struct FString                                     BP_WardrobeGold;                                          // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Wardrobe_IsShowAvatarInBattle;                         // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	struct FString                                     BP_Sell_id;                                               // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Wardrobe_Op_Emoj;                                      // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_CurPageTabIcon;                                  // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Wardrobe_ClickGun;                                     // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Wardrobe_ClickGunSkin;                                 // 0x034C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Wardrobe_PutOnCurrentGun;                              // 0x0358(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_Wardrobe_GunResInfo>      BP_ARRAY_Wardrobe_GunResInfoList;                         // 0x035C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Wardrobe_GunTab_Toogle;                                // 0x0368(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x0369(0x0003) MISSED OFFSET
	struct FBP_STRUCT_Wardrobe_Changed_GunResInfo      BP_STRUCT_Wardrobe_Changed_GunResInfo;                    // 0x036C(0x0008) (Edit, BlueprintVisible)
	int                                                BP_Wardrobe_Op_Emoj_Slot;                                 // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Wardrobe_DecomposeItemInsID;                           // 0x0378(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Wardrobe_IsShowJumpToExchange;                         // 0x0384(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0385(0x0003) MISSED OFFSET
	int                                                BP_Wardrobe_Closet_Select_Index;                          // 0x0388(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Wardrobe_Closet_Select_IndexChinese;                   // 0x038C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Wardrobe_Closet_SelectSave_Index;                      // 0x0398(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Wardrobe_Closet_SelectSave_IndexChinese;               // 0x039C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_Wardrobe_ClosetList;                             // 0x03A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WardrobeClosetItem               BP_STRUCT_WardrobeClosetItem;                             // 0x03B4(0x0008) (Edit, BlueprintVisible)
	int                                                BP_Wardrobe_Emoj_Slots_Max;                               // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_WardrobeClosetItem>       BP_ARRAY_WardrobeClosetSelectList;                        // 0x03C0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Wardrobe_BG_showPutOn;                                 // 0x03CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x03CD(0x0003) MISSED OFFSET
	int                                                BP_Wardrobe_CurrentGunType;                               // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             BP_ARRAY_Wardrobe_Emoj_Slots;                             // 0x03D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WardrobeItemInfo                 BP_STRUCT_WardrobeItemInfo;                               // 0x03E0(0x002C) (Edit, BlueprintVisible)
	struct FString                                     BP_WardrobeDiamond;                                       // 0x040C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_Wardrobe_IsShowUseButton;                              // 0x0418(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0419(0x0003) MISSED OFFSET
	struct FString                                     BP_Wardrobe_GunSkinUID;                                   // 0x041C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurTabType;                                            // 0x0428(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Wardrobe_GunID;                                        // 0x042C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Wardrobe_BG_resID;                                     // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_WardrobeItemInfo>         BP_ARRAY_Wardrobe_SourceBookItemList;                     // 0x0434(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChangePageTabType;                                     // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CurPageTabType;                                        // 0x0444(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_WardrobeItemInfo>         BP_ARRAY_WardrobeItemList;                                // 0x0448(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WardrobeClickedItemData          BP_STRUCT_WardrobeClickedItemData;                        // 0x0454(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_WardrobeChangedItemData          BP_STRUCT_WardrobeChangedItemData;                        // 0x0484(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Wardrobe_GunResInfo              BP_STRUCT_Wardrobe_GunResInfo;                            // 0x04B4(0x0008) (Edit, BlueprintVisible)
	TArray<int>                                        BP_ARRAY_Wardrobe_TabRedPoint;                            // 0x04BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_wardrobe.bp_wardrobe_C");
		return pStaticClass;
	}


	void EventWardrobeSell_NoFetch();
	void EventWardrobeSell();
	void EventWardrobeClosetCloseSaveTheme_NoFetch();
	void EventWardrobeClosetCloseSaveTheme();
	void EventChangeWardrodbeTab_NoFetch();
	void EventChangeWardrodbeTab();
	void EventOpenWardrobeAvatarResetPanel_NoFetch();
	void EventOpenWardrobeAvatarResetPanel();
	void EventWardrobeOnClickAvatarShowInBattle_NoFetch();
	void EventWardrobeOnClickAvatarShowInBattle();
	void EventWardrobeClickJumpToExchange_NoFetch();
	void EventWardrobeClickJumpToExchange();
	void EventWardrobeEquipEmoj_NoFetch();
	void EventWardrobeEquipEmoj();
	void EventWardrobeRefreshEmojSlots_NoFetch();
	void EventWardrobeRefreshEmojSlots();
	void EventWardrobeUnequipEmoj_NoFetch();
	void EventWardrobeUnequipEmoj();
	void EventWardrobeClosetSaveTheme_NoFetch();
	void EventWardrobeClosetSaveTheme();
	void EventWardrobeClickGun_NoFetch();
	void EventWardrobeClickGun();
	void EventWardrobeClickJump_NoFetch();
	void EventWardrobeClickJump();
	void EventWardrobeOnPutOnGunStateChange_NoFetch();
	void EventWardrobeOnPutOnGunStateChange();
	void EventWardrobeGunTypeChanged_NoFetch();
	void EventWardrobeGunTypeChanged();
	void EventWardrobeClosetOpened_NoFetch();
	void EventWardrobeClosetOpened();
	void EventWardrobeClosetClosed_NoFetch();
	void EventWardrobeClosetClosed();
	void EventWardrobeClosetOpenSaveTheme_NoFetch();
	void EventWardrobeClosetOpenSaveTheme();
	void EventWardrobeClosetSaveThemeSelectChanged_NoFetch();
	void EventWardrobeClosetSaveThemeSelectChanged();
	void EventWardrobeClosetApplyTheme_NoFetch();
	void EventWardrobeClosetApplyTheme();
	void EventWardrobeClickDecomposeItem_NoFetch();
	void EventWardrobeClickDecomposeItem();
	void EventHideWardrodbe_NoFetch();
	void EventHideWardrodbe();
	void EventWardrobeOnClickBatchDecompose_NoFetch();
	void EventWardrobeOnClickBatchDecompose();
	void EventWardrobeClosetSelectChanged_NoFetch();
	void EventWardrobeClosetSelectChanged();
	void EventWardrobeOnClickAvatarShowHelp_NoFetch();
	void EventWardrobeOnClickAvatarShowHelp();
	void EventWardrobePlayEmoj_NoFetch();
	void EventWardrobePlayEmoj();
	void EventWardrobeClickItem_NoFetch();
	void EventWardrobeClickItem();
	void UserConstructionScript();
};


}

