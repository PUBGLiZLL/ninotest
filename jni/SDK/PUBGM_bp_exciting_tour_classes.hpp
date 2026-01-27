#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:45 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_exciting_tour.bp_exciting_tour_C
// 0x00A4 (0x0374 - 0x02D0)
class Abp_exciting_tour_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_EXCITING_SCORE_CHANGE;                                 // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_EXCITINGTOUR_AWARD               BP_STRUCT_EXCITINGTOUR_AWARD;                             // 0x02D8(0x0010) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_EXCITINGTOUR_GRIDInfo>    BP_ARRAY_EXCITINGTOUR_MapData;                            // 0x02E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_EXCITING_GET_AWARD_IDX;                                // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_EXCITING_AWARD_NUM;                                    // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_EXCITING_USE_ITEM_NUM;                                 // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_EXCITING_TOTAL_SCORE;                                  // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_EXCITINGTOUR_TIME_STR;                                 // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_EXCITINGTOUR_LOG>         BP_ARRAY_EXCITINGTOUR_LOG_LIST;                           // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_EXCITINGTOUR_AWARD>       BP_ARRAY_EXCITINGTOUR_AWARD_LIST;                         // 0x031C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_EXCITINGTOUR_GRIDInfo            BP_STRUCT_EXCITINGTOUR_GRIDInfo;                          // 0x0328(0x0014) (Edit, BlueprintVisible)
	int                                                BP_EXCITING_DESTINATION_GRID;                             // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_EXCITING_USE_ITEM_ID;                                  // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_EXCITING_RANDOM_CAR_IDX;                               // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_EXCITINGTOUR_LOG                 BP_STRUCT_EXCITINGTOUR_LOG;                               // 0x0348(0x0020) (Edit, BlueprintVisible)
	int                                                BP_EXCITINGTOUR_CURRENT_SHOW_TIME_SEC;                    // 0x0368(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_EXCITING_CURRENT_GRID;                                 // 0x036C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_exciting_tour.bp_exciting_tour_C");
		return pStaticClass;
	}


	void EventExcitingTourAwardClick_NoFetch();
	void EventExcitingTourAwardClick();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventNotEnoughUseItem_NoFetch();
	void EventNotEnoughUseItem();
	void EventExcitingTourDetailClicked_NoFetch();
	void EventExcitingTourDetailClicked();
	void EventExcitingTourShowLogs_NoFetch();
	void EventExcitingTourShowLogs();
	void EventCarRandomToEnd_NoFetch();
	void EventCarRandomToEnd();
	void EventExcitingTourHide_NoFetch();
	void EventExcitingTourHide();
	void EventCarRandomOK_NoFetch();
	void EventCarRandomOK();
	void UserConstructionScript();
};


}

