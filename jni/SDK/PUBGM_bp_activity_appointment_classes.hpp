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

// ScriptBlueprintGeneratedClass bp_activity_appointment.bp_activity_appointment_C
// 0x0068 (0x0338 - 0x02D0)
class Abp_activity_appointment_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ActivityAppointmentAwardInfo     BP_STRUCT_ActivityAppointmentAwardInfo;                   // 0x02D4(0x0010) (Edit, BlueprintVisible)
	bool                                               BP_ActivityAppointmentFirstTimeShareToday;                // 0x02E4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E5(0x0003) MISSED OFFSET
	struct FBP_STRUCT_ActivityAppointmentData          BP_STRUCT_ActivityAppointmentData;                        // 0x02E8(0x004C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0334(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_activity_appointment.bp_activity_appointment_C");
		return pStaticClass;
	}


	void EventActAppOnShareButtonClicked_NoFetch();
	void EventActAppOnShareButtonClicked();
	void EventActAppOnMakeAppointmentClicked_NoFetch();
	void EventActAppOnMakeAppointmentClicked();
	void EventActAppOnCloseClicked_NoFetch();
	void EventActAppOnCloseClicked();
	void EventActAppOnStartAnimationClicked_NoFetch();
	void EventActAppOnStartAnimationClicked();
	void UserConstructionScript();
};


}

