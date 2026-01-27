#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:48 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_season_passupgrade.bp_season_passupgrade_C
// 0x0014 (0x02E4 - 0x02D0)
class Abp_season_passupgrade_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SeasonPassUpgradeLevel;                                // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SeasonPassUpgradeType;                                 // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SeasonPassUpgradeID;                                   // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_season_passupgrade.bp_season_passupgrade_C");
		return pStaticClass;
	}


	void EventSeasonPassUpgradeClose_NoFetch();
	void EventSeasonPassUpgradeClose();
	void EventSeasonPassUpgradeForward_NoFetch();
	void EventSeasonPassUpgradeForward();
	void UserConstructionScript();
};


}

