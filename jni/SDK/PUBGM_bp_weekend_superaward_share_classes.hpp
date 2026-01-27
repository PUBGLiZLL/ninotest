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

// ScriptBlueprintGeneratedClass bp_weekend_superaward_share.bp_weekend_superaward_share_C
// 0x000C (0x02DC - 0x02D0)
class Abp_weekend_superaward_share_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_WeekendRevelrySuperawardShare_ShowInfo BP_STRUCT_WeekendRevelrySuperawardShare_ShowInfo;         // 0x02D4(0x0004) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_weekend_superaward_share.bp_weekend_superaward_share_C");
		return pStaticClass;
	}


	void EventShareWeekenSuperawardHide_NoFetch();
	void EventShareWeekenSuperawardHide();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void UserConstructionScript();
};


}

