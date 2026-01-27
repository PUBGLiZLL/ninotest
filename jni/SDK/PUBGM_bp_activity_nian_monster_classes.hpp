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

// ScriptBlueprintGeneratedClass bp_activity_nian_monster.bp_activity_nian_monster_C
// 0x0024 (0x02F4 - 0x02D0)
class Abp_activity_nian_monster_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_NianMonster_NowNum;                                    // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_NianMonster_Banger;                                    // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_NianMonster_PreStr;                                    // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_activity_nian_monster.bp_activity_nian_monster_C");
		return pStaticClass;
	}


	void EventNianClickURL_NoFetch();
	void EventNianClickURL();
	void EventOnClickExitActivity_NoFetch();
	void EventOnClickExitActivity();
	void EventNianAfterQuitTeam_NoFetch();
	void EventNianAfterQuitTeam();
	void EventNianHideUI_NoFetch();
	void EventNianHideUI();
	void EventOnClickEnterActivity_NoFetch();
	void EventOnClickEnterActivity();
	void UserConstructionScript();
};


}

