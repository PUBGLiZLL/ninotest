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

// ScriptBlueprintGeneratedClass bp_setting_selection.bp_setting_selection_C
// 0x0070 (0x0340 - 0x02D0)
class Abp_setting_selection_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_SettingSelectionItemData> BP_ARRAY_SettingSelectionItemList;                        // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SettingSelectionItemData         BP_STRUCT_SettingSelectionItemData;                       // 0x02E0(0x0028) (Edit, BlueprintVisible)
	struct FString                                     BP_Setting_SelectInputName1;                              // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Setting_SelectInputName2;                              // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Setting_SelectCheckName;                               // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SettingSelection_SpellInput;                           // 0x032C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Setting_SelectCheckIndex;                              // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x033C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting_selection.bp_setting_selection_C");
		return pStaticClass;
	}


	void EventSettingSelectionUpload_NoFetch();
	void EventSettingSelectionUpload();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSettingSelectionCheckInput_NoFetch();
	void EventSettingSelectionCheckInput();
	void EventSettingSelectionCheckInputChange_NoFetch();
	void EventSettingSelectionCheckInputChange();
	void EventSettingSelectionCheckName_NoFetch();
	void EventSettingSelectionCheckName();
	void UserConstructionScript();
};


}

