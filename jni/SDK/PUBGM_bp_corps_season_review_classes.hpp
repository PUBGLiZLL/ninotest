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

// ScriptBlueprintGeneratedClass bp_corps_season_review.bp_corps_season_review_C
// 0x00A8 (0x0378 - 0x02D0)
class Abp_corps_season_review_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_CorpsSeasonReview_CurrentSeason;                       // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CorpsSeasonReview_AvatarIndex;                         // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsSeasonRoleInfo              BP_STRUCT_CorpsSeasonRoleInfo;                            // 0x02DC(0x0030) (Edit, BlueprintVisible)
	int                                                BP_CorpsSeasonReview_LastSeason;                          // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsSeasonRecord                BP_STRUCT_CorpsSeasonRecord;                              // 0x0310(0x0064) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0374(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_season_review.bp_corps_season_review_C");
		return pStaticClass;
	}


	void EventCorpsSeasonShowOver_NoFetch();
	void EventCorpsSeasonShowOver();
	void UserConstructionScript();
};


}

