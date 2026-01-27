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

// ScriptBlueprintGeneratedClass bp_share.bp_share_C
// 0x0074 (0x0344 - 0x02D0)
class Abp_share_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FBP_STRUCT_ShareRoleData                    BP_STRUCT_ShareRoleData;                                  // 0x02D4(0x005C) (Edit, BlueprintVisible)
	bool                                               BP_Share_LbsTitleOpenStatus;                              // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	struct FString                                     BP_Share_Image_Path;                                      // 0x0334(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0340(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_share.bp_share_C");
		return pStaticClass;
	}


	void EventClickQQZoneBtn_NoFetch();
	void EventClickQQZoneBtn();
	void EventClickClose_NoFetch();
	void EventClickClose();
	void EventShare_Push_NoFetch();
	void EventShare_Push();
	void EventShareToFriend_NoFetch();
	void EventShareToFriend();
	void EventSaveLocalFail_NoFetch();
	void EventSaveLocalFail();
	void EventGetRoleData_NoFetch();
	void EventGetRoleData();
	void EventSaveLocalSuccess_NoFetch();
	void EventSaveLocalSuccess();
	void EventClickQQFrientBtn_NoFetch();
	void EventClickQQFrientBtn();
	void EventClickWXZoneBtn_NoFetch();
	void EventClickWXZoneBtn();
	void EventClickSaveLocal_NoFetch();
	void EventClickSaveLocal();
	void EventStructShare_NoFetch();
	void EventStructShare();
	void EventShareFetchInfo_NoFetch();
	void EventShareFetchInfo();
	void EventClickWXFrientBtn_NoFetch();
	void EventClickWXFrientBtn();
	void UserConstructionScript();
};


}

