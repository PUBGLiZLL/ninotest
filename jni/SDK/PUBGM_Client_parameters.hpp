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

// Function Client.ActImageDownloader.GetImage
struct UActImageDownloader_GetImage_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	class UActImageDownloader*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BLEAdapteBaseInterface.SetBLEResult
struct UBLEAdapteBaseInterface_SetBLEResult_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BLEAdapteBaseInterface.SetBLEIdendify
struct UBLEAdapteBaseInterface_SetBLEIdendify_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function Client.BLEAdapteBaseInterface.Disconnect
struct UBLEAdapteBaseInterface_Disconnect_Params
{
};

// Function Client.BLEAdapteBaseInterface.Connect
struct UBLEAdapteBaseInterface_Connect_Params
{
};

// Function Client.BLEAdapteInterface.SetBLEResult
struct UBLEAdapteInterface_SetBLEResult_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BLEAdapteInterface.SetBLEIdendify
struct UBLEAdapteInterface_SetBLEIdendify_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function Client.BLEAdapteInterface.Disconnect
struct UBLEAdapteInterface_Disconnect_Params
{
};

// Function Client.BLEAdapteInterface.Connect
struct UBLEAdapteInterface_Connect_Params
{
};

// Function Client.BLEConnectMgr.SetServerIDAndString
struct UBLEConnectMgr_SetServerIDAndString_Params
{
	int                                                ID;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ServerStr;                                                // (Parm, ZeroConstructor)
	int                                                DeviceID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                DeviceType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BLEConnectMgr.SetBLEResult
struct UBLEConnectMgr_SetBLEResult_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BLEConnectMgr.SetBLEIdendify
struct UBLEConnectMgr_SetBLEIdendify_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function Client.BLEConnectMgr.Initialize
struct UBLEConnectMgr_Initialize_Params
{
};

// Function Client.BLEConnectMgr.DisconnectBLE
struct UBLEConnectMgr_DisconnectBLE_Params
{
};

// Function Client.BLEConnectMgr.ConnectBLE
struct UBLEConnectMgr_ConnectBLE_Params
{
};

// Function Client.BugReporter.SendScreenShot
struct UBugReporter_SendScreenShot_Params
{
	struct FString                                     errorReason;                                              // (Parm, ZeroConstructor)
	struct FString                                     errorDescription;                                         // (Parm, ZeroConstructor)
	struct FString                                     ImagePath;                                                // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BugReporter.SendLog
struct UBugReporter_SendLog_Params
{
	struct FString                                     errorReason;                                              // (Parm, ZeroConstructor)
	struct FString                                     errorDescription;                                         // (Parm, ZeroConstructor)
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               pullAll;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.BugReporter.ReadZipLog
struct UBugReporter_ReadZipLog_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Client.BugReporter.CompressLog
struct UBugReporter_CompressLog_Params
{
	bool                                               pullAllLog;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<unsigned char>                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.UIGetResWithPath
struct UBusinessHelper_UIGetResWithPath_Params
{
	struct FString                                     DesManagerName;                                           // (Parm, ZeroConstructor)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.UIGetLuaManagerByName
struct UBusinessHelper_UIGetLuaManagerByName_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     InManagerName;                                            // (Parm, ZeroConstructor)
	class ALuaClassObj*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.UIGetLuaManager
struct UBusinessHelper_UIGetLuaManager_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class ALuaClassObj*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.IsWithWINMSDK
struct UBusinessHelper_IsWithWINMSDK_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetWidgetByName
struct UBusinessHelper_GetWidgetByName_Params
{
	class UUAEUserWidget*                              pUIClass;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     InManagerName;                                            // (Parm, ZeroConstructor)
	struct FString                                     InWidgtName;                                              // (Parm, ZeroConstructor)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.BusinessHelper.GetTime
struct UBusinessHelper_GetTime_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetMobileBasePath
struct UBusinessHelper_GetMobileBasePath_Params
{
	struct FString                                     InPath;                                                   // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.BusinessHelper.GetDataTable
struct UBusinessHelper_GetDataTable_Params
{
	struct FString                                     TableName;                                                // (Parm, ZeroConstructor)
	class UUAEDataTable*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetCurrentNetworkState
struct UBusinessHelper_GetCurrentNetworkState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.BusinessHelper.GetChildByName
struct UBusinessHelper_GetChildByName_Params
{
	class UUserWidget*                                 pParent;                                                  // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
	class UWidget*                                     ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.BusinessHelper.BroadCastMSG
struct UBusinessHelper_BroadCastMSG_Params
{
	class UFrontendHUD*                                FrontendHUD;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     DesManagerName;                                           // (Parm, ZeroConstructor)
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Client.TestHUD.TestFunctionNOParam
struct ATestHUD_TestFunctionNOParam_Params
{
};

// Function Client.TestHUD.TestFunctionBP_LUA
struct ATestHUD_TestFunctionBP_LUA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.TestFunctionBP
struct ATestHUD_TestFunctionBP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_LUA_Call
struct ATestHUD_Function_LUA_Call_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_Lua
struct ATestHUD_Function_Lua_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_CPlus_Call
struct ATestHUD_Function_CPlus_Call_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_CPlus
struct ATestHUD_Function_CPlus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_CPP
struct ATestHUD_Function_BP_CPP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call_LUA
struct ATestHUD_Function_BP_Call_LUA_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call_CPP
struct ATestHUD_Function_BP_Call_CPP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call_CPlus
struct ATestHUD_Function_BP_Call_CPlus_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP_Call
struct ATestHUD_Function_BP_Call_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TestHUD.Function_BP
struct ATestHUD_Function_BP_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendUtils.GetTableManager
struct UGameBackendUtils_GetTableManager_Params
{
	class UUAETableManager*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendUtils.GetLoadedClassManager
struct UGameBackendUtils_GetLoadedClassManager_Params
{
	class UUAELoadedClassManager*                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendHUD.GetUtils
struct UGameBackendHUD_GetUtils_Params
{
	class UGameBackendUtils*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendHUD.GetInstance
struct UGameBackendHUD_GetInstance_Params
{
	class UGameBackendHUD*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBackendHUD.GetFirstGameFrontendHUD
struct UGameBackendHUD_GetFirstGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBusinessManager.GetWidgetFromName
struct UGameBusinessManager_GetWidgetFromName_Params
{
	struct FString                                     WidgetName;                                               // (Parm, ZeroConstructor)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.GameBusinessManager.GetWidget
struct UGameBusinessManager_GetWidget_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.GameBusinessManager.GetLuaObject
struct UGameBusinessManager_GetLuaObject_Params
{
	class ALuaClassObj*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameBusinessManager.GetGameFrontendHUD
struct UGameBusinessManager_GetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.UnRegisterUIShowHideEventDelegate
struct UGameFrontendHUD_UnRegisterUIShowHideEventDelegate_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.TestLoadNoGCPackage
struct UGameFrontendHUD_TestLoadNoGCPackage_Params
{
};

// Function Client.GameFrontendHUD.StartGrayUpdate
struct UGameFrontendHUD_StartGrayUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.ShutdownUnrealNetwork
struct UGameFrontendHUD_ShutdownUnrealNetwork_Params
{
};

// Function Client.GameFrontendHUD.ShouldWatchingDetailBtnOpen
struct UGameFrontendHUD_ShouldWatchingDetailBtnOpen_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.SetGameStatusMap
struct UGameFrontendHUD_SetGameStatusMap_Params
{
	TMap<struct FName, struct FString>                 InGameStatusMap;                                          // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RetryDownload
struct UGameFrontendHUD_RetryDownload_Params
{
};

// Function Client.GameFrontendHUD.ResetUserSettings
struct UGameFrontendHUD_ResetUserSettings_Params
{
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Int
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Int_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Float
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Float_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Enum
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Enum_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Bool
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Bool_Params
{
	struct FString                                     PropertyName;                                             // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate
struct UGameFrontendHUD_RegisterUserSettingsDelegate_Params
{
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterUIShowHideEventDelegate
struct UGameFrontendHUD_RegisterUIShowHideEventDelegate_Params
{
	struct FString                                     Source;                                                   // (Parm, ZeroConstructor)
	struct FScriptDelegate                             Delegate;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.RegisterPay
struct UGameFrontendHUD_RegisterPay_Params
{
};

// Function Client.GameFrontendHUD.OnWebviewNotify
struct UGameFrontendHUD_OnWebviewNotify_Params
{
	struct FWebviewInfoWrapper                         webviewinfo;                                              // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnRefreshAccountInfo
struct UGameFrontendHUD_OnRefreshAccountInfo_Params
{
	bool                                               Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InChannel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InOpenId;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.OnQuickLoginNotify
struct UGameFrontendHUD_OnQuickLoginNotify_Params
{
	struct FWakeupInfoWrapper                          wakeupinfo;                                               // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnQueryMyInfoNotify
struct UGameFrontendHUD_OnQueryMyInfoNotify_Params
{
};

// Function Client.GameFrontendHUD.OnNearByPersonInfoNotify
struct UGameFrontendHUD_OnNearByPersonInfoNotify_Params
{
};

// Function Client.GameFrontendHUD.OnMidasPayNeedLogin
struct UGameFrontendHUD_OnMidasPayNeedLogin_Params
{
};

// Function Client.GameFrontendHUD.OnMidasPayCallBack
struct UGameFrontendHUD_OnMidasPayCallBack_Params
{
	struct FAPPayResponseInfo                          Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnMidasLauchMpInfoCallBack
struct UGameFrontendHUD_OnMidasLauchMpInfoCallBack_Params
{
	int                                                resultCode;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.OnLocationInfoNotify
struct UGameFrontendHUD_OnLocationInfoNotify_Params
{
	struct FLocationInfoWrapper                        locationInfo;                                             // (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.OnHttpImgResponse
struct UGameFrontendHUD_OnHttpImgResponse_Params
{
	class UTexture2D*                                  Texture;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	class UImageDownloader*                            downloader;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameFrontendHUD.OnGroupNotify
struct UGameFrontendHUD_OnGroupNotify_Params
{
	struct FGroupInfoWrapper                           groupInfo;                                                // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnGenQRImgNotify
struct UGameFrontendHUD_OnGenQRImgNotify_Params
{
	int                                                Ret;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     imgPath;                                                  // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.OnCrashMessageNotify
struct UGameFrontendHUD_OnCrashMessageNotify_Params
{
	struct FString                                     ReturnValue;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GameFrontendHUD.OnAccountLoginInfoNotify
struct UGameFrontendHUD_OnAccountLoginInfoNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGCloudLoginAccountInfo                     Info;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.GameFrontendHUD.OnAccessTokenRefreshNotify
struct UGameFrontendHUD_OnAccessTokenRefreshNotify_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     OpenKey;                                                  // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.MidasPay
struct UGameFrontendHUD_MidasPay_Params
{
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     productId;                                                // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.MatchVersion
struct UGameFrontendHUD_MatchVersion_Params
{
};

// Function Client.GameFrontendHUD.LauchMpInfo
struct UGameFrontendHUD_LauchMpInfo_Params
{
};

// Function Client.GameFrontendHUD.InitMidasManager
struct UGameFrontendHUD_InitMidasManager_Params
{
};

// Function Client.GameFrontendHUD.GetUserSettings
struct UGameFrontendHUD_GetUserSettings_Params
{
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetUpdater
struct UGameFrontendHUD_GetUpdater_Params
{
	class UGDolphinUpdater*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetUIElemSettings
struct UGameFrontendHUD_GetUIElemSettings_Params
{
	struct FString                                     InSlotName;                                               // (Parm, ZeroConstructor)
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetMidasManager
struct UGameFrontendHUD_GetMidasManager_Params
{
	class UGCloudMidasManager*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetLuaStateWrapper
struct UGameFrontendHUD_GetLuaStateWrapper_Params
{
	class ULuaStateWrapper*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetHttpHelper
struct UGameFrontendHUD_GetHttpHelper_Params
{
	class UHttpHelper*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetGVoiceInterface
struct UGameFrontendHUD_GetGVoiceInterface_Params
{
	class UGVoiceInterface*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetDetailNetInfoFromGCloud
struct UGameFrontendHUD_GetDetailNetInfoFromGCloud_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetBugReporter
struct UGameFrontendHUD_GetBugReporter_Params
{
	class UBugReporter*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameFrontendHUD.GetBattleIDHexStr
struct UGameFrontendHUD_GetBattleIDHexStr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GameFrontendHUD.FinishModifyUserSettings
struct UGameFrontendHUD_FinishModifyUserSettings_Params
{
};

// Function Client.GameFrontendHUD.ClearUIElemSettings
struct UGameFrontendHUD_ClearUIElemSettings_Params
{
};

// Function Client.GameFrontendHUD.CallLuaTableFunction
struct UGameFrontendHUD_CallLuaTableFunction_Params
{
	struct FString                                     TableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.CallGlobalScriptFunction
struct UGameFrontendHUD_CallGlobalScriptFunction_Params
{
	struct FString                                     InFunctionName;                                           // (Parm, ZeroConstructor)
};

// Function Client.GameFrontendHUD.BeginModifyUserSettings
struct UGameFrontendHUD_BeginModifyUserSettings_Params
{
};

// Function Client.GameJoyInterface.StopManualRecorder
struct UGameJoyInterface_StopManualRecorder_Params
{
};

// Function Client.GameJoyInterface.StartMomentsRecording
struct UGameJoyInterface_StartMomentsRecording_Params
{
};

// Function Client.GameJoyInterface.StartManualRecorder
struct UGameJoyInterface_StartManualRecorder_Params
{
};

// Function Client.GameJoyInterface.ShowVideoListDialog
struct UGameJoyInterface_ShowVideoListDialog_Params
{
};

// Function Client.GameJoyInterface.SetVideoQuality
struct UGameJoyInterface_SetVideoQuality_Params
{
	int                                                quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.SetSwitchOn
struct UGameJoyInterface_SetSwitchOn_Params
{
	bool                                               isOn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.SetMomentRecordSwitchOn
struct UGameJoyInterface_SetMomentRecordSwitchOn_Params
{
	bool                                               isOn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.SetCurrentRecorderPosition
struct UGameJoyInterface_SetCurrentRecorderPosition_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.SetAudioSource
struct UGameJoyInterface_SetAudioSource_Params
{
	bool                                               mic;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnVideoShare
struct UGameJoyInterface_OnVideoShare_Params
{
	int                                                Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnShowVideoPlayer
struct UGameJoyInterface_OnShowVideoPlayer_Params
{
	int                                                IsShow;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnRecordingStart
struct UGameJoyInterface_OnRecordingStart_Params
{
	int                                                Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnRecordingEnd
struct UGameJoyInterface_OnRecordingEnd_Params
{
	int64_t                                            Duration;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnManualRecordingStart
struct UGameJoyInterface_OnManualRecordingStart_Params
{
	int                                                Status;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnCheckSDKPermission
struct UGameJoyInterface_OnCheckSDKPermission_Params
{
	bool                                               isSuccess;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.OnCheckSDKFeature
struct UGameJoyInterface_OnCheckSDKFeature_Params
{
	int                                                sdkFeatureInt;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.MarkReturnBattleAfterKillProcess
struct UGameJoyInterface_MarkReturnBattleAfterKillProcess_Params
{
};

// Function Client.GameJoyInterface.IsSDKFeatureSupport
struct UGameJoyInterface_IsSDKFeatureSupport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameJoyInterface.isRecordingMoments
struct UGameJoyInterface_isRecordingMoments_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameJoyInterface.IsOK
struct UGameJoyInterface_IsOK_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameJoyInterface.IsMomentRecordOK
struct UGameJoyInterface_IsMomentRecordOK_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameJoyInterface.IfGoBackground
struct UGameJoyInterface_IfGoBackground_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameJoyInterface.GetInstance
struct UGameJoyInterface_GetInstance_Params
{
	class UGameJoyInterface*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameJoyInterface.GetCurrentVideoShareChannel
struct UGameJoyInterface_GetCurrentVideoShareChannel_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GameJoyInterface.GenerateMomentsVideo
struct UGameJoyInterface_GenerateMomentsVideo_Params
{
	TArray<struct FTimeStamp>                          shortVideosTimeStampList;                                 // (Parm, ZeroConstructor)
	TArray<struct FTimeStamp>                          largeVideosTimeStampList;                                 // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               extraInfo;                                                // (Parm, ZeroConstructor)
};

// Function Client.GameJoyInterface.EndMomentsRecording
struct UGameJoyInterface_EndMomentsRecording_Params
{
	bool                                               needEndCallback;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.EnableBgmMix
struct UGameJoyInterface_EnableBgmMix_Params
{
	bool                                               Enable;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GameJoyInterface.CloseVideoListDialog
struct UGameJoyInterface_CloseVideoListDialog_Params
{
};

// Function Client.GameJoyInterface.ClearMomentsVideo
struct UGameJoyInterface_ClearMomentsVideo_Params
{
};

// Function Client.GDolphinUpdater.StartAppUpdate
struct UGDolphinUpdater_StartAppUpdate_Params
{
};

// Function Client.GDolphinUpdater.IsUpdating
struct UGDolphinUpdater_IsUpdating_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.IsGrayUpdate
struct UGDolphinUpdater_IsGrayUpdate_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.IsExamine
struct UGDolphinUpdater_IsExamine_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.Install
struct UGDolphinUpdater_Install_Params
{
};

// Function Client.GDolphinUpdater.GetCurStage
struct UGDolphinUpdater_GetCurStage_Params
{
	float                                              Percent;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GetCurVal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                GetMaxVal;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GDolphinUpdater.FinishUpdate
struct UGDolphinUpdater_FinishUpdate_Params
{
};

// Function Client.GDolphinUpdater.ContinueUpdate
struct UGDolphinUpdater_ContinueUpdate_Params
{
};

// Function Client.GDolphinUpdater.CancelUpdate
struct UGDolphinUpdater_CancelUpdate_Params
{
};

// Function Client.GDolphinUpdater.CancelResUpdate
struct UGDolphinUpdater_CancelResUpdate_Params
{
};

// Function Client.GDolphinUpdater.CancelAppUpdate
struct UGDolphinUpdater_CancelAppUpdate_Params
{
};

// Function Client.GCloudNotice.GetNotice
struct UGCloudNotice_GetNotice_Params
{
	struct FString                                     Scene;                                                    // (Parm, ZeroConstructor)
	TArray<struct FNoticeInfo>                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.GCloudNotice.GetInstance
struct UGCloudNotice_GetInstance_Params
{
	class UGCloudNotice*                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GCloudNotice.ClearNotice
struct UGCloudNotice_ClearNotice_Params
{
};

// Function Client.GVoiceInterface.UploadRecordFile
struct UGVoiceInterface_UploadRecordFile_Params
{
};

// Function Client.GVoiceInterface.TeamSpeakerEnable
struct UGVoiceInterface_TeamSpeakerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.TeamMicphoneEnable
struct UGVoiceInterface_TeamMicphoneEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.SwitchMicphoneWhenCorpsMode
struct UGVoiceInterface_SwitchMicphoneWhenCorpsMode_Params
{
};

// Function Client.GVoiceInterface.StopRecord
struct UGVoiceInterface_StopRecord_Params
{
};

// Function Client.GVoiceInterface.StopPlayRecordFile
struct UGVoiceInterface_StopPlayRecordFile_Params
{
};

// Function Client.GVoiceInterface.StopInterphone
struct UGVoiceInterface_StopInterphone_Params
{
};

// Function Client.GVoiceInterface.StartRecord
struct UGVoiceInterface_StartRecord_Params
{
};

// Function Client.GVoiceInterface.StartInterphone
struct UGVoiceInterface_StartInterphone_Params
{
};

// Function Client.GVoiceInterface.SpeechToText
struct UGVoiceInterface_SpeechToText_Params
{
};

// Function Client.GVoiceInterface.ShowOpenSpeakerAtFirstMsg
struct UGVoiceInterface_ShowOpenSpeakerAtFirstMsg_Params
{
};

// Function Client.GVoiceInterface.ShowCorpsModeCannotUseLBSVoice
struct UGVoiceInterface_ShowCorpsModeCannotUseLBSVoice_Params
{
};

// Function Client.GVoiceInterface.SetVoiceMode
struct UGVoiceInterface_SetVoiceMode_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetSpeakerVolum
struct UGVoiceInterface_SetSpeakerVolum_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetSpeakerStatus
struct UGVoiceInterface_SetSpeakerStatus_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetMicphoneVolum
struct UGVoiceInterface_SetMicphoneVolum_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetMicphoneStatus
struct UGVoiceInterface_SetMicphoneStatus_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetMainVolume
struct UGVoiceInterface_SetMainVolume_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetMainSoundSwitch
struct UGVoiceInterface_SetMainSoundSwitch_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetLbsVoiceRadius
struct UGVoiceInterface_SetLbsVoiceRadius_Params
{
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetLbsRoomEnableStatus
struct UGVoiceInterface_SetLbsRoomEnableStatus_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetGameFrontendHUD
struct UGVoiceInterface_SetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            InHUD;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetCurrentDownloadFieldID
struct UGVoiceInterface_SetCurrentDownloadFieldID_Params
{
	struct FString                                     filedId;                                                  // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.SetBGMVolume
struct UGVoiceInterface_SetBGMVolume_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.SetBGMSwitch
struct UGVoiceInterface_SetBGMSwitch_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.ResetWhenLogOut
struct UGVoiceInterface_ResetWhenLogOut_Params
{
};

// Function Client.GVoiceInterface.ReactiveLbsStatus
struct UGVoiceInterface_ReactiveLbsStatus_Params
{
};

// Function Client.GVoiceInterface.QuitRoom
struct UGVoiceInterface_QuitRoom_Params
{
};

// Function Client.GVoiceInterface.PlayRecordFile
struct UGVoiceInterface_PlayRecordFile_Params
{
};

// Function Client.GVoiceInterface.OpenTeamSpeakerOnly
struct UGVoiceInterface_OpenTeamSpeakerOnly_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenTeamMicphoneOnly
struct UGVoiceInterface_OpenTeamMicphoneOnly_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenTeamInterphone
struct UGVoiceInterface_OpenTeamInterphone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenSpeaker
struct UGVoiceInterface_OpenSpeaker_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenMicAndSpeakerAfterJoinRoom
struct UGVoiceInterface_OpenMicAndSpeakerAfterJoinRoom_Params
{
};

// Function Client.GVoiceInterface.OpenMic
struct UGVoiceInterface_OpenMic_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenGroupSpeakerOnly
struct UGVoiceInterface_OpenGroupSpeakerOnly_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenGroupMicphoneOnly
struct UGVoiceInterface_OpenGroupMicphoneOnly_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenGroupInterphone
struct UGVoiceInterface_OpenGroupInterphone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenAllSpeaker
struct UGVoiceInterface_OpenAllSpeaker_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenAllMicphone
struct UGVoiceInterface_OpenAllMicphone_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OpenAllInterphone
struct UGVoiceInterface_OpenAllInterphone_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.OnRoomTypeChanged
struct UGVoiceInterface_OnRoomTypeChanged_Params
{
	struct FString                                     itemtext;                                                 // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.LbsSpeakerEnable
struct UGVoiceInterface_LbsSpeakerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.LbsMicphoneEnable
struct UGVoiceInterface_LbsMicphoneEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.JoinRoom
struct UGVoiceInterface_JoinRoom_Params
{
	struct FString                                     room;                                                     // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.JoinLbsRoom
struct UGVoiceInterface_JoinLbsRoom_Params
{
	struct FString                                     lbsRoom;                                                  // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.JoinGroupRoom
struct UGVoiceInterface_JoinGroupRoom_Params
{
	struct FString                                     groupRoom;                                                // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.IsTeamInterphoneOpenned
struct UGVoiceInterface_IsTeamInterphoneOpenned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.IsLbsInterphoneOpenned
struct UGVoiceInterface_IsLbsInterphoneOpenned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.IsInterphoneMode
struct UGVoiceInterface_IsInterphoneMode_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.IsGroupInterphoneOpenned
struct UGVoiceInterface_IsGroupInterphoneOpenned_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.InitGVoiceComponent
struct UGVoiceInterface_InitGVoiceComponent_Params
{
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.GVoiceInterface.HaveTeamRoom
struct UGVoiceInterface_HaveTeamRoom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.HaveLbsRoom
struct UGVoiceInterface_HaveLbsRoom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.HaveGroupRoom
struct UGVoiceInterface_HaveGroupRoom_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.GroupSpeakerEnable
struct UGVoiceInterface_GroupSpeakerEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.GroupMicphoneEnable
struct UGVoiceInterface_GroupMicphoneEnable_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.GetVoiceLength
struct UGVoiceInterface_GetVoiceLength_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.GVoiceInterface.GetAuthKey
struct UGVoiceInterface_GetAuthKey_Params
{
};

// Function Client.GVoiceInterface.ForbidTeammateVoiceById
struct UGVoiceInterface_ForbidTeammateVoiceById_Params
{
	int                                                memberID;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               IsEnable;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.EnableBluetoothSCO
struct UGVoiceInterface_EnableBluetoothSCO_Params
{
	bool                                               Flag;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.DownloadRecordFile
struct UGVoiceInterface_DownloadRecordFile_Params
{
};

// Function Client.GVoiceInterface.CloseSpeaker
struct UGVoiceInterface_CloseSpeaker_Params
{
};

// Function Client.GVoiceInterface.CloseMic
struct UGVoiceInterface_CloseMic_Params
{
};

// Function Client.GVoiceInterface.CloseAllSpeaker
struct UGVoiceInterface_CloseAllSpeaker_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.GVoiceInterface.CloseAllMicphone
struct UGVoiceInterface_CloseAllMicphone_Params
{
	bool                                               showTips;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.HotUpdater.OnGetVersionData
struct UHotUpdater_OnGetVersionData_Params
{
	bool                                               Successful;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FileURL;                                                  // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.HotUpdater.OnDownloadedOneFile
struct UHotUpdater_OnDownloadedOneFile_Params
{
	bool                                               Successful;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FileURL;                                                  // (Parm, ZeroConstructor)
	TArray<unsigned char>                              Data;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.HttpHelper.HttpGet
struct UHttpHelper_HttpGet_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ImageDownloader.Start
struct UImageDownloader_Start_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ImageDownloader.SetSubDirTime
struct UImageDownloader_SetSubDirTime_Params
{
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ImageDownloader.SetRootDir
struct UImageDownloader_SetRootDir_Params
{
	struct FString                                     rootDir;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ImageDownloader.ResetSubDirTime
struct UImageDownloader_ResetSubDirTime_Params
{
};

// Function Client.ImageDownloader.ResetRootDir
struct UImageDownloader_ResetRootDir_Params
{
};

// Function Client.ImageDownloader.MakeDownloaderInGame
struct UImageDownloader_MakeDownloaderInGame_Params
{
	class UImageDownloader*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ImageDownloader.MakeDownloader
struct UImageDownloader_MakeDownloader_Params
{
	class UImageDownloader*                            ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.InGameUIManager.SubUIWidgetList
struct UInGameUIManager_SubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             GameStatusStrList;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               InPersistentUI;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InUsedByControler;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InOberverOnly;                                            // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.InGameUIManager.HandleUIMessage
struct UInGameUIManager_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function Client.InGameUIManager.HandleDynamicCreation
struct UInGameUIManager_HandleDynamicCreation_Params
{
};

// Function Client.LiveBroadcast.SetFullScreen
struct ULiveBroadcast_SetFullScreen_Params
{
	bool                                               FullScreen;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LiveBroadcast.OpenLiveBroadcast
struct ULiveBroadcast_OpenLiveBroadcast_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	float                                              Margin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LiveBroadcast.GetInstance
struct ULiveBroadcast_GetInstance_Params
{
	class ULiveBroadcast*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LiveBroadcast.CloseWebView
struct ULiveBroadcast_CloseWebView_Params
{
};

// Function Client.LiveBroadcast.C2JSetIndex
struct ULiveBroadcast_C2JSetIndex_Params
{
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LoadTexture.LoadTexture2D
struct ULoadTexture_LoadTexture2D_Params
{
	struct FString                                     ImagePath;                                                // (Parm, ZeroConstructor)
	bool                                               IsValid;                                                  // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutWidth;                                                 // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                OutHeight;                                                // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LoadTexture.GetTexture2DFromDiskFile
struct ULoadTexture_GetTexture2DFromDiskFile_Params
{
	struct FString                                     FilePath;                                                 // (Parm, ZeroConstructor)
	class UTexture2D*                                  ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaClassObj.SubUIWidgetList
struct ALuaClassObj_SubUIWidgetList_Params
{
	TArray<struct FGameWidgetConfig>                   InWidgetConfigList;                                       // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	TArray<struct FString>                             GameStatusStrList;                                        // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                               bPersistentUI;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InStatusConcern;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicWidget;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bKeepDynamicWidget;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaClassObj.SubShowHideEvent
struct ALuaClassObj_SubShowHideEvent_Params
{
	TArray<struct FString>                             WidgetPathList;                                           // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.LuaClassObj.SubDefaultSceneCamera
struct ALuaClassObj_SubDefaultSceneCamera_Params
{
	int                                                sceneCameraIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaClassObj.SubDefaultChildUI
struct ALuaClassObj_SubDefaultChildUI_Params
{
	TArray<struct FString>                             childList;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function Client.LuaClassObj.SubDefaultBaseUI
struct ALuaClassObj_SubDefaultBaseUI_Params
{
	struct FString                                     baseUI;                                                   // (Parm, ZeroConstructor)
};

// Function Client.LuaClassObj.SubCollapseWidgetList
struct ALuaClassObj_SubCollapseWidgetList_Params
{
	struct FString                                     RootWidgetName;                                           // (Parm, ZeroConstructor)
	TArray<struct FString>                             ChildWidgetNames;                                         // (Parm, OutParm, ZeroConstructor)
};

// Function Client.LuaClassObj.PushPanel
struct ALuaClassObj_PushPanel_Params
{
	struct FString                                     srcTag;                                                   // (Parm, ZeroConstructor)
	struct FString                                     dstTag;                                                   // (Parm, ZeroConstructor)
};

// Function Client.LuaClassObj.IsTopStackPanel
struct ALuaClassObj_IsTopStackPanel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaClassObj.IsPushedPanel
struct ALuaClassObj_IsPushedPanel_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.LuaClassObj.HandleUIMessageNoFetch
struct ALuaClassObj_HandleUIMessageNoFetch_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function Client.LuaClassObj.HandleUIMessage
struct ALuaClassObj_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function Client.LuaClassObj.HandleDynamicDestruction
struct ALuaClassObj_HandleDynamicDestruction_Params
{
};

// Function Client.LuaClassObj.HandleDynamicCreation
struct ALuaClassObj_HandleDynamicCreation_Params
{
};

// Function Client.LuaClassObj.GetWidgetFromName
struct ALuaClassObj_GetWidgetFromName_Params
{
	struct FString                                     WidgetPath;                                               // (Parm, ZeroConstructor)
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function Client.LuaClassObj.GetTopStackPanelSrcTag
struct ALuaClassObj_GetTopStackPanelSrcTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.LuaClassObj.GetTopStackPanelDstTag
struct ALuaClassObj_GetTopStackPanelDstTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.LuaClassObj.GetGameStatus
struct ALuaClassObj_GetGameStatus_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.LuaClassObj.AddToTopStackPanel
struct ALuaClassObj_AddToTopStackPanel_Params
{
};

// Function Client.LuaExtendLibrary.CallLuaFunction_TwoParams
struct ULuaExtendLibrary_CallLuaFunction_TwoParams_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                Param0;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaExtendLibrary.CallLuaFunction_ThreeParams
struct ULuaExtendLibrary_CallLuaFunction_ThreeParams_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                Param0;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaExtendLibrary.CallLuaFunction_SixParams
struct ULuaExtendLibrary_CallLuaFunction_SixParams_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                Param0;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param3;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param4;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param5;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaExtendLibrary.CallLuaFunction_SevenParams
struct ULuaExtendLibrary_CallLuaFunction_SevenParams_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                Param0;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param3;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param4;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param5;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param6;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaExtendLibrary.CallLuaFunction_OneParam
struct ULuaExtendLibrary_CallLuaFunction_OneParam_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                Param;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaExtendLibrary.CallLuaFunction_FourParams
struct ULuaExtendLibrary_CallLuaFunction_FourParams_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                Param0;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param3;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaExtendLibrary.CallLuaFunction_FiveParams
struct ULuaExtendLibrary_CallLuaFunction_FiveParams_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	int                                                Param0;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param1;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param2;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param3;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Param4;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.LuaExtendLibrary.CallLuaFunction
struct ULuaExtendLibrary_CallLuaFunction_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Client.ReuseList.Tick
struct UReuseList_Tick_Params
{
	struct FGeometry                                   MyGeometry;                                               // (Parm, IsPlainOldData)
	float                                              InDeltaTime;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseList.SetReloadDonotJump
struct UReuseList_SetReloadDonotJump_Params
{
	bool                                               DonotJump;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseList.Reload
struct UReuseList_Reload_Params
{
	int                                                _ItemCount;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                _ItemHeight;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                _ItemWidth;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                _Style;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UClass*                                      Class;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                _PaddingX;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                _PaddingY;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseList.RefreshOne
struct UReuseList_RefreshOne_Params
{
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseList.Refresh
struct UReuseList_Refresh_Params
{
};

// Function Client.ReuseList.MoveOffset
struct UReuseList_MoveOffset_Params
{
	float                                              Offset;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseList.JumpbyIdx
struct UReuseList_JumpbyIdx_Params
{
	int                                                Idx;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ReuseList.IfInEnd
struct UReuseList_IfInEnd_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseList.GetViewSize
struct UReuseList_GetViewSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseList.GetCurrentEnd
struct UReuseList_GetCurrentEnd_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseList.GetCurrentBegin
struct UReuseList_GetCurrentBegin_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseList.GetContentSize
struct UReuseList_GetContentSize_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ReuseList.Clear
struct UReuseList_Clear_Params
{
};

// Function Client.ScreenshotMaker.SaveToPhotosAlbumEx
struct UScreenshotMaker_SaveToPhotosAlbumEx_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.SaveToPhotosAlbum
struct UScreenshotMaker_SaveToPhotosAlbum_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.ReMakePicture
struct UScreenshotMaker_ReMakePicture_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	struct FVector4                                    Vector4;                                                  // (Parm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.ReMakeJPGEPicture
struct UScreenshotMaker_ReMakeJPGEPicture_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	struct FVector4                                    Vector4;                                                  // (Parm, IsPlainOldData)
	int                                                OutWidth;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                OutHeight;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iQuality;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.MakePicture
struct UScreenshotMaker_MakePicture_Params
{
	bool                                               isShowUI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.MakeBugReprotPic
struct UScreenshotMaker_MakeBugReprotPic_Params
{
	bool                                               isShowUI;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScreenshotMaker.HasCaptured
struct UScreenshotMaker_HasCaptured_Params
{
	struct FString                                     pathStr;                                                  // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScreenshotMaker.GetSaveStatus
struct UScreenshotMaker_GetSaveStatus_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.XgClearLocalNotifications
struct UScriptHelperClient_XgClearLocalNotifications_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.XgAddLocalNotification_LuaState
struct UScriptHelperClient_XgAddLocalNotification_LuaState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WGSendToWeixinWithVideo
struct UScriptHelperClient_WGSendToWeixinWithVideo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _videoPath;                                               // (Parm, ZeroConstructor)
	struct FString                                     _videoUrl;                                                // (Parm, ZeroConstructor)
	struct FString                                     _thumbUrl;                                                // (Parm, ZeroConstructor)
	struct FString                                     _mediaTagName;                                            // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
	struct FString                                     _messageAction;                                           // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WGSendToQQWithVideo
struct UScriptHelperClient_WGSendToQQWithVideo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _summary;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _videoPath;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatShareWithUrlInfo
struct UScriptHelperClient_WechatShareWithUrlInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _url;                                                     // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WechatShareWithPhoto
struct UScriptHelperClient_WechatShareWithPhoto_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _mediaTagName;                                            // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
	struct FString                                     _messageAction;                                           // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WeChatShareWithMiniApp2
struct UScriptHelperClient_WeChatShareWithMiniApp2_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgWebPath;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgBackupLocalPath;                                      // (Parm, ZeroConstructor)
	struct FString                                     _webpageUrl;                                              // (Parm, ZeroConstructor)
	struct FString                                     _userName;                                                // (Parm, ZeroConstructor)
	struct FString                                     _path;                                                    // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
	struct FString                                     _messageAction;                                           // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WeChatShareWithMiniApp
struct UScriptHelperClient_WeChatShareWithMiniApp_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _webpageUrl;                                              // (Parm, ZeroConstructor)
	struct FString                                     _userName;                                                // (Parm, ZeroConstructor)
	struct FString                                     _path;                                                    // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
	struct FString                                     _messageAction;                                           // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               _useContent;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.WechatShareToFriend
struct UScriptHelperClient_WechatShareToFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
	struct FString                                     mediaId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     messageExt;                                               // (Parm, ZeroConstructor)
	struct FString                                     mediaTagName;                                             // (Parm, ZeroConstructor)
	struct FString                                     msdkExtInfo;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatShareDeepLink
struct UScriptHelperClient_WechatShareDeepLink_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     link;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatShare
struct UScriptHelperClient_WechatShare_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _mediaTagName;                                            // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatQueryGroup
struct UScriptHelperClient_WechatQueryGroup_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     unionId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     OpenIdList;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatJoinGroup
struct UScriptHelperClient_WechatJoinGroup_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     unionId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     chatRoomNickName;                                         // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WechatCreateGroup
struct UScriptHelperClient_WechatCreateGroup_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     unionId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     chatRoomName;                                             // (Parm, ZeroConstructor)
	struct FString                                     chatRoomNickName;                                         // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.WakeupFromSuspendSound
struct UScriptHelperClient_WakeupFromSuspendSound_Params
{
};

// Function Client.ScriptHelperClient.UploadClientLogs
struct UScriptHelperClient_UploadClientLogs_Params
{
};

// Function Client.ScriptHelperClient.UnloadStreamLevel
struct UScriptHelperClient_UnloadStreamLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                levelId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.TApmDataReport
struct UScriptHelperClient_TApmDataReport_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                EventID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     EventInfo;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SwitchUser
struct UScriptHelperClient_SwitchUser_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               useExternalAccount;                                       // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SwitchSceneCamera
struct UScriptHelperClient_SwitchSceneCamera_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SceneCameraName;                                          // (Parm, ZeroConstructor)
	float                                              blendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SuspendSound
struct UScriptHelperClient_SuspendSound_Params
{
};

// Function Client.ScriptHelperClient.StopShaderPrecompile
struct UScriptHelperClient_StopShaderPrecompile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StartShaderPrecompile
struct UScriptHelperClient_StartShaderPrecompile_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.StartGrayUpdate
struct UScriptHelperClient_StartGrayUpdate_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ShutdownUnrealNetwork
struct UScriptHelperClient_ShutdownUnrealNetwork_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ShowVideoListDialog
struct UScriptHelperClient_ShowVideoListDialog_Params
{
};

// Function Client.ScriptHelperClient.ShowScreenDebugMessage
struct UScriptHelperClient_ShowScreenDebugMessage_Params
{
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ShowGameTypeBlack
struct UScriptHelperClient_ShowGameTypeBlack_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                endTime;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ShowGameType
struct UScriptHelperClient_ShowGameType_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ShowClubLogoInOB
struct UScriptHelperClient_ShowClubLogoInOB_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetWeatherInfo
struct UScriptHelperClient_SetWeatherInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                WeatherID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeatherName;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetUIRectOffset
struct UScriptHelperClient_SetUIRectOffset_Params
{
	struct FString                                     uirect;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetShowFriendObservers
struct UScriptHelperClient_SetShowFriendObservers_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShow;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetShouldShowWatchingDetialBtn
struct UScriptHelperClient_SetShouldShowWatchingDetialBtn_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCan;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetScreenHole
struct UScriptHelperClient_SetScreenHole_Params
{
	struct FString                                     sceenHole;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetPlayerBaseInfo
struct UScriptHelperClient_SetPlayerBaseInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	uint64_t                                           RoleID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     HeadIconUrl;                                              // (Parm, ZeroConstructor)
	int                                                RoleLevel;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetMyFriendObserversDetail
struct UScriptHelperClient_SetMyFriendObserversDetail_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FFriendObserver>                     FriendObserversDetails;                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetLinkStyle
struct UScriptHelperClient_SetLinkStyle_Params
{
	struct FString                                     StyleName;                                                // (Parm, ZeroConstructor)
	int                                                FontSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FontPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FontColor;                                                // (Parm, ZeroConstructor)
	bool                                               ShowUnderline;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetIntSettingConfig
struct UScriptHelperClient_SetIntSettingConfig_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetIntDefaultConfig
struct UScriptHelperClient_SetIntDefaultConfig_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetImageStyle
struct UScriptHelperClient_SetImageStyle_Params
{
	struct FString                                     StyleName;                                                // (Parm, ZeroConstructor)
	int                                                ImageSize;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ImagePath;                                                // (Parm, ZeroConstructor)
	struct FString                                     ImageColor;                                               // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetGameStatusMap
struct UScriptHelperClient_SetGameStatusMap_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TMap<struct FName, struct FString>                 GameStatusMap;                                            // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SetGameSrvID
struct UScriptHelperClient_SetGameSrvID_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                GameSrvID;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetFontStyle
struct UScriptHelperClient_SetFontStyle_Params
{
	struct FString                                     StyleName;                                                // (Parm, ZeroConstructor)
	int                                                FontSize;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     FontPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     FontColor;                                                // (Parm, ZeroConstructor)
	bool                                               UseShadow;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetCanWatchEnemy
struct UScriptHelperClient_SetCanWatchEnemy_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bCan;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetBoolSettingConfig
struct UScriptHelperClient_SetBoolSettingConfig_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetBLEResult
struct UScriptHelperClient_SetBLEResult_Params
{
	int                                                Result;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SetBLEIdendify
struct UScriptHelperClient_SetBLEIdendify_Params
{
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SendRetriveBeginnerFinisheGuideReq
struct UScriptHelperClient_SendRetriveBeginnerFinisheGuideReq_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SendRecordFinishedGuideReq
struct UScriptHelperClient_SendRecordFinishedGuideReq_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     tipsID;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SendLobbyChat
struct UScriptHelperClient_SendLobbyChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	struct FString                                     content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SendDirtyToFilter
struct UScriptHelperClient_SendDirtyToFilter_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     dirtyString;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.SaveSavFileWithMemData_LuaState
struct UScriptHelperClient_SaveSavFileWithMemData_LuaState_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SaveSavFile
struct UScriptHelperClient_SaveSavFile_Params
{
	struct FString                                     CompressedData;                                           // (Parm, ZeroConstructor)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	int                                                CompressedSize;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                UnCompressedSize;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.SaveLuaMemoryFile
struct UScriptHelperClient_SaveLuaMemoryFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InputContent;                                             // (Parm, ZeroConstructor)
	bool                                               RmExistFile;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.Save_LuaState
struct UScriptHelperClient_Save_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ReturnToLobby
struct UScriptHelperClient_ReturnToLobby_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ResetReportComplaintNames
struct UScriptHelperClient_ResetReportComplaintNames_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.RequestWebService
struct UScriptHelperClient_RequestWebService_Params
{
	struct FString                                     servicename;                                              // (Parm, ZeroConstructor)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     verb;                                                     // (Parm, ZeroConstructor)
	struct FString                                     content;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ReportPrajna
struct UScriptHelperClient_ReportPrajna_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     SerialNumber;                                             // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ReplyInvite
struct UScriptHelperClient_ReplyInvite_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	bool                                               bReply;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.RepairPak
struct UScriptHelperClient_RepairPak_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.RemoveTssLoginInfo
struct UScriptHelperClient_RemoveTssLoginInfo_Params
{
};

// Function Client.ScriptHelperClient.RegisterPay
struct UScriptHelperClient_RegisterPay_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QuitVoiceRoom
struct UScriptHelperClient_QuitVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QuitLbsVoiceRoom
struct UScriptHelperClient_QuitLbsVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QuitGroupsVoiceRoom
struct UScriptHelperClient_QuitGroupsVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QuitFightChat
struct UScriptHelperClient_QuitFightChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QueryMyInfo
struct UScriptHelperClient_QueryMyInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                channelType;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQShareWithPhotoExtra
struct UScriptHelperClient_QQShareWithPhotoExtra_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _extraScene;                                              // (Parm, ZeroConstructor)
	struct FString                                     _messageExt;                                              // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQShareWithPhoto
struct UScriptHelperClient_QQShareWithPhoto_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQShareToFriend
struct UScriptHelperClient_QQShareToFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                act;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
	struct FString                                     targetUrl;                                                // (Parm, ZeroConstructor)
	struct FString                                     imgUrl;                                                   // (Parm, ZeroConstructor)
	struct FString                                     previewText;                                              // (Parm, ZeroConstructor)
	struct FString                                     gameTag;                                                  // (Parm, ZeroConstructor)
	struct FString                                     msdkExtInfo;                                              // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.QQShare
struct UScriptHelperClient_QQShare_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     _descShare;                                               // (Parm, ZeroConstructor)
	struct FString                                     _titleShare;                                              // (Parm, ZeroConstructor)
	struct FString                                     _imgPath;                                                 // (Parm, ZeroConstructor)
	struct FString                                     _imgUrl;                                                  // (Parm, ZeroConstructor)
	struct FString                                     _url;                                                     // (Parm, ZeroConstructor)
	int                                                _shareScene;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.QQAddFriend
struct UScriptHelperClient_QQAddFriend_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // (Parm, ZeroConstructor)
	struct FString                                     Desc;                                                     // (Parm, ZeroConstructor)
	struct FString                                     Message;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.PopPanel
struct UScriptHelperClient_PopPanel_Params
{
};

// Function Client.ScriptHelperClient.PopAllPanel
struct UScriptHelperClient_PopAllPanel_Params
{
};

// Function Client.ScriptHelperClient.PandoraSendCmd
struct UScriptHelperClient_PandoraSendCmd_Params
{
	struct FString                                     jsonStr;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.PandoraInit
struct UScriptHelperClient_PandoraInit_Params
{
	struct FString                                     InOpenId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InRoleId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InAppId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     InPlatId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InAccType;                                                // (Parm, ZeroConstructor)
	struct FString                                     InArea;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InPartion;                                                // (Parm, ZeroConstructor)
	struct FString                                     InCloudTest;                                              // (Parm, ZeroConstructor)
	struct FString                                     InAccessToken;                                            // (Parm, ZeroConstructor)
	struct FString                                     InSdkVersion;                                             // (Parm, ZeroConstructor)
	struct FString                                     InGameVersion;                                            // (Parm, ZeroConstructor)
	struct FString                                     InRoleName;                                               // (Parm, ZeroConstructor)
	struct FString                                     InPayToken;                                               // (Parm, ZeroConstructor)
	struct FString                                     InHeadUrl;                                                // (Parm, ZeroConstructor)
	struct FString                                     InChanelId;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.PandoraClose
struct UScriptHelperClient_PandoraClose_Params
{
};

// Function Client.ScriptHelperClient.OpenURL
struct UScriptHelperClient_OpenURL_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	int                                                Dir;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OpenFullScreenWebViewWithJson
struct UScriptHelperClient_OpenFullScreenWebViewWithJson_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Json;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.OnTableReleaseAll_LuaState
struct UScriptHelperClient_OnTableReleaseAll_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.OnReceiveBLEMsg
struct UScriptHelperClient_OnReceiveBLEMsg_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Msg;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.OnNotifyFightFriendChat
struct UScriptHelperClient_OnNotifyFightFriendChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FFightFriendChat                            Data;                                                     // (ConstParm, Parm, OutParm, ReferenceParm)
};

// Function Client.ScriptHelperClient.OnInviteNextBattle
struct UScriptHelperClient_OnInviteNextBattle_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
	struct FString                                     Name;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.OnHttpGetResponse
struct UScriptHelperClient_OnHttpGetResponse_Params
{
	struct FString                                     Result;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.OnFilterFinish
struct UScriptHelperClient_OnFilterFinish_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     filterText;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.OnBattleResult
struct UScriptHelperClient_OnBattleResult_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FBattleResultData                           BattleResultData;                                         // (Parm)
};

// Function Client.ScriptHelperClient.NotifyBeginnerFinishedGuideUpdated
struct UScriptHelperClient_NotifyBeginnerFinishedGuideUpdated_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               GuideSwitch;                                              // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FPlayerFinishedGuide>                finished_guide;                                           // (ConstParm, Parm, ZeroConstructor)
	int                                                player_level;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                player_exp_type;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.MidasPay
struct UScriptHelperClient_MidasPay_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                payItem;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     productId;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.MD5HashAnsiString
struct UScriptHelperClient_MD5HashAnsiString_Params
{
	struct FString                                     str;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.MatchVersion
struct UScriptHelperClient_MatchVersion_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LuaSnapShot_LuaState
struct UScriptHelperClient_LuaSnapShot_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.Logout
struct UScriptHelperClient_Logout_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.Login
struct UScriptHelperClient_Login_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Channel;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LoadStreamLevel
struct UScriptHelperClient_LoadStreamLevel_Params
{
	class UObject*                                     WorldContextObject;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	struct FName                                       LevelName;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bMakeVisibleAfterLoad;                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bShouldBlockOnLoad;                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                levelId;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LoadSavFile_LuaState
struct UScriptHelperClient_LoadSavFile_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LoadLuaFile
struct UScriptHelperClient_LoadLuaFile_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.Load_LuaState
struct UScriptHelperClient_Load_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.LauchMpInfo
struct UScriptHelperClient_LauchMpInfo_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.JumpSettingPage
struct UScriptHelperClient_JumpSettingPage_Params
{
};

// Function Client.ScriptHelperClient.JumpNoticeCenterPage
struct UScriptHelperClient_JumpNoticeCenterPage_Params
{
};

// Function Client.ScriptHelperClient.JoinVoiceRoom
struct UScriptHelperClient_JoinVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     roomName;                                                 // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.JoinLbsVoiceRoom
struct UScriptHelperClient_JoinLbsVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     lbsRoomName;                                              // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.JoinGroupVoiceRoom
struct UScriptHelperClient_JoinGroupVoiceRoom_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     groupRoomName;                                            // (Parm, ZeroConstructor)
	struct FString                                     userId;                                                   // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.IsWithWINMSDK
struct UScriptHelperClient_IsWithWINMSDK_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsWindowOB
struct UScriptHelperClient_IsWindowOB_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsTableDataExist_LuaState
struct UScriptHelperClient_IsTableDataExist_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsShippingBuild
struct UScriptHelperClient_IsShippingBuild_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsPlayWithEditor
struct UScriptHelperClient_IsPlayWithEditor_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsPlatformSupportStoreKit
struct UScriptHelperClient_IsPlatformSupportStoreKit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsIOSCheck
struct UScriptHelperClient_IsIOSCheck_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallWX
struct UScriptHelperClient_IsInstallWX_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsInstallQQ
struct UScriptHelperClient_IsInstallQQ_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsForCE
struct UScriptHelperClient_IsForCE_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsEmulatorWhenInit
struct UScriptHelperClient_IsEmulatorWhenInit_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsEmulator
struct UScriptHelperClient_IsEmulator_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.IsConnected
struct UScriptHelperClient_IsConnected_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.InstallNewApp
struct UScriptHelperClient_InstallNewApp_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.InitLoginAccount
struct UScriptHelperClient_InitLoginAccount_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	uint64_t                                           AccUin;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     AccPswd;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.HttpGetRequest
struct UScriptHelperClient_HttpGetRequest_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.HasNotice_LuaState
struct UScriptHelperClient_HasNotice_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.HasActiveWifi
struct UScriptHelperClient_HasActiveWifi_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GuildPlatformAppraiseWithType
struct UScriptHelperClient_GuildPlatformAppraiseWithType_Params
{
	int                                                Type;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GotoPlatformAppraise
struct UScriptHelperClient_GotoPlatformAppraise_Params
{
};

// Function Client.ScriptHelperClient.GetUnrealNetworkStatus
struct UScriptHelperClient_GetUnrealNetworkStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetUIStackTopSrcTag
struct UScriptHelperClient_GetUIStackTopSrcTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetUIStackTopPanel
struct UScriptHelperClient_GetUIStackTopPanel_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetUIStackTopDstTag
struct UScriptHelperClient_GetUIStackTopDstTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetUIRectOffset
struct UScriptHelperClient_GetUIRectOffset_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetTelecomSvr
struct UScriptHelperClient_GetTelecomSvr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetTableDataField_LuaState
struct UScriptHelperClient_GetTableDataField_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetTableData_LuaState
struct UScriptHelperClient_GetTableData_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetTableCount
struct UScriptHelperClient_GetTableCount_Params
{
	struct FString                                     TableName;                                                // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetTable_LuaState
struct UScriptHelperClient_GetTable_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetShaderPrecompileProgress
struct UScriptHelperClient_GetShaderPrecompileProgress_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetSettingGameStaticFrontendHUD
struct UScriptHelperClient_GetSettingGameStaticFrontendHUD_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenWidth
struct UScriptHelperClient_GetScreenWidth_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenHole
struct UScriptHelperClient_GetScreenHole_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetScreenHight
struct UScriptHelperClient_GetScreenHight_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetScreenDensity
struct UScriptHelperClient_GetScreenDensity_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetRegisterChannelID
struct UScriptHelperClient_GetRegisterChannelID_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPhoneType
struct UScriptHelperClient_GetPhoneType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPhoneDeviceID
struct UScriptHelperClient_GetPhoneDeviceID_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPfKey
struct UScriptHelperClient_GetPfKey_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPf
struct UScriptHelperClient_GetPf_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetPayToken
struct UScriptHelperClient_GetPayToken_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetOSVersion
struct UScriptHelperClient_GetOSVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetNetWorkType
struct UScriptHelperClient_GetNetWorkType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetNearbyPersonInfo
struct UScriptHelperClient_GetNearbyPersonInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetMyFriendObservers
struct UScriptHelperClient_GetMyFriendObservers_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetMemoryStats_LuaState
struct UScriptHelperClient_GetMemoryStats_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetMemorySize
struct UScriptHelperClient_GetMemorySize_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetLoginChannel
struct UScriptHelperClient_GetLoginChannel_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetLocationInfo
struct UScriptHelperClient_GetLocationInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetIpAddr
struct UScriptHelperClient_GetIpAddr_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetIntSettingConfig
struct UScriptHelperClient_GetIntSettingConfig_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetIntDefaultOffset
struct UScriptHelperClient_GetIntDefaultOffset_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetInstallChannelID
struct UScriptHelperClient_GetInstallChannelID_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGroupInfo
struct UScriptHelperClient_GetGroupInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                SnsAction;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FGroupInfoWrapper                           ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGPSCity
struct UScriptHelperClient_GetGPSCity_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGLVersion
struct UScriptHelperClient_GetGLVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGLType
struct UScriptHelperClient_GetGLType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetGameStatus
struct UScriptHelperClient_GetGameStatus_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetFPS
struct UScriptHelperClient_GetFPS_Params
{
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetFileMD5
struct UScriptHelperClient_GetFileMD5_Params
{
	struct FString                                     file;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetEncodeUrl
struct UScriptHelperClient_GetEncodeUrl_Params
{
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetEmulatorName
struct UScriptHelperClient_GetEmulatorName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetDSVersion
struct UScriptHelperClient_GetDSVersion_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetDevicePlatformName
struct UScriptHelperClient_GetDevicePlatformName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetCpuType
struct UScriptHelperClient_GetCpuType_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetConnectIPURL
struct UScriptHelperClient_GetConnectIPURL_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     domanName;                                                // (Parm, ZeroConstructor)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
	struct FString                                     httpDNSUrl;                                               // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GetBoolSettingConfig
struct UScriptHelperClient_GetBoolSettingConfig_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Key;                                                      // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetBLEDeviceType
struct UScriptHelperClient_GetBLEDeviceType_Params
{
	EUBLEType                                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GetAppVersion
struct UScriptHelperClient_GetAppVersion_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAppid
struct UScriptHelperClient_GetAppid_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GetAccessToken
struct UScriptHelperClient_GetAccessToken_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.GenerateQRImage
struct UScriptHelperClient_GenerateQRImage_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	int                                                Tag;                                                      // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	int                                                Size;                                                     // (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     content;                                                  // (Parm, ZeroConstructor)
	struct FString                                     logoPath;                                                 // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GameJoySwitchOn
struct UScriptHelperClient_GameJoySwitchOn_Params
{
	int                                                isOn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoyStopManualRecord
struct UScriptHelperClient_GameJoyStopManualRecord_Params
{
};

// Function Client.ScriptHelperClient.GameJoyStartMomentsRecord
struct UScriptHelperClient_GameJoyStartMomentsRecord_Params
{
};

// Function Client.ScriptHelperClient.GameJoyStartManualRecord
struct UScriptHelperClient_GameJoyStartManualRecord_Params
{
};

// Function Client.ScriptHelperClient.GameJoySetVideoQuality
struct UScriptHelperClient_GameJoySetVideoQuality_Params
{
	int                                                quality;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoySetMomentRecordSwitchOn
struct UScriptHelperClient_GameJoySetMomentRecordSwitchOn_Params
{
	int                                                isOn;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoySetCurrentRecorderPosition
struct UScriptHelperClient_GameJoySetCurrentRecorderPosition_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoyMarkReturnBattleAfterKillProcess
struct UScriptHelperClient_GameJoyMarkReturnBattleAfterKillProcess_Params
{
};

// Function Client.ScriptHelperClient.GameJoyIsSDKFeatureSupport
struct UScriptHelperClient_GameJoyIsSDKFeatureSupport_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.GameJoyGenerateMomentsVideo
struct UScriptHelperClient_GameJoyGenerateMomentsVideo_Params
{
	TArray<struct FTimeStamp>                          shortVideosTimeStampList;                                 // (Parm, ZeroConstructor)
	TArray<struct FTimeStamp>                          largeVideosTimeStampList;                                 // (Parm, ZeroConstructor)
	struct FString                                     Title;                                                    // (Parm, ZeroConstructor)
	TMap<struct FString, struct FString>               extraInfo;                                                // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.GameJoyEndMomentsRecord
struct UScriptHelperClient_GameJoyEndMomentsRecord_Params
{
};

// Function Client.ScriptHelperClient.GameJoyClearMomentsVideo
struct UScriptHelperClient_GameJoyClearMomentsVideo_Params
{
};

// Function Client.ScriptHelperClient.FetchNearByPersonInfo
struct UScriptHelperClient_FetchNearByPersonInfo_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	TArray<struct FNearByPersonInfo>                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ExitGame
struct UScriptHelperClient_ExitGame_Params
{
};

// Function Client.ScriptHelperClient.EnterFightChat
struct UScriptHelperClient_EnterFightChat_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.EnterBattle
struct UScriptHelperClient_EnterBattle_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     HostnameOrIP;                                             // (Parm, ZeroConstructor)
	uint32_t                                           Port;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	uint32_t                                           PlayerKey;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FString                                     PacketKey;                                                // (Parm, ZeroConstructor)
	uint64_t                                           GameId;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.EncryptUID
struct UScriptHelperClient_EncryptUID_Params
{
	struct FString                                     sUid;                                                     // (Parm, ZeroConstructor)
	struct FString                                     sKey;                                                     // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.EncryptServerKey
struct UScriptHelperClient_EncryptServerKey_Params
{
	struct FString                                     ServerKey;                                                // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.EnableDeathPlayback
struct UScriptHelperClient_EnableDeathPlayback_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bFlush;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DumpLog
struct UScriptHelperClient_DumpLog_Params
{
};

// Function Client.ScriptHelperClient.DisconnectBLE
struct UScriptHelperClient_DisconnectBLE_Params
{
};

// Function Client.ScriptHelperClient.Disconnect
struct UScriptHelperClient_Disconnect_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DelSavFile
struct UScriptHelperClient_DelSavFile_Params
{
	struct FString                                     Filename;                                                 // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.DeleteFilesFromImageDownload
struct UScriptHelperClient_DeleteFilesFromImageDownload_Params
{
	int                                                MaxNum;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CopyContentPathToSavePath
struct UScriptHelperClient_CopyContentPathToSavePath_Params
{
	struct FString                                     content_file_path;                                        // (Parm, ZeroConstructor)
	struct FString                                     save_file_path;                                           // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ConnectToURL
struct UScriptHelperClient_ConnectToURL_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	struct FString                                     URL;                                                      // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ConnectBLE
struct UScriptHelperClient_ConnectBLE_Params
{
};

// Function Client.ScriptHelperClient.CloseVideoListDialog
struct UScriptHelperClient_CloseVideoListDialog_Params
{
};

// Function Client.ScriptHelperClient.ClipboardPaste
struct UScriptHelperClient_ClipboardPaste_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.ClipBoardCopy
struct UScriptHelperClient_ClipBoardCopy_Params
{
	struct FString                                     Text;                                                     // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.ClientEnterWarMode
struct UScriptHelperClient_ClientEnterWarMode_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.ClearFrontendHUDLobbyAsset
struct UScriptHelperClient_ClearFrontendHUDLobbyAsset_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CleanRecord
struct UScriptHelperClient_CleanRecord_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CleanLocation
struct UScriptHelperClient_CleanLocation_Params
{
	TScriptInterface<class UClientNetInterface>        ClientNetInterface;                                       // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CheckNoticeCenterPermission
struct UScriptHelperClient_CheckNoticeCenterPermission_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CheckLocationPermission
struct UScriptHelperClient_CheckLocationPermission_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.CallIngameFirstTimeTips
struct UScriptHelperClient_CallIngameFirstTimeTips_Params
{
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     TableName;                                                // (Parm, ZeroConstructor)
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestWaitForSecond
struct UScriptHelperClient_AutoTestWaitForSecond_Params
{
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestWaitForJumpPlane
struct UScriptHelperClient_AutoTestWaitForJumpPlane_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestVaultWall
struct UScriptHelperClient_AutoTestVaultWall_Params
{
};

// Function Client.ScriptHelperClient.AutoTestUseItem
struct UScriptHelperClient_AutoTestUseItem_Params
{
	int                                                ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestThrowBoom
struct UScriptHelperClient_AutoTestThrowBoom_Params
{
	int                                                SkillID;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSwitchWeapon
struct UScriptHelperClient_AutoTestSwitchWeapon_Params
{
	int                                                WeaponType;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestStopRecordStats
struct UScriptHelperClient_AutoTestStopRecordStats_Params
{
};

// Function Client.ScriptHelperClient.AutoTestStartRecordStats
struct UScriptHelperClient_AutoTestStartRecordStats_Params
{
	struct FString                                     FileStr;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestStartFire
struct UScriptHelperClient_AutoTestStartFire_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSpawnVehicle
struct UScriptHelperClient_AutoTestSpawnVehicle_Params
{
	struct FString                                     ResPath;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestSetVehicleRotation
struct UScriptHelperClient_AutoTestSetVehicleRotation_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSetRecordFrequency
struct UScriptHelperClient_AutoTestSetRecordFrequency_Params
{
	uint32_t                                           Frequency;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSetActorRotation
struct UScriptHelperClient_AutoTestSetActorRotation_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSetActorPitch
struct UScriptHelperClient_AutoTestSetActorPitch_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestSetActorFacePoint
struct UScriptHelperClient_AutoTestSetActorFacePoint_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestPickupItem
struct UScriptHelperClient_AutoTestPickupItem_Params
{
	struct FVector2D                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestOpenScope
struct UScriptHelperClient_AutoTestOpenScope_Params
{
	bool                                               bOpenScope;                                               // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestMoveVehicleForward
struct UScriptHelperClient_AutoTestMoveVehicleForward_Params
{
	int                                                Speed;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestMoveToPoint
struct UScriptHelperClient_AutoTestMoveToPoint_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestJumpPlane
struct UScriptHelperClient_AutoTestJumpPlane_Params
{
	int                                                sec;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestJump
struct UScriptHelperClient_AutoTestJump_Params
{
};

// Function Client.ScriptHelperClient.AutoTestInputMovement
struct UScriptHelperClient_AutoTestInputMovement_Params
{
	float                                              Rate;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGMGoto
struct UScriptHelperClient_AutoTestGMGoto_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGMCommand
struct UScriptHelperClient_AutoTestGMCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestGetVehicleLocation
struct UScriptHelperClient_AutoTestGetVehicleLocation_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGetRuntimeStats
struct UScriptHelperClient_AutoTestGetRuntimeStats_Params
{
};

// Function Client.ScriptHelperClient.AutoTestGetOnVehicle
struct UScriptHelperClient_AutoTestGetOnVehicle_Params
{
};

// Function Client.ScriptHelperClient.AutoTestGetOffVehicle
struct UScriptHelperClient_AutoTestGetOffVehicle_Params
{
};

// Function Client.ScriptHelperClient.AutoTestGetNearVehiclePos
struct UScriptHelperClient_AutoTestGetNearVehiclePos_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGetMapName
struct UScriptHelperClient_AutoTestGetMapName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.AutoTestGetFrameInfo
struct UScriptHelperClient_AutoTestGetFrameInfo_Params
{
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGetDis2D
struct UScriptHelperClient_AutoTestGetDis2D_Params
{
	int                                                X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                x2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                y2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                z2;                                                       // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestGetActorName
struct UScriptHelperClient_AutoTestGetActorName_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function Client.ScriptHelperClient.AutoTestGetActorLocation
struct UScriptHelperClient_AutoTestGetActorLocation_Params
{
	struct FString                                     PlayerName;                                               // (Parm, ZeroConstructor)
	struct FVector                                     ReturnValue;                                              // (Parm, OutParm, ReturnParm, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestContinuousMoveTo
struct UScriptHelperClient_AutoTestContinuousMoveTo_Params
{
	float                                              X;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Y;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Z;                                                        // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.ScriptHelperClient.AutoTestConsoleCommand
struct UScriptHelperClient_AutoTestConsoleCommand_Params
{
	struct FString                                     Command;                                                  // (Parm, ZeroConstructor)
};

// Function Client.ScriptHelperClient.AutoTestAddItem
struct UScriptHelperClient_AutoTestAddItem_Params
{
	int                                                ItemID;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                nCount;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.TssManager.SendSkdData_LuaState
struct UTssManager_SendSkdData_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.TssManager.OnRecvData_LuaState
struct UTssManager_OnRecvData_LuaState_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function Client.UTRichTextBlock.SetText
struct UUTRichTextBlock_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function Client.UTRichTextBlock.SetGameFrontendHUD
struct UUTRichTextBlock_SetGameFrontendHUD_Params
{
	class UGameFrontendHUD*                            InHUD;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function Client.UTRichTextBlock.GetText
struct UUTRichTextBlock_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

