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

// Function ClientNet.GCloudNet.OnWebviewNotify
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FWebviewInfoWrapper     webviewinfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudNet::OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnWebviewNotify");

	UGCloudNet_OnWebviewNotify_Params params;
	params.webviewinfo = webviewinfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnShareNotify
// (Final, Native, Private)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Platform                       (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnShareNotify(int Result, int Platform)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnShareNotify");

	UGCloudNet_OnShareNotify_Params params;
	params.Result = Result;
	params.Platform = Platform;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnReceiveDataNotify
// (Final, Native, Private)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          Msg                            (Parm, ZeroConstructor)

void UGCloudNet::OnReceiveDataNotify(int Result, TArray<unsigned char> Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnReceiveDataNotify");

	UGCloudNet_OnReceiveDataNotify_Params params;
	params.Result = Result;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnQuickLoginNotify
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FWakeupInfoWrapper      wakeupinfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudNet::OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnQuickLoginNotify");

	UGCloudNet_OnQuickLoginNotify_Params params;
	params.wakeupinfo = wakeupinfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnQueryMyInfoNotify
// (Final, Native, Private)

void UGCloudNet::OnQueryMyInfoNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnQueryMyInfoNotify");

	UGCloudNet_OnQueryMyInfoNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnQRCodeGenQRImg
// (Final, Native, Private)
// Parameters:
// int                            Tag                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Ret                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 imgPath                        (Parm, ZeroConstructor)

void UGCloudNet::OnQRCodeGenQRImg(int Tag, int Ret, const struct FString& imgPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnQRCodeGenQRImg");

	UGCloudNet_OnQRCodeGenQRImg_Params params;
	params.Tag = Tag;
	params.Ret = Ret;
	params.imgPath = imgPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnNearByPersonInfoNotify
// (Final, Native, Private, HasOutParms)
// Parameters:
// TArray<struct FNearByPersonInfo> Info                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UGCloudNet::OnNearByPersonInfoNotify(TArray<struct FNearByPersonInfo> Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnNearByPersonInfoNotify");

	UGCloudNet_OnNearByPersonInfoNotify_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnLaunchInfo
// (Final, Native, Private)
// Parameters:
// struct FString                 roominfo                       (Parm, ZeroConstructor)

void UGCloudNet::OnLaunchInfo(const struct FString& roominfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnLaunchInfo");

	UGCloudNet_OnLaunchInfo_Params params;
	params.roominfo = roominfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGroupNotify
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FGroupInfoWrapper       groupInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudNet::OnGroupNotify(const struct FGroupInfoWrapper& groupInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGroupNotify");

	UGCloudNet_OnGroupNotify_Params params;
	params.groupInfo = groupInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGetHttpDnsCallback
// (Final, Native, Private)
// Parameters:
// bool                           isSuccess                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 strHostName                    (Parm, ZeroConstructor)
// struct FString                 strIP                          (Parm, ZeroConstructor)

void UGCloudNet::OnGetHttpDnsCallback(bool isSuccess, const struct FString& strHostName, const struct FString& strIP)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGetHttpDnsCallback");

	UGCloudNet_OnGetHttpDnsCallback_Params params;
	params.isSuccess = isSuccess;
	params.strHostName = strHostName;
	params.strIP = strIP;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGCloudStateChangeNotify
// (Final, Native, Private)
// Parameters:
// int                            State                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param3                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnGCloudStateChangeNotify(int State, int Param1, int Param2, int Param3)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGCloudStateChangeNotify");

	UGCloudNet_OnGCloudStateChangeNotify_Params params;
	params.State = State;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Param3 = Param3;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGCloudGetLocationInfoNotify
// (Final, Native, Private, HasOutParms)
// Parameters:
// struct FLocationInfoWrapper    locationInfo                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGCloudNet::OnGCloudGetLocationInfoNotify(const struct FLocationInfoWrapper& locationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGCloudGetLocationInfoNotify");

	UGCloudNet_OnGCloudGetLocationInfoNotify_Params params;
	params.locationInfo = locationInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGCloudDisconnectedNotify
// (Final, Native, Private)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnGCloudDisconnectedNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGCloudDisconnectedNotify");

	UGCloudNet_OnGCloudDisconnectedNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnGCloudConnectedNotify
// (Final, Native, Private)
// Parameters:
// int                            IsConnected                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            nResult                        (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnGCloudConnectedNotify(int IsConnected, int nResult)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnGCloudConnectedNotify");

	UGCloudNet_OnGCloudConnectedNotify_Params params;
	params.IsConnected = IsConnected;
	params.nResult = nResult;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnCrashMessageNotify
// (Final, Native, Private)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGCloudNet::OnCrashMessageNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnCrashMessageNotify");

	UGCloudNet_OnCrashMessageNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function ClientNet.GCloudNet.OnAccountLoginNotify
// (Final, Native, Private)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// int                            Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnAccountLoginNotify(int Result, const struct FString& OpenID, int Channel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnAccountLoginNotify");

	UGCloudNet_OnAccountLoginNotify_Params params;
	params.Result = Result;
	params.OpenID = OpenID;
	params.Channel = Channel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnAccountLoginInfoNotify
// (Final, Native, Private, HasOutParms)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGCloudLoginAccountInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGCloudNet::OnAccountLoginInfoNotify(int Result, const struct FGCloudLoginAccountInfo& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnAccountLoginInfoNotify");

	UGCloudNet_OnAccountLoginInfoNotify_Params params;
	params.Result = Result;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnAccountInitializeNotify
// (Final, Native, Private)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnAccountInitializeNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnAccountInitializeNotify");

	UGCloudNet_OnAccountInitializeNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function ClientNet.GCloudNet.OnAccessTokenRefreshedNotify
// (Final, Native, Private)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UGCloudNet::OnAccessTokenRefreshedNotify(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function ClientNet.GCloudNet.OnAccessTokenRefreshedNotify");

	UGCloudNet_OnAccessTokenRefreshedNotify_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

