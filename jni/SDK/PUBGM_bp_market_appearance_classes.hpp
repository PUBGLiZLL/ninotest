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

// ScriptBlueprintGeneratedClass bp_market_appearance.bp_market_appearance_C
// 0x0064 (0x0334 - 0x02D0)
class Abp_market_appearance_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_MarketAppearanceUINotOwn;                              // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	int                                                BP_MarketAppearanceUISelectTypeIdx;                       // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_MarketAppearanceUI_AvatarChange_ResId_List;      // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MarketAppearanceUIBuyIdx;                              // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_MarketAppearanceUISelectList;                    // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MarketAppearanceUICurSelectItemNum;                    // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_MarketAppearanceUIWearList;                      // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_MarketAppearanceUI_AvatarModelInfo BP_STRUCT_MarketAppearanceUI_AvatarModelInfo;             // 0x0308(0x0018) (Edit, BlueprintVisible)
	bool                                               BP_MarketAppearanceUI_AvatarPuton;                        // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0321(0x0003) MISSED OFFSET
	int                                                BP_MarketAppearanceUI_AvatarEmoteId;                      // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_MarketAppearanceUI_ChangeWeaponId;                     // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_MarketAppearanceUI_ReloadDonotJump;                    // 0x032C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x032D(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_market_appearance.bp_market_appearance_C");
		return pStaticClass;
	}


	void EventMarketAppearanceUIGetAvatarInfo_NoFetch();
	void EventMarketAppearanceUIGetAvatarInfo();
	void EventMarketAppearanceUIBatchBuy_NoFetch();
	void EventMarketAppearanceUIBatchBuy();
	void EventMarketAppearanceUISelect_NoFetch();
	void EventMarketAppearanceUISelect();
	void EventMarketAppearanceUIResetAvatar_NoFetch();
	void EventMarketAppearanceUIResetAvatar();
	void EventMarketAppearanceUIToggleOwn_NoFetch();
	void EventMarketAppearanceUIToggleOwn();
	void EventMarketAppearanceUISelectType_NoFetch();
	void EventMarketAppearanceUISelectType();
	void EventMarketAppearanceUISwitchGender_NoFetch();
	void EventMarketAppearanceUISwitchGender();
	void EventMarketAppearanceUIBuy_NoFetch();
	void EventMarketAppearanceUIBuy();
	void EventMarketAppearanceUIGetCurrentSelectNum_NoFetch();
	void EventMarketAppearanceUIGetCurrentSelectNum();
	void UserConstructionScript();
};


}

