#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_nian_monster_explore.bp_nian_monster_explore_C
// 0x0080 (0x0350 - 0x02D0)
class Abp_nian_monster_explore_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_NianAwardInfo>            BP_ARRAY_NianAwardInfos;                                  // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_NIAN_SKILL_NUM;                                        // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_NianAwardInfo                    BP_STRUCT_NianAwardInfo;                                  // 0x02E4(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_NianSkillInfo>            BP_ARRAY_NianSkillInfos;                                  // 0x02F0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_NianSkillInfo                    BP_STRUCT_NianSkillInfo;                                  // 0x02FC(0x0030) (Edit, BlueprintVisible)
	int                                                BP_NIAN_PERSONAL_ALL;                                     // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_NIAN_GLOBAL_PERCENT;                                   // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_NIAN_ClickIndex;                                       // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_NIAN_PERSONAL_PERCENT;                                 // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_NIAN_NianMonsterStage;                                 // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_NIAN_DATE;                                             // 0x0340(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x034C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_nian_monster_explore.bp_nian_monster_explore_C");
		return pStaticClass;
	}


	void EventNianExploreClickRule_NoFetch();
	void EventNianExploreClickRule();
	void EventNianExploreClickClose_NoFetch();
	void EventNianExploreClickClose();
	void EventNianExploreClickExplore_NoFetch();
	void EventNianExploreClickExplore();
	void EventNianExploreClickChallenge_NoFetch();
	void EventNianExploreClickChallenge();
	void EventNianExploreUIEnter_NoFetch();
	void EventNianExploreUIEnter();
	void EventNianExploreClickBox_NoFetch();
	void EventNianExploreClickBox();
	void UserConstructionScript();
};


}

