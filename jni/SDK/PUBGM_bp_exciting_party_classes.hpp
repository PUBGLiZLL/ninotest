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

// ScriptBlueprintGeneratedClass bp_exciting_party.bp_exciting_party_C
// 0x00B0 (0x0380 - 0x02D0)
class Abp_exciting_party_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FBP_STRUCT_Exciting_Party_Award_Info> BP_ARRAY_Exciting_Party_Award_Infos;                      // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_Exciting_Party_Info>      BP_ARRAY_Exciting_Party_Infos;                            // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_Exciting_Party_ACT_TIME;                               // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_Exciting_Party_Info              BP_STRUCT_Exciting_Party_Info;                            // 0x02F8(0x0074) (Edit, BlueprintVisible)
	struct FBP_STRUCT_Exciting_Party_Award_Info        BP_STRUCT_Exciting_Party_Award_Info;                      // 0x036C(0x000C) (Edit, BlueprintVisible)
	int                                                BP_ExcitingPart_Op_Item_Idx;                              // 0x0378(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_exciting_party.bp_exciting_party_C");
		return pStaticClass;
	}


	void EventExcitingPartyCloseUI_NoFetch();
	void EventExcitingPartyCloseUI();
	void EventExcitingPartyShare_NoFetch();
	void EventExcitingPartyShare();
	void EventExcitingPartyShareGet_NoFetch();
	void EventExcitingPartyShareGet();
	void EventExcitingPartyRule_NoFetch();
	void EventExcitingPartyRule();
	void EventExcitingPartyViewBox_NoFetch();
	void EventExcitingPartyViewBox();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventSetInfo_Push_NoFetch();
	void EventSetInfo_Push();
	void EventRefreshOpenExcitingPartyTime_NoFetch();
	void EventRefreshOpenExcitingPartyTime();
	void UserConstructionScript();
};


}

