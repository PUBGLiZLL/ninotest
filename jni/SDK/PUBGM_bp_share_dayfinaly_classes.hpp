#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:49 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_share_dayfinaly.bp_share_dayfinaly_C
// 0x0048 (0x0318 - 0x02D0)
class Abp_share_dayfinaly_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_ShareDayFinalySologan;                                 // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareDayFinaly_ShareImg;                               // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareDayFinalyUrl;                                     // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_ShareDayFinalyBg;                                      // 0x02F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_ShareDayFinalyPath;                                    // 0x02FC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_ShareDayFinalyNick;                                    // 0x0308(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0314(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_dayfinaly.bp_share_dayfinaly_C");
		return pStaticClass;
	}


	void EventClickBtnSave_NoFetch();
	void EventClickBtnSave();
	void EventShareDayFinaly_Push_NoFetch();
	void EventShareDayFinaly_Push();
	void EventShareDayFinalyFetchInfo_NoFetch();
	void EventShareDayFinalyFetchInfo();
	void EventDayQQFrientBtn_NoFetch();
	void EventDayQQFrientBtn();
	void EventDayWXFrientBtn_NoFetch();
	void EventDayWXFrientBtn();
	void EventDayWXZoneBtn_NoFetch();
	void EventDayWXZoneBtn();
	void EventDayQQZoneBtn_NoFetch();
	void EventDayQQZoneBtn();
	void UserConstructionScript();
};


}

