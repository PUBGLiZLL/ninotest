#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_reflux_new_award.bp_reflux_new_award_C
// 0x0048 (0x0318 - 0x02D0)
class Abp_reflux_new_award_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_Reflux_New_Back_Award_Info> BP_ARRAY_Reflux_New_Back_Award_List;                      // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Reflux_New_Back_Award_Info       BP_STRUCT_Reflux_New_Back_Award_Info;                     // 0x02E0(0x0020) (Edit, BlueprintVisible)
	int                                                BP_STRUCT_Reflux_New_Award_Panel;                         // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_STRUCT_Reflux_New_Award_Team_Window;                   // 0x0304(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_Reflux_New_UserName;                                   // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0314(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_reflux_new_award.bp_reflux_new_award_C");
		return pStaticClass;
	}


	void EventRefluxNewAwardUIClose_NoFetch();
	void EventRefluxNewAwardUIClose();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventRefluxNewAwardFindTeam_NoFetch();
	void EventRefluxNewAwardFindTeam();
	void EventRefluxNewAwardGetMore_NoFetch();
	void EventRefluxNewAwardGetMore();
	void UserConstructionScript();
};


}

