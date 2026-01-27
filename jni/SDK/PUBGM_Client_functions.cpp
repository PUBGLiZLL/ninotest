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

// Function Client.ActImageDownloader.GetImage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// class UActImageDownloader*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UActImageDownloader* UActImageDownloader::GetImage(const struct FString& URL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ActImageDownloader.GetImage");

	UActImageDownloader_GetImage_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BLEAdapteBaseInterface.SetBLEResult
// (Native, Public)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UBLEAdapteBaseInterface::SetBLEResult(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEAdapteBaseInterface.SetBLEResult");

	UBLEAdapteBaseInterface_SetBLEResult_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEAdapteBaseInterface.SetBLEIdendify
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UBLEAdapteBaseInterface::SetBLEIdendify(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEAdapteBaseInterface.SetBLEIdendify");

	UBLEAdapteBaseInterface_SetBLEIdendify_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEAdapteBaseInterface.Disconnect
// (Native, Public)

void UBLEAdapteBaseInterface::Disconnect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEAdapteBaseInterface.Disconnect");

	UBLEAdapteBaseInterface_Disconnect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEAdapteBaseInterface.Connect
// (Native, Public)

void UBLEAdapteBaseInterface::Connect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEAdapteBaseInterface.Connect");

	UBLEAdapteBaseInterface_Connect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEAdapteInterface.SetBLEResult
// (Native, Public)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UBLEAdapteInterface::SetBLEResult(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEAdapteInterface.SetBLEResult");

	UBLEAdapteInterface_SetBLEResult_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEAdapteInterface.SetBLEIdendify
// (Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UBLEAdapteInterface::SetBLEIdendify(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEAdapteInterface.SetBLEIdendify");

	UBLEAdapteInterface_SetBLEIdendify_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEAdapteInterface.Disconnect
// (Native, Public)

void UBLEAdapteInterface::Disconnect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEAdapteInterface.Disconnect");

	UBLEAdapteInterface_Disconnect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEAdapteInterface.Connect
// (Native, Public)

void UBLEAdapteInterface::Connect()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEAdapteInterface.Connect");

	UBLEAdapteInterface_Connect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEConnectMgr.SetServerIDAndString
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ServerStr                      (Parm, ZeroConstructor)
// int                            DeviceID                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            DeviceType                     (Parm, ZeroConstructor, IsPlainOldData)

void UBLEConnectMgr::SetServerIDAndString(int ID, const struct FString& ServerStr, int DeviceID, int DeviceType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEConnectMgr.SetServerIDAndString");

	UBLEConnectMgr_SetServerIDAndString_Params params;
	params.ID = ID;
	params.ServerStr = ServerStr;
	params.DeviceID = DeviceID;
	params.DeviceType = DeviceType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEConnectMgr.SetBLEResult
// (Final, Native, Public)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UBLEConnectMgr::SetBLEResult(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEConnectMgr.SetBLEResult");

	UBLEConnectMgr_SetBLEResult_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEConnectMgr.SetBLEIdendify
// (Final, Native, Public)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UBLEConnectMgr::SetBLEIdendify(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEConnectMgr.SetBLEIdendify");

	UBLEConnectMgr_SetBLEIdendify_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEConnectMgr.Initialize
// (Final, Native, Protected)

void UBLEConnectMgr::Initialize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEConnectMgr.Initialize");

	UBLEConnectMgr_Initialize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEConnectMgr.DisconnectBLE
// (Final, Native, Public)

void UBLEConnectMgr::DisconnectBLE()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEConnectMgr.DisconnectBLE");

	UBLEConnectMgr_DisconnectBLE_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BLEConnectMgr.ConnectBLE
// (Final, Native, Public)

void UBLEConnectMgr::ConnectBLE()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BLEConnectMgr.ConnectBLE");

	UBLEConnectMgr_ConnectBLE_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BugReporter.SendScreenShot
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 errorReason                    (Parm, ZeroConstructor)
// struct FString                 errorDescription               (Parm, ZeroConstructor)
// struct FString                 ImagePath                      (Parm, ZeroConstructor)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UBugReporter::SendScreenShot(const struct FString& errorReason, const struct FString& errorDescription, const struct FString& ImagePath, float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BugReporter.SendScreenShot");

	UBugReporter_SendScreenShot_Params params;
	params.errorReason = errorReason;
	params.errorDescription = errorDescription;
	params.ImagePath = ImagePath;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BugReporter.SendLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 errorReason                    (Parm, ZeroConstructor)
// struct FString                 errorDescription               (Parm, ZeroConstructor)
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           pullAll                        (Parm, ZeroConstructor, IsPlainOldData)

void UBugReporter::SendLog(const struct FString& errorReason, const struct FString& errorDescription, float X, float Y, float Z, bool pullAll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BugReporter.SendLog");

	UBugReporter_SendLog_Params params;
	params.errorReason = errorReason;
	params.errorDescription = errorDescription;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.pullAll = pullAll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BugReporter.ReadZipLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UBugReporter::ReadZipLog(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BugReporter.ReadZipLog");

	UBugReporter_ReadZipLog_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.BugReporter.CompressLog
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           pullAllLog                     (Parm, ZeroConstructor, IsPlainOldData)
// TArray<unsigned char>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<unsigned char> UBugReporter::CompressLog(bool pullAllLog)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BugReporter.CompressLog");

	UBugReporter_CompressLog_Params params;
	params.pullAllLog = pullAllLog;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.UIGetResWithPath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 DesManagerName                 (Parm, ZeroConstructor)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UBusinessHelper::UIGetResWithPath(const struct FString& DesManagerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.UIGetResWithPath");

	UBusinessHelper_UIGetResWithPath_Params params;
	params.DesManagerName = DesManagerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.UIGetLuaManagerByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          pUIClass                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 InManagerName                  (Parm, ZeroConstructor)
// class ALuaClassObj*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALuaClassObj* UBusinessHelper::UIGetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.UIGetLuaManagerByName");

	UBusinessHelper_UIGetLuaManagerByName_Params params;
	params.pUIClass = pUIClass;
	params.InManagerName = InManagerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.UIGetLuaManager
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          pUIClass                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class ALuaClassObj*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALuaClassObj* UBusinessHelper::UIGetLuaManager(class UUAEUserWidget* pUIClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.UIGetLuaManager");

	UBusinessHelper_UIGetLuaManager_Params params;
	params.pUIClass = pUIClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.IsWithWINMSDK
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBusinessHelper::IsWithWINMSDK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.IsWithWINMSDK");

	UBusinessHelper_IsWithWINMSDK_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetWidgetByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          pUIClass                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 InManagerName                  (Parm, ZeroConstructor)
// struct FString                 InWidgtName                    (Parm, ZeroConstructor)
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* UBusinessHelper::GetWidgetByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName, const struct FString& InWidgtName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetWidgetByName");

	UBusinessHelper_GetWidgetByName_Params params;
	params.pUIClass = pUIClass;
	params.InManagerName = InManagerName;
	params.InWidgtName = InWidgtName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UBusinessHelper::GetTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetTime");

	UBusinessHelper_GetTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetMobileBasePath
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InPath                         (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBusinessHelper::GetMobileBasePath(const struct FString& InPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetMobileBasePath");

	UBusinessHelper_GetMobileBasePath_Params params;
	params.InPath = InPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetDataTable
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TableName                      (Parm, ZeroConstructor)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UBusinessHelper::GetDataTable(const struct FString& TableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetDataTable");

	UBusinessHelper_GetDataTable_Params params;
	params.TableName = TableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetCurrentNetworkState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UBusinessHelper::GetCurrentNetworkState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetCurrentNetworkState");

	UBusinessHelper_GetCurrentNetworkState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.GetChildByName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUserWidget*             pParent                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FString                 Name                           (Parm, ZeroConstructor)
// class UWidget*                 ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UWidget* UBusinessHelper::GetChildByName(class UUserWidget* pParent, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.GetChildByName");

	UBusinessHelper_GetChildByName_Params params;
	params.pParent = pParent;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.BusinessHelper.BroadCastMSG
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UFrontendHUD*            FrontendHUD                    (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 DesManagerName                 (Parm, ZeroConstructor)
// struct FString                 Msg                            (Parm, ZeroConstructor)

void UBusinessHelper::BroadCastMSG(class UFrontendHUD* FrontendHUD, const struct FString& DesManagerName, const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.BusinessHelper.BroadCastMSG");

	UBusinessHelper_BroadCastMSG_Params params;
	params.FrontendHUD = FrontendHUD;
	params.DesManagerName = DesManagerName;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.TestHUD.TestFunctionNOParam
// (Final, Native, Public, BlueprintCallable)

void ATestHUD::TestFunctionNOParam()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.TestFunctionNOParam");

	ATestHUD_TestFunctionNOParam_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.TestHUD.TestFunctionBP_LUA
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::TestFunctionBP_LUA()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.TestFunctionBP_LUA");

	ATestHUD_TestFunctionBP_LUA_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.TestFunctionBP
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::TestFunctionBP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.TestFunctionBP");

	ATestHUD_TestFunctionBP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_LUA_Call
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_LUA_Call()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_LUA_Call");

	ATestHUD_Function_LUA_Call_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_Lua
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_Lua()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_Lua");

	ATestHUD_Function_Lua_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_CPlus_Call
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_CPlus_Call()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_CPlus_Call");

	ATestHUD_Function_CPlus_Call_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_CPlus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_CPlus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_CPlus");

	ATestHUD_Function_CPlus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP_CPP
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP_CPP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP_CPP");

	ATestHUD_Function_BP_CPP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP_Call_LUA
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP_Call_LUA()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP_Call_LUA");

	ATestHUD_Function_BP_Call_LUA_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP_Call_CPP
// (Event, Public, BlueprintEvent)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP_Call_CPP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP_Call_CPP");

	ATestHUD_Function_BP_Call_CPP_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP_Call_CPlus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP_Call_CPlus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP_Call_CPlus");

	ATestHUD_Function_BP_Call_CPlus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP_Call
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP_Call()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP_Call");

	ATestHUD_Function_BP_Call_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TestHUD.Function_BP
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ATestHUD::Function_BP()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TestHUD.Function_BP");

	ATestHUD_Function_BP_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBackendUtils.GetTableManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUAETableManager*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAETableManager* UGameBackendUtils::GetTableManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameBackendUtils.GetTableManager");

	UGameBackendUtils_GetTableManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBackendUtils.GetLoadedClassManager
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUAELoadedClassManager*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAELoadedClassManager* UGameBackendUtils::GetLoadedClassManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameBackendUtils.GetLoadedClassManager");

	UGameBackendUtils_GetLoadedClassManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBackendHUD.GetUtils
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameBackendUtils*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameBackendUtils* UGameBackendHUD::GetUtils()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameBackendHUD.GetUtils");

	UGameBackendHUD_GetUtils_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBackendHUD.GetInstance
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UGameBackendHUD*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameBackendHUD* UGameBackendHUD::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameBackendHUD.GetInstance");

	UGameBackendHUD_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBackendHUD.GetFirstGameFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameFrontendHUD*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameFrontendHUD* UGameBackendHUD::GetFirstGameFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameBackendHUD.GetFirstGameFrontendHUD");

	UGameBackendHUD_GetFirstGameFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBusinessManager.GetWidgetFromName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 WidgetName                     (Parm, ZeroConstructor)
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* UGameBusinessManager::GetWidgetFromName(const struct FString& WidgetName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameBusinessManager.GetWidgetFromName");

	UGameBusinessManager_GetWidgetFromName_Params params;
	params.WidgetName = WidgetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBusinessManager.GetWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* UGameBusinessManager::GetWidget(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameBusinessManager.GetWidget");

	UGameBusinessManager_GetWidget_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBusinessManager.GetLuaObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ALuaClassObj*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ALuaClassObj* UGameBusinessManager::GetLuaObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameBusinessManager.GetLuaObject");

	UGameBusinessManager_GetLuaObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameBusinessManager.GetGameFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameFrontendHUD*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameFrontendHUD* UGameBusinessManager::GetGameFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameBusinessManager.GetGameFrontendHUD");

	UGameBusinessManager_GetGameFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.UnRegisterUIShowHideEventDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor)

void UGameFrontendHUD::UnRegisterUIShowHideEventDelegate(const struct FString& Source)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.UnRegisterUIShowHideEventDelegate");

	UGameFrontendHUD_UnRegisterUIShowHideEventDelegate_Params params;
	params.Source = Source;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.TestLoadNoGCPackage
// (Final, Exec, Native, Public)

void UGameFrontendHUD::TestLoadNoGCPackage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.TestLoadNoGCPackage");

	UGameFrontendHUD_TestLoadNoGCPackage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.StartGrayUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameFrontendHUD::StartGrayUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.StartGrayUpdate");

	UGameFrontendHUD_StartGrayUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.ShutdownUnrealNetwork
// (Final, Native, Public, BlueprintCallable)

void UGameFrontendHUD::ShutdownUnrealNetwork()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.ShutdownUnrealNetwork");

	UGameFrontendHUD_ShutdownUnrealNetwork_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.ShouldWatchingDetailBtnOpen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameFrontendHUD::ShouldWatchingDetailBtnOpen()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.ShouldWatchingDetailBtnOpen");

	UGameFrontendHUD_ShouldWatchingDetailBtnOpen_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.SetGameStatusMap
// (Final, Native, Public)
// Parameters:
// TMap<struct FName, struct FString> InGameStatusMap                (Parm, ZeroConstructor)

void UGameFrontendHUD::SetGameStatusMap(TMap<struct FName, struct FString> InGameStatusMap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.SetGameStatusMap");

	UGameFrontendHUD_SetGameStatusMap_Params params;
	params.InGameStatusMap = InGameStatusMap;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RetryDownload
// (Final, Native, Public, BlueprintCallable)

void UGameFrontendHUD::RetryDownload()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RetryDownload");

	UGameFrontendHUD_RetryDownload_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.ResetUserSettings
// (Final, Native, Public, BlueprintCallable)

void UGameFrontendHUD::ResetUserSettings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.ResetUserSettings");

	UGameFrontendHUD_ResetUserSettings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Int
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUserSettingsDelegate_Int(const struct FString& PropertyName, const struct FScriptDelegate& Delegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Int");

	UGameFrontendHUD_RegisterUserSettingsDelegate_Int_Params params;
	params.PropertyName = PropertyName;
	params.Delegate = Delegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Float
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUserSettingsDelegate_Float(const struct FString& PropertyName, const struct FScriptDelegate& Delegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Float");

	UGameFrontendHUD_RegisterUserSettingsDelegate_Float_Params params;
	params.PropertyName = PropertyName;
	params.Delegate = Delegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Enum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUserSettingsDelegate_Enum(const struct FString& PropertyName, const struct FScriptDelegate& Delegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Enum");

	UGameFrontendHUD_RegisterUserSettingsDelegate_Enum_Params params;
	params.PropertyName = PropertyName;
	params.Delegate = Delegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Bool
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 PropertyName                   (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUserSettingsDelegate_Bool(const struct FString& PropertyName, const struct FScriptDelegate& Delegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUserSettingsDelegate_Bool");

	UGameFrontendHUD_RegisterUserSettingsDelegate_Bool_Params params;
	params.PropertyName = PropertyName;
	params.Delegate = Delegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUserSettingsDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUserSettingsDelegate");

	UGameFrontendHUD_RegisterUserSettingsDelegate_Params params;
	params.Delegate = Delegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterUIShowHideEventDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Source                         (Parm, ZeroConstructor)
// struct FScriptDelegate         Delegate                       (Parm, ZeroConstructor)

void UGameFrontendHUD::RegisterUIShowHideEventDelegate(const struct FString& Source, const struct FScriptDelegate& Delegate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterUIShowHideEventDelegate");

	UGameFrontendHUD_RegisterUIShowHideEventDelegate_Params params;
	params.Source = Source;
	params.Delegate = Delegate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.RegisterPay
// (Final, RequiredAPI, Native, Public, BlueprintCallable)

void UGameFrontendHUD::RegisterPay()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.RegisterPay");

	UGameFrontendHUD_RegisterPay_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnWebviewNotify
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FWebviewInfoWrapper     webviewinfo                    (ConstParm, Parm, OutParm, ReferenceParm)

void UGameFrontendHUD::OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnWebviewNotify");

	UGameFrontendHUD_OnWebviewNotify_Params params;
	params.webviewinfo = webviewinfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnRefreshAccountInfo
// (Final, RequiredAPI, Native, Public)
// Parameters:
// bool                           Result                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            InChannel                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 InOpenId                       (Parm, ZeroConstructor)

void UGameFrontendHUD::OnRefreshAccountInfo(bool Result, int InChannel, const struct FString& InOpenId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnRefreshAccountInfo");

	UGameFrontendHUD_OnRefreshAccountInfo_Params params;
	params.Result = Result;
	params.InChannel = InChannel;
	params.InOpenId = InOpenId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnQuickLoginNotify
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FWakeupInfoWrapper      wakeupinfo                     (ConstParm, Parm, OutParm, ReferenceParm)

void UGameFrontendHUD::OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnQuickLoginNotify");

	UGameFrontendHUD_OnQuickLoginNotify_Params params;
	params.wakeupinfo = wakeupinfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnQueryMyInfoNotify
// (Final, RequiredAPI, Native, Public)

void UGameFrontendHUD::OnQueryMyInfoNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnQueryMyInfoNotify");

	UGameFrontendHUD_OnQueryMyInfoNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnNearByPersonInfoNotify
// (Final, RequiredAPI, Native, Public)

void UGameFrontendHUD::OnNearByPersonInfoNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnNearByPersonInfoNotify");

	UGameFrontendHUD_OnNearByPersonInfoNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnMidasPayNeedLogin
// (Final, Native, Public)

void UGameFrontendHUD::OnMidasPayNeedLogin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnMidasPayNeedLogin");

	UGameFrontendHUD_OnMidasPayNeedLogin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnMidasPayCallBack
// (Final, Native, Public, HasOutParms)
// Parameters:
// struct FAPPayResponseInfo      Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGameFrontendHUD::OnMidasPayCallBack(const struct FAPPayResponseInfo& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnMidasPayCallBack");

	UGameFrontendHUD_OnMidasPayCallBack_Params params;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnMidasLauchMpInfoCallBack
// (Final, Native, Public)
// Parameters:
// int                            resultCode                     (Parm, ZeroConstructor, IsPlainOldData)

void UGameFrontendHUD::OnMidasLauchMpInfoCallBack(int resultCode)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnMidasLauchMpInfoCallBack");

	UGameFrontendHUD_OnMidasLauchMpInfoCallBack_Params params;
	params.resultCode = resultCode;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnLocationInfoNotify
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FLocationInfoWrapper    locationInfo                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UGameFrontendHUD::OnLocationInfoNotify(const struct FLocationInfoWrapper& locationInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnLocationInfoNotify");

	UGameFrontendHUD_OnLocationInfoNotify_Params params;
	params.locationInfo = locationInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnHttpImgResponse
// (Final, Native, Protected)
// Parameters:
// class UTexture2D*              Texture                        (Parm, ZeroConstructor, IsPlainOldData)
// class UImageDownloader*        downloader                     (Parm, ZeroConstructor, IsPlainOldData)

void UGameFrontendHUD::OnHttpImgResponse(class UTexture2D* Texture, class UImageDownloader* downloader)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnHttpImgResponse");

	UGameFrontendHUD_OnHttpImgResponse_Params params;
	params.Texture = Texture;
	params.downloader = downloader;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnGroupNotify
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// struct FGroupInfoWrapper       groupInfo                      (ConstParm, Parm, OutParm, ReferenceParm)

void UGameFrontendHUD::OnGroupNotify(const struct FGroupInfoWrapper& groupInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnGroupNotify");

	UGameFrontendHUD_OnGroupNotify_Params params;
	params.groupInfo = groupInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnGenQRImgNotify
// (Final, RequiredAPI, Native, Public)
// Parameters:
// int                            Ret                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            Size                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 imgPath                        (Parm, ZeroConstructor)

void UGameFrontendHUD::OnGenQRImgNotify(int Ret, int Size, const struct FString& imgPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnGenQRImgNotify");

	UGameFrontendHUD_OnGenQRImgNotify_Params params;
	params.Ret = Ret;
	params.Size = Size;
	params.imgPath = imgPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnCrashMessageNotify
// (Final, RequiredAPI, Native, Public)
// Parameters:
// struct FString                 ReturnValue                    (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameFrontendHUD::OnCrashMessageNotify()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnCrashMessageNotify");

	UGameFrontendHUD_OnCrashMessageNotify_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.OnAccountLoginInfoNotify
// (Final, RequiredAPI, Native, Public, HasOutParms)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FGCloudLoginAccountInfo Info                           (ConstParm, Parm, OutParm, ReferenceParm)

void UGameFrontendHUD::OnAccountLoginInfoNotify(int Result, const struct FGCloudLoginAccountInfo& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnAccountLoginInfoNotify");

	UGameFrontendHUD_OnAccountLoginInfoNotify_Params params;
	params.Result = Result;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.OnAccessTokenRefreshNotify
// (Final, RequiredAPI, Native, Public)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 OpenKey                        (Parm, ZeroConstructor)

void UGameFrontendHUD::OnAccessTokenRefreshNotify(int Result, const struct FString& OpenID, const struct FString& OpenKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.OnAccessTokenRefreshNotify");

	UGameFrontendHUD_OnAccessTokenRefreshNotify_Params params;
	params.Result = Result;
	params.OpenID = OpenID;
	params.OpenKey = OpenKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.MidasPay
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int                            payItem                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 productId                      (Parm, ZeroConstructor)

void UGameFrontendHUD::MidasPay(int payItem, const struct FString& productId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.MidasPay");

	UGameFrontendHUD_MidasPay_Params params;
	params.payItem = payItem;
	params.productId = productId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.MatchVersion
// (Final, Native, Public)

void UGameFrontendHUD::MatchVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.MatchVersion");

	UGameFrontendHUD_MatchVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.LauchMpInfo
// (Final, RequiredAPI, Native, Public, BlueprintCallable)

void UGameFrontendHUD::LauchMpInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.LauchMpInfo");

	UGameFrontendHUD_LauchMpInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.InitMidasManager
// (Final, Native, Public)

void UGameFrontendHUD::InitMidasManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.InitMidasManager");

	UGameFrontendHUD_InitMidasManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.GetUserSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USaveGame*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USaveGame* UGameFrontendHUD::GetUserSettings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetUserSettings");

	UGameFrontendHUD_GetUserSettings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetUpdater
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGDolphinUpdater*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGDolphinUpdater* UGameFrontendHUD::GetUpdater()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetUpdater");

	UGameFrontendHUD_GetUpdater_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetUIElemSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InSlotName                     (Parm, ZeroConstructor)
// class USaveGame*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USaveGame* UGameFrontendHUD::GetUIElemSettings(const struct FString& InSlotName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetUIElemSettings");

	UGameFrontendHUD_GetUIElemSettings_Params params;
	params.InSlotName = InSlotName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetMidasManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGCloudMidasManager*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGCloudMidasManager* UGameFrontendHUD::GetMidasManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetMidasManager");

	UGameFrontendHUD_GetMidasManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetLuaStateWrapper
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULuaStateWrapper*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULuaStateWrapper* UGameFrontendHUD::GetLuaStateWrapper()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetLuaStateWrapper");

	UGameFrontendHUD_GetLuaStateWrapper_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetHttpHelper
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UHttpHelper*             ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHttpHelper* UGameFrontendHUD::GetHttpHelper()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetHttpHelper");

	UGameFrontendHUD_GetHttpHelper_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetGVoiceInterface
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGVoiceInterface*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGVoiceInterface* UGameFrontendHUD::GetGVoiceInterface()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetGVoiceInterface");

	UGameFrontendHUD_GetGVoiceInterface_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetDetailNetInfoFromGCloud
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameFrontendHUD::GetDetailNetInfoFromGCloud()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetDetailNetInfoFromGCloud");

	UGameFrontendHUD_GetDetailNetInfoFromGCloud_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetBugReporter
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UBugReporter*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBugReporter* UGameFrontendHUD::GetBugReporter()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetBugReporter");

	UGameFrontendHUD_GetBugReporter_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.GetBattleIDHexStr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UGameFrontendHUD::GetBattleIDHexStr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.GetBattleIDHexStr");

	UGameFrontendHUD_GetBattleIDHexStr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameFrontendHUD.FinishModifyUserSettings
// (Final, Native, Public, BlueprintCallable)

void UGameFrontendHUD::FinishModifyUserSettings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.FinishModifyUserSettings");

	UGameFrontendHUD_FinishModifyUserSettings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.ClearUIElemSettings
// (Final, Native, Public, BlueprintCallable)

void UGameFrontendHUD::ClearUIElemSettings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.ClearUIElemSettings");

	UGameFrontendHUD_ClearUIElemSettings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.CallLuaTableFunction
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 TableName                      (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UGameFrontendHUD::CallLuaTableFunction(const struct FString& TableName, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.CallLuaTableFunction");

	UGameFrontendHUD_CallLuaTableFunction_Params params;
	params.TableName = TableName;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.CallGlobalScriptFunction
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 InFunctionName                 (Parm, ZeroConstructor)

void UGameFrontendHUD::CallGlobalScriptFunction(const struct FString& InFunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.CallGlobalScriptFunction");

	UGameFrontendHUD_CallGlobalScriptFunction_Params params;
	params.InFunctionName = InFunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameFrontendHUD.BeginModifyUserSettings
// (Final, Native, Public, BlueprintCallable)

void UGameFrontendHUD::BeginModifyUserSettings()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameFrontendHUD.BeginModifyUserSettings");

	UGameFrontendHUD_BeginModifyUserSettings_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.StopManualRecorder
// (Final, Native, Public, BlueprintCallable)

void UGameJoyInterface::StopManualRecorder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.StopManualRecorder");

	UGameJoyInterface_StopManualRecorder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.StartMomentsRecording
// (Final, Native, Public, BlueprintCallable)

void UGameJoyInterface::StartMomentsRecording()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.StartMomentsRecording");

	UGameJoyInterface_StartMomentsRecording_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.StartManualRecorder
// (Final, Native, Public, BlueprintCallable)

void UGameJoyInterface::StartManualRecorder()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.StartManualRecorder");

	UGameJoyInterface_StartManualRecorder_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.ShowVideoListDialog
// (Final, Native, Public, BlueprintCallable)

void UGameJoyInterface::ShowVideoListDialog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.ShowVideoListDialog");

	UGameJoyInterface_ShowVideoListDialog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.SetVideoQuality
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::SetVideoQuality(int quality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.SetVideoQuality");

	UGameJoyInterface_SetVideoQuality_Params params;
	params.quality = quality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.SetSwitchOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isOn                           (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::SetSwitchOn(bool isOn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.SetSwitchOn");

	UGameJoyInterface_SetSwitchOn_Params params;
	params.isOn = isOn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.SetMomentRecordSwitchOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           isOn                           (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::SetMomentRecordSwitchOn(bool isOn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.SetMomentRecordSwitchOn");

	UGameJoyInterface_SetMomentRecordSwitchOn_Params params;
	params.isOn = isOn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.SetCurrentRecorderPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::SetCurrentRecorderPosition(float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.SetCurrentRecorderPosition");

	UGameJoyInterface_SetCurrentRecorderPosition_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.SetAudioSource
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           mic                            (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::SetAudioSource(bool mic)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.SetAudioSource");

	UGameJoyInterface_SetAudioSource_Params params;
	params.mic = mic;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.OnVideoShare
// (Final, Native, Private)
// Parameters:
// int                            Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::OnVideoShare(int Status)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.OnVideoShare");

	UGameJoyInterface_OnVideoShare_Params params;
	params.Status = Status;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.OnShowVideoPlayer
// (Final, Native, Private)
// Parameters:
// int                            IsShow                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::OnShowVideoPlayer(int IsShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.OnShowVideoPlayer");

	UGameJoyInterface_OnShowVideoPlayer_Params params;
	params.IsShow = IsShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.OnRecordingStart
// (Final, Native, Private)
// Parameters:
// int                            Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::OnRecordingStart(int Status)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.OnRecordingStart");

	UGameJoyInterface_OnRecordingStart_Params params;
	params.Status = Status;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.OnRecordingEnd
// (Final, Native, Private)
// Parameters:
// int64_t                        Duration                       (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::OnRecordingEnd(int64_t Duration)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.OnRecordingEnd");

	UGameJoyInterface_OnRecordingEnd_Params params;
	params.Duration = Duration;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.OnManualRecordingStart
// (Final, Native, Private)
// Parameters:
// int                            Status                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::OnManualRecordingStart(int Status)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.OnManualRecordingStart");

	UGameJoyInterface_OnManualRecordingStart_Params params;
	params.Status = Status;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.OnCheckSDKPermission
// (Final, Native, Private)
// Parameters:
// bool                           isSuccess                      (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::OnCheckSDKPermission(bool isSuccess)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.OnCheckSDKPermission");

	UGameJoyInterface_OnCheckSDKPermission_Params params;
	params.isSuccess = isSuccess;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.OnCheckSDKFeature
// (Final, Native, Private)
// Parameters:
// int                            sdkFeatureInt                  (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::OnCheckSDKFeature(int sdkFeatureInt)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.OnCheckSDKFeature");

	UGameJoyInterface_OnCheckSDKFeature_Params params;
	params.sdkFeatureInt = sdkFeatureInt;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.MarkReturnBattleAfterKillProcess
// (Final, Native, Public)

void UGameJoyInterface::MarkReturnBattleAfterKillProcess()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.MarkReturnBattleAfterKillProcess");

	UGameJoyInterface_MarkReturnBattleAfterKillProcess_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.IsSDKFeatureSupport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameJoyInterface::IsSDKFeatureSupport()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.IsSDKFeatureSupport");

	UGameJoyInterface_IsSDKFeatureSupport_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameJoyInterface.isRecordingMoments
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameJoyInterface::isRecordingMoments()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.isRecordingMoments");

	UGameJoyInterface_isRecordingMoments_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameJoyInterface.IsOK
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameJoyInterface::IsOK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.IsOK");

	UGameJoyInterface_IsOK_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameJoyInterface.IsMomentRecordOK
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameJoyInterface::IsMomentRecordOK()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.IsMomentRecordOK");

	UGameJoyInterface_IsMomentRecordOK_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameJoyInterface.IfGoBackground
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGameJoyInterface::IfGoBackground()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.IfGoBackground");

	UGameJoyInterface_IfGoBackground_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameJoyInterface.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameJoyInterface*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameJoyInterface* UGameJoyInterface::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.GetInstance");

	UGameJoyInterface_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameJoyInterface.GetCurrentVideoShareChannel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGameJoyInterface::GetCurrentVideoShareChannel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.GetCurrentVideoShareChannel");

	UGameJoyInterface_GetCurrentVideoShareChannel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GameJoyInterface.GenerateMomentsVideo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FTimeStamp>      shortVideosTimeStampList       (Parm, ZeroConstructor)
// TArray<struct FTimeStamp>      largeVideosTimeStampList       (Parm, ZeroConstructor)
// struct FString                 Title                          (Parm, ZeroConstructor)
// TMap<struct FString, struct FString> extraInfo                      (Parm, ZeroConstructor)

void UGameJoyInterface::GenerateMomentsVideo(TArray<struct FTimeStamp> shortVideosTimeStampList, TArray<struct FTimeStamp> largeVideosTimeStampList, const struct FString& Title, TMap<struct FString, struct FString> extraInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.GenerateMomentsVideo");

	UGameJoyInterface_GenerateMomentsVideo_Params params;
	params.shortVideosTimeStampList = shortVideosTimeStampList;
	params.largeVideosTimeStampList = largeVideosTimeStampList;
	params.Title = Title;
	params.extraInfo = extraInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.EndMomentsRecording
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           needEndCallback                (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::EndMomentsRecording(bool needEndCallback)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.EndMomentsRecording");

	UGameJoyInterface_EndMomentsRecording_Params params;
	params.needEndCallback = needEndCallback;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.EnableBgmMix
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Enable                         (Parm, ZeroConstructor, IsPlainOldData)

void UGameJoyInterface::EnableBgmMix(bool Enable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.EnableBgmMix");

	UGameJoyInterface_EnableBgmMix_Params params;
	params.Enable = Enable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.CloseVideoListDialog
// (Final, Native, Public, BlueprintCallable)

void UGameJoyInterface::CloseVideoListDialog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.CloseVideoListDialog");

	UGameJoyInterface_CloseVideoListDialog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GameJoyInterface.ClearMomentsVideo
// (Final, Native, Public, BlueprintCallable)

void UGameJoyInterface::ClearMomentsVideo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GameJoyInterface.ClearMomentsVideo");

	UGameJoyInterface_ClearMomentsVideo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GDolphinUpdater.StartAppUpdate
// (Final, Native, Public, BlueprintCallable)

void UGDolphinUpdater::StartAppUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.StartAppUpdate");

	UGDolphinUpdater_StartAppUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GDolphinUpdater.IsUpdating
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGDolphinUpdater::IsUpdating()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.IsUpdating");

	UGDolphinUpdater_IsUpdating_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GDolphinUpdater.IsGrayUpdate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGDolphinUpdater::IsGrayUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.IsGrayUpdate");

	UGDolphinUpdater_IsGrayUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GDolphinUpdater.IsExamine
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGDolphinUpdater::IsExamine()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.IsExamine");

	UGDolphinUpdater_IsExamine_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GDolphinUpdater.Install
// (Final, Native, Public, BlueprintCallable)

void UGDolphinUpdater::Install()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.Install");

	UGDolphinUpdater_Install_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GDolphinUpdater.GetCurStage
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// float                          Percent                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            GetCurVal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            GetMaxVal                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGDolphinUpdater::GetCurStage(float* Percent, int* GetCurVal, int* GetMaxVal)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.GetCurStage");

	UGDolphinUpdater_GetCurStage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Percent != nullptr)
		*Percent = params.Percent;
	if (GetCurVal != nullptr)
		*GetCurVal = params.GetCurVal;
	if (GetMaxVal != nullptr)
		*GetMaxVal = params.GetMaxVal;

	return params.ReturnValue;
}


// Function Client.GDolphinUpdater.FinishUpdate
// (Final, Native, Public)

void UGDolphinUpdater::FinishUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.FinishUpdate");

	UGDolphinUpdater_FinishUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GDolphinUpdater.ContinueUpdate
// (Final, Native, Public, BlueprintCallable)

void UGDolphinUpdater::ContinueUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.ContinueUpdate");

	UGDolphinUpdater_ContinueUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GDolphinUpdater.CancelUpdate
// (Final, Native, Public, BlueprintCallable)

void UGDolphinUpdater::CancelUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.CancelUpdate");

	UGDolphinUpdater_CancelUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GDolphinUpdater.CancelResUpdate
// (Final, Native, Public, BlueprintCallable)

void UGDolphinUpdater::CancelResUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.CancelResUpdate");

	UGDolphinUpdater_CancelResUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GDolphinUpdater.CancelAppUpdate
// (Final, Native, Public, BlueprintCallable)

void UGDolphinUpdater::CancelAppUpdate()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GDolphinUpdater.CancelAppUpdate");

	UGDolphinUpdater_CancelAppUpdate_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GCloudNotice.GetNotice
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 Scene                          (Parm, ZeroConstructor)
// TArray<struct FNoticeInfo>     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FNoticeInfo> UGCloudNotice::GetNotice(const struct FString& Scene)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GCloudNotice.GetNotice");

	UGCloudNotice_GetNotice_Params params;
	params.Scene = Scene;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GCloudNotice.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGCloudNotice*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGCloudNotice* UGCloudNotice::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GCloudNotice.GetInstance");

	UGCloudNotice_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GCloudNotice.ClearNotice
// (Final, Native, Public)

void UGCloudNotice::ClearNotice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GCloudNotice.ClearNotice");

	UGCloudNotice_ClearNotice_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.UploadRecordFile
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::UploadRecordFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.UploadRecordFile");

	UGVoiceInterface_UploadRecordFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.TeamSpeakerEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::TeamSpeakerEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.TeamSpeakerEnable");

	UGVoiceInterface_TeamSpeakerEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.TeamMicphoneEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::TeamMicphoneEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.TeamMicphoneEnable");

	UGVoiceInterface_TeamMicphoneEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.SwitchMicphoneWhenCorpsMode
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::SwitchMicphoneWhenCorpsMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SwitchMicphoneWhenCorpsMode");

	UGVoiceInterface_SwitchMicphoneWhenCorpsMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.StopRecord
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::StopRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.StopRecord");

	UGVoiceInterface_StopRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.StopPlayRecordFile
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::StopPlayRecordFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.StopPlayRecordFile");

	UGVoiceInterface_StopPlayRecordFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.StopInterphone
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::StopInterphone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.StopInterphone");

	UGVoiceInterface_StopInterphone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.StartRecord
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::StartRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.StartRecord");

	UGVoiceInterface_StartRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.StartInterphone
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::StartInterphone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.StartInterphone");

	UGVoiceInterface_StartInterphone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SpeechToText
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::SpeechToText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SpeechToText");

	UGVoiceInterface_SpeechToText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.ShowOpenSpeakerAtFirstMsg
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::ShowOpenSpeakerAtFirstMsg()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.ShowOpenSpeakerAtFirstMsg");

	UGVoiceInterface_ShowOpenSpeakerAtFirstMsg_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.ShowCorpsModeCannotUseLBSVoice
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::ShowCorpsModeCannotUseLBSVoice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.ShowCorpsModeCannotUseLBSVoice");

	UGVoiceInterface_ShowCorpsModeCannotUseLBSVoice_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetVoiceMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetVoiceMode(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetVoiceMode");

	UGVoiceInterface_SetVoiceMode_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetSpeakerVolum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetSpeakerVolum(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetSpeakerVolum");

	UGVoiceInterface_SetSpeakerVolum_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetSpeakerStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetSpeakerStatus(bool Flag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetSpeakerStatus");

	UGVoiceInterface_SetSpeakerStatus_Params params;
	params.Flag = Flag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetMicphoneVolum
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetMicphoneVolum(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetMicphoneVolum");

	UGVoiceInterface_SetMicphoneVolum_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetMicphoneStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetMicphoneStatus(bool Flag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetMicphoneStatus");

	UGVoiceInterface_SetMicphoneStatus_Params params;
	params.Flag = Flag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetMainVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetMainVolume(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetMainVolume");

	UGVoiceInterface_SetMainVolume_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetMainSoundSwitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetMainSoundSwitch(bool Flag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetMainSoundSwitch");

	UGVoiceInterface_SetMainSoundSwitch_Params params;
	params.Flag = Flag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetLbsVoiceRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetLbsVoiceRadius(float Radius)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetLbsVoiceRadius");

	UGVoiceInterface_SetLbsVoiceRadius_Params params;
	params.Radius = Radius;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetLbsRoomEnableStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetLbsRoomEnableStatus(bool Flag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetLbsRoomEnableStatus");

	UGVoiceInterface_SetLbsRoomEnableStatus_Params params;
	params.Flag = Flag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetGameFrontendHUD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        InHUD                          (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetGameFrontendHUD(class UGameFrontendHUD* InHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetGameFrontendHUD");

	UGVoiceInterface_SetGameFrontendHUD_Params params;
	params.InHUD = InHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetCurrentDownloadFieldID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 filedId                        (Parm, ZeroConstructor)

void UGVoiceInterface::SetCurrentDownloadFieldID(const struct FString& filedId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetCurrentDownloadFieldID");

	UGVoiceInterface_SetCurrentDownloadFieldID_Params params;
	params.filedId = filedId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetBGMVolume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetBGMVolume(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetBGMVolume");

	UGVoiceInterface_SetBGMVolume_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.SetBGMSwitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::SetBGMSwitch(bool Flag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.SetBGMSwitch");

	UGVoiceInterface_SetBGMSwitch_Params params;
	params.Flag = Flag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.ResetWhenLogOut
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::ResetWhenLogOut()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.ResetWhenLogOut");

	UGVoiceInterface_ResetWhenLogOut_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.ReactiveLbsStatus
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::ReactiveLbsStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.ReactiveLbsStatus");

	UGVoiceInterface_ReactiveLbsStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.QuitRoom
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::QuitRoom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.QuitRoom");

	UGVoiceInterface_QuitRoom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.PlayRecordFile
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::PlayRecordFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.PlayRecordFile");

	UGVoiceInterface_PlayRecordFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.OpenTeamSpeakerOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::OpenTeamSpeakerOnly(bool showTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenTeamSpeakerOnly");

	UGVoiceInterface_OpenTeamSpeakerOnly_Params params;
	params.showTips = showTips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.OpenTeamMicphoneOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenTeamMicphoneOnly(bool showTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenTeamMicphoneOnly");

	UGVoiceInterface_OpenTeamMicphoneOnly_Params params;
	params.showTips = showTips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OpenTeamInterphone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenTeamInterphone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenTeamInterphone");

	UGVoiceInterface_OpenTeamInterphone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OpenSpeaker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenSpeaker()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenSpeaker");

	UGVoiceInterface_OpenSpeaker_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OpenMicAndSpeakerAfterJoinRoom
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::OpenMicAndSpeakerAfterJoinRoom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenMicAndSpeakerAfterJoinRoom");

	UGVoiceInterface_OpenMicAndSpeakerAfterJoinRoom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.OpenMic
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenMic()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenMic");

	UGVoiceInterface_OpenMic_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OpenGroupSpeakerOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::OpenGroupSpeakerOnly(bool showTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenGroupSpeakerOnly");

	UGVoiceInterface_OpenGroupSpeakerOnly_Params params;
	params.showTips = showTips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.OpenGroupMicphoneOnly
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenGroupMicphoneOnly(bool showTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenGroupMicphoneOnly");

	UGVoiceInterface_OpenGroupMicphoneOnly_Params params;
	params.showTips = showTips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OpenGroupInterphone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenGroupInterphone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenGroupInterphone");

	UGVoiceInterface_OpenGroupInterphone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OpenAllSpeaker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::OpenAllSpeaker(bool showTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenAllSpeaker");

	UGVoiceInterface_OpenAllSpeaker_Params params;
	params.showTips = showTips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.OpenAllMicphone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenAllMicphone(bool showTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenAllMicphone");

	UGVoiceInterface_OpenAllMicphone_Params params;
	params.showTips = showTips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OpenAllInterphone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UGVoiceInterface::OpenAllInterphone()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OpenAllInterphone");

	UGVoiceInterface_OpenAllInterphone_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.OnRoomTypeChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 itemtext                       (Parm, ZeroConstructor)

void UGVoiceInterface::OnRoomTypeChanged(const struct FString& itemtext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.OnRoomTypeChanged");

	UGVoiceInterface_OnRoomTypeChanged_Params params;
	params.itemtext = itemtext;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.LbsSpeakerEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::LbsSpeakerEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.LbsSpeakerEnable");

	UGVoiceInterface_LbsSpeakerEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.LbsMicphoneEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::LbsMicphoneEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.LbsMicphoneEnable");

	UGVoiceInterface_LbsMicphoneEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.JoinRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 room                           (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)

void UGVoiceInterface::JoinRoom(const struct FString& room, const struct FString& userId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.JoinRoom");

	UGVoiceInterface_JoinRoom_Params params;
	params.room = room;
	params.userId = userId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.JoinLbsRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 lbsRoom                        (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)

void UGVoiceInterface::JoinLbsRoom(const struct FString& lbsRoom, const struct FString& userId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.JoinLbsRoom");

	UGVoiceInterface_JoinLbsRoom_Params params;
	params.lbsRoom = lbsRoom;
	params.userId = userId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.JoinGroupRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 groupRoom                      (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)

void UGVoiceInterface::JoinGroupRoom(const struct FString& groupRoom, const struct FString& userId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.JoinGroupRoom");

	UGVoiceInterface_JoinGroupRoom_Params params;
	params.groupRoom = groupRoom;
	params.userId = userId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.IsTeamInterphoneOpenned
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::IsTeamInterphoneOpenned()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.IsTeamInterphoneOpenned");

	UGVoiceInterface_IsTeamInterphoneOpenned_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.IsLbsInterphoneOpenned
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::IsLbsInterphoneOpenned()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.IsLbsInterphoneOpenned");

	UGVoiceInterface_IsLbsInterphoneOpenned_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.IsInterphoneMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::IsInterphoneMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.IsInterphoneMode");

	UGVoiceInterface_IsInterphoneMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.IsGroupInterphoneOpenned
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::IsGroupInterphoneOpenned()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.IsGroupInterphoneOpenned");

	UGVoiceInterface_IsGroupInterphoneOpenned_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.InitGVoiceComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 userId                         (Parm, ZeroConstructor)

void UGVoiceInterface::InitGVoiceComponent(const struct FString& userId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.InitGVoiceComponent");

	UGVoiceInterface_InitGVoiceComponent_Params params;
	params.userId = userId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.HaveTeamRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::HaveTeamRoom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.HaveTeamRoom");

	UGVoiceInterface_HaveTeamRoom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.HaveLbsRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::HaveLbsRoom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.HaveLbsRoom");

	UGVoiceInterface_HaveLbsRoom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.HaveGroupRoom
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::HaveGroupRoom()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.HaveGroupRoom");

	UGVoiceInterface_HaveGroupRoom_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.GroupSpeakerEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::GroupSpeakerEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.GroupSpeakerEnable");

	UGVoiceInterface_GroupSpeakerEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.GroupMicphoneEnable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UGVoiceInterface::GroupMicphoneEnable()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.GroupMicphoneEnable");

	UGVoiceInterface_GroupMicphoneEnable_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.GetVoiceLength
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UGVoiceInterface::GetVoiceLength()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.GetVoiceLength");

	UGVoiceInterface_GetVoiceLength_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.GVoiceInterface.GetAuthKey
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::GetAuthKey()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.GetAuthKey");

	UGVoiceInterface_GetAuthKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.ForbidTeammateVoiceById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            memberID                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsEnable                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::ForbidTeammateVoiceById(int memberID, bool IsEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.ForbidTeammateVoiceById");

	UGVoiceInterface_ForbidTeammateVoiceById_Params params;
	params.memberID = memberID;
	params.IsEnable = IsEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.EnableBluetoothSCO
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           Flag                           (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::EnableBluetoothSCO(bool Flag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.EnableBluetoothSCO");

	UGVoiceInterface_EnableBluetoothSCO_Params params;
	params.Flag = Flag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.DownloadRecordFile
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::DownloadRecordFile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.DownloadRecordFile");

	UGVoiceInterface_DownloadRecordFile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.CloseSpeaker
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::CloseSpeaker()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.CloseSpeaker");

	UGVoiceInterface_CloseSpeaker_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.CloseMic
// (Final, Native, Public, BlueprintCallable)

void UGVoiceInterface::CloseMic()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.CloseMic");

	UGVoiceInterface_CloseMic_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.CloseAllSpeaker
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::CloseAllSpeaker(bool showTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.CloseAllSpeaker");

	UGVoiceInterface_CloseAllSpeaker_Params params;
	params.showTips = showTips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.GVoiceInterface.CloseAllMicphone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           showTips                       (Parm, ZeroConstructor, IsPlainOldData)

void UGVoiceInterface::CloseAllMicphone(bool showTips)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.GVoiceInterface.CloseAllMicphone");

	UGVoiceInterface_CloseAllMicphone_Params params;
	params.showTips = showTips;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.HotUpdater.OnGetVersionData
// (Final, Native, Private, HasOutParms)
// Parameters:
// bool                           Successful                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FileURL                        (Parm, ZeroConstructor)
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHotUpdater::OnGetVersionData(bool Successful, const struct FString& FileURL, TArray<unsigned char> Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.HotUpdater.OnGetVersionData");

	UHotUpdater_OnGetVersionData_Params params;
	params.Successful = Successful;
	params.FileURL = FileURL;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.HotUpdater.OnDownloadedOneFile
// (Final, Native, Private, HasOutParms)
// Parameters:
// bool                           Successful                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FileURL                        (Parm, ZeroConstructor)
// TArray<unsigned char>          Data                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UHotUpdater::OnDownloadedOneFile(bool Successful, const struct FString& FileURL, TArray<unsigned char> Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.HotUpdater.OnDownloadedOneFile");

	UHotUpdater_OnDownloadedOneFile_Params params;
	params.Successful = Successful;
	params.FileURL = FileURL;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.HttpHelper.HttpGet
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UHttpHelper::HttpGet(const struct FString& URL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.HttpHelper.HttpGet");

	UHttpHelper_HttpGet_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ImageDownloader.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UImageDownloader::Start(const struct FString& URL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ImageDownloader.Start");

	UImageDownloader_Start_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ImageDownloader.SetSubDirTime
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UImageDownloader::SetSubDirTime(int sec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ImageDownloader.SetSubDirTime");

	UImageDownloader_SetSubDirTime_Params params;
	params.sec = sec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ImageDownloader.SetRootDir
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 rootDir                        (Parm, ZeroConstructor)

void UImageDownloader::SetRootDir(const struct FString& rootDir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ImageDownloader.SetRootDir");

	UImageDownloader_SetRootDir_Params params;
	params.rootDir = rootDir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ImageDownloader.ResetSubDirTime
// (Final, Native, Static, Public, BlueprintCallable)

void UImageDownloader::ResetSubDirTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ImageDownloader.ResetSubDirTime");

	UImageDownloader_ResetSubDirTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ImageDownloader.ResetRootDir
// (Final, Native, Static, Public, BlueprintCallable)

void UImageDownloader::ResetRootDir()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ImageDownloader.ResetRootDir");

	UImageDownloader_ResetRootDir_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ImageDownloader.MakeDownloaderInGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UImageDownloader*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UImageDownloader* UImageDownloader::MakeDownloaderInGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ImageDownloader.MakeDownloaderInGame");

	UImageDownloader_MakeDownloaderInGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ImageDownloader.MakeDownloader
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UImageDownloader*        ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UImageDownloader* UImageDownloader::MakeDownloader()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ImageDownloader.MakeDownloader");

	UImageDownloader_MakeDownloader_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.InGameUIManager.SubUIWidgetList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGameWidgetConfig> InWidgetConfigList             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         GameStatusStrList              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           InPersistentUI                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InUsedByControler              (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InOberverOnly                  (Parm, ZeroConstructor, IsPlainOldData)

void UInGameUIManager::SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.InGameUIManager.SubUIWidgetList");

	UInGameUIManager_SubUIWidgetList_Params params;
	params.InWidgetConfigList = InWidgetConfigList;
	params.GameStatusStrList = GameStatusStrList;
	params.InPersistentUI = InPersistentUI;
	params.InUsedByControler = InUsedByControler;
	params.InOberverOnly = InOberverOnly;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.InGameUIManager.HandleUIMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void UInGameUIManager::HandleUIMessage(const struct FString& UIMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.InGameUIManager.HandleUIMessage");

	UInGameUIManager_HandleUIMessage_Params params;
	params.UIMessage = UIMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.InGameUIManager.HandleDynamicCreation
// (Final, Native, Public, BlueprintCallable)

void UInGameUIManager::HandleDynamicCreation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.InGameUIManager.HandleDynamicCreation");

	UInGameUIManager_HandleDynamicCreation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LiveBroadcast.SetFullScreen
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           FullScreen                     (Parm, ZeroConstructor, IsPlainOldData)

void ULiveBroadcast::SetFullScreen(bool FullScreen)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LiveBroadcast.SetFullScreen");

	ULiveBroadcast_SetFullScreen_Params params;
	params.FullScreen = FullScreen;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LiveBroadcast.OpenLiveBroadcast
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// float                          Margin                         (Parm, ZeroConstructor, IsPlainOldData)

void ULiveBroadcast::OpenLiveBroadcast(const struct FString& URL, float Margin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LiveBroadcast.OpenLiveBroadcast");

	ULiveBroadcast_OpenLiveBroadcast_Params params;
	params.URL = URL;
	params.Margin = Margin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LiveBroadcast.GetInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULiveBroadcast*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULiveBroadcast* ULiveBroadcast::GetInstance()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LiveBroadcast.GetInstance");

	ULiveBroadcast_GetInstance_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.LiveBroadcast.CloseWebView
// (Final, Native, Public, BlueprintCallable)

void ULiveBroadcast::CloseWebView()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LiveBroadcast.CloseWebView");

	ULiveBroadcast_CloseWebView_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LiveBroadcast.C2JSetIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)

void ULiveBroadcast::C2JSetIndex(int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LiveBroadcast.C2JSetIndex");

	ULiveBroadcast_C2JSetIndex_Params params;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LoadTexture.LoadTexture2D
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 ImagePath                      (Parm, ZeroConstructor)
// bool                           IsValid                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutWidth                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            OutHeight                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ULoadTexture::LoadTexture2D(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LoadTexture.LoadTexture2D");

	ULoadTexture_LoadTexture2D_Params params;
	params.ImagePath = ImagePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (IsValid != nullptr)
		*IsValid = params.IsValid;
	if (OutWidth != nullptr)
		*OutWidth = params.OutWidth;
	if (OutHeight != nullptr)
		*OutHeight = params.OutHeight;

	return params.ReturnValue;
}


// Function Client.LoadTexture.GetTexture2DFromDiskFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FilePath                       (Parm, ZeroConstructor)
// class UTexture2D*              ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UTexture2D* ULoadTexture::GetTexture2DFromDiskFile(const struct FString& FilePath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LoadTexture.GetTexture2DFromDiskFile");

	ULoadTexture_GetTexture2DFromDiskFile_Params params;
	params.FilePath = FilePath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.LuaClassObj.SubUIWidgetList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FGameWidgetConfig> InWidgetConfigList             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FString>         GameStatusStrList              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bPersistentUI                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           InStatusConcern                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bDynamicWidget                 (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bKeepDynamicWidget             (Parm, ZeroConstructor, IsPlainOldData)

void ALuaClassObj::SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool bPersistentUI, bool InStatusConcern, bool bDynamicWidget, bool bKeepDynamicWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.SubUIWidgetList");

	ALuaClassObj_SubUIWidgetList_Params params;
	params.InWidgetConfigList = InWidgetConfigList;
	params.GameStatusStrList = GameStatusStrList;
	params.bPersistentUI = bPersistentUI;
	params.InStatusConcern = InStatusConcern;
	params.bDynamicWidget = bDynamicWidget;
	params.bKeepDynamicWidget = bKeepDynamicWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaClassObj.SubShowHideEvent
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         WidgetPathList                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ALuaClassObj::SubShowHideEvent(TArray<struct FString> WidgetPathList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.SubShowHideEvent");

	ALuaClassObj_SubShowHideEvent_Params params;
	params.WidgetPathList = WidgetPathList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaClassObj.SubDefaultSceneCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            sceneCameraIndex               (Parm, ZeroConstructor, IsPlainOldData)

void ALuaClassObj::SubDefaultSceneCamera(int sceneCameraIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.SubDefaultSceneCamera");

	ALuaClassObj_SubDefaultSceneCamera_Params params;
	params.sceneCameraIndex = sceneCameraIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaClassObj.SubDefaultChildUI
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FString>         childList                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void ALuaClassObj::SubDefaultChildUI(TArray<struct FString> childList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.SubDefaultChildUI");

	ALuaClassObj_SubDefaultChildUI_Params params;
	params.childList = childList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaClassObj.SubDefaultBaseUI
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 baseUI                         (Parm, ZeroConstructor)

void ALuaClassObj::SubDefaultBaseUI(const struct FString& baseUI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.SubDefaultBaseUI");

	ALuaClassObj_SubDefaultBaseUI_Params params;
	params.baseUI = baseUI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaClassObj.SubCollapseWidgetList
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 RootWidgetName                 (Parm, ZeroConstructor)
// TArray<struct FString>         ChildWidgetNames               (Parm, OutParm, ZeroConstructor)

void ALuaClassObj::SubCollapseWidgetList(const struct FString& RootWidgetName, TArray<struct FString>* ChildWidgetNames)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.SubCollapseWidgetList");

	ALuaClassObj_SubCollapseWidgetList_Params params;
	params.RootWidgetName = RootWidgetName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ChildWidgetNames != nullptr)
		*ChildWidgetNames = params.ChildWidgetNames;
}


// Function Client.LuaClassObj.PushPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 srcTag                         (Parm, ZeroConstructor)
// struct FString                 dstTag                         (Parm, ZeroConstructor)

void ALuaClassObj::PushPanel(const struct FString& srcTag, const struct FString& dstTag)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.PushPanel");

	ALuaClassObj_PushPanel_Params params;
	params.srcTag = srcTag;
	params.dstTag = dstTag;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaClassObj.IsTopStackPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALuaClassObj::IsTopStackPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.IsTopStackPanel");

	ALuaClassObj_IsTopStackPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.LuaClassObj.IsPushedPanel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ALuaClassObj::IsPushedPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.IsPushedPanel");

	ALuaClassObj_IsPushedPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.LuaClassObj.HandleUIMessageNoFetch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void ALuaClassObj::HandleUIMessageNoFetch(const struct FString& UIMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.HandleUIMessageNoFetch");

	ALuaClassObj_HandleUIMessageNoFetch_Params params;
	params.UIMessage = UIMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaClassObj.HandleUIMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void ALuaClassObj::HandleUIMessage(const struct FString& UIMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.HandleUIMessage");

	ALuaClassObj_HandleUIMessage_Params params;
	params.UIMessage = UIMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaClassObj.HandleDynamicDestruction
// (Final, Native, Public, BlueprintCallable)

void ALuaClassObj::HandleDynamicDestruction()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.HandleDynamicDestruction");

	ALuaClassObj_HandleDynamicDestruction_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaClassObj.HandleDynamicCreation
// (Final, Native, Public, BlueprintCallable)

void ALuaClassObj::HandleDynamicCreation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.HandleDynamicCreation");

	ALuaClassObj_HandleDynamicCreation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaClassObj.GetWidgetFromName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 WidgetPath                     (Parm, ZeroConstructor)
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* ALuaClassObj::GetWidgetFromName(const struct FString& WidgetPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.GetWidgetFromName");

	ALuaClassObj_GetWidgetFromName_Params params;
	params.WidgetPath = WidgetPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.LuaClassObj.GetTopStackPanelSrcTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ALuaClassObj::GetTopStackPanelSrcTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.GetTopStackPanelSrcTag");

	ALuaClassObj_GetTopStackPanelSrcTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.LuaClassObj.GetTopStackPanelDstTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ALuaClassObj::GetTopStackPanelDstTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.GetTopStackPanelDstTag");

	ALuaClassObj_GetTopStackPanelDstTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.LuaClassObj.GetGameStatus
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ALuaClassObj::GetGameStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.GetGameStatus");

	ALuaClassObj_GetGameStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.LuaClassObj.AddToTopStackPanel
// (Final, Native, Public, BlueprintCallable)

void ALuaClassObj::AddToTopStackPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaClassObj.AddToTopStackPanel");

	ALuaClassObj_AddToTopStackPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaExtendLibrary.CallLuaFunction_TwoParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            Param0                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)

void ULuaExtendLibrary::CallLuaFunction_TwoParams(const struct FString& FunctionName, int Param0, int Param1)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaExtendLibrary.CallLuaFunction_TwoParams");

	ULuaExtendLibrary_CallLuaFunction_TwoParams_Params params;
	params.FunctionName = FunctionName;
	params.Param0 = Param0;
	params.Param1 = Param1;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaExtendLibrary.CallLuaFunction_ThreeParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            Param0                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)

void ULuaExtendLibrary::CallLuaFunction_ThreeParams(const struct FString& FunctionName, int Param0, int Param1, int Param2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaExtendLibrary.CallLuaFunction_ThreeParams");

	ULuaExtendLibrary_CallLuaFunction_ThreeParams_Params params;
	params.FunctionName = FunctionName;
	params.Param0 = Param0;
	params.Param1 = Param1;
	params.Param2 = Param2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaExtendLibrary.CallLuaFunction_SixParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            Param0                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param3                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param4                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param5                         (Parm, ZeroConstructor, IsPlainOldData)

void ULuaExtendLibrary::CallLuaFunction_SixParams(const struct FString& FunctionName, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaExtendLibrary.CallLuaFunction_SixParams");

	ULuaExtendLibrary_CallLuaFunction_SixParams_Params params;
	params.FunctionName = FunctionName;
	params.Param0 = Param0;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Param3 = Param3;
	params.Param4 = Param4;
	params.Param5 = Param5;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaExtendLibrary.CallLuaFunction_SevenParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            Param0                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param3                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param4                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param5                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param6                         (Parm, ZeroConstructor, IsPlainOldData)

void ULuaExtendLibrary::CallLuaFunction_SevenParams(const struct FString& FunctionName, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5, int Param6)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaExtendLibrary.CallLuaFunction_SevenParams");

	ULuaExtendLibrary_CallLuaFunction_SevenParams_Params params;
	params.FunctionName = FunctionName;
	params.Param0 = Param0;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Param3 = Param3;
	params.Param4 = Param4;
	params.Param5 = Param5;
	params.Param6 = Param6;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaExtendLibrary.CallLuaFunction_OneParam
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            Param                          (Parm, ZeroConstructor, IsPlainOldData)

void ULuaExtendLibrary::CallLuaFunction_OneParam(const struct FString& FunctionName, int Param)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaExtendLibrary.CallLuaFunction_OneParam");

	ULuaExtendLibrary_CallLuaFunction_OneParam_Params params;
	params.FunctionName = FunctionName;
	params.Param = Param;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaExtendLibrary.CallLuaFunction_FourParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            Param0                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param3                         (Parm, ZeroConstructor, IsPlainOldData)

void ULuaExtendLibrary::CallLuaFunction_FourParams(const struct FString& FunctionName, int Param0, int Param1, int Param2, int Param3)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaExtendLibrary.CallLuaFunction_FourParams");

	ULuaExtendLibrary_CallLuaFunction_FourParams_Params params;
	params.FunctionName = FunctionName;
	params.Param0 = Param0;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Param3 = Param3;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaExtendLibrary.CallLuaFunction_FiveParams
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// int                            Param0                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param1                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param2                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param3                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Param4                         (Parm, ZeroConstructor, IsPlainOldData)

void ULuaExtendLibrary::CallLuaFunction_FiveParams(const struct FString& FunctionName, int Param0, int Param1, int Param2, int Param3, int Param4)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaExtendLibrary.CallLuaFunction_FiveParams");

	ULuaExtendLibrary_CallLuaFunction_FiveParams_Params params;
	params.FunctionName = FunctionName;
	params.Param0 = Param0;
	params.Param1 = Param1;
	params.Param2 = Param2;
	params.Param3 = Param3;
	params.Param4 = Param4;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.LuaExtendLibrary.CallLuaFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void ULuaExtendLibrary::CallLuaFunction(const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.LuaExtendLibrary.CallLuaFunction");

	ULuaExtendLibrary_CallLuaFunction_Params params;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ReuseList.Tick
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UReuseList::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.Tick");

	UReuseList_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ReuseList.SetReloadDonotJump
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           DonotJump                      (Parm, ZeroConstructor, IsPlainOldData)

void UReuseList::SetReloadDonotJump(bool DonotJump)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.SetReloadDonotJump");

	UReuseList_SetReloadDonotJump_Params params;
	params.DonotJump = DonotJump;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ReuseList.Reload
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            _ItemCount                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            _ItemHeight                    (Parm, ZeroConstructor, IsPlainOldData)
// int                            _ItemWidth                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            _Style                         (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  Class                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            _PaddingX                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            _PaddingY                      (Parm, ZeroConstructor, IsPlainOldData)

void UReuseList::Reload(int _ItemCount, int _ItemHeight, int _ItemWidth, int _Style, class UClass* Class, int _PaddingX, int _PaddingY)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.Reload");

	UReuseList_Reload_Params params;
	params._ItemCount = _ItemCount;
	params._ItemHeight = _ItemHeight;
	params._ItemWidth = _ItemWidth;
	params._Style = _Style;
	params.Class = Class;
	params._PaddingX = _PaddingX;
	params._PaddingY = _PaddingY;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ReuseList.RefreshOne
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Idx                            (Parm, ZeroConstructor, IsPlainOldData)

void UReuseList::RefreshOne(int Idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.RefreshOne");

	UReuseList_RefreshOne_Params params;
	params.Idx = Idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ReuseList.Refresh
// (Final, Native, Public, BlueprintCallable)

void UReuseList::Refresh()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.Refresh");

	UReuseList_Refresh_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ReuseList.MoveOffset
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Offset                         (Parm, ZeroConstructor, IsPlainOldData)

void UReuseList::MoveOffset(float Offset)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.MoveOffset");

	UReuseList_MoveOffset_Params params;
	params.Offset = Offset;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ReuseList.JumpbyIdx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            Idx                            (Parm, ZeroConstructor, IsPlainOldData)

void UReuseList::JumpbyIdx(int Idx)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.JumpbyIdx");

	UReuseList_JumpbyIdx_Params params;
	params.Idx = Idx;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ReuseList.IfInEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UReuseList::IfInEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.IfInEnd");

	UReuseList_IfInEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ReuseList.GetViewSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UReuseList::GetViewSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.GetViewSize");

	UReuseList_GetViewSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ReuseList.GetCurrentEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UReuseList::GetCurrentEnd()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.GetCurrentEnd");

	UReuseList_GetCurrentEnd_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ReuseList.GetCurrentBegin
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UReuseList::GetCurrentBegin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.GetCurrentBegin");

	UReuseList_GetCurrentBegin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ReuseList.GetContentSize
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UReuseList::GetContentSize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.GetContentSize");

	UReuseList_GetContentSize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ReuseList.Clear
// (Final, Native, Public, BlueprintCallable)

void UReuseList::Clear()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ReuseList.Clear");

	UReuseList_Clear_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScreenshotMaker.SaveToPhotosAlbumEx
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 pathStr                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScreenshotMaker::SaveToPhotosAlbumEx(const struct FString& pathStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.SaveToPhotosAlbumEx");

	UScreenshotMaker_SaveToPhotosAlbumEx_Params params;
	params.pathStr = pathStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.SaveToPhotosAlbum
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 pathStr                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScreenshotMaker::SaveToPhotosAlbum(const struct FString& pathStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.SaveToPhotosAlbum");

	UScreenshotMaker_SaveToPhotosAlbum_Params params;
	params.pathStr = pathStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.ReMakePicture
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 pathStr                        (Parm, ZeroConstructor)
// struct FVector4                Vector4                        (Parm, IsPlainOldData)

void UScreenshotMaker::ReMakePicture(const struct FString& pathStr, const struct FVector4& Vector4)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.ReMakePicture");

	UScreenshotMaker_ReMakePicture_Params params;
	params.pathStr = pathStr;
	params.Vector4 = Vector4;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScreenshotMaker.ReMakeJPGEPicture
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FString                 pathStr                        (Parm, ZeroConstructor)
// struct FVector4                Vector4                        (Parm, IsPlainOldData)
// int                            OutWidth                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            OutHeight                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            iQuality                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScreenshotMaker::ReMakeJPGEPicture(const struct FString& pathStr, const struct FVector4& Vector4, int OutWidth, int OutHeight, int iQuality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.ReMakeJPGEPicture");

	UScreenshotMaker_ReMakeJPGEPicture_Params params;
	params.pathStr = pathStr;
	params.Vector4 = Vector4;
	params.OutWidth = OutWidth;
	params.OutHeight = OutHeight;
	params.iQuality = iQuality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.MakePicture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           isShowUI                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScreenshotMaker::MakePicture(bool isShowUI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.MakePicture");

	UScreenshotMaker_MakePicture_Params params;
	params.isShowUI = isShowUI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.MakeBugReprotPic
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           isShowUI                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScreenshotMaker::MakeBugReprotPic(bool isShowUI)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.MakeBugReprotPic");

	UScreenshotMaker_MakeBugReprotPic_Params params;
	params.isShowUI = isShowUI;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.HasCaptured
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 pathStr                        (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScreenshotMaker::HasCaptured(const struct FString& pathStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.HasCaptured");

	UScreenshotMaker_HasCaptured_Params params;
	params.pathStr = pathStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScreenshotMaker.GetSaveStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScreenshotMaker::GetSaveStatus()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScreenshotMaker.GetSaveStatus");

	UScreenshotMaker_GetSaveStatus_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.XgClearLocalNotifications
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::XgClearLocalNotifications()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.XgClearLocalNotifications");

	UScriptHelperClient_XgClearLocalNotifications_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.XgAddLocalNotification_LuaState
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::XgAddLocalNotification_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.XgAddLocalNotification_LuaState");

	UScriptHelperClient_XgAddLocalNotification_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.WGSendToWeixinWithVideo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _videoPath                     (Parm, ZeroConstructor)
// struct FString                 _videoUrl                      (Parm, ZeroConstructor)
// struct FString                 _thumbUrl                      (Parm, ZeroConstructor)
// struct FString                 _mediaTagName                  (Parm, ZeroConstructor)
// struct FString                 _messageExt                    (Parm, ZeroConstructor)
// struct FString                 _messageAction                 (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::WGSendToWeixinWithVideo(const struct FString& _thumbUrl, const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _videoPath, const struct FString& _videoUrl, int _shareScene, const struct FString& _mediaTagName, const struct FString& _messageExt, const struct FString& _messageAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WGSendToWeixinWithVideo");

	UScriptHelperClient_WGSendToWeixinWithVideo_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._videoPath = _videoPath;
	params._videoUrl = _videoUrl;
	params._thumbUrl = _thumbUrl;
	params._mediaTagName = _mediaTagName;
	params._messageExt = _messageExt;
	params._messageAction = _messageAction;
	params._shareScene = _shareScene;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WGSendToQQWithVideo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _summary                       (Parm, ZeroConstructor)
// struct FString                 _videoPath                     (Parm, ZeroConstructor)

void UScriptHelperClient::WGSendToQQWithVideo(const struct FString& _summary, const struct FString& _videoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WGSendToQQWithVideo");

	UScriptHelperClient_WGSendToQQWithVideo_Params params;
	params._summary = _summary;
	params._videoPath = _videoPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatShareWithUrlInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _url                           (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::WechatShareWithUrlInfo(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatShareWithUrlInfo");

	UScriptHelperClient_WechatShareWithUrlInfo_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgPath = _imgPath;
	params._url = _url;
	params._shareScene = _shareScene;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatShareWithPhoto
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _mediaTagName                  (Parm, ZeroConstructor)
// struct FString                 _messageExt                    (Parm, ZeroConstructor)
// struct FString                 _messageAction                 (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::WechatShareWithPhoto(const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, const struct FString& _messageAction, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatShareWithPhoto");

	UScriptHelperClient_WechatShareWithPhoto_Params params;
	params._imgPath = _imgPath;
	params._mediaTagName = _mediaTagName;
	params._messageExt = _messageExt;
	params._messageAction = _messageAction;
	params._shareScene = _shareScene;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WeChatShareWithMiniApp2
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgWebPath                    (Parm, ZeroConstructor)
// struct FString                 _imgBackupLocalPath            (Parm, ZeroConstructor)
// struct FString                 _webpageUrl                    (Parm, ZeroConstructor)
// struct FString                 _userName                      (Parm, ZeroConstructor)
// struct FString                 _path                          (Parm, ZeroConstructor)
// struct FString                 _messageExt                    (Parm, ZeroConstructor)
// struct FString                 _messageAction                 (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::WeChatShareWithMiniApp2(const struct FString& _webpageUrl, const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgWebPath, const struct FString& _imgBackupLocalPath, int _shareScene, const struct FString& _userName, const struct FString& _path, const struct FString& _messageExt, const struct FString& _messageAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WeChatShareWithMiniApp2");

	UScriptHelperClient_WeChatShareWithMiniApp2_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgWebPath = _imgWebPath;
	params._imgBackupLocalPath = _imgBackupLocalPath;
	params._webpageUrl = _webpageUrl;
	params._userName = _userName;
	params._path = _path;
	params._messageExt = _messageExt;
	params._messageAction = _messageAction;
	params._shareScene = _shareScene;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WeChatShareWithMiniApp
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _webpageUrl                    (Parm, ZeroConstructor)
// struct FString                 _userName                      (Parm, ZeroConstructor)
// struct FString                 _path                          (Parm, ZeroConstructor)
// struct FString                 _messageExt                    (Parm, ZeroConstructor)
// struct FString                 _messageAction                 (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           _useContent                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::WeChatShareWithMiniApp(const struct FString& _userName, const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _webpageUrl, bool _useContent, const struct FString& _path, const struct FString& _messageExt, const struct FString& _messageAction, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WeChatShareWithMiniApp");

	UScriptHelperClient_WeChatShareWithMiniApp_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgPath = _imgPath;
	params._webpageUrl = _webpageUrl;
	params._userName = _userName;
	params._path = _path;
	params._messageExt = _messageExt;
	params._messageAction = _messageAction;
	params._shareScene = _shareScene;
	params._useContent = _useContent;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatShareToFriend
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 Desc                           (Parm, ZeroConstructor)
// struct FString                 mediaId                        (Parm, ZeroConstructor)
// struct FString                 messageExt                     (Parm, ZeroConstructor)
// struct FString                 mediaTagName                   (Parm, ZeroConstructor)
// struct FString                 msdkExtInfo                    (Parm, ZeroConstructor)

void UScriptHelperClient::WechatShareToFriend(const struct FString& mediaId, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& messageExt, const struct FString& mediaTagName, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatShareToFriend");

	UScriptHelperClient_WechatShareToFriend_Params params;
	params.OpenID = OpenID;
	params.Title = Title;
	params.Desc = Desc;
	params.mediaId = mediaId;
	params.messageExt = messageExt;
	params.mediaTagName = mediaTagName;
	params.msdkExtInfo = msdkExtInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatShareDeepLink
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 link                           (Parm, ZeroConstructor)

void UScriptHelperClient::WechatShareDeepLink(const struct FString& link, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatShareDeepLink");

	UScriptHelperClient_WechatShareDeepLink_Params params;
	params.link = link;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatShare
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _mediaTagName                  (Parm, ZeroConstructor)
// struct FString                 _messageExt                    (Parm, ZeroConstructor)

void UScriptHelperClient::WechatShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatShare");

	UScriptHelperClient_WechatShare_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgPath = _imgPath;
	params._mediaTagName = _mediaTagName;
	params._messageExt = _messageExt;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatQueryGroup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 unionId                        (Parm, ZeroConstructor)
// struct FString                 OpenIdList                     (Parm, ZeroConstructor)

void UScriptHelperClient::WechatQueryGroup(const struct FString& unionId, const struct FString& OpenIdList, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatQueryGroup");

	UScriptHelperClient_WechatQueryGroup_Params params;
	params.unionId = unionId;
	params.OpenIdList = OpenIdList;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatJoinGroup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 unionId                        (Parm, ZeroConstructor)
// struct FString                 chatRoomNickName               (Parm, ZeroConstructor)

void UScriptHelperClient::WechatJoinGroup(const struct FString& unionId, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatJoinGroup");

	UScriptHelperClient_WechatJoinGroup_Params params;
	params.unionId = unionId;
	params.chatRoomNickName = chatRoomNickName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WechatCreateGroup
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 unionId                        (Parm, ZeroConstructor)
// struct FString                 chatRoomName                   (Parm, ZeroConstructor)
// struct FString                 chatRoomNickName               (Parm, ZeroConstructor)

void UScriptHelperClient::WechatCreateGroup(const struct FString& unionId, const struct FString& chatRoomName, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WechatCreateGroup");

	UScriptHelperClient_WechatCreateGroup_Params params;
	params.unionId = unionId;
	params.chatRoomName = chatRoomName;
	params.chatRoomNickName = chatRoomNickName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.WakeupFromSuspendSound
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::WakeupFromSuspendSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.WakeupFromSuspendSound");

	UScriptHelperClient_WakeupFromSuspendSound_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.UploadClientLogs
// (Final, Native, Static, Public)

void UScriptHelperClient::UploadClientLogs()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.UploadClientLogs");

	UScriptHelperClient_UploadClientLogs_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.UnloadStreamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            levelId                        (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::UnloadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, int levelId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.UnloadStreamLevel");

	UScriptHelperClient_UnloadStreamLevel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.levelId = levelId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.TApmDataReport
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// int                            EventID                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 EventInfo                      (Parm, ZeroConstructor)

void UScriptHelperClient::TApmDataReport(class UGameFrontendHUD* GameFrontendHUD, int EventID, const struct FString& EventInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.TApmDataReport");

	UScriptHelperClient_TApmDataReport_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.EventID = EventID;
	params.EventInfo = EventInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SwitchUser
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           useExternalAccount             (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SwitchUser(bool useExternalAccount, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SwitchUser");

	UScriptHelperClient_SwitchUser_Params params;
	params.useExternalAccount = useExternalAccount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.SwitchSceneCamera
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 SceneCameraName                (Parm, ZeroConstructor)
// float                          blendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SwitchSceneCamera(class UGameFrontendHUD* GameFrontendHUD, const struct FString& SceneCameraName, float blendTime, bool bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SwitchSceneCamera");

	UScriptHelperClient_SwitchSceneCamera_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.SceneCameraName = SceneCameraName;
	params.blendTime = blendTime;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SuspendSound
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::SuspendSound()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SuspendSound");

	UScriptHelperClient_SuspendSound_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.StopShaderPrecompile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::StopShaderPrecompile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.StopShaderPrecompile");

	UScriptHelperClient_StopShaderPrecompile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.StartShaderPrecompile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::StartShaderPrecompile()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.StartShaderPrecompile");

	UScriptHelperClient_StartShaderPrecompile_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.StartGrayUpdate
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::StartGrayUpdate(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.StartGrayUpdate");

	UScriptHelperClient_StartGrayUpdate_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.ShutdownUnrealNetwork
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::ShutdownUnrealNetwork(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ShutdownUnrealNetwork");

	UScriptHelperClient_ShutdownUnrealNetwork_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ShowVideoListDialog
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::ShowVideoListDialog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ShowVideoListDialog");

	UScriptHelperClient_ShowVideoListDialog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ShowScreenDebugMessage
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Message                        (Parm, ZeroConstructor)

void UScriptHelperClient::ShowScreenDebugMessage(const struct FString& Message)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ShowScreenDebugMessage");

	UScriptHelperClient_ShowScreenDebugMessage_Params params;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ShowGameTypeBlack
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// int                            endTime                        (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::ShowGameTypeBlack(class UGameFrontendHUD* GameFrontendHUD, int endTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ShowGameTypeBlack");

	UScriptHelperClient_ShowGameTypeBlack_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.endTime = endTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ShowGameType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::ShowGameType(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ShowGameType");

	UScriptHelperClient_ShowGameType_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ShowClubLogoInOB
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::ShowClubLogoInOB(class UGameFrontendHUD* GameFrontendHUD, bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ShowClubLogoInOB");

	UScriptHelperClient_ShowClubLogoInOB_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetWeatherInfo
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// int                            WeatherID                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 WeatherName                    (Parm, ZeroConstructor)

void UScriptHelperClient::SetWeatherInfo(class UGameFrontendHUD* GameFrontendHUD, int WeatherID, const struct FString& WeatherName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetWeatherInfo");

	UScriptHelperClient_SetWeatherInfo_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.WeatherID = WeatherID;
	params.WeatherName = WeatherName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetUIRectOffset
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 uirect                         (Parm, ZeroConstructor)

void UScriptHelperClient::SetUIRectOffset(const struct FString& uirect)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetUIRectOffset");

	UScriptHelperClient_SetUIRectOffset_Params params;
	params.uirect = uirect;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetShowFriendObservers
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShow                          (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SetShowFriendObservers(class UGameFrontendHUD* GameFrontendHUD, bool bShow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetShowFriendObservers");

	UScriptHelperClient_SetShowFriendObservers_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.bShow = bShow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetShouldShowWatchingDetialBtn
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCan                           (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SetShouldShowWatchingDetialBtn(class UGameFrontendHUD* GameFrontendHUD, bool bCan)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetShouldShowWatchingDetialBtn");

	UScriptHelperClient_SetShouldShowWatchingDetialBtn_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.bCan = bCan;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetScreenHole
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 sceenHole                      (Parm, ZeroConstructor)

void UScriptHelperClient::SetScreenHole(const struct FString& sceenHole)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetScreenHole");

	UScriptHelperClient_SetScreenHole_Params params;
	params.sceenHole = sceenHole;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetPlayerBaseInfo
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// uint64_t                       RoleID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FString                 HeadIconUrl                    (Parm, ZeroConstructor)
// int                            RoleLevel                      (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SetPlayerBaseInfo(class UGameFrontendHUD* GameFrontendHUD, const struct FString& OpenID, uint64_t RoleID, const struct FString& PlayerName, const struct FString& HeadIconUrl, int RoleLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetPlayerBaseInfo");

	UScriptHelperClient_SetPlayerBaseInfo_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.OpenID = OpenID;
	params.RoleID = RoleID;
	params.PlayerName = PlayerName;
	params.HeadIconUrl = HeadIconUrl;
	params.RoleLevel = RoleLevel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetMyFriendObserversDetail
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FFriendObserver> FriendObserversDetails         (Parm, ZeroConstructor)

void UScriptHelperClient::SetMyFriendObserversDetail(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FFriendObserver> FriendObserversDetails)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetMyFriendObserversDetail");

	UScriptHelperClient_SetMyFriendObserversDetail_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.FriendObserversDetails = FriendObserversDetails;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetLinkStyle
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 StyleName                      (Parm, ZeroConstructor)
// int                            FontSize                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FontPath                       (Parm, ZeroConstructor)
// struct FString                 FontColor                      (Parm, ZeroConstructor)
// bool                           ShowUnderline                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::SetLinkStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool ShowUnderline)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetLinkStyle");

	UScriptHelperClient_SetLinkStyle_Params params;
	params.StyleName = StyleName;
	params.FontSize = FontSize;
	params.FontPath = FontPath;
	params.FontColor = FontColor;
	params.ShowUnderline = ShowUnderline;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.SetIntSettingConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SetIntSettingConfig(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetIntSettingConfig");

	UScriptHelperClient_SetIntSettingConfig_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetIntDefaultConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SetIntDefaultConfig(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetIntDefaultConfig");

	UScriptHelperClient_SetIntDefaultConfig_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetImageStyle
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 StyleName                      (Parm, ZeroConstructor)
// int                            ImageSize                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ImagePath                      (Parm, ZeroConstructor)
// struct FString                 ImageColor                     (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::SetImageStyle(const struct FString& StyleName, int ImageSize, const struct FString& ImagePath, const struct FString& ImageColor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetImageStyle");

	UScriptHelperClient_SetImageStyle_Params params;
	params.StyleName = StyleName;
	params.ImageSize = ImageSize;
	params.ImagePath = ImagePath;
	params.ImageColor = ImageColor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.SetGameStatusMap
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// TMap<struct FName, struct FString> GameStatusMap                  (Parm, ZeroConstructor)

void UScriptHelperClient::SetGameStatusMap(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FName, struct FString> GameStatusMap)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetGameStatusMap");

	UScriptHelperClient_SetGameStatusMap_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.GameStatusMap = GameStatusMap;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetGameSrvID
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// int                            GameSrvID                      (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SetGameSrvID(class UGameFrontendHUD* GameFrontendHUD, int GameSrvID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetGameSrvID");

	UScriptHelperClient_SetGameSrvID_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.GameSrvID = GameSrvID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetFontStyle
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 StyleName                      (Parm, ZeroConstructor)
// int                            FontSize                       (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 FontPath                       (Parm, ZeroConstructor)
// struct FString                 FontColor                      (Parm, ZeroConstructor)
// bool                           UseShadow                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::SetFontStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool UseShadow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetFontStyle");

	UScriptHelperClient_SetFontStyle_Params params;
	params.StyleName = StyleName;
	params.FontSize = FontSize;
	params.FontPath = FontPath;
	params.FontColor = FontColor;
	params.UseShadow = UseShadow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.SetCanWatchEnemy
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bCan                           (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SetCanWatchEnemy(class UGameFrontendHUD* GameFrontendHUD, bool bCan)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetCanWatchEnemy");

	UScriptHelperClient_SetCanWatchEnemy_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.bCan = bCan;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetBoolSettingConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SetBoolSettingConfig(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key, bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetBoolSettingConfig");

	UScriptHelperClient_SetBoolSettingConfig_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetBLEResult
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Result                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SetBLEResult(int Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetBLEResult");

	UScriptHelperClient_SetBLEResult_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SetBLEIdendify
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UScriptHelperClient::SetBLEIdendify(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SetBLEIdendify");

	UScriptHelperClient_SetBLEIdendify_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SendRetriveBeginnerFinisheGuideReq
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SendRetriveBeginnerFinisheGuideReq(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SendRetriveBeginnerFinisheGuideReq");

	UScriptHelperClient_SendRetriveBeginnerFinisheGuideReq_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SendRecordFinishedGuideReq
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 tipsID                         (Parm, ZeroConstructor)

void UScriptHelperClient::SendRecordFinishedGuideReq(class UGameFrontendHUD* GameFrontendHUD, const struct FString& tipsID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SendRecordFinishedGuideReq");

	UScriptHelperClient_SendRecordFinishedGuideReq_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.tipsID = tipsID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SendLobbyChat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 gid                            (Parm, ZeroConstructor)
// struct FString                 content                        (Parm, ZeroConstructor)

void UScriptHelperClient::SendLobbyChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SendLobbyChat");

	UScriptHelperClient_SendLobbyChat_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.gid = gid;
	params.content = content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SendDirtyToFilter
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 dirtyString                    (Parm, ZeroConstructor)

void UScriptHelperClient::SendDirtyToFilter(class UGameFrontendHUD* GameFrontendHUD, const struct FString& dirtyString)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SendDirtyToFilter");

	UScriptHelperClient_SendDirtyToFilter_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.dirtyString = dirtyString;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.SaveSavFileWithMemData_LuaState
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::SaveSavFileWithMemData_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SaveSavFileWithMemData_LuaState");

	UScriptHelperClient_SaveSavFileWithMemData_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.SaveSavFile
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 CompressedData                 (Parm, ZeroConstructor)
// struct FString                 Filename                       (Parm, ZeroConstructor)
// int                            CompressedSize                 (Parm, ZeroConstructor, IsPlainOldData)
// int                            UnCompressedSize               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::SaveSavFile(const struct FString& CompressedData, const struct FString& Filename, int CompressedSize, int UnCompressedSize)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SaveSavFile");

	UScriptHelperClient_SaveSavFile_Params params;
	params.CompressedData = CompressedData;
	params.Filename = Filename;
	params.CompressedSize = CompressedSize;
	params.UnCompressedSize = UnCompressedSize;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.SaveLuaMemoryFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// struct FString                 InputContent                   (Parm, ZeroConstructor)
// bool                           RmExistFile                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::SaveLuaMemoryFile(const struct FString& Filename, const struct FString& InputContent, bool RmExistFile)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.SaveLuaMemoryFile");

	UScriptHelperClient_SaveLuaMemoryFile_Params params;
	params.Filename = Filename;
	params.InputContent = InputContent;
	params.RmExistFile = RmExistFile;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.Save_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::Save_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.Save_LuaState");

	UScriptHelperClient_Save_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.ReturnToLobby
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::ReturnToLobby(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ReturnToLobby");

	UScriptHelperClient_ReturnToLobby_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ResetReportComplaintNames
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::ResetReportComplaintNames(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ResetReportComplaintNames");

	UScriptHelperClient_ResetReportComplaintNames_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.RequestWebService
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 servicename                    (Parm, ZeroConstructor)
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 verb                           (Parm, ZeroConstructor)
// struct FString                 content                        (Parm, ZeroConstructor)

void UScriptHelperClient::RequestWebService(const struct FString& servicename, const struct FString& URL, const struct FString& verb, const struct FString& content)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.RequestWebService");

	UScriptHelperClient_RequestWebService_Params params;
	params.servicename = servicename;
	params.URL = URL;
	params.verb = verb;
	params.content = content;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ReportPrajna
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 SerialNumber                   (Parm, ZeroConstructor)

void UScriptHelperClient::ReportPrajna(const struct FString& SerialNumber, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ReportPrajna");

	UScriptHelperClient_ReportPrajna_Params params;
	params.SerialNumber = SerialNumber;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.ReplyInvite
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 gid                            (Parm, ZeroConstructor)
// bool                           bReply                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::ReplyInvite(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, bool bReply)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ReplyInvite");

	UScriptHelperClient_ReplyInvite_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.gid = gid;
	params.bReply = bReply;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.RepairPak
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::RepairPak(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.RepairPak");

	UScriptHelperClient_RepairPak_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.RemoveTssLoginInfo
// (Final, Native, Static, Public)

void UScriptHelperClient::RemoveTssLoginInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.RemoveTssLoginInfo");

	UScriptHelperClient_RemoveTssLoginInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.RegisterPay
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::RegisterPay(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.RegisterPay");

	UScriptHelperClient_RegisterPay_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.QuitVoiceRoom
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::QuitVoiceRoom(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QuitVoiceRoom");

	UScriptHelperClient_QuitVoiceRoom_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.QuitLbsVoiceRoom
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::QuitLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QuitLbsVoiceRoom");

	UScriptHelperClient_QuitLbsVoiceRoom_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.QuitGroupsVoiceRoom
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::QuitGroupsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QuitGroupsVoiceRoom");

	UScriptHelperClient_QuitGroupsVoiceRoom_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.QuitFightChat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::QuitFightChat(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QuitFightChat");

	UScriptHelperClient_QuitFightChat_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.QueryMyInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            channelType                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::QueryMyInfo(int channelType, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QueryMyInfo");

	UScriptHelperClient_QueryMyInfo_Params params;
	params.channelType = channelType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.QQShareWithPhotoExtra
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _extraScene                    (Parm, ZeroConstructor)
// struct FString                 _messageExt                    (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::QQShareWithPhotoExtra(const struct FString& _imgPath, const struct FString& _extraScene, const struct FString& _messageExt, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QQShareWithPhotoExtra");

	UScriptHelperClient_QQShareWithPhotoExtra_Params params;
	params._imgPath = _imgPath;
	params._extraScene = _extraScene;
	params._messageExt = _messageExt;
	params._shareScene = _shareScene;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.QQShareWithPhoto
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::QQShareWithPhoto(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QQShareWithPhoto");

	UScriptHelperClient_QQShareWithPhoto_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgPath = _imgPath;
	params._shareScene = _shareScene;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.QQShareToFriend
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            act                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 Title                          (Parm, ZeroConstructor)
// struct FString                 Desc                           (Parm, ZeroConstructor)
// struct FString                 targetUrl                      (Parm, ZeroConstructor)
// struct FString                 imgUrl                         (Parm, ZeroConstructor)
// struct FString                 previewText                    (Parm, ZeroConstructor)
// struct FString                 gameTag                        (Parm, ZeroConstructor)
// struct FString                 msdkExtInfo                    (Parm, ZeroConstructor)

void UScriptHelperClient::QQShareToFriend(const struct FString& targetUrl, int act, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& imgUrl, const struct FString& previewText, const struct FString& gameTag, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QQShareToFriend");

	UScriptHelperClient_QQShareToFriend_Params params;
	params.act = act;
	params.OpenID = OpenID;
	params.Title = Title;
	params.Desc = Desc;
	params.targetUrl = targetUrl;
	params.imgUrl = imgUrl;
	params.previewText = previewText;
	params.gameTag = gameTag;
	params.msdkExtInfo = msdkExtInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.QQShare
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 _descShare                     (Parm, ZeroConstructor)
// struct FString                 _titleShare                    (Parm, ZeroConstructor)
// struct FString                 _imgPath                       (Parm, ZeroConstructor)
// struct FString                 _imgUrl                        (Parm, ZeroConstructor)
// struct FString                 _url                           (Parm, ZeroConstructor)
// int                            _shareScene                    (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::QQShare(const struct FString& _imgPath, const struct FString& _descShare, const struct FString& _titleShare, int _shareScene, const struct FString& _imgUrl, const struct FString& _url, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QQShare");

	UScriptHelperClient_QQShare_Params params;
	params._descShare = _descShare;
	params._titleShare = _titleShare;
	params._imgPath = _imgPath;
	params._imgUrl = _imgUrl;
	params._url = _url;
	params._shareScene = _shareScene;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.QQAddFriend
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 Desc                           (Parm, ZeroConstructor)
// struct FString                 Message                        (Parm, ZeroConstructor)

void UScriptHelperClient::QQAddFriend(const struct FString& OpenID, const struct FString& Desc, const struct FString& Message, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.QQAddFriend");

	UScriptHelperClient_QQAddFriend_Params params;
	params.OpenID = OpenID;
	params.Desc = Desc;
	params.Message = Message;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.PopPanel
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::PopPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.PopPanel");

	UScriptHelperClient_PopPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.PopAllPanel
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::PopAllPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.PopAllPanel");

	UScriptHelperClient_PopAllPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.PandoraSendCmd
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 jsonStr                        (Parm, ZeroConstructor)

void UScriptHelperClient::PandoraSendCmd(const struct FString& jsonStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.PandoraSendCmd");

	UScriptHelperClient_PandoraSendCmd_Params params;
	params.jsonStr = jsonStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.PandoraInit
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 InOpenId                       (Parm, ZeroConstructor)
// struct FString                 InRoleId                       (Parm, ZeroConstructor)
// struct FString                 InAppId                        (Parm, ZeroConstructor)
// struct FString                 InPlatId                       (Parm, ZeroConstructor)
// struct FString                 InAccType                      (Parm, ZeroConstructor)
// struct FString                 InArea                         (Parm, ZeroConstructor)
// struct FString                 InPartion                      (Parm, ZeroConstructor)
// struct FString                 InCloudTest                    (Parm, ZeroConstructor)
// struct FString                 InAccessToken                  (Parm, ZeroConstructor)
// struct FString                 InSdkVersion                   (Parm, ZeroConstructor)
// struct FString                 InGameVersion                  (Parm, ZeroConstructor)
// struct FString                 InRoleName                     (Parm, ZeroConstructor)
// struct FString                 InPayToken                     (Parm, ZeroConstructor)
// struct FString                 InHeadUrl                      (Parm, ZeroConstructor)
// struct FString                 InChanelId                     (Parm, ZeroConstructor)

void UScriptHelperClient::PandoraInit(const struct FString& InOpenId, const struct FString& InRoleId, const struct FString& InAppId, const struct FString& InPlatId, const struct FString& InAccType, const struct FString& InArea, const struct FString& InPartion, const struct FString& InCloudTest, const struct FString& InAccessToken, const struct FString& InSdkVersion, const struct FString& InGameVersion, const struct FString& InRoleName, const struct FString& InPayToken, const struct FString& InHeadUrl, const struct FString& InChanelId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.PandoraInit");

	UScriptHelperClient_PandoraInit_Params params;
	params.InOpenId = InOpenId;
	params.InRoleId = InRoleId;
	params.InAppId = InAppId;
	params.InPlatId = InPlatId;
	params.InAccType = InAccType;
	params.InArea = InArea;
	params.InPartion = InPartion;
	params.InCloudTest = InCloudTest;
	params.InAccessToken = InAccessToken;
	params.InSdkVersion = InSdkVersion;
	params.InGameVersion = InGameVersion;
	params.InRoleName = InRoleName;
	params.InPayToken = InPayToken;
	params.InHeadUrl = InHeadUrl;
	params.InChanelId = InChanelId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.PandoraClose
// (Final, Native, Static, Public)

void UScriptHelperClient::PandoraClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.PandoraClose");

	UScriptHelperClient_PandoraClose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OpenURL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// int                            Dir                            (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::OpenURL(const struct FString& URL, int Dir)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OpenURL");

	UScriptHelperClient_OpenURL_Params params;
	params.URL = URL;
	params.Dir = Dir;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OpenFullScreenWebViewWithJson
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 Json                           (Parm, ZeroConstructor)

void UScriptHelperClient::OpenFullScreenWebViewWithJson(const struct FString& Json, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OpenFullScreenWebViewWithJson");

	UScriptHelperClient_OpenFullScreenWebViewWithJson_Params params;
	params.Json = Json;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.OnTableReleaseAll_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::OnTableReleaseAll_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnTableReleaseAll_LuaState");

	UScriptHelperClient_OnTableReleaseAll_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.OnReceiveBLEMsg
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Msg                            (Parm, ZeroConstructor)

void UScriptHelperClient::OnReceiveBLEMsg(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Msg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnReceiveBLEMsg");

	UScriptHelperClient_OnReceiveBLEMsg_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.Msg = Msg;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OnNotifyFightFriendChat
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FFightFriendChat        Data                           (ConstParm, Parm, OutParm, ReferenceParm)

void UScriptHelperClient::OnNotifyFightFriendChat(class UGameFrontendHUD* GameFrontendHUD, const struct FFightFriendChat& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnNotifyFightFriendChat");

	UScriptHelperClient_OnNotifyFightFriendChat_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OnInviteNextBattle
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 gid                            (Parm, ZeroConstructor)
// struct FString                 Name                           (Parm, ZeroConstructor)

void UScriptHelperClient::OnInviteNextBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnInviteNextBattle");

	UScriptHelperClient_OnInviteNextBattle_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.gid = gid;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OnHttpGetResponse
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Result                         (Parm, ZeroConstructor)

void UScriptHelperClient::OnHttpGetResponse(const struct FString& Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnHttpGetResponse");

	UScriptHelperClient_OnHttpGetResponse_Params params;
	params.Result = Result;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OnFilterFinish
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 filterText                     (Parm, ZeroConstructor)

void UScriptHelperClient::OnFilterFinish(class UGameFrontendHUD* GameFrontendHUD, const struct FString& filterText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnFilterFinish");

	UScriptHelperClient_OnFilterFinish_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.filterText = filterText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.OnBattleResult
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FBattleResultData       BattleResultData               (Parm)

void UScriptHelperClient::OnBattleResult(class UGameFrontendHUD* GameFrontendHUD, const struct FBattleResultData& BattleResultData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.OnBattleResult");

	UScriptHelperClient_OnBattleResult_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.BattleResultData = BattleResultData;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.NotifyBeginnerFinishedGuideUpdated
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           GuideSwitch                    (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FPlayerFinishedGuide> finished_guide                 (ConstParm, Parm, ZeroConstructor)
// int                            player_level                   (Parm, ZeroConstructor, IsPlainOldData)
// int                            player_exp_type                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::NotifyBeginnerFinishedGuideUpdated(class UGameFrontendHUD* GameFrontendHUD, bool GuideSwitch, TArray<struct FPlayerFinishedGuide> finished_guide, int player_level, int player_exp_type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.NotifyBeginnerFinishedGuideUpdated");

	UScriptHelperClient_NotifyBeginnerFinishedGuideUpdated_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.GuideSwitch = GuideSwitch;
	params.finished_guide = finished_guide;
	params.player_level = player_level;
	params.player_exp_type = player_exp_type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.MidasPay
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// int                            payItem                        (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 productId                      (Parm, ZeroConstructor)

void UScriptHelperClient::MidasPay(class UGameFrontendHUD* GameFrontendHUD, int payItem, const struct FString& productId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.MidasPay");

	UScriptHelperClient_MidasPay_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.payItem = payItem;
	params.productId = productId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.MD5HashAnsiString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 str                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::MD5HashAnsiString(const struct FString& str)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.MD5HashAnsiString");

	UScriptHelperClient_MD5HashAnsiString_Params params;
	params.str = str;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.MatchVersion
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::MatchVersion(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.MatchVersion");

	UScriptHelperClient_MatchVersion_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.LuaSnapShot_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::LuaSnapShot_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.LuaSnapShot_LuaState");

	UScriptHelperClient_LuaSnapShot_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.Logout
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::Logout(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.Logout");

	UScriptHelperClient_Logout_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.Login
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// uint32_t                       Channel                        (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::Login(uint32_t Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.Login");

	UScriptHelperClient_Login_Params params;
	params.Channel = Channel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.LoadStreamLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 WorldContextObject             (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   LevelName                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bMakeVisibleAfterLoad          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bShouldBlockOnLoad             (Parm, ZeroConstructor, IsPlainOldData)
// int                            levelId                        (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::LoadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, int levelId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.LoadStreamLevel");

	UScriptHelperClient_LoadStreamLevel_Params params;
	params.WorldContextObject = WorldContextObject;
	params.LevelName = LevelName;
	params.bMakeVisibleAfterLoad = bMakeVisibleAfterLoad;
	params.bShouldBlockOnLoad = bShouldBlockOnLoad;
	params.levelId = levelId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.LoadSavFile_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::LoadSavFile_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.LoadSavFile_LuaState");

	UScriptHelperClient_LoadSavFile_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.LoadLuaFile
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Filename                       (Parm, ZeroConstructor)

void UScriptHelperClient::LoadLuaFile(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.LoadLuaFile");

	UScriptHelperClient_LoadLuaFile_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.Load_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::Load_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.Load_LuaState");

	UScriptHelperClient_Load_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.LauchMpInfo
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::LauchMpInfo(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.LauchMpInfo");

	UScriptHelperClient_LauchMpInfo_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.JumpSettingPage
// (Final, Native, Static, Public)

void UScriptHelperClient::JumpSettingPage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.JumpSettingPage");

	UScriptHelperClient_JumpSettingPage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.JumpNoticeCenterPage
// (Final, Native, Static, Public)

void UScriptHelperClient::JumpNoticeCenterPage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.JumpNoticeCenterPage");

	UScriptHelperClient_JumpNoticeCenterPage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.JoinVoiceRoom
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 roomName                       (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)

void UScriptHelperClient::JoinVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& roomName, const struct FString& userId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.JoinVoiceRoom");

	UScriptHelperClient_JoinVoiceRoom_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.roomName = roomName;
	params.userId = userId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.JoinLbsVoiceRoom
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 lbsRoomName                    (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)

void UScriptHelperClient::JoinLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& lbsRoomName, const struct FString& userId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.JoinLbsVoiceRoom");

	UScriptHelperClient_JoinLbsVoiceRoom_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.lbsRoomName = lbsRoomName;
	params.userId = userId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.JoinGroupVoiceRoom
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 groupRoomName                  (Parm, ZeroConstructor)
// struct FString                 userId                         (Parm, ZeroConstructor)

void UScriptHelperClient::JoinGroupVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& groupRoomName, const struct FString& userId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.JoinGroupVoiceRoom");

	UScriptHelperClient_JoinGroupVoiceRoom_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.groupRoomName = groupRoomName;
	params.userId = userId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.IsWithWINMSDK
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsWithWINMSDK(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsWithWINMSDK");

	UScriptHelperClient_IsWithWINMSDK_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsWindowOB
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsWindowOB(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsWindowOB");

	UScriptHelperClient_IsWindowOB_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsTableDataExist_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::IsTableDataExist_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsTableDataExist_LuaState");

	UScriptHelperClient_IsTableDataExist_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsShippingBuild
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsShippingBuild()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsShippingBuild");

	UScriptHelperClient_IsShippingBuild_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsPlayWithEditor
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsPlayWithEditor()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsPlayWithEditor");

	UScriptHelperClient_IsPlayWithEditor_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsPlatformSupportStoreKit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsPlatformSupportStoreKit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsPlatformSupportStoreKit");

	UScriptHelperClient_IsPlatformSupportStoreKit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsIOSCheck
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsIOSCheck()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsIOSCheck");

	UScriptHelperClient_IsIOSCheck_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsInstallWX
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsInstallWX(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsInstallWX");

	UScriptHelperClient_IsInstallWX_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsInstallQQ
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsInstallQQ(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsInstallQQ");

	UScriptHelperClient_IsInstallQQ_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsForCE
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsForCE()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsForCE");

	UScriptHelperClient_IsForCE_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsEmulatorWhenInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsEmulatorWhenInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsEmulatorWhenInit");

	UScriptHelperClient_IsEmulatorWhenInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsEmulator
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsEmulator()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsEmulator");

	UScriptHelperClient_IsEmulator_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.IsConnected
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::IsConnected(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.IsConnected");

	UScriptHelperClient_IsConnected_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.InstallNewApp
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::InstallNewApp(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.InstallNewApp");

	UScriptHelperClient_InstallNewApp_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.InitLoginAccount
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// uint64_t                       AccUin                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 AccPswd                        (Parm, ZeroConstructor)

void UScriptHelperClient::InitLoginAccount(uint64_t AccUin, const struct FString& AccPswd, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.InitLoginAccount");

	UScriptHelperClient_InitLoginAccount_Params params;
	params.AccUin = AccUin;
	params.AccPswd = AccPswd;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.HttpGetRequest
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)

void UScriptHelperClient::HttpGetRequest(const struct FString& URL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.HttpGetRequest");

	UScriptHelperClient_HttpGetRequest_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.HasNotice_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::HasNotice_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.HasNotice_LuaState");

	UScriptHelperClient_HasNotice_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.HasActiveWifi
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::HasActiveWifi()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.HasActiveWifi");

	UScriptHelperClient_HasActiveWifi_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GuildPlatformAppraiseWithType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::GuildPlatformAppraiseWithType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GuildPlatformAppraiseWithType");

	UScriptHelperClient_GuildPlatformAppraiseWithType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GotoPlatformAppraise
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::GotoPlatformAppraise()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GotoPlatformAppraise");

	UScriptHelperClient_GotoPlatformAppraise_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GetUnrealNetworkStatus
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetUnrealNetworkStatus(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetUnrealNetworkStatus");

	UScriptHelperClient_GetUnrealNetworkStatus_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetUIStackTopSrcTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetUIStackTopSrcTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetUIStackTopSrcTag");

	UScriptHelperClient_GetUIStackTopSrcTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetUIStackTopPanel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetUIStackTopPanel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetUIStackTopPanel");

	UScriptHelperClient_GetUIStackTopPanel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetUIStackTopDstTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetUIStackTopDstTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetUIStackTopDstTag");

	UScriptHelperClient_GetUIStackTopDstTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetUIRectOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetUIRectOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetUIRectOffset");

	UScriptHelperClient_GetUIRectOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetTelecomSvr
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetTelecomSvr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetTelecomSvr");

	UScriptHelperClient_GetTelecomSvr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetTableDataField_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetTableDataField_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetTableDataField_LuaState");

	UScriptHelperClient_GetTableDataField_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetTableData_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetTableData_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetTableData_LuaState");

	UScriptHelperClient_GetTableData_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetTableCount
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 TableName                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetTableCount(const struct FString& TableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetTableCount");

	UScriptHelperClient_GetTableCount_Params params;
	params.TableName = TableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetTable_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetTable_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetTable_LuaState");

	UScriptHelperClient_GetTable_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetShaderPrecompileProgress
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetShaderPrecompileProgress()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetShaderPrecompileProgress");

	UScriptHelperClient_GetShaderPrecompileProgress_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetSettingGameStaticFrontendHUD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::GetSettingGameStaticFrontendHUD(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetSettingGameStaticFrontendHUD");

	UScriptHelperClient_GetSettingGameStaticFrontendHUD_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GetScreenWidth
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetScreenWidth()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetScreenWidth");

	UScriptHelperClient_GetScreenWidth_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetScreenHole
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetScreenHole()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetScreenHole");

	UScriptHelperClient_GetScreenHole_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetScreenHight
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetScreenHight()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetScreenHight");

	UScriptHelperClient_GetScreenHight_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetScreenDensity
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetScreenDensity()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetScreenDensity");

	UScriptHelperClient_GetScreenDensity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetRegisterChannelID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetRegisterChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetRegisterChannelID");

	UScriptHelperClient_GetRegisterChannelID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetPhoneType
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetPhoneType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetPhoneType");

	UScriptHelperClient_GetPhoneType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetPhoneDeviceID
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetPhoneDeviceID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetPhoneDeviceID");

	UScriptHelperClient_GetPhoneDeviceID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetPfKey
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetPfKey(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetPfKey");

	UScriptHelperClient_GetPfKey_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetPf
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetPf(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetPf");

	UScriptHelperClient_GetPf_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetPayToken
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetPayToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetPayToken");

	UScriptHelperClient_GetPayToken_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetOSVersion
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetOSVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetOSVersion");

	UScriptHelperClient_GetOSVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetNetWorkType
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetNetWorkType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetNetWorkType");

	UScriptHelperClient_GetNetWorkType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetNearbyPersonInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::GetNearbyPersonInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetNearbyPersonInfo");

	UScriptHelperClient_GetNearbyPersonInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.GetMyFriendObservers
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FString>         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FString> UScriptHelperClient::GetMyFriendObservers(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetMyFriendObservers");

	UScriptHelperClient_GetMyFriendObservers_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetMemoryStats_LuaState
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetMemoryStats_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetMemoryStats_LuaState");

	UScriptHelperClient_GetMemoryStats_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetMemorySize
// (Final, Native, Static, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetMemorySize()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetMemorySize");

	UScriptHelperClient_GetMemorySize_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetLoginChannel
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetLoginChannel(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetLoginChannel");

	UScriptHelperClient_GetLoginChannel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetLocationInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::GetLocationInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetLocationInfo");

	UScriptHelperClient_GetLocationInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.GetIpAddr
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetIpAddr()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetIpAddr");

	UScriptHelperClient_GetIpAddr_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetIntSettingConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetIntSettingConfig(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetIntSettingConfig");

	UScriptHelperClient_GetIntSettingConfig_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetIntDefaultOffset
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::GetIntDefaultOffset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetIntDefaultOffset");

	UScriptHelperClient_GetIntDefaultOffset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetInstallChannelID
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetInstallChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetInstallChannelID");

	UScriptHelperClient_GetInstallChannelID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetGroupInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            SnsAction                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FGroupInfoWrapper       ReturnValue                    (Parm, OutParm, ReturnParm)

struct FGroupInfoWrapper UScriptHelperClient::GetGroupInfo(int SnsAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetGroupInfo");

	UScriptHelperClient_GetGroupInfo_Params params;
	params.SnsAction = SnsAction;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetGPSCity
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetGPSCity(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetGPSCity");

	UScriptHelperClient_GetGPSCity_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetGLVersion
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetGLVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetGLVersion");

	UScriptHelperClient_GetGLVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetGLType
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetGLType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetGLType");

	UScriptHelperClient_GetGLType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetGameStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetGameStatus(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetGameStatus");

	UScriptHelperClient_GetGameStatus_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetFPS
// (Final, Native, Static, Public)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UScriptHelperClient::GetFPS()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetFPS");

	UScriptHelperClient_GetFPS_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetFileMD5
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 file                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetFileMD5(const struct FString& file)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetFileMD5");

	UScriptHelperClient_GetFileMD5_Params params;
	params.file = file;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetEncodeUrl
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetEncodeUrl(const struct FString& URL)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetEncodeUrl");

	UScriptHelperClient_GetEncodeUrl_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetEmulatorName
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetEmulatorName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetEmulatorName");

	UScriptHelperClient_GetEmulatorName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetDSVersion
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetDSVersion(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetDSVersion");

	UScriptHelperClient_GetDSVersion_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetDevicePlatformName
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetDevicePlatformName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetDevicePlatformName");

	UScriptHelperClient_GetDevicePlatformName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetCpuType
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetCpuType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetCpuType");

	UScriptHelperClient_GetCpuType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetConnectIPURL
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 domanName                      (Parm, ZeroConstructor)
// struct FString                 URL                            (Parm, ZeroConstructor)
// struct FString                 httpDNSUrl                     (Parm, ZeroConstructor)

void UScriptHelperClient::GetConnectIPURL(const struct FString& domanName, const struct FString& URL, const struct FString& httpDNSUrl, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetConnectIPURL");

	UScriptHelperClient_GetConnectIPURL_Params params;
	params.domanName = domanName;
	params.URL = URL;
	params.httpDNSUrl = httpDNSUrl;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.GetBoolSettingConfig
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Key                            (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::GetBoolSettingConfig(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetBoolSettingConfig");

	UScriptHelperClient_GetBoolSettingConfig_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetBLEDeviceType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// EUBLEType                      ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EUBLEType UScriptHelperClient::GetBLEDeviceType()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetBLEDeviceType");

	UScriptHelperClient_GetBLEDeviceType_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetAppVersion
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetAppVersion()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetAppVersion");

	UScriptHelperClient_GetAppVersion_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetAppid
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetAppid(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetAppid");

	UScriptHelperClient_GetAppid_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GetAccessToken
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::GetAccessToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GetAccessToken");

	UScriptHelperClient_GetAccessToken_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GenerateQRImage
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            Tag                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// int                            Size                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 content                        (Parm, ZeroConstructor)
// struct FString                 logoPath                       (Parm, ZeroConstructor)

void UScriptHelperClient::GenerateQRImage(int Tag, int Size, const struct FString& content, const struct FString& logoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GenerateQRImage");

	UScriptHelperClient_GenerateQRImage_Params params;
	params.Tag = Tag;
	params.Size = Size;
	params.content = content;
	params.logoPath = logoPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.GameJoySwitchOn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            isOn                           (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::GameJoySwitchOn(int isOn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoySwitchOn");

	UScriptHelperClient_GameJoySwitchOn_Params params;
	params.isOn = isOn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GameJoyStopManualRecord
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::GameJoyStopManualRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoyStopManualRecord");

	UScriptHelperClient_GameJoyStopManualRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GameJoyStartMomentsRecord
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::GameJoyStartMomentsRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoyStartMomentsRecord");

	UScriptHelperClient_GameJoyStartMomentsRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GameJoyStartManualRecord
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::GameJoyStartManualRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoyStartManualRecord");

	UScriptHelperClient_GameJoyStartManualRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GameJoySetVideoQuality
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::GameJoySetVideoQuality(int quality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoySetVideoQuality");

	UScriptHelperClient_GameJoySetVideoQuality_Params params;
	params.quality = quality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GameJoySetMomentRecordSwitchOn
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            isOn                           (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::GameJoySetMomentRecordSwitchOn(int isOn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoySetMomentRecordSwitchOn");

	UScriptHelperClient_GameJoySetMomentRecordSwitchOn_Params params;
	params.isOn = isOn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GameJoySetCurrentRecorderPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::GameJoySetCurrentRecorderPosition(float X, float Y)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoySetCurrentRecorderPosition");

	UScriptHelperClient_GameJoySetCurrentRecorderPosition_Params params;
	params.X = X;
	params.Y = Y;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GameJoyMarkReturnBattleAfterKillProcess
// (Final, Native, Static, Public)

void UScriptHelperClient::GameJoyMarkReturnBattleAfterKillProcess()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoyMarkReturnBattleAfterKillProcess");

	UScriptHelperClient_GameJoyMarkReturnBattleAfterKillProcess_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GameJoyIsSDKFeatureSupport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::GameJoyIsSDKFeatureSupport()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoyIsSDKFeatureSupport");

	UScriptHelperClient_GameJoyIsSDKFeatureSupport_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.GameJoyGenerateMomentsVideo
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// TArray<struct FTimeStamp>      shortVideosTimeStampList       (Parm, ZeroConstructor)
// TArray<struct FTimeStamp>      largeVideosTimeStampList       (Parm, ZeroConstructor)
// struct FString                 Title                          (Parm, ZeroConstructor)
// TMap<struct FString, struct FString> extraInfo                      (Parm, ZeroConstructor)

void UScriptHelperClient::GameJoyGenerateMomentsVideo(TArray<struct FTimeStamp> shortVideosTimeStampList, TArray<struct FTimeStamp> largeVideosTimeStampList, const struct FString& Title, TMap<struct FString, struct FString> extraInfo)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoyGenerateMomentsVideo");

	UScriptHelperClient_GameJoyGenerateMomentsVideo_Params params;
	params.shortVideosTimeStampList = shortVideosTimeStampList;
	params.largeVideosTimeStampList = largeVideosTimeStampList;
	params.Title = Title;
	params.extraInfo = extraInfo;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GameJoyEndMomentsRecord
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::GameJoyEndMomentsRecord()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoyEndMomentsRecord");

	UScriptHelperClient_GameJoyEndMomentsRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.GameJoyClearMomentsVideo
// (Final, Native, Static, Public)

void UScriptHelperClient::GameJoyClearMomentsVideo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.GameJoyClearMomentsVideo");

	UScriptHelperClient_GameJoyClearMomentsVideo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.FetchNearByPersonInfo
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<struct FNearByPersonInfo> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FNearByPersonInfo> UScriptHelperClient::FetchNearByPersonInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.FetchNearByPersonInfo");

	UScriptHelperClient_FetchNearByPersonInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.ExitGame
// (Final, Native, Static, Public)

void UScriptHelperClient::ExitGame()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ExitGame");

	UScriptHelperClient_ExitGame_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.EnterFightChat
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 gid                            (Parm, ZeroConstructor)

void UScriptHelperClient::EnterFightChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.EnterFightChat");

	UScriptHelperClient_EnterFightChat_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.gid = gid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.EnterBattle
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 HostnameOrIP                   (Parm, ZeroConstructor)
// uint32_t                       Port                           (Parm, ZeroConstructor, IsPlainOldData)
// uint32_t                       PlayerKey                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FString                 PacketKey                      (Parm, ZeroConstructor)
// uint64_t                       GameId                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::EnterBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& HostnameOrIP, uint32_t Port, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& PacketKey, uint64_t GameId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.EnterBattle");

	UScriptHelperClient_EnterBattle_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.HostnameOrIP = HostnameOrIP;
	params.Port = Port;
	params.PlayerKey = PlayerKey;
	params.PlayerName = PlayerName;
	params.PacketKey = PacketKey;
	params.GameId = GameId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.EncryptUID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 sUid                           (Parm, ZeroConstructor)
// struct FString                 sKey                           (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::EncryptUID(const struct FString& sUid, const struct FString& sKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.EncryptUID");

	UScriptHelperClient_EncryptUID_Params params;
	params.sUid = sUid;
	params.sKey = sKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.EncryptServerKey
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ServerKey                      (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::EncryptServerKey(const struct FString& ServerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.EncryptServerKey");

	UScriptHelperClient_EncryptServerKey_Params params;
	params.ServerKey = ServerKey;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.EnableDeathPlayback
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bFlush                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::EnableDeathPlayback(class UGameFrontendHUD* GameFrontendHUD, bool bEnable, bool bFlush)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.EnableDeathPlayback");

	UScriptHelperClient_EnableDeathPlayback_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.bEnable = bEnable;
	params.bFlush = bFlush;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.DumpLog
// (Final, Native, Static, Public)

void UScriptHelperClient::DumpLog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.DumpLog");

	UScriptHelperClient_DumpLog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.DisconnectBLE
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::DisconnectBLE()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.DisconnectBLE");

	UScriptHelperClient_DisconnectBLE_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.Disconnect
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::Disconnect(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.Disconnect");

	UScriptHelperClient_Disconnect_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.DelSavFile
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Filename                       (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::DelSavFile(const struct FString& Filename)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.DelSavFile");

	UScriptHelperClient_DelSavFile_Params params;
	params.Filename = Filename;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.DeleteFilesFromImageDownload
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            MaxNum                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::DeleteFilesFromImageDownload(int MaxNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.DeleteFilesFromImageDownload");

	UScriptHelperClient_DeleteFilesFromImageDownload_Params params;
	params.MaxNum = MaxNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.CopyContentPathToSavePath
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 content_file_path              (Parm, ZeroConstructor)
// struct FString                 save_file_path                 (Parm, ZeroConstructor)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::CopyContentPathToSavePath(const struct FString& content_file_path, const struct FString& save_file_path)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.CopyContentPathToSavePath");

	UScriptHelperClient_CopyContentPathToSavePath_Params params;
	params.content_file_path = content_file_path;
	params.save_file_path = save_file_path;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.ConnectToURL
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// struct FString                 URL                            (Parm, ZeroConstructor)

void UScriptHelperClient::ConnectToURL(const struct FString& URL, TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ConnectToURL");

	UScriptHelperClient_ConnectToURL_Params params;
	params.URL = URL;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.ConnectBLE
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::ConnectBLE()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ConnectBLE");

	UScriptHelperClient_ConnectBLE_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.CloseVideoListDialog
// (Final, Native, Static, Public, BlueprintCallable)

void UScriptHelperClient::CloseVideoListDialog()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.CloseVideoListDialog");

	UScriptHelperClient_CloseVideoListDialog_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ClipboardPaste
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::ClipboardPaste()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ClipboardPaste");

	UScriptHelperClient_ClipboardPaste_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.ClipBoardCopy
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Text                           (Parm, ZeroConstructor)

void UScriptHelperClient::ClipBoardCopy(const struct FString& Text)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ClipBoardCopy");

	UScriptHelperClient_ClipBoardCopy_Params params;
	params.Text = Text;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ClientEnterWarMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::ClientEnterWarMode(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ClientEnterWarMode");

	UScriptHelperClient_ClientEnterWarMode_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.ClearFrontendHUDLobbyAsset
// (Final, Native, Static, Public)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::ClearFrontendHUDLobbyAsset(class UGameFrontendHUD* GameFrontendHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.ClearFrontendHUDLobbyAsset");

	UScriptHelperClient_ClearFrontendHUDLobbyAsset_Params params;
	params.GameFrontendHUD = GameFrontendHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.CleanRecord
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::CleanRecord(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.CleanRecord");

	UScriptHelperClient_CleanRecord_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.CleanLocation
// (Final, Native, Static, Public, HasOutParms)
// Parameters:
// TScriptInterface<class UClientNetInterface> ClientNetInterface             (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::CleanLocation(TScriptInterface<class UClientNetInterface>* ClientNetInterface)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.CleanLocation");

	UScriptHelperClient_CleanLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ClientNetInterface != nullptr)
		*ClientNetInterface = params.ClientNetInterface;
}


// Function Client.ScriptHelperClient.CheckNoticeCenterPermission
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::CheckNoticeCenterPermission()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.CheckNoticeCenterPermission");

	UScriptHelperClient_CheckNoticeCenterPermission_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.CheckLocationPermission
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::CheckLocationPermission()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.CheckLocationPermission");

	UScriptHelperClient_CheckLocationPermission_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.CallIngameFirstTimeTips
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        GameFrontendHUD                (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TableName                      (Parm, ZeroConstructor)
// struct FString                 FunctionName                   (Parm, ZeroConstructor)

void UScriptHelperClient::CallIngameFirstTimeTips(class UGameFrontendHUD* GameFrontendHUD, const struct FString& TableName, const struct FString& FunctionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.CallIngameFirstTimeTips");

	UScriptHelperClient_CallIngameFirstTimeTips_Params params;
	params.GameFrontendHUD = GameFrontendHUD;
	params.TableName = TableName;
	params.FunctionName = FunctionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestWaitForSecond
// (Final, Native, Static, Public)
// Parameters:
// int                            sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestWaitForSecond(int sec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestWaitForSecond");

	UScriptHelperClient_AutoTestWaitForSecond_Params params;
	params.sec = sec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestWaitForJumpPlane
// (Final, Native, Static, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UScriptHelperClient::AutoTestWaitForJumpPlane()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestWaitForJumpPlane");

	UScriptHelperClient_AutoTestWaitForJumpPlane_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.AutoTestVaultWall
// (Final, Native, Static, Public)

void UScriptHelperClient::AutoTestVaultWall()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestVaultWall");

	UScriptHelperClient_AutoTestVaultWall_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestUseItem
// (Final, Native, Static, Public)
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestUseItem(int ItemID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestUseItem");

	UScriptHelperClient_AutoTestUseItem_Params params;
	params.ItemID = ItemID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestThrowBoom
// (Final, Native, Static, Public)
// Parameters:
// int                            SkillID                        (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestThrowBoom(int SkillID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestThrowBoom");

	UScriptHelperClient_AutoTestThrowBoom_Params params;
	params.SkillID = SkillID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestSwitchWeapon
// (Final, Native, Static, Public)
// Parameters:
// int                            WeaponType                     (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestSwitchWeapon(int WeaponType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestSwitchWeapon");

	UScriptHelperClient_AutoTestSwitchWeapon_Params params;
	params.WeaponType = WeaponType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestStopRecordStats
// (Final, Native, Static, Public)

void UScriptHelperClient::AutoTestStopRecordStats()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestStopRecordStats");

	UScriptHelperClient_AutoTestStopRecordStats_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestStartRecordStats
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 FileStr                        (Parm, ZeroConstructor)

void UScriptHelperClient::AutoTestStartRecordStats(const struct FString& FileStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestStartRecordStats");

	UScriptHelperClient_AutoTestStartRecordStats_Params params;
	params.FileStr = FileStr;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestStartFire
// (Final, Native, Static, Public)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Z                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestStartFire(int X, int Y, int Z, int sec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestStartFire");

	UScriptHelperClient_AutoTestStartFire_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.sec = sec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestSpawnVehicle
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ResPath                        (Parm, ZeroConstructor)

void UScriptHelperClient::AutoTestSpawnVehicle(const struct FString& ResPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestSpawnVehicle");

	UScriptHelperClient_AutoTestSpawnVehicle_Params params;
	params.ResPath = ResPath;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestSetVehicleRotation
// (Final, Native, Static, Public)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestSetVehicleRotation(int X, int Y, int Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestSetVehicleRotation");

	UScriptHelperClient_AutoTestSetVehicleRotation_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestSetRecordFrequency
// (Final, Native, Static, Public)
// Parameters:
// uint32_t                       Frequency                      (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestSetRecordFrequency(uint32_t Frequency)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestSetRecordFrequency");

	UScriptHelperClient_AutoTestSetRecordFrequency_Params params;
	params.Frequency = Frequency;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestSetActorRotation
// (Final, Native, Static, Public)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Speed                          (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestSetActorRotation(float Rate, float Speed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestSetActorRotation");

	UScriptHelperClient_AutoTestSetActorRotation_Params params;
	params.Rate = Rate;
	params.Speed = Speed;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestSetActorPitch
// (Final, Native, Static, Public)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestSetActorPitch(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestSetActorPitch");

	UScriptHelperClient_AutoTestSetActorPitch_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestSetActorFacePoint
// (Final, Native, Static, Public)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestSetActorFacePoint(int X, int Y, int Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestSetActorFacePoint");

	UScriptHelperClient_AutoTestSetActorFacePoint_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestPickupItem
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// struct FVector2D               ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector2D UScriptHelperClient::AutoTestPickupItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestPickupItem");

	UScriptHelperClient_AutoTestPickupItem_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.AutoTestOpenScope
// (Final, Native, Static, Public)
// Parameters:
// bool                           bOpenScope                     (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestOpenScope(bool bOpenScope)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestOpenScope");

	UScriptHelperClient_AutoTestOpenScope_Params params;
	params.bOpenScope = bOpenScope;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestMoveVehicleForward
// (Final, Native, Static, Public)
// Parameters:
// int                            Speed                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            Rate                           (Parm, ZeroConstructor, IsPlainOldData)
// int                            sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestMoveVehicleForward(int Speed, int Rate, int sec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestMoveVehicleForward");

	UScriptHelperClient_AutoTestMoveVehicleForward_Params params;
	params.Speed = Speed;
	params.Rate = Rate;
	params.sec = sec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestMoveToPoint
// (Final, Native, Static, Public)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestMoveToPoint(int X, int Y, int Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestMoveToPoint");

	UScriptHelperClient_AutoTestMoveToPoint_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestJumpPlane
// (Final, Native, Static, Public)
// Parameters:
// int                            sec                            (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestJumpPlane(int sec)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestJumpPlane");

	UScriptHelperClient_AutoTestJumpPlane_Params params;
	params.sec = sec;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestJump
// (Final, Native, Static, Public)

void UScriptHelperClient::AutoTestJump()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestJump");

	UScriptHelperClient_AutoTestJump_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestInputMovement
// (Final, Native, Static, Public)
// Parameters:
// float                          Rate                           (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestInputMovement(float Rate)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestInputMovement");

	UScriptHelperClient_AutoTestInputMovement_Params params;
	params.Rate = Rate;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestGMGoto
// (Final, Native, Static, Public)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestGMGoto(int X, int Y, int Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGMGoto");

	UScriptHelperClient_AutoTestGMGoto_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestGMCommand
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)

void UScriptHelperClient::AutoTestGMCommand(const struct FString& Command)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGMCommand");

	UScriptHelperClient_AutoTestGMCommand_Params params;
	params.Command = Command;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestGetVehicleLocation
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UScriptHelperClient::AutoTestGetVehicleLocation()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGetVehicleLocation");

	UScriptHelperClient_AutoTestGetVehicleLocation_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.AutoTestGetRuntimeStats
// (Final, Native, Static, Public)

void UScriptHelperClient::AutoTestGetRuntimeStats()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGetRuntimeStats");

	UScriptHelperClient_AutoTestGetRuntimeStats_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestGetOnVehicle
// (Final, Native, Static, Public)

void UScriptHelperClient::AutoTestGetOnVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGetOnVehicle");

	UScriptHelperClient_AutoTestGetOnVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestGetOffVehicle
// (Final, Native, Static, Public)

void UScriptHelperClient::AutoTestGetOffVehicle()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGetOffVehicle");

	UScriptHelperClient_AutoTestGetOffVehicle_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestGetNearVehiclePos
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UScriptHelperClient::AutoTestGetNearVehiclePos()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGetNearVehiclePos");

	UScriptHelperClient_AutoTestGetNearVehiclePos_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.AutoTestGetMapName
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::AutoTestGetMapName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGetMapName");

	UScriptHelperClient_AutoTestGetMapName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.AutoTestGetFrameInfo
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UScriptHelperClient::AutoTestGetFrameInfo()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGetFrameInfo");

	UScriptHelperClient_AutoTestGetFrameInfo_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.AutoTestGetDis2D
// (Final, Native, Static, Public)
// Parameters:
// int                            X                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Y                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            Z                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            x2                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            y2                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            z2                             (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UScriptHelperClient::AutoTestGetDis2D(int X, int Y, int Z, int x2, int y2, int z2)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGetDis2D");

	UScriptHelperClient_AutoTestGetDis2D_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.x2 = x2;
	params.y2 = y2;
	params.z2 = z2;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.AutoTestGetActorName
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UScriptHelperClient::AutoTestGetActorName()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGetActorName");

	UScriptHelperClient_AutoTestGetActorName_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.AutoTestGetActorLocation
// (Final, Native, Static, Public, HasDefaults)
// Parameters:
// struct FString                 PlayerName                     (Parm, ZeroConstructor)
// struct FVector                 ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FVector UScriptHelperClient::AutoTestGetActorLocation(const struct FString& PlayerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestGetActorLocation");

	UScriptHelperClient_AutoTestGetActorLocation_Params params;
	params.PlayerName = PlayerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.ScriptHelperClient.AutoTestContinuousMoveTo
// (Final, Native, Static, Public)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestContinuousMoveTo(float X, float Y, float Z)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestContinuousMoveTo");

	UScriptHelperClient_AutoTestContinuousMoveTo_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestConsoleCommand
// (Final, Native, Static, Public)
// Parameters:
// struct FString                 Command                        (Parm, ZeroConstructor)

void UScriptHelperClient::AutoTestConsoleCommand(const struct FString& Command)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestConsoleCommand");

	UScriptHelperClient_AutoTestConsoleCommand_Params params;
	params.Command = Command;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.ScriptHelperClient.AutoTestAddItem
// (Final, Native, Static, Public)
// Parameters:
// int                            ItemID                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            nCount                         (Parm, ZeroConstructor, IsPlainOldData)

void UScriptHelperClient::AutoTestAddItem(int ItemID, int nCount)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.ScriptHelperClient.AutoTestAddItem");

	UScriptHelperClient_AutoTestAddItem_Params params;
	params.ItemID = ItemID;
	params.nCount = nCount;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.TssManager.SendSkdData_LuaState
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTssManager::SendSkdData_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TssManager.SendSkdData_LuaState");

	UTssManager_SendSkdData_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.TssManager.OnRecvData_LuaState
// (Final, Native, Public)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTssManager::OnRecvData_LuaState()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.TssManager.OnRecvData_LuaState");

	UTssManager_OnRecvData_LuaState_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Client.UTRichTextBlock.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UUTRichTextBlock::SetText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.UTRichTextBlock.SetText");

	UUTRichTextBlock_SetText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.UTRichTextBlock.SetGameFrontendHUD
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UGameFrontendHUD*        InHUD                          (Parm, ZeroConstructor, IsPlainOldData)

void UUTRichTextBlock::SetGameFrontendHUD(class UGameFrontendHUD* InHUD)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.UTRichTextBlock.SetGameFrontendHUD");

	UUTRichTextBlock_SetGameFrontendHUD_Params params;
	params.InHUD = InHUD;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Client.UTRichTextBlock.GetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UUTRichTextBlock::GetText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Client.UTRichTextBlock.GetText");

	UUTRichTextBlock_GetText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

