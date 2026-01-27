//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MidasSDK.GCloudBaseMidasInterface.UnRegisterPay
// (Native, Public)

void UGCloudBaseMidasInterface::UnRegisterPay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudBaseMidasInterface.UnRegisterPay");

	UGCloudBaseMidasInterface_UnRegisterPay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudBaseMidasInterface.SetMidasCallbackInterface
// (Native, Public)
// Parameters:
// TScriptInterface<class UGCloudMidasCallbackInterface> midasCallbackInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudBaseMidasInterface::SetMidasCallbackInterface(const TScriptInterface<class UGCloudMidasCallbackInterface>& midasCallbackInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudBaseMidasInterface.SetMidasCallbackInterface");

	UGCloudBaseMidasInterface_SetMidasCallbackInterface_Params params;
	params.midasCallbackInterface = midasCallbackInterface;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudBaseMidasInterface.RegisterPay
// (Native, Public)
// Parameters:
// struct FString                 _offerId                       (Parm, ZeroConstructor)
// struct FString                 _openId                        (Parm, ZeroConstructor)
// struct FString                 _openKey                       (Parm, ZeroConstructor)
// struct FString                 _sessionId                     (Parm, ZeroConstructor)
// struct FString                 _sessionType                   (Parm, ZeroConstructor)
// struct FString                 _pf                            (Parm, ZeroConstructor)
// struct FString                 _pfKey                         (Parm, ZeroConstructor)
// struct FString                 _environment                   (Parm, ZeroConstructor)

void UGCloudBaseMidasInterface::RegisterPay(const struct FString& _offerId, const struct FString& _openId, const struct FString& _openKey, const struct FString& _sessionId, const struct FString& _sessionType, const struct FString& _pf, const struct FString& _pfKey, const struct FString& _environment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudBaseMidasInterface.RegisterPay");

	UGCloudBaseMidasInterface_RegisterPay_Params params;
	params._offerId = _offerId;
	params._openId = _openId;
	params._openKey = _openKey;
	params._sessionId = _sessionId;
	params._sessionType = _sessionType;
	params._pf = _pf;
	params._pfKey = _pfKey;
	params._environment = _environment;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudBaseMidasInterface.RefreshPay
// (Native, Public)
// Parameters:
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 OpenKey                        (Parm, ZeroConstructor)

void UGCloudBaseMidasInterface::RefreshPay(const struct FString& OpenID, const struct FString& OpenKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudBaseMidasInterface.RefreshPay");

	UGCloudBaseMidasInterface_RefreshPay_Params params;
	params.OpenID = OpenID;
	params.OpenKey = OpenKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudBaseMidasInterface.Pay
// (Native, Public)
// Parameters:
// struct FString                 ZoneID                         (Parm, ZeroConstructor)
// int                            payItem                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 productId                      (Parm, ZeroConstructor)

void UGCloudBaseMidasInterface::Pay(const struct FString& ZoneID, int payItem, const struct FString& productId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudBaseMidasInterface.Pay");

	UGCloudBaseMidasInterface_Pay_Params params;
	params.ZoneID = ZoneID;
	params.payItem = payItem;
	params.productId = productId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudBaseMidasInterface.LauchMpInfo
// (Native, Public)
// Parameters:
// struct FString                 ZoneID                         (Parm, ZeroConstructor)

void UGCloudBaseMidasInterface::LauchMpInfo(const struct FString& ZoneID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudBaseMidasInterface.LauchMpInfo");

	UGCloudBaseMidasInterface_LauchMpInfo_Params params;
	params.ZoneID = ZoneID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudAndroidMidasInterface.SetMidasCallbackInterface
// (Native, Public)
// Parameters:
// TScriptInterface<class UGCloudMidasCallbackInterface> callbackInterface              (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudAndroidMidasInterface::SetMidasCallbackInterface(const TScriptInterface<class UGCloudMidasCallbackInterface>& callbackInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudAndroidMidasInterface.SetMidasCallbackInterface");

	UGCloudAndroidMidasInterface_SetMidasCallbackInterface_Params params;
	params.callbackInterface = callbackInterface;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudAndroidMidasInterface.RegisterPay
// (Native, Public)
// Parameters:
// struct FString                 _offerId                       (Parm, ZeroConstructor)
// struct FString                 _openId                        (Parm, ZeroConstructor)
// struct FString                 _openKey                       (Parm, ZeroConstructor)
// struct FString                 _sessionId                     (Parm, ZeroConstructor)
// struct FString                 _sessionType                   (Parm, ZeroConstructor)
// struct FString                 _pf                            (Parm, ZeroConstructor)
// struct FString                 _pfKey                         (Parm, ZeroConstructor)
// struct FString                 _environment                   (Parm, ZeroConstructor)

void UGCloudAndroidMidasInterface::RegisterPay(const struct FString& _offerId, const struct FString& _openId, const struct FString& _openKey, const struct FString& _sessionId, const struct FString& _sessionType, const struct FString& _pf, const struct FString& _pfKey, const struct FString& _environment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudAndroidMidasInterface.RegisterPay");

	UGCloudAndroidMidasInterface_RegisterPay_Params params;
	params._offerId = _offerId;
	params._openId = _openId;
	params._openKey = _openKey;
	params._sessionId = _sessionId;
	params._sessionType = _sessionType;
	params._pf = _pf;
	params._pfKey = _pfKey;
	params._environment = _environment;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudAndroidMidasInterface.Pay
// (Native, Public)
// Parameters:
// struct FString                 ZoneID                         (Parm, ZeroConstructor)
// int                            payItem                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 productId                      (Parm, ZeroConstructor)

void UGCloudAndroidMidasInterface::Pay(const struct FString& ZoneID, int payItem, const struct FString& productId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudAndroidMidasInterface.Pay");

	UGCloudAndroidMidasInterface_Pay_Params params;
	params.ZoneID = ZoneID;
	params.payItem = payItem;
	params.productId = productId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudAndroidMidasInterface.LauchMpInfo
// (Native, Public)
// Parameters:
// struct FString                 ZoneID                         (Parm, ZeroConstructor)

void UGCloudAndroidMidasInterface::LauchMpInfo(const struct FString& ZoneID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudAndroidMidasInterface.LauchMpInfo");

	UGCloudAndroidMidasInterface_LauchMpInfo_Params params;
	params.ZoneID = ZoneID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudIOSMidasInterface.SetMidasCallbackInterface
// (Native, Public)
// Parameters:
// TScriptInterface<class UGCloudMidasCallbackInterface> midasCallbackInterface         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudIOSMidasInterface::SetMidasCallbackInterface(const TScriptInterface<class UGCloudMidasCallbackInterface>& midasCallbackInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudIOSMidasInterface.SetMidasCallbackInterface");

	UGCloudIOSMidasInterface_SetMidasCallbackInterface_Params params;
	params.midasCallbackInterface = midasCallbackInterface;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudIOSMidasInterface.RegisterPay
// (Native, Public)
// Parameters:
// struct FString                 _offerId                       (Parm, ZeroConstructor)
// struct FString                 _openId                        (Parm, ZeroConstructor)
// struct FString                 _openKey                       (Parm, ZeroConstructor)
// struct FString                 _sessionId                     (Parm, ZeroConstructor)
// struct FString                 _sessionType                   (Parm, ZeroConstructor)
// struct FString                 _pf                            (Parm, ZeroConstructor)
// struct FString                 _pfKey                         (Parm, ZeroConstructor)
// struct FString                 _environment                   (Parm, ZeroConstructor)

void UGCloudIOSMidasInterface::RegisterPay(const struct FString& _offerId, const struct FString& _openId, const struct FString& _openKey, const struct FString& _sessionId, const struct FString& _sessionType, const struct FString& _pf, const struct FString& _pfKey, const struct FString& _environment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudIOSMidasInterface.RegisterPay");

	UGCloudIOSMidasInterface_RegisterPay_Params params;
	params._offerId = _offerId;
	params._openId = _openId;
	params._openKey = _openKey;
	params._sessionId = _sessionId;
	params._sessionType = _sessionType;
	params._pf = _pf;
	params._pfKey = _pfKey;
	params._environment = _environment;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudIOSMidasInterface.Pay
// (Native, Public)
// Parameters:
// struct FString                 ZoneID                         (Parm, ZeroConstructor)
// int                            payItem                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 productId                      (Parm, ZeroConstructor)

void UGCloudIOSMidasInterface::Pay(const struct FString& ZoneID, int payItem, const struct FString& productId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudIOSMidasInterface.Pay");

	UGCloudIOSMidasInterface_Pay_Params params;
	params.ZoneID = ZoneID;
	params.payItem = payItem;
	params.productId = productId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudIOSMidasInterface.LauchMpInfo
// (Native, Public)
// Parameters:
// struct FString                 ZoneID                         (Parm, ZeroConstructor)

void UGCloudIOSMidasInterface::LauchMpInfo(const struct FString& ZoneID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudIOSMidasInterface.LauchMpInfo");

	UGCloudIOSMidasInterface_LauchMpInfo_Params params;
	params.ZoneID = ZoneID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasCallbackInterface.OnMidasPayNeedLogin
// (Native, Public)

void UGCloudMidasCallbackInterface::OnMidasPayNeedLogin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasCallbackInterface.OnMidasPayNeedLogin");

	UGCloudMidasCallbackInterface_OnMidasPayNeedLogin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasCallbackInterface.OnMidasPayCallBack
// (Native, Public, HasOutParms)
// Parameters:
// struct FAPPayResponseInfo      Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudMidasCallbackInterface::OnMidasPayCallBack(const struct FAPPayResponseInfo& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasCallbackInterface.OnMidasPayCallBack");

	UGCloudMidasCallbackInterface_OnMidasPayCallBack_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasCallbackInterface.OnMidasLauchMpInfoCallBack
// (Native, Public)
// Parameters:
// int                            resultCode                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 resultString                   (Parm, ZeroConstructor)

void UGCloudMidasCallbackInterface::OnMidasLauchMpInfoCallBack(int resultCode, const struct FString& resultString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasCallbackInterface.OnMidasLauchMpInfoCallBack");

	UGCloudMidasCallbackInterface_OnMidasLauchMpInfoCallBack_Params params;
	params.resultCode = resultCode;
	params.resultString = resultString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasInterface.UnRegisterPay
// (Native, Public)

void UGCloudMidasInterface::UnRegisterPay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasInterface.UnRegisterPay");

	UGCloudMidasInterface_UnRegisterPay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasInterface.SetMidasCallbackInterface
// (Native, Public)
// Parameters:
// TScriptInterface<class UGCloudMidasCallbackInterface> midasCallbackInterfac          (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudMidasInterface::SetMidasCallbackInterface(const TScriptInterface<class UGCloudMidasCallbackInterface>& midasCallbackInterfac)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasInterface.SetMidasCallbackInterface");

	UGCloudMidasInterface_SetMidasCallbackInterface_Params params;
	params.midasCallbackInterfac = midasCallbackInterfac;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasInterface.RegisterPay
// (Native, Public)
// Parameters:
// struct FString                 OfferId                        (Parm, ZeroConstructor)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 OpenKey                        (Parm, ZeroConstructor)
// struct FString                 SessionId                      (Parm, ZeroConstructor)
// struct FString                 SessionType                    (Parm, ZeroConstructor)
// struct FString                 Pf                             (Parm, ZeroConstructor)
// struct FString                 PfKey                          (Parm, ZeroConstructor)
// struct FString                 Environment                    (Parm, ZeroConstructor)

void UGCloudMidasInterface::RegisterPay(const struct FString& OfferId, const struct FString& OpenID, const struct FString& OpenKey, const struct FString& SessionId, const struct FString& SessionType, const struct FString& Pf, const struct FString& PfKey, const struct FString& Environment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasInterface.RegisterPay");

	UGCloudMidasInterface_RegisterPay_Params params;
	params.OfferId = OfferId;
	params.OpenID = OpenID;
	params.OpenKey = OpenKey;
	params.SessionId = SessionId;
	params.SessionType = SessionType;
	params.Pf = Pf;
	params.PfKey = PfKey;
	params.Environment = Environment;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasInterface.RefreshPay
// (Native, Public)
// Parameters:
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 OpenKey                        (Parm, ZeroConstructor)

void UGCloudMidasInterface::RefreshPay(const struct FString& OpenID, const struct FString& OpenKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasInterface.RefreshPay");

	UGCloudMidasInterface_RefreshPay_Params params;
	params.OpenID = OpenID;
	params.OpenKey = OpenKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasInterface.Pay
// (Native, Public)
// Parameters:
// struct FString                 ZoneID                         (Parm, ZeroConstructor)
// int                            payItem                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 productId                      (Parm, ZeroConstructor)

void UGCloudMidasInterface::Pay(const struct FString& ZoneID, int payItem, const struct FString& productId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasInterface.Pay");

	UGCloudMidasInterface_Pay_Params params;
	params.ZoneID = ZoneID;
	params.payItem = payItem;
	params.productId = productId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasInterface.LauchMpInfo
// (Native, Public)
// Parameters:
// struct FString                 ZoneID                         (Parm, ZeroConstructor)

void UGCloudMidasInterface::LauchMpInfo(const struct FString& ZoneID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasInterface.LauchMpInfo");

	UGCloudMidasInterface_LauchMpInfo_Params params;
	params.ZoneID = ZoneID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.UnRegisterPay
// (Native, Public)

void UGCloudMidasManager::UnRegisterPay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.UnRegisterPay");

	UGCloudMidasManager_UnRegisterPay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.SetPayEnvironment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Environment                    (Parm, ZeroConstructor)

void UGCloudMidasManager::SetPayEnvironment(const struct FString& Environment)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.SetPayEnvironment");

	UGCloudMidasManager_SetPayEnvironment_Params params;
	params.Environment = Environment;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.RegisterPay
// (Native, Public)
// Parameters:
// int                            Platform                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OfferId                        (Parm, ZeroConstructor)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 OpenKey                        (Parm, ZeroConstructor)
// struct FString                 Pf                             (Parm, ZeroConstructor)
// struct FString                 PfKey                          (Parm, ZeroConstructor)

void UGCloudMidasManager::RegisterPay(int Platform, const struct FString& OfferId, const struct FString& OpenID, const struct FString& OpenKey, const struct FString& Pf, const struct FString& PfKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.RegisterPay");

	UGCloudMidasManager_RegisterPay_Params params;
	params.Platform = Platform;
	params.OfferId = OfferId;
	params.OpenID = OpenID;
	params.OpenKey = OpenKey;
	params.Pf = Pf;
	params.PfKey = PfKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.RefreshPay
// (Native, Public)
// Parameters:
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 OpenKey                        (Parm, ZeroConstructor)

void UGCloudMidasManager::RefreshPay(const struct FString& OpenID, const struct FString& OpenKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.RefreshPay");

	UGCloudMidasManager_RefreshPay_Params params;
	params.OpenID = OpenID;
	params.OpenKey = OpenKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.Pay
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ZoneID                         (Parm, ZeroConstructor)
// int                            payItem                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 productId                      (Parm, ZeroConstructor)

void UGCloudMidasManager::Pay(const struct FString& ZoneID, int payItem, const struct FString& productId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.Pay");

	UGCloudMidasManager_Pay_Params params;
	params.ZoneID = ZoneID;
	params.payItem = payItem;
	params.productId = productId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.OnMidasPayNeedLogin
// (Native, Public)

void UGCloudMidasManager::OnMidasPayNeedLogin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.OnMidasPayNeedLogin");

	UGCloudMidasManager_OnMidasPayNeedLogin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.OnMidasPayCallBack
// (Native, Public, HasOutParms)
// Parameters:
// struct FAPPayResponseInfo      Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudMidasManager::OnMidasPayCallBack(const struct FAPPayResponseInfo& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.OnMidasPayCallBack");

	UGCloudMidasManager_OnMidasPayCallBack_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.OnMidasLauchMpInfoCallBack
// (Native, Public)
// Parameters:
// int                            resultCode                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 resultString                   (Parm, ZeroConstructor)

void UGCloudMidasManager::OnMidasLauchMpInfoCallBack(int resultCode, const struct FString& resultString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.OnMidasLauchMpInfoCallBack");

	UGCloudMidasManager_OnMidasLauchMpInfoCallBack_Params params;
	params.resultCode = resultCode;
	params.resultString = resultString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.LauchMpInfo
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ZoneID                         (Parm, ZeroConstructor)

void UGCloudMidasManager::LauchMpInfo(const struct FString& ZoneID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.LauchMpInfo");

	UGCloudMidasManager_LauchMpInfo_Params params;
	params.ZoneID = ZoneID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.IsFirstPresent
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGCloudMidasManager::IsFirstPresent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.IsFirstPresent");

	UGCloudMidasManager_IsFirstPresent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MidasSDK.GCloudMidasManager.Initialize
// (Final, Native, Public)

void UGCloudMidasManager::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.Initialize");

	UGCloudMidasManager_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function MidasSDK.GCloudMidasManager.GetPresentCount
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            payItem                        (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGCloudMidasManager::GetPresentCount(int payItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.GetPresentCount");

	UGCloudMidasManager_GetPresentCount_Params params;
	params.payItem = payItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MidasSDK.GCloudMidasManager.GetPayEnvironment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGCloudMidasManager::GetPayEnvironment()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function MidasSDK.GCloudMidasManager.GetPayEnvironment");

	UGCloudMidasManager_GetPayEnvironment_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

