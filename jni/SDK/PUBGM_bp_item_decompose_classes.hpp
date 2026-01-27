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

// ScriptBlueprintGeneratedClass bp_item_decompose.bp_item_decompose_C
// 0x00A4 (0x0374 - 0x02D0)
class Abp_item_decompose_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_ItemDecomposeTab>         BP_ARRAY_ItemDecomposeTab;                                // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ItemDecompose_SetIndex;                                // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_DecomposeItem>            BP_ARRAY_DecomposeItemList;                               // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ItemDecomposeTab                 BP_STRUCT_ItemDecomposeTab;                               // 0x02F0(0x0014) (Edit, BlueprintVisible)
	bool                                               BP_ItemDecompose_IsCanDecompose;                          // 0x0304(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0305(0x0003) MISSED OFFSET
	struct FBP_STRUCT_DecomposeItem                    BP_STRUCT_DecomposeItem;                                  // 0x0308(0x0044) (Edit, BlueprintVisible)
	int                                                BP_ItemDecompose_DropItemID;                              // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ItemDecompose_AwardIcon;                               // 0x0350(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ItemDecompose_TabIndex;                                // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ItemDecompose_Reward;                                  // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_ItemDecompose_IsReLoadList;                            // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ItemDecompose_IsAllIn;                                 // 0x036D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x036E(0x0002) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_item_decompose.bp_item_decompose_C");
		return pStaticClass;
	}


	void EventItemDecomposeItemChoose_NoFetch();
	void EventItemDecomposeItemChoose();
	void EventItemDecomposeOneItemAdd_NoFetch();
	void EventItemDecomposeOneItemAdd();
	void EventItemDecomposeAniOver_NoFetch();
	void EventItemDecomposeAniOver();
	void EventItemDecompose_NoFetch();
	void EventItemDecompose();
	void EventItemDecomposeUIUpdate_NoFetch();
	void EventItemDecomposeUIUpdate();
	void EventItemDecomposeOneItemDec_NoFetch();
	void EventItemDecomposeOneItemDec();
	void EventItemDecomposeOneItemMax_NoFetch();
	void EventItemDecomposeOneItemMax();
	void EventItemDecomposeAllIn_NoFetch();
	void EventItemDecomposeAllIn();
	void EventItemDecomposeUIHide_NoFetch();
	void EventItemDecomposeUIHide();
	void UserConstructionScript();
};


}

