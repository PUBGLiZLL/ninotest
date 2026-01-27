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

// ScriptBlueprintGeneratedClass bp_roleinfo_history.bp_roleinfo_history_C
// 0x008C (0x035C - 0x02D0)
class Abp_roleinfo_history_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_RoleInfoHistoryItem              BP_STRUCT_RoleInfoHistoryItem;                            // 0x02D4(0x0064) (Edit, BlueprintVisible)
	struct FString                                     BP_RoleInfoHistoryShowRecordBattleId;                     // 0x0338(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_RoleInfoCanShowHistory;                                // 0x0344(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0345(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_RoleInfoHistoryItem>      BP_ARRAY_RoleInfoHistoryList;                             // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_RoleInfoHistoryEmptyType;                              // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_roleinfo_history.bp_roleinfo_history_C");
		return pStaticClass;
	}


	void EventRoleInfoHistoryUIClose_NoFetch();
	void EventRoleInfoHistoryUIClose();
	void EventRoleInfoHistorySettingHistory_NoFetch();
	void EventRoleInfoHistorySettingHistory();
	void EventRoleInfoHistoryShowRecord_NoFetch();
	void EventRoleInfoHistoryShowRecord();
	void UserConstructionScript();
};


}

