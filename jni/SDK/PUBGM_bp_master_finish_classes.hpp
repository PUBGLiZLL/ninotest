#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:46 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_master_finish.bp_master_finish_C
// 0x003C (0x030C - 0x02D0)
class Abp_master_finish_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_MasterFinish_DiscipleDesc;                             // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_MasterFinish_FinishType;                               // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_MasterFinish_MyName;                                   // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterFinish_SignName;                                 // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_MasterFinish_MasterDesc;                               // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0308(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_master_finish.bp_master_finish_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventMasterFinishClose_NoFetch();
	void EventMasterFinishClose();
	void UserConstructionScript();
};


}

