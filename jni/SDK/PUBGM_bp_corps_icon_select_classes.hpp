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

// ScriptBlueprintGeneratedClass bp_corps_icon_select.bp_corps_icon_select_C
// 0x002C (0x02FC - 0x02D0)
class Abp_corps_icon_select_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CorpsIconData                    BP_STRUCT_CorpsIconData;                                  // 0x02D4(0x0014) (Edit, BlueprintVisible)
	int                                                BP_CorpsIconCurUseId;                                     // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsIconData>            BP_ARRAY_CorpsIconList;                                   // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_icon_select.bp_corps_icon_select_C");
		return pStaticClass;
	}


	void EventCorpsIconSelectUIFetchInfo_NoFetch();
	void EventCorpsIconSelectUIFetchInfo();
	void EventCorpsIconSelectUIClose_NoFetch();
	void EventCorpsIconSelectUIClose();
	void EventOnCorpsIconSelectClicked_NoFetch();
	void EventOnCorpsIconSelectClicked();
	void UserConstructionScript();
};


}

