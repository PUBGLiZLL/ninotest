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

// ScriptBlueprintGeneratedClass bp_activity_watertree.bp_activity_watertree_C
// 0x0028 (0x02F8 - 0x02D0)
class Abp_activity_watertree_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_WaterTreeAwardInfo               BP_STRUCT_WaterTreeAwardInfo;                             // 0x02D4(0x000C) (Edit, BlueprintVisible)
	TArray<int>                                        BP_ARRAY_WaterTreeIndex;                                  // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WaterTreeProgress;                                     // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WaterTreeAwardStatus;                                  // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_activity_watertree.bp_activity_watertree_C");
		return pStaticClass;
	}


	void EventWaterTreeGetAward_NoFetch();
	void EventWaterTreeGetAward();
	void UserConstructionScript();
};


}

