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

// ScriptBlueprintGeneratedClass bp_change_warzone.bp_change_warzone_C
// 0x0018 (0x02E8 - 0x02D0)
class Abp_change_warzone_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ChangeWarZone_curZone;                                 // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ChangeWarZone_Type;                                    // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_change_warzone.bp_change_warzone_C");
		return pStaticClass;
	}


	void EventCheckWarZoneData_NoFetch();
	void EventCheckWarZoneData();
	void EventChangeWarZoneClickOK_NoFetch();
	void EventChangeWarZoneClickOK();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

