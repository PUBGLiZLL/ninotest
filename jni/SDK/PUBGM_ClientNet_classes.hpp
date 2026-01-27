#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ClientNet.GCloudNet
// 0x0824 (0x0840 - 0x001C)
class UGCloudNet : public UObject
{
public:
	unsigned char                                      UnknownData00[0x7B4];                                     // 0x001C(0x07B4) MISSED OFFSET
	class UGCloudSDK*                                  _GCloudSDKInst;                                           // 0x07D0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6C];                                      // 0x07D4(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.GCloudNet");
		return pStaticClass;
	}


	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnShareNotify(int Result, int Platform);
	void OnReceiveDataNotify(int Result, TArray<unsigned char> Msg);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnQueryMyInfoNotify();
	void OnQRCodeGenQRImg(int Tag, int Ret, const struct FString& imgPath);
	void OnNearByPersonInfoNotify(TArray<struct FNearByPersonInfo> Info);
	void OnLaunchInfo(const struct FString& roominfo);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGetHttpDnsCallback(bool isSuccess, const struct FString& strHostName, const struct FString& strIP);
	void OnGCloudStateChangeNotify(int State, int Param1, int Param2, int Param3);
	void OnGCloudGetLocationInfoNotify(const struct FLocationInfoWrapper& locationInfo);
	void OnGCloudDisconnectedNotify(int Result);
	void OnGCloudConnectedNotify(int IsConnected, int nResult);
	struct FString OnCrashMessageNotify();
	void OnAccountLoginNotify(int Result, const struct FString& OpenID, int Channel);
	void OnAccountLoginInfoNotify(int Result, const struct FGCloudLoginAccountInfo& Info);
	void OnAccountInitializeNotify(int Result);
	void OnAccessTokenRefreshedNotify(int Result);
};


// Class ClientNet.GCloudSDK
// 0x00CC (0x00E8 - 0x001C)
class UGCloudSDK : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC4];                                      // 0x001C(0x00C4) MISSED OFFSET
	bool                                               OpenBuglyLogReport;                                       // 0x00E0(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               OpenNoAuthMode;                                           // 0x00E1(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x00E2(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.GCloudSDK");
		return pStaticClass;
	}

};


// Class ClientNet.GCloudSDKDelegates
// 0x0114 (0x0130 - 0x001C)
class UGCloudSDKDelegates : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    ConnectStateChangedNotifyDelegate;                        // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    DisconnectNotifyDelegate;                                 // 0x0034(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ReceiveDataNotifyDelegate;                                // 0x0040(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountInitializeNotifyDelegate;                          // 0x004C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountLoginNotifyDelegate;                               // 0x0058(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccountLoginInfoNotifyDelegate;                           // 0x0064(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    AccessTokenRefreshedNotifyDelegate;                       // 0x0070(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LocationInfoDelegate;                                     // 0x007C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    NearByPersonInfoDelegate;                                 // 0x0088(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QueryMyInfoDelegate;                                      // 0x0094(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ShareNotifyDelegate;                                      // 0x00A0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    GroupNotifyDelegate;                                      // 0x00AC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QuickLoginNotifyDelegate;                                 // 0x00B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QRCodeGenQRImgDelegate;                                   // 0x00C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    QRCodeLaunchDelegate;                                     // 0x00D0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    WebviewNotifyDelegate;                                    // 0x00DC(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x48];                                      // 0x00E8(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ClientNet.GCloudSDKDelegates");
		return pStaticClass;
	}

};


}

