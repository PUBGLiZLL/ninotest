#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_weekend_revelry_superaward.bp_weekend_revelry_superaward_C
// 0x000C (0x02DC - 0x02D0)
class Abp_weekend_revelry_superaward_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_WeekendRevelrySuperaward_Info    BP_STRUCT_WeekendRevelrySuperaward_Info;                  // 0x02D4(0x0004) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_weekend_revelry_superaward.bp_weekend_revelry_superaward_C");
		return pStaticClass;
	}


	void EventShareClicked_NoFetch();
	void EventShareClicked();
	void UserConstructionScript();
};


}

