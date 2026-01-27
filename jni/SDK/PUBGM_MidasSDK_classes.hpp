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

// Class MidasSDK.GCloudBaseMidasInterface
// 0x0064 (0x0080 - 0x001C)
class UGCloudBaseMidasInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     OfferId;                                                  // 0x0020(0x000C) (ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x002C(0x000C) (ZeroConstructor)
	struct FString                                     OpenKey;                                                  // 0x0038(0x000C) (ZeroConstructor)
	struct FString                                     SessionId;                                                // 0x0044(0x000C) (ZeroConstructor)
	struct FString                                     SessionType;                                              // 0x0050(0x000C) (ZeroConstructor)
	struct FString                                     Pf;                                                       // 0x005C(0x000C) (ZeroConstructor)
	struct FString                                     PfKey;                                                    // 0x0068(0x000C) (ZeroConstructor)
	struct FString                                     Environment;                                              // 0x0074(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MidasSDK.GCloudBaseMidasInterface");
		return pStaticClass;
	}


	void UnRegisterPay();
	void SetMidasCallbackInterface(const TScriptInterface<class UGCloudMidasCallbackInterface>& midasCallbackInterface);
	void RegisterPay(const struct FString& _offerId, const struct FString& _openId, const struct FString& _openKey, const struct FString& _sessionId, const struct FString& _sessionType, const struct FString& _pf, const struct FString& _pfKey, const struct FString& _environment);
	void RefreshPay(const struct FString& OpenID, const struct FString& OpenKey);
	void Pay(const struct FString& ZoneID, int payItem, const struct FString& productId);
	void LauchMpInfo(const struct FString& ZoneID);
};


// Class MidasSDK.GCloudAndroidMidasInterface
// 0x0000 (0x0080 - 0x0080)
class UGCloudAndroidMidasInterface : public UGCloudBaseMidasInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MidasSDK.GCloudAndroidMidasInterface");
		return pStaticClass;
	}


	void SetMidasCallbackInterface(const TScriptInterface<class UGCloudMidasCallbackInterface>& callbackInterface);
	void RegisterPay(const struct FString& _offerId, const struct FString& _openId, const struct FString& _openKey, const struct FString& _sessionId, const struct FString& _sessionType, const struct FString& _pf, const struct FString& _pfKey, const struct FString& _environment);
	void Pay(const struct FString& ZoneID, int payItem, const struct FString& productId);
	void LauchMpInfo(const struct FString& ZoneID);
};


// Class MidasSDK.GCloudIOSMidasInterface
// 0x0008 (0x0088 - 0x0080)
class UGCloudIOSMidasInterface : public UGCloudBaseMidasInterface
{
public:
	TScriptInterface<class UGCloudMidasCallbackInterface> midasCallbackInterface;                                   // 0x0080(0x0008) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MidasSDK.GCloudIOSMidasInterface");
		return pStaticClass;
	}


	void SetMidasCallbackInterface(const TScriptInterface<class UGCloudMidasCallbackInterface>& midasCallbackInterface);
	void RegisterPay(const struct FString& _offerId, const struct FString& _openId, const struct FString& _openKey, const struct FString& _sessionId, const struct FString& _sessionType, const struct FString& _pf, const struct FString& _pfKey, const struct FString& _environment);
	void Pay(const struct FString& ZoneID, int payItem, const struct FString& productId);
	void LauchMpInfo(const struct FString& ZoneID);
};


// Class MidasSDK.GCloudMidasCallbackInterface
// 0x0000 (0x0020 - 0x0020)
class UGCloudMidasCallbackInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MidasSDK.GCloudMidasCallbackInterface");
		return pStaticClass;
	}


	void OnMidasPayNeedLogin();
	void OnMidasPayCallBack(const struct FAPPayResponseInfo& Info);
	void OnMidasLauchMpInfoCallBack(int resultCode, const struct FString& resultString);
};


// Class MidasSDK.GCloudMidasInterface
// 0x0000 (0x0020 - 0x0020)
class UGCloudMidasInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MidasSDK.GCloudMidasInterface");
		return pStaticClass;
	}


	void UnRegisterPay();
	void SetMidasCallbackInterface(const TScriptInterface<class UGCloudMidasCallbackInterface>& midasCallbackInterfac);
	void RegisterPay(const struct FString& OfferId, const struct FString& OpenID, const struct FString& OpenKey, const struct FString& SessionId, const struct FString& SessionType, const struct FString& Pf, const struct FString& PfKey, const struct FString& Environment);
	void RefreshPay(const struct FString& OpenID, const struct FString& OpenKey);
	void Pay(const struct FString& ZoneID, int payItem, const struct FString& productId);
	void LauchMpInfo(const struct FString& ZoneID);
};


// Class MidasSDK.GCloudMidasManager
// 0x0084 (0x00A0 - 0x001C)
class UGCloudMidasManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    PayNeedLoginDelegate;                                     // 0x0020(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PayCallBackDelegate;                                      // 0x002C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    LauchMpInfoCallbackDelegate;                              // 0x0038(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TScriptInterface<class UGCloudMidasInterface>      midasInterface;                                           // 0x0044(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PayEnvironment;                                           // 0x004C(0x000C) (ZeroConstructor)
	int                                                CurrentPayItem;                                           // 0x0058(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsFirstPresent;                                          // 0x005C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x005D(0x0003) MISSED OFFSET
	TMap<int, int>                                     PresentLevel;                                             // 0x0060(0x0050) (ZeroConstructor)
	bool                                               bLauchedMpInfo;                                           // 0x009C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x009D(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MidasSDK.GCloudMidasManager");
		return pStaticClass;
	}


	void UnRegisterPay();
	void SetPayEnvironment(const struct FString& Environment);
	void RegisterPay(int Platform, const struct FString& OfferId, const struct FString& OpenID, const struct FString& OpenKey, const struct FString& Pf, const struct FString& PfKey);
	void RefreshPay(const struct FString& OpenID, const struct FString& OpenKey);
	void Pay(const struct FString& ZoneID, int payItem, const struct FString& productId);
	void OnMidasPayNeedLogin();
	void OnMidasPayCallBack(const struct FAPPayResponseInfo& Info);
	void OnMidasLauchMpInfoCallBack(int resultCode, const struct FString& resultString);
	void LauchMpInfo(const struct FString& ZoneID);
	bool IsFirstPresent();
	void Initialize();
	int GetPresentCount(int payItem);
	struct FString GetPayEnvironment();
};


}

