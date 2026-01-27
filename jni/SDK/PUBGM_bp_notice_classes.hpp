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

// ScriptBlueprintGeneratedClass bp_notice.bp_notice_C
// 0x001C (0x02EC - 0x02D0)
class Abp_notice_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Notice_Type;                                           // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Notice_Index;                                          // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Notice_Scene;                                          // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_notice.bp_notice_C");
		return pStaticClass;
	}


	void EventTryShowMaintenanceNotice_NoFetch();
	void EventTryShowMaintenanceNotice();
	void EventTryShowCommonNotice_NoFetch();
	void EventTryShowCommonNotice();
	void EventShowCommonNotice_NoFetch();
	void EventShowCommonNotice();
	void EventShowSlapNotice_NoFetch();
	void EventShowSlapNotice();
	void EventTryShowSlapNotice_NoFetch();
	void EventTryShowSlapNotice();
	void EventShowNotice_NoFetch();
	void EventShowNotice();
	void EventStopSlap_NoFetch();
	void EventStopSlap();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventDoneNotice_NoFetch();
	void EventDoneNotice();
	void EventMaintenanceNotice_NoFetch();
	void EventMaintenanceNotice();
	void UserConstructionScript();
};


}

