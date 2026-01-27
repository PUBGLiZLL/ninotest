#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_revise_name.bp_revise_name_C
// 0x0014 (0x02E4 - 0x02D0)
class Abp_revise_name_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ReviseRole_Name;                                       // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_revise_name.bp_revise_name_C");
		return pStaticClass;
	}


	void EventReviseNameUIHide_NoFetch();
	void EventReviseNameUIHide();
	void EventReviseNameConfirmModify_NoFetch();
	void EventReviseNameConfirmModify();
	void EventReviseNameFilterName_NoFetch();
	void EventReviseNameFilterName();
	void UserConstructionScript();
};


}

