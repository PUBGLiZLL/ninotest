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

// ScriptBlueprintGeneratedClass bp_common_item_get_panel.bp_common_item_get_panel_C
// 0x0024 (0x02F4 - 0x02D0)
class Abp_common_item_get_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ItemGetPanel_ItemData            BP_STRUCT_ItemGetPanel_ItemData;                          // 0x02D4(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ItemGetPanel_ItemData>    BP_ARRAY_ItemGetPanel_ItemData;                           // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_item_get_panel.bp_common_item_get_panel_C");
		return pStaticClass;
	}


	void EventTryToShowGetPanel_NoFetch();
	void EventTryToShowGetPanel();
	void EventCommonItemGetShowPanel_Push_NoFetch();
	void EventCommonItemGetShowPanel_Push();
	void UserConstructionScript();
};


}

