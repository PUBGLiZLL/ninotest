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

// Function ClientNet.GCloudNet.OnWebviewNotify
struct UGCloudNet_OnWebviewNotify_Params
{
	struct FWebviewInfoWrapper                         webviewinfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnShareNotify
struct UGCloudNet_OnShareNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Platform;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnReceiveDataNotify
struct UGCloudNet_OnReceiveDataNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              Msg;                                                      // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudNet.OnQuickLoginNotify
struct UGCloudNet_OnQuickLoginNotify_Params
{
	struct FWakeupInfoWrapper                          wakeupinfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnQueryMyInfoNotify
struct UGCloudNet_OnQueryMyInfoNotify_Params
{
};

// Function ClientNet.GCloudNet.OnQRCodeGenQRImg
struct UGCloudNet_OnQRCodeGenQRImg_Params
{
	int                                                Tag;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Ret;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     imgPath;                                                  // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudNet.OnNearByPersonInfoNotify
struct UGCloudNet_OnNearByPersonInfoNotify_Params
{
	TArray<struct FNearByPersonInfo>                   Info;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnLaunchInfo
struct UGCloudNet_OnLaunchInfo_Params
{
	struct FString                                     roominfo;                                                 // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudNet.OnGroupNotify
struct UGCloudNet_OnGroupNotify_Params
{
	struct FGroupInfoWrapper                           groupInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnGetHttpDnsCallback
struct UGCloudNet_OnGetHttpDnsCallback_Params
{
	bool                                               isSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     strHostName;                                              // (Parm, ZeroConstructor)
	struct FString                                     strIP;                                                    // (Parm, ZeroConstructor)
};

// Function ClientNet.GCloudNet.OnGCloudStateChangeNotify
struct UGCloudNet_OnGCloudStateChangeNotify_Params
{
	int                                                State;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param3;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnGCloudGetLocationInfoNotify
struct UGCloudNet_OnGCloudGetLocationInfoNotify_Params
{
	struct FLocationInfoWrapper                        locationInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnGCloudDisconnectedNotify
struct UGCloudNet_OnGCloudDisconnectedNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnGCloudConnectedNotify
struct UGCloudNet_OnGCloudConnectedNotify_Params
{
	int                                                IsConnected;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nResult;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnCrashMessageNotify
struct UGCloudNet_OnCrashMessageNotify_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function ClientNet.GCloudNet.OnAccountLoginNotify
struct UGCloudNet_OnAccountLoginNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	int                                                Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnAccountLoginInfoNotify
struct UGCloudNet_OnAccountLoginInfoNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGCloudLoginAccountInfo                     Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function ClientNet.GCloudNet.OnAccountInitializeNotify
struct UGCloudNet_OnAccountInitializeNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function ClientNet.GCloudNet.OnAccessTokenRefreshedNotify
struct UGCloudNet_OnAccessTokenRefreshedNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

}

