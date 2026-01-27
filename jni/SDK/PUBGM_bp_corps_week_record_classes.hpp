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

// ScriptBlueprintGeneratedClass bp_corps_week_record.bp_corps_week_record_C
// 0x0084 (0x0354 - 0x02D0)
class Abp_corps_week_record_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_CORPS_WeekRecordData>     BP_ARRAY_CORPS_WeekRecordList;                            // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CORPS_WeekRecord_PlayerInfo      BP_STRUCT_CORPS_WeekRecord_PlayerInfo;                    // 0x02E0(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CORPS_WeekRecordData             BP_STRUCT_CORPS_WeekRecordData;                           // 0x0310(0x002C) (Edit, BlueprintVisible)
	int                                                BP_CORPS_WeekRecordSelectPage;                            // 0x033C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_CORPS_WeekRecordSelectDayIdx;                          // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<int>                                        BP_ARRAY_CORPS_WeekRecordDayList;                         // 0x0344(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0350(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_week_record.bp_corps_week_record_C");
		return pStaticClass;
	}


	void EventCorpsWeekRecordSelectDay_NoFetch();
	void EventCorpsWeekRecordSelectDay();
	void EventCorpsWeekRecordSelectPage_NoFetch();
	void EventCorpsWeekRecordSelectPage();
	void EventCorpsWeekRecordHide_NoFetch();
	void EventCorpsWeekRecordHide();
	void UserConstructionScript();
};


}

