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

// ScriptBlueprintGeneratedClass bp_shop_gift.bp_shop_gift_C
// 0x0230 (0x0500 - 0x02D0)
class Abp_shop_gift_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_Shop_Gift_Money_Enough;                                // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_FriendProfile_ForGift>    BP_Array_Shop_Gift_FriendSearch_Data;                     // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Shop_Gift_Item_Info              BP_STRUCT_Shop_Gift_Item_Info;                            // 0x02E4(0x0040) (Edit, BlueprintVisible)
	struct FString                                     BP_Shop_Gift_Search_Word;                                 // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_FriendProfile_ForGift            BP_STRUCT_FriendProfile_ForGift;                          // 0x0330(0x0178) (Edit, BlueprintVisible)
	struct FBP_STRUCT_FriendProfile_Gift_Select        BP_STRUCT_FriendProfile_Gift_Select;                      // 0x04A8(0x0044) (Edit, BlueprintVisible)
	int                                                BP_Shop_Gift_Opr_Type;                                    // 0x04EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_FriendProfile_ForGift>    BP_Array_Shop_Gift_FriendData;                            // 0x04F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x04FC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_shop_gift.bp_shop_gift_C");
		return pStaticClass;
	}


	void EventGiftSwitchToSendPanel_NoFetch();
	void EventGiftSwitchToSendPanel();
	void EventGiftUISearch_NoFetch();
	void EventGiftUISearch();
	void EventGiftUIPushDataFunc_NoFetch();
	void EventGiftUIPushDataFunc();
	void EventGiftUIClose_NoFetch();
	void EventGiftUIClose();
	void EventGiftUISendOrWant_NoFetch();
	void EventGiftUISendOrWant();
	void UserConstructionScript();
};


}

