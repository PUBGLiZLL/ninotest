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

// ScriptBlueprintGeneratedClass bp_observer_result_title.bp_observer_result_title_C
// 0x00B4 (0x0384 - 0x02D0)
class Abp_observer_result_title_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_OB_TITLE_TOTAL                   BP_STRUCT_OB_TITLE_TOTAL;                                 // 0x02D4(0x0034) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_DETAIL_GENERAL_DATA>      BP_ARRAY_TITLE_MORE_DETAIL_GENERAL_DATA;                  // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_OB_TOP_DAMAGE_SINGLE             BP_STRUCT_OB_TOP_DAMAGE_SINGLE;                           // 0x0314(0x0010) (Edit, BlueprintVisible)
	struct FBP_STRUCT_DETAIL_GENERAL_DATA              BP_STRUCT_DETAIL_GENERAL_DATA;                            // 0x0324(0x0030) (Edit, BlueprintVisible)
	struct FBP_STRUCT_OB_TOP_HIT_RATE_SINGLE           BP_STRUCT_OB_TOP_HIT_RATE_SINGLE;                         // 0x0354(0x0010) (Edit, BlueprintVisible)
	struct FString                                     CurDetailTitleName;                                       // 0x0364(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_OB_TOP_KILLER_SINGLE             BP_STRUCT_OB_TOP_KILLER_SINGLE;                           // 0x0370(0x0010) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_observer_result_title.bp_observer_result_title_C");
		return pStaticClass;
	}


	void EventShowResultTitle_NoFetch();
	void EventShowResultTitle();
	void EventTitleMoreDetailData_Push_NoFetch();
	void EventTitleMoreDetailData_Push();
	void EventShowMoreDetailPanel_NoFetch();
	void EventShowMoreDetailPanel();
	void EventCreateResultTitle_NoFetch();
	void EventCreateResultTitle();
	void UserConstructionScript();
};


}

