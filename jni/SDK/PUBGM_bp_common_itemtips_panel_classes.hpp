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

// ScriptBlueprintGeneratedClass bp_common_itemtips_panel.bp_common_itemtips_panel_C
// 0x0020 (0x02F0 - 0x02D0)
class Abp_common_itemtips_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CommonItemTips_ItemID;                                 // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CommonItemTips_Pos               BP_STRUCT_CommonItemTips_Pos;                             // 0x02D8(0x0008) (Edit, BlueprintVisible)
	struct FString                                     BP_CommonItemTips_OwningText;                             // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_common_itemtips_panel.bp_common_itemtips_panel_C");
		return pStaticClass;
	}


	void EventCommonItemTipsGetOwningText_Push_NoFetch();
	void EventCommonItemTipsGetOwningText_Push();
	void UserConstructionScript();
};


}

