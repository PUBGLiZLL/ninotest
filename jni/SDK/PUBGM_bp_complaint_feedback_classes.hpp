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

// ScriptBlueprintGeneratedClass bp_complaint_feedback.bp_complaint_feedback_C
// 0x0068 (0x0338 - 0x02D0)
class Abp_complaint_feedback_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ComplaintFeedback_SummaryNotice  BP_STRUCT_ComplaintFeedback_SummaryNotice;                // 0x02D4(0x0024) (Edit, BlueprintVisible)
	int                                                BP_ComplaintFeedback_NotReadFeedbackID;                   // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ComplaintFeedback_SummaryNotice> BP_ARRAY_ComplaintFeedbackSummary;                        // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ComplaintFeedback_OneNotice      BP_STRUCT_ComplaintFeedback_OneNotice;                    // 0x0308(0x002C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0334(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_complaint_feedback.bp_complaint_feedback_C");
		return pStaticClass;
	}


	void EventComplaintFeedbackClicked_NoFetch();
	void EventComplaintFeedbackClicked();
	void UserConstructionScript();
};


}

