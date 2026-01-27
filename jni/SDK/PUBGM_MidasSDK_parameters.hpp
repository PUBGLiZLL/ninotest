#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function MidasSDK.GCloudBaseMidasInterface.UnRegisterPay
struct UGCloudBaseMidasInterface_UnRegisterPay_Params
{
};

// Function MidasSDK.GCloudBaseMidasInterface.SetMidasCallbackInterface
struct UGCloudBaseMidasInterface_SetMidasCallbackInterface_Params
{
	TScriptInterface<class UGCloudMidasCallbackInterface> midasCallbackInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MidasSDK.GCloudBaseMidasInterface.RegisterPay
struct UGCloudBaseMidasInterface_RegisterPay_Params
{
	struct FString                                     _offerId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _openId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     _openKey;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _sessionId;                                               // (Parm, ZeroConstructor)
	struct FString                                     _sessionType;                                             // (Parm, ZeroConstructor)
	struct FString                                     _pf;                                                      // (Parm, ZeroConstructor)
	struct FString                                     _pfKey;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _environment;                                             // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudBaseMidasInterface.RefreshPay
struct UGCloudBaseMidasInterface_RefreshPay_Params
{
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     OpenKey;                                                  // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudBaseMidasInterface.Pay
struct UGCloudBaseMidasInterface_Pay_Params
{
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     productId;                                                // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudBaseMidasInterface.LauchMpInfo
struct UGCloudBaseMidasInterface_LauchMpInfo_Params
{
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudAndroidMidasInterface.SetMidasCallbackInterface
struct UGCloudAndroidMidasInterface_SetMidasCallbackInterface_Params
{
	TScriptInterface<class UGCloudMidasCallbackInterface> callbackInterface;                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MidasSDK.GCloudAndroidMidasInterface.RegisterPay
struct UGCloudAndroidMidasInterface_RegisterPay_Params
{
	struct FString                                     _offerId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _openId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     _openKey;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _sessionId;                                               // (Parm, ZeroConstructor)
	struct FString                                     _sessionType;                                             // (Parm, ZeroConstructor)
	struct FString                                     _pf;                                                      // (Parm, ZeroConstructor)
	struct FString                                     _pfKey;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _environment;                                             // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudAndroidMidasInterface.Pay
struct UGCloudAndroidMidasInterface_Pay_Params
{
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     productId;                                                // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudAndroidMidasInterface.LauchMpInfo
struct UGCloudAndroidMidasInterface_LauchMpInfo_Params
{
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudIOSMidasInterface.SetMidasCallbackInterface
struct UGCloudIOSMidasInterface_SetMidasCallbackInterface_Params
{
	TScriptInterface<class UGCloudMidasCallbackInterface> midasCallbackInterface;                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MidasSDK.GCloudIOSMidasInterface.RegisterPay
struct UGCloudIOSMidasInterface_RegisterPay_Params
{
	struct FString                                     _offerId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _openId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     _openKey;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _sessionId;                                               // (Parm, ZeroConstructor)
	struct FString                                     _sessionType;                                             // (Parm, ZeroConstructor)
	struct FString                                     _pf;                                                      // (Parm, ZeroConstructor)
	struct FString                                     _pfKey;                                                   // (Parm, ZeroConstructor)
	struct FString                                     _environment;                                             // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudIOSMidasInterface.Pay
struct UGCloudIOSMidasInterface_Pay_Params
{
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     productId;                                                // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudIOSMidasInterface.LauchMpInfo
struct UGCloudIOSMidasInterface_LauchMpInfo_Params
{
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasCallbackInterface.OnMidasPayNeedLogin
struct UGCloudMidasCallbackInterface_OnMidasPayNeedLogin_Params
{
};

// Function MidasSDK.GCloudMidasCallbackInterface.OnMidasPayCallBack
struct UGCloudMidasCallbackInterface_OnMidasPayCallBack_Params
{
	struct FAPPayResponseInfo                          Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MidasSDK.GCloudMidasCallbackInterface.OnMidasLauchMpInfoCallBack
struct UGCloudMidasCallbackInterface_OnMidasLauchMpInfoCallBack_Params
{
	int                                                resultCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     resultString;                                             // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasInterface.UnRegisterPay
struct UGCloudMidasInterface_UnRegisterPay_Params
{
};

// Function MidasSDK.GCloudMidasInterface.SetMidasCallbackInterface
struct UGCloudMidasInterface_SetMidasCallbackInterface_Params
{
	TScriptInterface<class UGCloudMidasCallbackInterface> midasCallbackInterfac;                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function MidasSDK.GCloudMidasInterface.RegisterPay
struct UGCloudMidasInterface_RegisterPay_Params
{
	struct FString                                     OfferId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     OpenKey;                                                  // (Parm, ZeroConstructor)
	struct FString                                     SessionId;                                                // (Parm, ZeroConstructor)
	struct FString                                     SessionType;                                              // (Parm, ZeroConstructor)
	struct FString                                     Pf;                                                       // (Parm, ZeroConstructor)
	struct FString                                     PfKey;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Environment;                                              // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasInterface.RefreshPay
struct UGCloudMidasInterface_RefreshPay_Params
{
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     OpenKey;                                                  // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasInterface.Pay
struct UGCloudMidasInterface_Pay_Params
{
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     productId;                                                // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasInterface.LauchMpInfo
struct UGCloudMidasInterface_LauchMpInfo_Params
{
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasManager.UnRegisterPay
struct UGCloudMidasManager_UnRegisterPay_Params
{
};

// Function MidasSDK.GCloudMidasManager.SetPayEnvironment
struct UGCloudMidasManager_SetPayEnvironment_Params
{
	struct FString                                     Environment;                                              // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasManager.RegisterPay
struct UGCloudMidasManager_RegisterPay_Params
{
	int                                                Platform;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OfferId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     OpenKey;                                                  // (Parm, ZeroConstructor)
	struct FString                                     Pf;                                                       // (Parm, ZeroConstructor)
	struct FString                                     PfKey;                                                    // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasManager.RefreshPay
struct UGCloudMidasManager_RefreshPay_Params
{
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     OpenKey;                                                  // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasManager.Pay
struct UGCloudMidasManager_Pay_Params
{
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     productId;                                                // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasManager.OnMidasPayNeedLogin
struct UGCloudMidasManager_OnMidasPayNeedLogin_Params
{
};

// Function MidasSDK.GCloudMidasManager.OnMidasPayCallBack
struct UGCloudMidasManager_OnMidasPayCallBack_Params
{
	struct FAPPayResponseInfo                          Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function MidasSDK.GCloudMidasManager.OnMidasLauchMpInfoCallBack
struct UGCloudMidasManager_OnMidasLauchMpInfoCallBack_Params
{
	int                                                resultCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     resultString;                                             // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasManager.LauchMpInfo
struct UGCloudMidasManager_LauchMpInfo_Params
{
	struct FString                                     ZoneID;                                                   // (Parm, ZeroConstructor)
};

// Function MidasSDK.GCloudMidasManager.IsFirstPresent
struct UGCloudMidasManager_IsFirstPresent_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MidasSDK.GCloudMidasManager.Initialize
struct UGCloudMidasManager_Initialize_Params
{
};

// Function MidasSDK.GCloudMidasManager.GetPresentCount
struct UGCloudMidasManager_GetPresentCount_Params
{
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function MidasSDK.GCloudMidasManager.GetPayEnvironment
struct UGCloudMidasManager_GetPayEnvironment_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

}

