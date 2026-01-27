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

// ScriptBlueprintGeneratedClass bp_corps_edit.bp_corps_edit_C
// 0x0014 (0x02E4 - 0x02D0)
class Abp_corps_edit_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_corpsAnnouncement;                                     // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_edit.bp_corps_edit_C");
		return pStaticClass;
	}


	void EventCorpsEditShow_NoFetch();
	void EventCorpsEditShow();
	void EventCorpsEditConfirm_Push_NoFetch();
	void EventCorpsEditConfirm_Push();
	void UserConstructionScript();
};


}

