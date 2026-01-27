#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:44 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_common_item_list.bp_common_item_list_C
// 0x0048 (0x0318 - 0x02D0)
class Abp_common_item_list_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CommonItemList_TitleString;                            // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CommonItemListInfo>       BP_ARRAY_CommonItemListData;                              // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CommonItemList_SelectedIndex;                          // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CommonItemList_SignleIndex;                            // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CommonItemListInfo               BP_STRUCT_CommonItemListInfo;                             // 0x02F4(0x0020) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0314(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_item_list.bp_common_item_list_C");
		return pStaticClass;
	}


	void EventCommonItemListOnClickItem_NoFetch();
	void EventCommonItemListOnClickItem();
	void EventCommonItemListClickClose_NoFetch();
	void EventCommonItemListClickClose();
	void UserConstructionScript();
};


}

