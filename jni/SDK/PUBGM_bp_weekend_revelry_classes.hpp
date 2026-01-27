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

// ScriptBlueprintGeneratedClass bp_weekend_revelry.bp_weekend_revelry_C
// 0x008C (0x035C - 0x02D0)
class Abp_weekend_revelry_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_WeekendRevelry_LeftTimes;                              // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WeekendRevelry_SuperAwardId;                           // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WeekendRevelry_SuperAwardStatus;                       // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WeekendRevelry_Rank;                                   // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_WeekendRevelry_TaskInfo>  BP_Array_WeekendRevelry_Tasks;                            // 0x02E4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WeekendRevelry_SuperAwardRepeatTimes;                  // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WeekendRevelry_Countdown_Sec;                          // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_WeekendRevelry_TimeStr;                                // 0x02F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_WeekendRevelry_LogoImgUrl;                             // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_WeekendRevelry_TaskInfo          BP_STRUCT_WeekendRevelry_TaskInfo;                        // 0x0310(0x002C) (Edit, BlueprintVisible)
	struct FString                                     BP_WeekendRevelry_LogoImg;                                // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_Array_WeekendRevelry_Superawards;                      // 0x0348(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_WeekendRevelry_TaskAwardStatus;                        // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_weekend_revelry.bp_weekend_revelry_C");
		return pStaticClass;
	}


	void EventWeekendRevelrySuperawardClicked_NoFetch();
	void EventWeekendRevelrySuperawardClicked();
	void EventWeekendRevelryLotteryRollingEnd_NoFetch();
	void EventWeekendRevelryLotteryRollingEnd();
	void EventWeekendRevelryLottery_NoFetch();
	void EventWeekendRevelryLottery();
	void EventWeekendRevelryLotteryShareToFriends_NoFetch();
	void EventWeekendRevelryLotteryShareToFriends();
	void EventWeekendRevelryAwardClicked_NoFetch();
	void EventWeekendRevelryAwardClicked();
	void EventWeekendRevelryHelpClicked_NoFetch();
	void EventWeekendRevelryHelpClicked();
	void EventCloseUI_NoFetch();
	void EventCloseUI();
	void UserConstructionScript();
};


}

