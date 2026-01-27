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

// ScriptBlueprintGeneratedClass bp_season_switch.bp_season_switch_C
// 0x00A4 (0x0374 - 0x02D0)
class Abp_season_switch_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_SeasonSwitch_AlreadyGet;                               // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_SeasonSwitch_ShowLookBack_Button;                      // 0x02D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02D6(0x0002) MISSED OFFSET
	int                                                BP_SeasonSwitch_Pre_Index;                                // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_SeasonSwitch_Cur_Index;                                // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SeasonSwitch_Pre_Level_Info2;                          // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SeasonSwitch_Pre_Name;                                 // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonSwitch_Pre_LevelMode;                            // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SeasonSwitch_Pre_Level_Info;                           // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_SeasonSwitch_Medal>       BP_ARRAY_SeasonSwitch_Medals_Third_Person;                // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SeasonSwitch_Medal               BP_STRUCT_SeasonSwitch_Medal;                             // 0x0314(0x0014) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_SeasonSwitch_Medal>       BP_ARRAY_SeasonSwitch_Medals_First_Person;                // 0x0328(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_SeasonSwitch_Cur_Name;                                 // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonSwitch_Step6_TipId;                              // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SeasonSwitch_Medal>       BP_ARRAY_SeasonSwitch_Medals_Third_Person_Now;            // 0x0344(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonSwitch_PageHighest;                              // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SeasonSwitch_Medal>       BP_ARRAY_SeasonSwitch_Medals_First_Person_Now;            // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_SeasonSwitch_Pre_Level;                                // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SeasonSwitch_Begin_Time;                               // 0x0364(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0370(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_season_switch.bp_season_switch_C");
		return pStaticClass;
	}


	void EventSeasonSwitchStep6Tips_NoFetch();
	void EventSeasonSwitchStep6Tips();
	void EventSeasonSwitchGetAward_NoFetch();
	void EventSeasonSwitchGetAward();
	void EventSeasonSwitchHideUI_NoFetch();
	void EventSeasonSwitchHideUI();
	void EventSeasonSwitchShowAnim_NoFetch();
	void EventSeasonSwitchShowAnim();
	void EventSeasonSwitchNext_NoFetch();
	void EventSeasonSwitchNext();
	void UserConstructionScript();
};


}

