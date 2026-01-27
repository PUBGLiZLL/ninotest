#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:43 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_login_policy_panel.bp_login_policy_panel_C
// 0x0014 (0x02E4 - 0x02D0)
class Abp_login_policy_panel_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_LoginPolicyBox_Msg;                                    // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_login_policy_panel.bp_login_policy_panel_C");
		return pStaticClass;
	}


	void EventLoginPolicySelectPage1_NoFetch();
	void EventLoginPolicySelectPage1();
	void EventLoginPolicyBoxClickOK_NoFetch();
	void EventLoginPolicyBoxClickOK();
	void EventLoginPolicySelectPage2_NoFetch();
	void EventLoginPolicySelectPage2();
	void UserConstructionScript();
};


}

