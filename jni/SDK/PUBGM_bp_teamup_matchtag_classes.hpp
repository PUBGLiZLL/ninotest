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

// ScriptBlueprintGeneratedClass bp_teamup_matchtag.bp_teamup_matchtag_C
// 0x0058 (0x0328 - 0x02D0)
class Abp_teamup_matchtag_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_TeamUp_MatchTagHelpInfo>  BP_ARRAY_TeamUp_MatchTagHelpInfoList;                     // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_TeamUp_MatchTagHelpInfo          BP_STRUCT_TeamUp_MatchTagHelpInfo;                        // 0x02E0(0x0040) (Edit, BlueprintVisible)
	int                                                BP_TeamUp_MatchTag_CurTag;                                // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0324(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_teamup_matchtag.bp_teamup_matchtag_C");
		return pStaticClass;
	}


	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventClickMatchTagButton_Push_NoFetch();
	void EventClickMatchTagButton_Push();
	void UserConstructionScript();
};


}

