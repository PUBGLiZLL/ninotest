#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_eightday.bp_eightday_C
// 0x008C (0x035C - 0x02D0)
class Abp_eightday_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_String_EightDay_ActiveTime;                            // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_BetterAwardInfo                  BP_STRUCT_BetterAwardInfo;                                // 0x02E0(0x0034) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_EightDayUI_Info>          BP_ARRAY_EightDay_Items;                                  // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Request_EightDay_day;                                  // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_EightDayUI_Info                  BP_STRUCT_EightDayUI_Info;                                // 0x0324(0x0034) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0358(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_eightday.bp_eightday_C");
		return pStaticClass;
	}


	void EventEightDaySignUpReq_Push_NoFetch();
	void EventEightDaySignUpReq_Push();
	void EventEightDayUpdateUI_NoFetch();
	void EventEightDayUpdateUI();
	void EventEightDaySignUpReq_NoFetch();
	void EventEightDaySignUpReq();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventEightDayHideUI_NoFetch();
	void EventEightDayHideUI();
	void UserConstructionScript();
};


}

