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

// ScriptBlueprintGeneratedClass bp_corps_guide.bp_corps_guide_C
// 0x0008 (0x02D8 - 0x02D0)
class Abp_corps_guide_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02D4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_guide.bp_corps_guide_C");
		return pStaticClass;
	}


	void EventCorpsGuideOnClickRefuse_NoFetch();
	void EventCorpsGuideOnClickRefuse();
	void EventCorpsGuideOnClickAgree_NoFetch();
	void EventCorpsGuideOnClickAgree();
	void UserConstructionScript();
};


}

