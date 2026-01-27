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

// ScriptBlueprintGeneratedClass bp_corps_suggestion.bp_corps_suggestion_C
// 0x0244 (0x0514 - 0x02D0)
class Abp_corps_suggestion_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_Corps_Suggestion_Toggle;                               // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsSnapInfo                    BP_STRUCT_CorpsSnapInfo;                                  // 0x02D8(0x0094) (Edit, BlueprintVisible)
	bool                                               BP_Corps_Suggestion_AccordRequirement;                    // 0x036C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x036D(0x0003) MISSED OFFSET
	struct FString                                     BP_Corps_Suggestion_SearchName;                           // 0x0370(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_CORPS_Suggestion_DetailPanelData BP_STRUCT_CORPS_Suggestion_DetailPanelData;               // 0x037C(0x0094) (Edit, BlueprintVisible)
	bool                                               BP_Corps_Suggestion_NotNeedApproval;                      // 0x0410(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsSnapInfo>            BP_ARRAY_Corps_SearchList;                                // 0x0414(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Corps_MemberID;                                        // 0x0420(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FString>                             BP_ARRAY_Corps_ApplicationTempIDList;                     // 0x042C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Corps_SelectedCommanderInfo      BP_STRUCT_Corps_SelectedCommanderInfo;                    // 0x0438(0x0014) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_CorpsSnapInfo>            BP_ARRAY_Corps_ApplicationList;                           // 0x044C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Corps_Suggestion_WarzoneID;                            // 0x0458(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_CorpsFriendInfo                  BP_STRUCT_CorpsFriendInfo;                                // 0x045C(0x0014) (Edit, BlueprintVisible)
	int                                                BP_Corps_Suggestion_CurSelectedIndex;                     // 0x0470(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Corps_Suggestion_SearchResult;                         // 0x0474(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0475(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_CorpsSnapInfo>            BP_ARRAY_Corps_SuggestionList;                            // 0x0478(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CorpsSuggestion_InviteCorpsInfo> BP_ARRAY_Corps_InvitedCorpsList;                          // 0x0484(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Corps_Suggestion_OldSelectedIndex;                     // 0x0490(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsFriendInfo>          BP_ARRAY_Corps_SelectedFriends;                           // 0x0494(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               BP_CorpsSuggestionShowAnimation;                          // 0x04A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x04A1(0x0003) MISSED OFFSET
	struct FBP_STRUCT_CorpsSuggestion_InviteCorpsInfo  BP_STRUCT_CorpsSuggestion_InviteCorpsInfo;                // 0x04A4(0x006C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0510(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_suggestion.bp_corps_suggestion_C");
		return pStaticClass;
	}


	void EventCorpsSuggestionShowUI_NoFetch();
	void EventCorpsSuggestionShowUI();
	void EventCorpsSuggestionClickSearch_NoFetch();
	void EventCorpsSuggestionClickSearch();
	void EventSetCorpsSuggestionInfo_Push_NoFetch();
	void EventSetCorpsSuggestionInfo_Push();
	void EventCorpsSuggestionHideUI_NoFetch();
	void EventCorpsSuggestionHideUI();
	void EventCorpsSuggestionClickApply_NoFetch();
	void EventCorpsSuggestionClickApply();
	void EventCorpsSuggestionClickRefresh_NoFetch();
	void EventCorpsSuggestionClickRefresh();
	void EventCorpsSuggestionHelpShow_NoFetch();
	void EventCorpsSuggestionHelpShow();
	void EventCorpsSuggestionShowRole_NoFetch();
	void EventCorpsSuggestionShowRole();
	void EventCorpsRecommendListReport_NoFetch();
	void EventCorpsRecommendListReport();
	void EventFetchCorpsSuggestionInfo_NoFetch();
	void EventFetchCorpsSuggestionInfo();
	void EventCorpsSuggestionClickIgnor_NoFetch();
	void EventCorpsSuggestionClickIgnor();
	void EventCorpsSuggestionClickCleanSearch_NoFetch();
	void EventCorpsSuggestionClickCleanSearch();
	void EventCorpsSuggestionOnTabChange_NoFetch();
	void EventCorpsSuggestionOnTabChange();
	void EventCorpsSuggestionOnFilterStateChange_NoFetch();
	void EventCorpsSuggestionOnFilterStateChange();
	void EventCorpsSuggestionOnSelectItemChange_NoFetch();
	void EventCorpsSuggestionOnSelectItemChange();
	void EventCorpsSuggestionClickAccept_NoFetch();
	void EventCorpsSuggestionClickAccept();
	void EventCorpsSuggestionClickOneKeyApply_NoFetch();
	void EventCorpsSuggestionClickOneKeyApply();
	void UserConstructionScript();
};


}

