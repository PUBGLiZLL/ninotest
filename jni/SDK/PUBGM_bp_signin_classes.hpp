#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_signin.bp_signin_C
// 0x0074 (0x0344 - 0x02D0)
class Abp_signin_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_SignInTotalDays;                                       // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_SignInUIInfo>             BP_ARRAY_SignInUIList;                                    // 0x02D8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SignInUIInfo                     BP_STRUCT_SignInUIInfo;                                   // 0x02E4(0x004C) (Edit, BlueprintVisible)
	int                                                BP_SignInBtnNum;                                          // 0x0330(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_SignInUITimeRange;                                     // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_signin.bp_signin_C");
		return pStaticClass;
	}


	void EventRelease_NoFetch();
	void EventRelease();
	void EventGetAwardBtnClick_NoFetch();
	void EventGetAwardBtnClick();
	void UserConstructionScript();
};


}

