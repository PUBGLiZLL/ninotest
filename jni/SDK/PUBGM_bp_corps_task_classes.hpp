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

// ScriptBlueprintGeneratedClass bp_corps_task.bp_corps_task_C
// 0x00AC (0x037C - 0x02D0)
class Abp_corps_task_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsTaskActiveAwardInfo> BP_ARRAY_CorpsTaskActiveAwardInfos;                       // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsTaskStarNum;                                      // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsTaskDropItem                BP_STRUCT_CorpsTaskDropItem;                              // 0x02E4(0x000C) (Edit, BlueprintVisible)
	int                                                BP_CorpsTaskActiveNum;                                    // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsTaskInfo                    BP_STRUCT_CorpsTaskInfo;                                  // 0x02F4(0x0020) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_TaskCorpsCategory>        BP_ARRAY_TaskCorpsInfos;                                  // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CorpsTaskCurrentOperateAwardId;                        // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsTaskActiveAwardItem         BP_STRUCT_CorpsTaskActiveAwardItem;                       // 0x0324(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_TaskCorpsCategory                BP_STRUCT_TaskCorpsCategory;                              // 0x033C(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CorpsTaskDropItem>        BP_ARRAY_CorpsTaskCurrDropList;                           // 0x034C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CorpsTaskActiveAwardInfo         BP_STRUCT_CorpsTaskActiveAwardInfo;                       // 0x0358(0x0018) (Edit, BlueprintVisible)
	bool                                               BP_CorpsTaskHasRedPoint;                                  // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0371(0x0003) MISSED OFFSET
	int                                                BP_CorpsTaskCurrentOperateTaskId;                         // 0x0374(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_task.bp_corps_task_C");
		return pStaticClass;
	}


	void EventCorpsTaskGetActivenessReward_Push_NoFetch();
	void EventCorpsTaskGetActivenessReward_Push();
	void EventCorpsTaskGetReward_Push_NoFetch();
	void EventCorpsTaskGetReward_Push();
	void EventCorpsTaskShowRewardDetailPopup_Push_NoFetch();
	void EventCorpsTaskShowRewardDetailPopup_Push();
	void EventCorpsTaskGenTaskRewardData_Push_NoFetch();
	void EventCorpsTaskGenTaskRewardData_Push();
	void EventCorpsTaskGoTo_Push_NoFetch();
	void EventCorpsTaskGoTo_Push();
	void EventCorpsTaskClickAwarded_Push_NoFetch();
	void EventCorpsTaskClickAwarded_Push();
	void UserConstructionScript();
};


}

