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

// ScriptBlueprintGeneratedClass bp_muster_log.bp_muster_log_C
// 0x0034 (0x0304 - 0x02D0)
class Abp_muster_log_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_MusterLogInfo                    BP_STRUCT_MusterLogInfo;                                  // 0x02D4(0x0020) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MusterLogInfo>            BP_ARRAY_MusterLogList;                                   // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0300(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_muster_log.bp_muster_log_C");
		return pStaticClass;
	}


	void EventMusterLogUIHide_NoFetch();
	void EventMusterLogUIHide();
	void UserConstructionScript();
};


}

