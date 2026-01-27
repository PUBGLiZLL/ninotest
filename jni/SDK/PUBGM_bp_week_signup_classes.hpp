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

// ScriptBlueprintGeneratedClass bp_week_signup.bp_week_signup_C
// 0x0068 (0x0338 - 0x02D0)
class Abp_week_signup_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_WeekSignUpUI_Info                BP_STRUCT_WeekSignUpUI_Info;                              // 0x02D4(0x0034) (Edit, BlueprintVisible)
	struct FString                                     BP_Week_SignUp_TimeString;                                // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_CurrentSignUpDayInWeek;                                // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_WeekSignUpUI_Info>        BP_ARRAY_Week_SignUp_Info;                                // 0x0318(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_Week_SignUp_Platform;                                  // 0x0324(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Week_SignUp_QQVip;                                     // 0x0328(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Week_SignUp_Startup;                                   // 0x032C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_Request_SignUp_day;                                    // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0334(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_week_signup.bp_week_signup_C");
		return pStaticClass;
	}


	void EventWeekSignUpReq_Push_NoFetch();
	void EventWeekSignUpReq_Push();
	void EventWeekSignUpReq_NoFetch();
	void EventWeekSignUpReq();
	void EventWeekSignUpHide_NoFetch();
	void EventWeekSignUpHide();
	void EventWeekSignPlatform_FetchInfo_NoFetch();
	void EventWeekSignPlatform_FetchInfo();
	void EventWeekSignUpInit_NoFetch();
	void EventWeekSignUpInit();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

