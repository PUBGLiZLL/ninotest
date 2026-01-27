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

// ScriptBlueprintGeneratedClass bp_warzone_title.bp_warzone_title_C
// 0x0090 (0x0360 - 0x02D0)
class Abp_warzone_title_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                WarZoneTitleSelectTab;                                    // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_WarZoneTitle                     BP_STRUCT_WarZoneTitle;                                   // 0x02D8(0x004C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_WarZoneTitle>             BP_Array_WarZoneTitleList;                                // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<int>                                        BP_ARRAY_WarZoneTitleHolidayID;                           // 0x0330(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                WarZoneTitleCurRankId;                                    // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<bool>                                       BP_ARRAY_WarZoneTitleRedPointList;                        // 0x0340(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                WarZoneTitleCurTitleID;                                   // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WarZoneTitleCurZoneId;                                    // 0x0350(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WarZoneTitleUseTab;                                    // 0x0354(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                WarZoneTitleCurRankNo;                                    // 0x0358(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x035C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_warzone_title.bp_warzone_title_C");
		return pStaticClass;
	}


	void EventWarZoneTitleUIClose_NoFetch();
	void EventWarZoneTitleUIClose();
	void EventWarZoneTitleUse_NoFetch();
	void EventWarZoneTitleUse();
	void EventWarZoneTitleOpenShareUI_NoFetch();
	void EventWarZoneTitleOpenShareUI();
	void EventWarZoneTitleFetchInfo_NoFetch();
	void EventWarZoneTitleFetchInfo();
	void EventRefreshTitleListOfCurTab_NoFetch();
	void EventRefreshTitleListOfCurTab();
	void EventOpenWarZoneTitleRule_NoFetch();
	void EventOpenWarZoneTitleRule();
	void EventWarZoneHolidayTitleUse_NoFetch();
	void EventWarZoneHolidayTitleUse();
	void UserConstructionScript();
};


}

