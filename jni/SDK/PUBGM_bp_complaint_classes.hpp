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

// ScriptBlueprintGeneratedClass bp_complaint.bp_complaint_C
// 0x00E0 (0x03B0 - 0x02D0)
class Abp_complaint_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                Complaint_RankType;                                       // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Complaint_IsControllerInterrupt;                          // 0x02D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D9(0x0003) MISSED OFFSET
	int                                                Complaint_HistoryPlayerAccount;                           // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Complaint_ChacheEnemyName;                                // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Complaint_ChacheMyName;                                   // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ComplaintTeammateItem            BP_STRUCT_ComplaintTeammateItem;                          // 0x02F8(0x0018) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ComplaintTeammateItem>    BP_ARRAY_ComplaintTeammateList;                           // 0x0310(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                COMPLAINT_REASON_USEBUG;                                  // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Complaint_RoleID;                                         // 0x0320(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                COMPLAINT_REASON_CHEATED;                                 // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                COMPLAINT_REASON_OTHER;                                   // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                COMPLAINT_REASON_NOSELECT;                                // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Complaint_IsReportMurderSameTeam;                         // 0x0338(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Complaint_IsAI;                                           // 0x0339(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x033A(0x0002) MISSED OFFSET
	struct FString                                     Complaint_ChacheEnemyUID;                                 // 0x033C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Complaint_IsRePlayClick;                                  // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0349(0x0003) MISSED OFFSET
	int                                                Complaint_Type3;                                          // 0x034C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Complaint_IsReportMurderSameTeamAgain;                    // 0x0350(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0351(0x0003) MISSED OFFSET
	struct FString                                     Complaint_Content;                                        // 0x0354(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Complaint_BeComplaint_UserName;                           // 0x0360(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               Complaint_IsReportMurderSameTeamOK;                       // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	int                                                COMPLAINT_REASON_NEGATIVE;                                // 0x0370(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Complaint_IsHistoryDetail;                                // 0x0374(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x0375(0x0003) MISSED OFFSET
	struct FString                                     Complaint_StrOpenID;                                      // 0x0378(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Complaint_ReportCamp;                                     // 0x0384(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_ComplaintTeammateItem>    BP_ARRAY_ComplaintWatchTeamList;                          // 0x0388(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Complaint_Type2;                                          // 0x0394(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Complaint_ChacheIsAI;                                     // 0x0398(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x3];                                       // 0x0399(0x0003) MISSED OFFSET
	int                                                COMPLAINT_REASON_HANGMACHINE;                             // 0x039C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Complaint_Type1;                                          // 0x03A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Complaint_PlayerNumber;                                   // 0x03A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                COMPLAINT_REASON_DIRTYWORD;                               // 0x03A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x03AC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_complaint.bp_complaint_C");
		return pStaticClass;
	}


	void EventComplaintSubmitSameTeamSuccessful_NoFetch();
	void EventComplaintSubmitSameTeamSuccessful();
	void EventComplaintClickSubmit_NoFetch();
	void EventComplaintClickSubmit();
	void EventComplaintGetTeamlist_NoFetch();
	void EventComplaintGetTeamlist();
	void EventComplaintNumEmptyTips_NoFetch();
	void EventComplaintNumEmptyTips();
	void EventNameHadComplaintedTips_NoFetch();
	void EventNameHadComplaintedTips();
	void EventComplaintRefreshUI_NoFetch();
	void EventComplaintRefreshUI();
	void EventSyncWatchTeammateList_NoFetch();
	void EventSyncWatchTeammateList();
	void EventComplaintNumOverTips_NoFetch();
	void EventComplaintNumOverTips();
	void EventComplaintClose_NoFetch();
	void EventComplaintClose();
	void EventComplaintClickReplay_NoFetch();
	void EventComplaintClickReplay();
	void UserConstructionScript();
};


}

