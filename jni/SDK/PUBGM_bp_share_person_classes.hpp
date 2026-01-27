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

// ScriptBlueprintGeneratedClass bp_share_person.bp_share_person_C
// 0x00B4 (0x0384 - 0x02D0)
class Abp_share_person_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_SharePersonPath;                                       // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_SharePersonInfo                  BP_STRUCT_SharePersonInfo;                                // 0x02E0(0x00A0) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0380(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share_person.bp_share_person_C");
		return pStaticClass;
	}


	void EventPersonWXZoneBtn_NoFetch();
	void EventPersonWXZoneBtn();
	void EventSharePerson_Push_NoFetch();
	void EventSharePerson_Push();
	void EventSharePersonFetchInfo_NoFetch();
	void EventSharePersonFetchInfo();
	void EventPersonQQZoneBtn_NoFetch();
	void EventPersonQQZoneBtn();
	void EventPersonWXFrientBtn_NoFetch();
	void EventPersonWXFrientBtn();
	void EventHideUI_NoFetch();
	void EventHideUI();
	void EventPersonQQFrientBtn_NoFetch();
	void EventPersonQQFrientBtn();
	void UserConstructionScript();
};


}

