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

// ScriptBlueprintGeneratedClass bp_activity_group.bp_activity_group_C
// 0x0080 (0x0350 - 0x02D0)
class Abp_activity_group_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CurrentAcitvityTimeStr;                                // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ActivityGroupInfo>        BP_ARRAY_ActivityInfoSortList;                            // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurrentOperateActivityID;                              // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_CurrentAcitvityState;                                  // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CurrentActivityRedPoint;                               // 0x02FC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02FD(0x0003) MISSED OFFSET
	struct FBP_STRUCT_ActivityGroupInfo                BP_STRUCT_ActivityGroupInfo;                              // 0x0300(0x004C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x034C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_activity_group.bp_activity_group_C");
		return pStaticClass;
	}


	void EventActivityGroupGetItemData_Push_NoFetch();
	void EventActivityGroupGetItemData_Push();
	void EventActivityGroupGoTo_Push_NoFetch();
	void EventActivityGroupGoTo_Push();
	void UserConstructionScript();
};


}

