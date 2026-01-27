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

// ScriptBlueprintGeneratedClass bp_corps_base.bp_corps_base_C
// 0x0024 (0x02F4 - 0x02D0)
class Abp_corps_base_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsBase_SelectedIndex;                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       BP_Array_CorpsBaseUI_RedPoint;                            // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<bool>                                       BP_Array_CorpsBaseUI_ShowTab;                             // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_base.bp_corps_base_C");
		return pStaticClass;
	}


	void EventOnAfterHide_NoFetch();
	void EventOnAfterHide();
	void EventCorpsClose_NoFetch();
	void EventCorpsClose();
	void EventOnSelectIndex_NoFetch();
	void EventOnSelectIndex();
	void EventOnAfterShow_NoFetch();
	void EventOnAfterShow();
	void UserConstructionScript();
};


}

