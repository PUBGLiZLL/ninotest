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

// ScriptBlueprintGeneratedClass bp_reportbug.bp_reportbug_C
// 0x005C (0x032C - 0x02D0)
class Abp_reportbug_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                REPROTBUG_REASON_ABNORMAL_ANIMATION;                      // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_RECONNECTION_ERROR;                      // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Bug_Report_Info_text;                                     // 0x02DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                REPROTBUG_REASON_LOWFPS;                                  // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Bug_Report_Info_Angle;                                    // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_GAMENOTSMOOTH;                           // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_CHARACTER_NOTSMOOTH;                     // 0x02F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_VEHICLE_NOTSMOOTH;                       // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_BAD_NET;                                 // 0x02FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Bug_Report_Info_DeviceName;                               // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Bug_Report_Info_PosX;                                     // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Bug_Report_Info_PosZ;                                     // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_OTHER;                                   // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_MAP_ERROR;                               // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Bug_Report_Info_PosY;                                     // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                REPROTBUG_REASON_MINIMAP_ERROR;                           // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Bug_Report_Info_Reason;                                   // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0328(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_reportbug.bp_reportbug_C");
		return pStaticClass;
	}


	void EventReportBugSubmit_NoFetch();
	void EventReportBugSubmit();
	void EventReportBugClose_NoFetch();
	void EventReportBugClose();
	void EventReportBugRefresh_NoFetch();
	void EventReportBugRefresh();
	void EventShowReportBugSendOK_NoFetch();
	void EventShowReportBugSendOK();
	void UserConstructionScript();
};


}

