#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:45 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_teamup_model.bp_teamup_model_C
// 0x0178 (0x0448 - 0x02D0)
class Abp_teamup_model_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_Teamup_CurMapName_Before;                              // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TeamUpModelInfo                  BP_STRUCT_TeamUpModelInfo;                                // 0x02E0(0x0060) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_ListItemInfo>             BP_ARRAY_ListItemInfoList;                                // 0x0340(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_ItemPerspective                  BP_STRUCT_ItemPerspective;                                // 0x034C(0x0014) (Edit, BlueprintVisible)
	struct FBP_STRUCT_CurSelectedModelInfo             BP_STRUCT_CurSelectedModelInfo;                           // 0x0360(0x005C) (Edit, BlueprintVisible)
	int                                                BP_TeamUpModel_PlayerNum;                                 // 0x03BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Teamup_Show_NewteachingGuide;                          // 0x03C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x03C1(0x0003) MISSED OFFSET
	TArray<struct FBP_STRUCT_MatchTagInfo>             BP_ARRAY_MatchTagInfo;                                    // 0x03C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Teamup_CurMatchTagGuideStep;                           // 0x03D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_ListItemInfo                     BP_STRUCT_ListItemInfo;                                   // 0x03D4(0x0018) (Edit, BlueprintVisible)
	struct FBP_STRUCT_MatchTagInfo                     BP_STRUCT_MatchTagInfo;                                   // 0x03EC(0x0020) (Edit, BlueprintVisible)
	struct FString                                     BP_Teamup_CurMapName;                                     // 0x040C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_ItemPerspective>          BP_ARRAY_ListPerspective;                                 // 0x0418(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_TeamUpModelInfo>          BP_ARRAY_TeamUpModelInfoList;                             // 0x0424(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TeamUpModel_SelectModelType;                           // 0x0430(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUpModel_Perspective;                               // 0x0434(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_TeamUpModel_AutoMatch;                                 // 0x0438(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_Teamup_IsMatchTagGuideShowing;                         // 0x043C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x043D(0x0003) MISSED OFFSET
	int                                                BP_Teamup_CurMatchTag;                                    // 0x0440(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0444(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup_model.bp_teamup_model_C");
		return pStaticClass;
	}


	void EventClickAutoMatch_Push_NoFetch();
	void EventClickAutoMatch_Push();
	void EventClickPlayerNum_Push_NoFetch();
	void EventClickPlayerNum_Push();
	void EventClickMatchTag_Push_NoFetch();
	void EventClickMatchTag_Push();
	void EventAutoSelectSolo_Push_NoFetch();
	void EventAutoSelectSolo_Push();
	void EventClickModel_Push_NoFetch();
	void EventClickModel_Push();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickPerspective_Push_NoFetch();
	void EventClickPerspective_Push();
	void EventClickMapList_Push_NoFetch();
	void EventClickMapList_Push();
	void EventClickListItem_Push_NoFetch();
	void EventClickListItem_Push();
	void EventClickMatchTagItem_Push_NoFetch();
	void EventClickMatchTagItem_Push();
	void EventEndMatchTagGuide_Push_NoFetch();
	void EventEndMatchTagGuide_Push();
	void EventClickMatchTagHelp_Push_NoFetch();
	void EventClickMatchTagHelp_Push();
	void UserConstructionScript();
};


}

