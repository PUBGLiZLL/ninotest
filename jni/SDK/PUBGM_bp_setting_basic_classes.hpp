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

// ScriptBlueprintGeneratedClass bp_setting_basic.bp_setting_basic_C
// 0x0014 (0x02E4 - 0x02D0)
class Abp_setting_basic_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_BasicSettingCanShowHistory;                            // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	int                                                BP_BasicSettingBLEConnectionState;                        // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_BasicSettingCanShowRecruit;                            // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_setting_basic.bp_setting_basic_C");
		return pStaticClass;
	}


	void EventSettingHistory_NoFetch();
	void EventSettingHistory();
	void EventSettingRecruit_NoFetch();
	void EventSettingRecruit();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void UserConstructionScript();
};


}

