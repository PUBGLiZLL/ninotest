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

// ScriptBlueprintGeneratedClass bp_corps_season_history.bp_corps_season_history_C
// 0x00B4 (0x0384 - 0x02D0)
class Abp_corps_season_history_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_CorpsSeasonRoleInfo              BP_STRUCT_CorpsSeasonRoleInfo;                            // 0x02D4(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsSeasonSummary               BP_STRUCT_CorpsSeasonSummary;                             // 0x0304(0x0008) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CorpsSeasonRecord                BP_STRUCT_CorpsSeasonRecord;                              // 0x030C(0x0064) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CorpsSeasonSummary>       BP_ARRAY_CorpsSeasonSummary;                              // 0x0370(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsSeasonSelected;                                   // 0x037C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_season_history.bp_corps_season_history_C");
		return pStaticClass;
	}


	void EventCorpsSeasonSelected_NoFetch();
	void EventCorpsSeasonSelected();
	void UserConstructionScript();
};


}

