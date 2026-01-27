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

// ScriptBlueprintGeneratedClass bp_corps_war_rank_panel.bp_corps_war_rank_panel_C
// 0x0014 (0x02E4 - 0x02D0)
class Abp_corps_war_rank_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_CORPS_RANK_ITEM_DATA>     BP_ARRAY_CORPS_RANK_ITEM_LIST;                            // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_war_rank_panel.bp_corps_war_rank_panel_C");
		return pStaticClass;
	}


	void EventCorpsWarRankPanelClose_NoFetch();
	void EventCorpsWarRankPanelClose();
	void UserConstructionScript();
};


}

