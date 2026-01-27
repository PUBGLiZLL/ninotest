#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:49 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_sevendaysfun.bp_sevendaysfun_C
// 0x00AC (0x037C - 0x02D0)
class Abp_sevendaysfun_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SevenDaysFun_ChestProgress;                            // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SevenDaysFun_ChestData>   BP_ARRAY_SevenDaysFun_ChestList;                          // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SevenDaysFun_ChestFinishProgress;                      // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SevenDaysFun_UnlockDayNum;                             // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       BP_ARRAY_SevenDaysFun_DayHotDot;                          // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SevenDayFun_DropData             BP_STRUCT_SevenDayFun_DropData;                           // 0x02F8(0x000C) (Edit, BlueprintVisible)
	struct FBP_STRUCT_SevenDaysFun_TaskItem            BP_STRUCT_SevenDaysFun_TaskItem;                          // 0x0304(0x0028) (Edit, BlueprintVisible)
	int                                                BP_SevenDaysFun_Opt_TaskID;                               // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SevenDaysFun_TabData>     BP_ARRAY_SevenDayFun_Tabs;                                // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SevenDaysFun_remainTime;                               // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SevenDaysFun_CurSelectTab;                             // 0x0348(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_SevenDaysFun_TabData             BP_STRUCT_SevenDaysFun_TabData;                           // 0x034C(0x0010) (Edit, BlueprintVisible)
	int                                                BP_SevenDaysFun_CurSelectDay;                             // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SevenDaysFun_TaskItem>    BP_ARRAY_SevenDaysFun_TaskItemList;                       // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SevenDaysFun_ChestData           BP_STRUCT_SevenDaysFun_ChestData;                         // 0x036C(0x000C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0378(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_sevendaysfun.bp_sevendaysfun_C");
		return pStaticClass;
	}


	void EventSevenDaysFunClickTab_NoFetch();
	void EventSevenDaysFunClickTab();
	void EventSevenDaysFunClickClose_NoFetch();
	void EventSevenDaysFunClickClose();
	void EventSevenDaysFunClickDay_NoFetch();
	void EventSevenDaysFunClickDay();
	void EventSevenDaysFunClickReceive_NoFetch();
	void EventSevenDaysFunClickReceive();
	void EventSevenDaysFunClickGoTo_NoFetch();
	void EventSevenDaysFunClickGoTo();
	void EventSevenDaysFunClickChestShowAward_NoFetch();
	void EventSevenDaysFunClickChestShowAward();
	void EventSevenDaysFunClickChestGetAward_NoFetch();
	void EventSevenDaysFunClickChestGetAward();
	void UserConstructionScript();
};


}

