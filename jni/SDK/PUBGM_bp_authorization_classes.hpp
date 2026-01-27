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

// ScriptBlueprintGeneratedClass bp_authorization.bp_authorization_C
// 0x0064 (0x0334 - 0x02D0)
class Abp_authorization_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               BP_ServiceAccepted;                                       // 0x02D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02D5(0x0003) MISSED OFFSET
	int                                                BP_AutoAuthLogin;                                         // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ServiceAcceptedCallType;                               // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_DeviceNameBeforeAuthLogin;                             // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_DeviceLimit;                                           // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HasShowDeviceLimit;                                       // 0x02F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02F1(0x0003) MISSED OFFSET
	struct FString                                     BP_GameVersion;                                           // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_DeviceLevel;                                           // 0x0300(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_QQID;                                                  // 0x0304(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_TokenIsValid;                                          // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginTime;                                             // 0x0314(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginCheck;                                            // 0x0318(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_WECHAT_INSTALL;                                        // 0x031C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_LoginCount;                                            // 0x0320(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_QQPasswd;                                              // 0x0324(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0330(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_authorization.bp_authorization_C");
		return pStaticClass;
	}


	void EventStartAuthorization_NoFetch();
	void EventStartAuthorization();
	void EventLogout_NoFetch();
	void EventLogout();
	void EventAutoAuthLogin_NoFetch();
	void EventAutoAuthLogin();
	void EventLoginCheck_NoFetch();
	void EventLoginCheck();
	void EventAuthHideButtons_NoFetch();
	void EventAuthHideButtons();
	void EventAddLoginCount_NoFetch();
	void EventAddLoginCount();
	void EventClearLoginLimit_NoFetch();
	void EventClearLoginLimit();
	void EventAuthShowButtons_NoFetch();
	void EventAuthShowButtons();
	void EventWXLogin_NoFetch();
	void EventWXLogin();
	void EventClickKefu_NoFetch();
	void EventClickKefu();
	void EventShowService_NoFetch();
	void EventShowService();
	void EventCheckWeChatInstalled_NoFetch();
	void EventCheckWeChatInstalled();
	void EventShowPolicy_NoFetch();
	void EventShowPolicy();
	void EventShowTouristNotice_NoFetch();
	void EventShowTouristNotice();
	void EventFetchInfo_NoFetch();
	void EventFetchInfo();
	void EventRedoAutoAuthorization_NoFetch();
	void EventRedoAutoAuthorization();
	void EventGameVersion_NoFetch();
	void EventGameVersion();
	void EventBeforeAuthLogin_NoFetch();
	void EventBeforeAuthLogin();
	void EventUpdateLoginTime_NoFetch();
	void EventUpdateLoginTime();
	void EventQQLogin_NoFetch();
	void EventQQLogin();
	void EventDeleteSavedDir_NoFetch();
	void EventDeleteSavedDir();
	void EventGuestLogin_NoFetch();
	void EventGuestLogin();
	void EventShowRefuse_NoFetch();
	void EventShowRefuse();
	void UserConstructionScript();
};


}

