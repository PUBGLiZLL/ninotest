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

// Class Client.ActImageDownloader
// 0x0018 (0x0038 - 0x0020)
class UActImageDownloader : public UBlueprintAsyncActionBase
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0020(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ActImageDownloader");
		return pStaticClass;
	}


	static class UActImageDownloader* GetImage(const struct FString& URL);
};


// Class Client.BLEAdapteBaseInterface
// 0x0004 (0x0020 - 0x001C)
class UBLEAdapteBaseInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BLEAdapteBaseInterface");
		return pStaticClass;
	}


	void SetBLEResult(int Result);
	void SetBLEIdendify(const struct FString& Key);
	void Disconnect();
	void Connect();
};


// Class Client.BLEAdapteAndroidInterface
// 0x0000 (0x0020 - 0x0020)
class UBLEAdapteAndroidInterface : public UBLEAdapteBaseInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BLEAdapteAndroidInterface");
		return pStaticClass;
	}

};


// Class Client.BLEAdapteInterface
// 0x0000 (0x0020 - 0x0020)
class UBLEAdapteInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BLEAdapteInterface");
		return pStaticClass;
	}


	void SetBLEResult(int Result);
	void SetBLEIdendify(const struct FString& Key);
	void Disconnect();
	void Connect();
};


// Class Client.BLEAdapteIOSInterface
// 0x0000 (0x0020 - 0x0020)
class UBLEAdapteIOSInterface : public UBLEAdapteBaseInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BLEAdapteIOSInterface");
		return pStaticClass;
	}

};


// Class Client.BLEConnectMgr
// 0x000C (0x0028 - 0x001C)
class UBLEConnectMgr : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BLEConnectMgr");
		return pStaticClass;
	}


	void SetServerIDAndString(int ID, const struct FString& ServerStr, int DeviceID, int DeviceType);
	void SetBLEResult(int Result);
	void SetBLEIdendify(const struct FString& Key);
	void Initialize();
	void DisconnectBLE();
	void ConnectBLE();
};


// Class Client.BLEInputMgr
// 0x02D4 (0x02F0 - 0x001C)
class UBLEInputMgr : public UObject
{
public:
	unsigned char                                      UnknownData00[0x2D4];                                     // 0x001C(0x02D4) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BLEInputMgr");
		return pStaticClass;
	}

};


// Class Client.BugReporter
// 0x005C (0x0078 - 0x001C)
class UBugReporter : public UObject
{
public:
	unsigned char                                      UnknownData00[0x5C];                                      // 0x001C(0x005C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BugReporter");
		return pStaticClass;
	}


	void SendScreenShot(const struct FString& errorReason, const struct FString& errorDescription, const struct FString& ImagePath, float X, float Y, float Z);
	void SendLog(const struct FString& errorReason, const struct FString& errorDescription, float X, float Y, float Z, bool pullAll);
	void ReadZipLog(const struct FString& Filename);
	TArray<unsigned char> CompressLog(bool pullAllLog);
};


// Class Client.BusinessHelper
// 0x0000 (0x0020 - 0x0020)
class UBusinessHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.BusinessHelper");
		return pStaticClass;
	}


	static class UObject* UIGetResWithPath(const struct FString& DesManagerName);
	static class ALuaClassObj* UIGetLuaManagerByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName);
	static class ALuaClassObj* UIGetLuaManager(class UUAEUserWidget* pUIClass);
	static bool IsWithWINMSDK();
	static class UUAEUserWidget* GetWidgetByName(class UUAEUserWidget* pUIClass, const struct FString& InManagerName, const struct FString& InWidgtName);
	static float GetTime();
	static struct FString GetMobileBasePath(const struct FString& InPath);
	static class UUAEDataTable* GetDataTable(const struct FString& TableName);
	static int GetCurrentNetworkState();
	static class UWidget* GetChildByName(class UUserWidget* pParent, const struct FString& Name);
	static void BroadCastMSG(class UFrontendHUD* FrontendHUD, const struct FString& DesManagerName, const struct FString& Msg);
};


// Class Client.TestHUD
// 0x0000 (0x02B8 - 0x02B8)
class ATestHUD : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TestHUD");
		return pStaticClass;
	}


	void TestFunctionNOParam();
	float TestFunctionBP_LUA();
	float TestFunctionBP();
	float Function_LUA_Call();
	float Function_Lua();
	float Function_CPlus_Call();
	float Function_CPlus();
	float Function_BP_CPP();
	float Function_BP_Call_LUA();
	float Function_BP_Call_CPP();
	float Function_BP_Call_CPlus();
	float Function_BP_Call();
	float Function_BP();
};


// Class Client.ClientNetInterface
// 0x0000 (0x0020 - 0x0020)
class UClientNetInterface : public UNetInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ClientNetInterface");
		return pStaticClass;
	}

};


// Class Client.GameBackendUtils
// 0x0008 (0x0028 - 0x0020)
class UGameBackendUtils : public UBackendUtils
{
public:
	class UUAETableManager*                            TableManager;                                             // 0x0020(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBackendUtils");
		return pStaticClass;
	}


	class UUAETableManager* GetTableManager();
	class UUAELoadedClassManager* GetLoadedClassManager();
};


// Class Client.GameBackendHUD
// 0x0000 (0x0040 - 0x0040)
class UGameBackendHUD : public UBackendHUD
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBackendHUD");
		return pStaticClass;
	}


	class UGameBackendUtils* GetUtils();
	static class UGameBackendHUD* GetInstance();
	class UGameFrontendHUD* GetFirstGameFrontendHUD();
};


// Class Client.GameBusinessManager
// 0x0050 (0x00F8 - 0x00A8)
class UGameBusinessManager : public ULogicManagerBase
{
public:
	unsigned char                                      UnknownData00[0x4C];                                      // 0x00A8(0x004C) MISSED OFFSET
	class ALuaClassObj*                                LuaObject;                                                // 0x00F4(0x0004) (ZeroConstructor, Transient, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameBusinessManager");
		return pStaticClass;
	}


	class UUAEUserWidget* GetWidgetFromName(const struct FString& WidgetName);
	class UUAEUserWidget* GetWidget(int Index);
	class ALuaClassObj* GetLuaObject();
	class UGameFrontendHUD* GetGameFrontendHUD();
};


// Class Client.GameFrontendHUD
// 0x02F8 (0x03C8 - 0x00D0)
class UGameFrontendHUD : public UFrontendHUD
{
public:
	TMap<struct FName, struct FString>                 GameStatusMap;                                            // 0x00D0(0x0050) (ZeroConstructor)
	class UGVoiceInterface*                            GVoice;                                                   // 0x010C(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               DisableGVoice;                                            // 0x0110(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0111(0x0003) MISSED OFFSET
	class UHttpHelper*                                 HttpHelper;                                               // 0x0114(0x0004) (ZeroConstructor, IsPlainOldData)
	class UBugReporter*                                BugReporter;                                              // 0x0118(0x0004) (ZeroConstructor, IsPlainOldData)
	class UGDolphinUpdater*                            GDolphin;                                                 // 0x011C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0120(0x0010) MISSED OFFSET
	struct FName                                       UnrealNetworkStatus;                                      // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x0138(0x0010) MISSED OFFSET
	float                                              UnrealNetworkConnectingTimer;                             // 0x0148(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x014C(0x0008) MISSED OFFSET
	float                                              UnrealNetworkConnectingTime;                              // 0x0154(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x0158(0x0004) MISSED OFFSET
	class ULuaStateWrapper*                            LuaStateWrapper;                                          // 0x015C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ScriptBPRelativeDir;                                      // 0x0160(0x000C) (ZeroConstructor, Config)
	struct FString                                     ScriptRelativeDir;                                        // 0x016C(0x000C) (ZeroConstructor, Config)
	struct FString                                     InGameLuaDir;                                             // 0x0178(0x000C) (ZeroConstructor, Config)
	struct FString                                     PreloadLuaFileRelativePath;                               // 0x0184(0x000C) (ZeroConstructor, Config)
	TArray<struct FString>                             LuaDirList;                                               // 0x0190(0x000C) (ZeroConstructor, Config)
	TArray<struct FString>                             NoGCPackage;                                              // 0x019C(0x000C) (ZeroConstructor, Config)
	float                                              LuaTickTime;                                              // 0x01A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               bCallLuaTick;                                             // 0x01AC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0x3];                                       // 0x01AD(0x0003) MISSED OFFSET
	struct FString                                     ZoneID;                                                   // 0x01B0(0x000C) (ZeroConstructor)
	struct FGCloudLoginAccountInfo                     loginAccountInfo;                                         // 0x01BC(0x0040)
	unsigned char                                      UnknownData06[0x4];                                       // 0x01FC(0x0004) MISSED OFFSET
	bool                                               OpenLuaSocket;                                            // 0x0200(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0201(0x0003) MISSED OFFSET
	float                                              TApmTickReportTime;                                       // 0x0204(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	class UTssManager*                                 TssMgr;                                                   // 0x0208(0x0004) (ZeroConstructor, IsPlainOldData)
	class UGCloudMidasManager*                         midasManager;                                             // 0x020C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FDateTime                                   lastMidasPayTime;                                         // 0x0210(0x0008)
	unsigned char                                      bIsCutdownSettingQuality : 1;                             // 0x0218(0x0001)
	unsigned char                                      UnknownData08[0x5F];                                      // 0x0219(0x005F) MISSED OFFSET
	uint64_t                                           GameId;                                                   // 0x0278(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GameKey;                                                  // 0x0280(0x000C) (ZeroConstructor, Config)
	struct FString                                     QQAppid;                                                  // 0x028C(0x000C) (ZeroConstructor, Config)
	struct FString                                     WXAppid;                                                  // 0x0298(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData09[0x4];                                       // 0x02A4(0x0004) MISSED OFFSET
	uint64_t                                           GameId_CE;                                                // 0x02A8(0x0008) (ZeroConstructor, Config, IsPlainOldData)
	struct FString                                     GameKey_CE;                                               // 0x02B0(0x000C) (ZeroConstructor, Config)
	struct FString                                     QQAppid_CE;                                               // 0x02BC(0x000C) (ZeroConstructor, Config)
	struct FString                                     WXAppid_CE;                                               // 0x02C8(0x000C) (ZeroConstructor, Config)
	struct FString                                     PayEnvironment;                                           // 0x02D4(0x000C) (ZeroConstructor, Config)
	bool                                               bWatchingDetailBtnOpen;                                   // 0x02E0(0x0001) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    UIStackChangeDelegate;                                    // 0x02E4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    UIStackRecoverDelegate;                                   // 0x02F0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     UserSettingsClassName;                                    // 0x02FC(0x000C) (ZeroConstructor, Config)
	class UClass*                                      UserSettingsClass;                                        // 0x0308(0x0004) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UserSettings;                                             // 0x030C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     UIElemSettingClassName;                                   // 0x0310(0x000C) (ZeroConstructor, Config)
	class UClass*                                      UIElemSettingsClass;                                      // 0x031C(0x0004) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UIElemSetting00;                                          // 0x0320(0x0004) (ZeroConstructor, IsPlainOldData)
	class USaveGame*                                   UIElemSetting01;                                          // 0x0324(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x84];                                      // 0x0328(0x0084) MISSED OFFSET
	class UImageDownloader*                            ImageDownloaderInGame;                                    // 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FpsForWindowClient;                                       // 0x03B0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	TArray<struct FNativeHUDTickContainer>             NativeHUDTickList;                                        // 0x03B4(0x000C) (ZeroConstructor)
	bool                                               IsNativeHUDTickLock;                                      // 0x03C0(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               IsShutDown;                                               // 0x03C1(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x03C2(0x0002) MISSED OFFSET
	int                                                NativeHUDTickIndex;                                       // 0x03C4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameFrontendHUD");
		return pStaticClass;
	}


	void UnRegisterUIShowHideEventDelegate(const struct FString& Source);
	void TestLoadNoGCPackage();
	bool StartGrayUpdate();
	void ShutdownUnrealNetwork();
	bool ShouldWatchingDetailBtnOpen();
	void SetGameStatusMap(TMap<struct FName, struct FString> InGameStatusMap);
	void RetryDownload();
	void ResetUserSettings();
	void RegisterUserSettingsDelegate_Int(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Float(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Enum(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate_Bool(const struct FString& PropertyName, const struct FScriptDelegate& Delegate);
	void RegisterUserSettingsDelegate(const struct FScriptDelegate& Delegate);
	void RegisterUIShowHideEventDelegate(const struct FString& Source, const struct FScriptDelegate& Delegate);
	void RegisterPay();
	void OnWebviewNotify(const struct FWebviewInfoWrapper& webviewinfo);
	void OnRefreshAccountInfo(bool Result, int InChannel, const struct FString& InOpenId);
	void OnQuickLoginNotify(const struct FWakeupInfoWrapper& wakeupinfo);
	void OnQueryMyInfoNotify();
	void OnNearByPersonInfoNotify();
	void OnMidasPayNeedLogin();
	void OnMidasPayCallBack(const struct FAPPayResponseInfo& Info);
	void OnMidasLauchMpInfoCallBack(int resultCode);
	void OnLocationInfoNotify(const struct FLocationInfoWrapper& locationInfo);
	void OnHttpImgResponse(class UTexture2D* Texture, class UImageDownloader* downloader);
	void OnGroupNotify(const struct FGroupInfoWrapper& groupInfo);
	void OnGenQRImgNotify(int Ret, int Size, const struct FString& imgPath);
	struct FString OnCrashMessageNotify();
	void OnAccountLoginInfoNotify(int Result, const struct FGCloudLoginAccountInfo& Info);
	void OnAccessTokenRefreshNotify(int Result, const struct FString& OpenID, const struct FString& OpenKey);
	void MidasPay(int payItem, const struct FString& productId);
	void MatchVersion();
	void LauchMpInfo();
	void InitMidasManager();
	class USaveGame* GetUserSettings();
	class UGDolphinUpdater* GetUpdater();
	class USaveGame* GetUIElemSettings(const struct FString& InSlotName);
	class UGCloudMidasManager* GetMidasManager();
	class ULuaStateWrapper* GetLuaStateWrapper();
	class UHttpHelper* GetHttpHelper();
	class UGVoiceInterface* GetGVoiceInterface();
	int GetDetailNetInfoFromGCloud();
	class UBugReporter* GetBugReporter();
	struct FString GetBattleIDHexStr();
	void FinishModifyUserSettings();
	void ClearUIElemSettings();
	void CallLuaTableFunction(const struct FString& TableName, const struct FString& FunctionName);
	void CallGlobalScriptFunction(const struct FString& InFunctionName);
	void BeginModifyUserSettings();
};


// Class Client.GameFrontendUtils
// 0x0000 (0x03E0 - 0x03E0)
class UGameFrontendUtils : public UFrontendUtils
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameFrontendUtils");
		return pStaticClass;
	}

};


// Class Client.GameJoyInterface
// 0x0034 (0x0050 - 0x001C)
class UGameJoyInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x34];                                      // 0x001C(0x0034) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GameJoyInterface");
		return pStaticClass;
	}


	void StopManualRecorder();
	void StartMomentsRecording();
	void StartManualRecorder();
	void ShowVideoListDialog();
	void SetVideoQuality(int quality);
	void SetSwitchOn(bool isOn);
	void SetMomentRecordSwitchOn(bool isOn);
	void SetCurrentRecorderPosition(float X, float Y);
	void SetAudioSource(bool mic);
	void OnVideoShare(int Status);
	void OnShowVideoPlayer(int IsShow);
	void OnRecordingStart(int Status);
	void OnRecordingEnd(int64_t Duration);
	void OnManualRecordingStart(int Status);
	void OnCheckSDKPermission(bool isSuccess);
	void OnCheckSDKFeature(int sdkFeatureInt);
	void MarkReturnBattleAfterKillProcess();
	bool IsSDKFeatureSupport();
	bool isRecordingMoments();
	bool IsOK();
	bool IsMomentRecordOK();
	bool IfGoBackground();
	static class UGameJoyInterface* GetInstance();
	int GetCurrentVideoShareChannel();
	void GenerateMomentsVideo(TArray<struct FTimeStamp> shortVideosTimeStampList, TArray<struct FTimeStamp> largeVideosTimeStampList, const struct FString& Title, TMap<struct FString, struct FString> extraInfo);
	void EndMomentsRecording(bool needEndCallback);
	void EnableBgmMix(bool Enable);
	void CloseVideoListDialog();
	void ClearMomentsVideo();
};


// Class Client.GDolphinUpdater
// 0x01D4 (0x01F0 - 0x001C)
class UGDolphinUpdater : public UObject
{
public:
	unsigned char                                      UnknownData00[0x30];                                      // 0x001C(0x0030) MISSED OFFSET
	struct FString                                     AppStoreUrl;                                              // 0x004C(0x000C) (ZeroConstructor, Config)
	bool                                               Disable;                                                  // 0x0058(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0059(0x0003) MISSED OFFSET
	struct FString                                     UpdateUrl;                                                // 0x005C(0x000C) (ZeroConstructor, Config)
	struct FString                                     UpdateUrl_CE;                                             // 0x0068(0x000C) (ZeroConstructor, Config)
	struct FString                                     PreUpdateUrl;                                             // 0x0074(0x000C) (ZeroConstructor, Config)
	struct FString                                     PreUpdateUrl_CE;                                          // 0x0080(0x000C) (ZeroConstructor, Config)
	uint32_t                                           UpdateChannel;                                            // 0x008C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           UpdateChannelIOS;                                         // 0x0090(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           UpdateChannelIOS_CE;                                      // 0x0094(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           UpdateChannelAndroid;                                     // 0x0098(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           UpdateChannelAndroid_CE;                                  // 0x009C(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           UpdateChannelIOS_PVRTC;                                   // 0x00A0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           UpdateChannelIOS_PVRTC_CE;                                // 0x00A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	uint32_t                                           UpdateChannelIOS_PVRTC_Shipping;                          // 0x00A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	bool                                               PreUpdate;                                                // 0x00AC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00AD(0x0003) MISSED OFFSET
	struct FString                                     UpdateInfoPath;                                           // 0x00B0(0x000C) (ZeroConstructor, Config)
	bool                                               OpenDebugLog;                                             // 0x00BC(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x133];                                     // 0x00BD(0x0133) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GDolphinUpdater");
		return pStaticClass;
	}


	void StartAppUpdate();
	bool IsUpdating();
	bool IsGrayUpdate();
	bool IsExamine();
	void Install();
	int GetCurStage(float* Percent, int* GetCurVal, int* GetMaxVal);
	void FinishUpdate();
	void ContinueUpdate();
	void CancelUpdate();
	void CancelResUpdate();
	void CancelAppUpdate();
};


// Class Client.GCloudNotice
// 0x003C (0x0058 - 0x001C)
class UGCloudNotice : public UObject
{
public:
	unsigned char                                      UnknownData00[0x3C];                                      // 0x001C(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GCloudNotice");
		return pStaticClass;
	}


	TArray<struct FNoticeInfo> GetNotice(const struct FString& Scene);
	static class UGCloudNotice* GetInstance();
	void ClearNotice();
};


// Class Client.GVoiceInterface
// 0x00A4 (0x00C0 - 0x001C)
class UGVoiceInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x28];                                      // 0x001C(0x0028) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x78];                                      // 0x0048(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.GVoiceInterface");
		return pStaticClass;
	}


	void UploadRecordFile();
	bool TeamSpeakerEnable();
	bool TeamMicphoneEnable();
	void SwitchMicphoneWhenCorpsMode();
	void StopRecord();
	void StopPlayRecordFile();
	void StopInterphone();
	void StartRecord();
	void StartInterphone();
	void SpeechToText();
	void ShowOpenSpeakerAtFirstMsg();
	void ShowCorpsModeCannotUseLBSVoice();
	void SetVoiceMode(int Type);
	void SetSpeakerVolum(float Value);
	void SetSpeakerStatus(bool Flag);
	void SetMicphoneVolum(float Value);
	void SetMicphoneStatus(bool Flag);
	void SetMainVolume(float Value);
	void SetMainSoundSwitch(bool Flag);
	void SetLbsVoiceRadius(float Radius);
	void SetLbsRoomEnableStatus(bool Flag);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	void SetCurrentDownloadFieldID(const struct FString& filedId);
	void SetBGMVolume(float Value);
	void SetBGMSwitch(bool Flag);
	void ResetWhenLogOut();
	void ReactiveLbsStatus();
	void QuitRoom();
	void PlayRecordFile();
	void OpenTeamSpeakerOnly(bool showTips);
	int OpenTeamMicphoneOnly(bool showTips);
	int OpenTeamInterphone();
	int OpenSpeaker();
	void OpenMicAndSpeakerAfterJoinRoom();
	int OpenMic();
	void OpenGroupSpeakerOnly(bool showTips);
	int OpenGroupMicphoneOnly(bool showTips);
	int OpenGroupInterphone();
	void OpenAllSpeaker(bool showTips);
	int OpenAllMicphone(bool showTips);
	int OpenAllInterphone();
	void OnRoomTypeChanged(const struct FString& itemtext);
	bool LbsSpeakerEnable();
	bool LbsMicphoneEnable();
	void JoinRoom(const struct FString& room, const struct FString& userId);
	void JoinLbsRoom(const struct FString& lbsRoom, const struct FString& userId);
	void JoinGroupRoom(const struct FString& groupRoom, const struct FString& userId);
	bool IsTeamInterphoneOpenned();
	bool IsLbsInterphoneOpenned();
	bool IsInterphoneMode();
	bool IsGroupInterphoneOpenned();
	void InitGVoiceComponent(const struct FString& userId);
	bool HaveTeamRoom();
	bool HaveLbsRoom();
	bool HaveGroupRoom();
	bool GroupSpeakerEnable();
	bool GroupMicphoneEnable();
	float GetVoiceLength();
	void GetAuthKey();
	void ForbidTeammateVoiceById(int memberID, bool IsEnable);
	void EnableBluetoothSCO(bool Flag);
	void DownloadRecordFile();
	void CloseSpeaker();
	void CloseMic();
	void CloseAllSpeaker(bool showTips);
	void CloseAllMicphone(bool showTips);
};


// Class Client.HotUpdater
// 0x00E4 (0x0100 - 0x001C)
class UHotUpdater : public UObject
{
public:
	unsigned char                                      UnknownData00[0xE4];                                      // 0x001C(0x00E4) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.HotUpdater");
		return pStaticClass;
	}


	void OnGetVersionData(bool Successful, const struct FString& FileURL, TArray<unsigned char> Data);
	void OnDownloadedOneFile(bool Successful, const struct FString& FileURL, TArray<unsigned char> Data);
};


// Class Client.HttpHelper
// 0x0004 (0x0020 - 0x001C)
class UHttpHelper : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.HttpHelper");
		return pStaticClass;
	}


	void HttpGet(const struct FString& URL);
};


// Class Client.ImageDownloader
// 0x0044 (0x0060 - 0x001C)
class UImageDownloader : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFail;                                                   // 0x0028(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FString                                     FileURL;                                                  // 0x0034(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     FileSavePath;                                             // 0x0040(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     UrlHash;                                                  // 0x004C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               InvalidImageFormat;                                       // 0x0058(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               SaveDiskFile;                                             // 0x0059(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x005A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ImageDownloader");
		return pStaticClass;
	}


	void Start(const struct FString& URL);
	static void SetSubDirTime(int sec);
	static void SetRootDir(const struct FString& rootDir);
	static void ResetSubDirTime();
	static void ResetRootDir();
	static class UImageDownloader* MakeDownloaderInGame();
	static class UImageDownloader* MakeDownloader();
};


// Class Client.InGameUIManager
// 0x0018 (0x0110 - 0x00F8)
class UInGameUIManager : public UGameBusinessManager
{
public:
	TArray<class UClass*>                              InGameUIList;                                             // 0x00F8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0104(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.InGameUIManager");
		return pStaticClass;
	}


	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool InPersistentUI, bool InUsedByControler, bool InOberverOnly);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleDynamicCreation();
};


// Class Client.LiveBroadcast
// 0x000C (0x0028 - 0x001C)
class ULiveBroadcast : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LiveBroadcast");
		return pStaticClass;
	}


	void SetFullScreen(bool FullScreen);
	void OpenLiveBroadcast(const struct FString& URL, float Margin);
	static class ULiveBroadcast* GetInstance();
	void CloseWebView();
	void C2JSetIndex(int Index);
};


// Class Client.LoadTexture
// 0x0000 (0x0020 - 0x0020)
class ULoadTexture : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LoadTexture");
		return pStaticClass;
	}


	static class UTexture2D* LoadTexture2D(const struct FString& ImagePath, bool* IsValid, int* OutWidth, int* OutHeight);
	static class UTexture2D* GetTexture2DFromDiskFile(const struct FString& FilePath);
};


// Class Client.LuaClassObj
// 0x0008 (0x02D0 - 0x02C8)
class ALuaClassObj : public ALuaContext
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x02C8(0x0001) MISSED OFFSET
	bool                                               bClearSourceCodeAfterInitialized;                         // 0x02C9(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x02CA(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaClassObj");
		return pStaticClass;
	}


	void SubUIWidgetList(TArray<struct FGameWidgetConfig> InWidgetConfigList, TArray<struct FString> GameStatusStrList, bool bPersistentUI, bool InStatusConcern, bool bDynamicWidget, bool bKeepDynamicWidget);
	void SubShowHideEvent(TArray<struct FString> WidgetPathList);
	void SubDefaultSceneCamera(int sceneCameraIndex);
	void SubDefaultChildUI(TArray<struct FString> childList);
	void SubDefaultBaseUI(const struct FString& baseUI);
	void SubCollapseWidgetList(const struct FString& RootWidgetName, TArray<struct FString>* ChildWidgetNames);
	void PushPanel(const struct FString& srcTag, const struct FString& dstTag);
	bool IsTopStackPanel();
	bool IsPushedPanel();
	void HandleUIMessageNoFetch(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	void HandleDynamicDestruction();
	void HandleDynamicCreation();
	class UUAEUserWidget* GetWidgetFromName(const struct FString& WidgetPath);
	struct FString GetTopStackPanelSrcTag();
	struct FString GetTopStackPanelDstTag();
	struct FString GetGameStatus();
	void AddToTopStackPanel();
};


// Class Client.LuaExtendLibrary
// 0x0000 (0x0020 - 0x0020)
class ULuaExtendLibrary : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.LuaExtendLibrary");
		return pStaticClass;
	}


	static void CallLuaFunction_TwoParams(const struct FString& FunctionName, int Param0, int Param1);
	static void CallLuaFunction_ThreeParams(const struct FString& FunctionName, int Param0, int Param1, int Param2);
	static void CallLuaFunction_SixParams(const struct FString& FunctionName, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5);
	static void CallLuaFunction_SevenParams(const struct FString& FunctionName, int Param0, int Param1, int Param2, int Param3, int Param4, int Param5, int Param6);
	static void CallLuaFunction_OneParam(const struct FString& FunctionName, int Param);
	static void CallLuaFunction_FourParams(const struct FString& FunctionName, int Param0, int Param1, int Param2, int Param3);
	static void CallLuaFunction_FiveParams(const struct FString& FunctionName, int Param0, int Param1, int Param2, int Param3, int Param4);
	static void CallLuaFunction(const struct FString& FunctionName);
};


// Class Client.PlatformAppraise
// 0x0004 (0x0020 - 0x001C)
class UPlatformAppraise : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.PlatformAppraise");
		return pStaticClass;
	}

};


// Class Client.ReuseList
// 0x00C0 (0x0270 - 0x01B0)
class UReuseList : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01B0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnUpdateItem;                                             // 0x01B8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnScrollItem;                                             // 0x01C4(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0xA0];                                      // 0x01D0(0x00A0) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ReuseList");
		return pStaticClass;
	}


	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void SetReloadDonotJump(bool DonotJump);
	void Reload(int _ItemCount, int _ItemHeight, int _ItemWidth, int _Style, class UClass* Class, int _PaddingX, int _PaddingY);
	void RefreshOne(int Idx);
	void Refresh();
	void MoveOffset(float Offset);
	void JumpbyIdx(int Idx);
	bool IfInEnd();
	struct FVector2D GetViewSize();
	int GetCurrentEnd();
	int GetCurrentBegin();
	struct FVector2D GetContentSize();
	void Clear();
};


// Class Client.ScreenshotMaker
// 0x0004 (0x0020 - 0x001C)
class UScreenshotMaker : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScreenshotMaker");
		return pStaticClass;
	}


	static bool SaveToPhotosAlbumEx(const struct FString& pathStr);
	static bool SaveToPhotosAlbum(const struct FString& pathStr);
	static void ReMakePicture(const struct FString& pathStr, const struct FVector4& Vector4);
	static struct FString ReMakeJPGEPicture(const struct FString& pathStr, const struct FVector4& Vector4, int OutWidth, int OutHeight, int iQuality);
	static struct FString MakePicture(bool isShowUI);
	static struct FString MakeBugReprotPic(bool isShowUI);
	static bool HasCaptured(const struct FString& pathStr);
	static int GetSaveStatus();
};


// Class Client.ScriptHelperClient
// 0x0004 (0x0020 - 0x001C)
class UScriptHelperClient : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScriptHelperClient");
		return pStaticClass;
	}


	static bool XgClearLocalNotifications();
	static bool XgAddLocalNotification_LuaState();
	static void WGSendToWeixinWithVideo(const struct FString& _thumbUrl, const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _videoPath, const struct FString& _videoUrl, int _shareScene, const struct FString& _mediaTagName, const struct FString& _messageExt, const struct FString& _messageAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WGSendToQQWithVideo(const struct FString& _summary, const struct FString& _videoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatShareWithUrlInfo(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _url, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatShareWithPhoto(const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, const struct FString& _messageAction, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WeChatShareWithMiniApp2(const struct FString& _webpageUrl, const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgWebPath, const struct FString& _imgBackupLocalPath, int _shareScene, const struct FString& _userName, const struct FString& _path, const struct FString& _messageExt, const struct FString& _messageAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WeChatShareWithMiniApp(const struct FString& _userName, const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _webpageUrl, bool _useContent, const struct FString& _path, const struct FString& _messageExt, const struct FString& _messageAction, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatShareToFriend(const struct FString& mediaId, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& messageExt, const struct FString& mediaTagName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatShareDeepLink(const struct FString& link, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatShare(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, const struct FString& _mediaTagName, const struct FString& _messageExt, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatQueryGroup(const struct FString& unionId, const struct FString& OpenIdList, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatJoinGroup(const struct FString& unionId, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WechatCreateGroup(const struct FString& unionId, const struct FString& chatRoomName, const struct FString& chatRoomNickName, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void WakeupFromSuspendSound();
	static void UploadClientLogs();
	static void UnloadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, int levelId);
	static void TApmDataReport(class UGameFrontendHUD* GameFrontendHUD, int EventID, const struct FString& EventInfo);
	static void SwitchUser(bool useExternalAccount, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void SwitchSceneCamera(class UGameFrontendHUD* GameFrontendHUD, const struct FString& SceneCameraName, float blendTime, bool bForce);
	static void SuspendSound();
	static bool StopShaderPrecompile();
	static bool StartShaderPrecompile();
	static bool StartGrayUpdate(class UGameFrontendHUD* GameFrontendHUD);
	static void ShutdownUnrealNetwork(class UGameFrontendHUD* GameFrontendHUD);
	static void ShowVideoListDialog();
	static void ShowScreenDebugMessage(const struct FString& Message);
	static void ShowGameTypeBlack(class UGameFrontendHUD* GameFrontendHUD, int endTime);
	static void ShowGameType(class UGameFrontendHUD* GameFrontendHUD);
	static void ShowClubLogoInOB(class UGameFrontendHUD* GameFrontendHUD, bool bShow);
	static void SetWeatherInfo(class UGameFrontendHUD* GameFrontendHUD, int WeatherID, const struct FString& WeatherName);
	static void SetUIRectOffset(const struct FString& uirect);
	static void SetShowFriendObservers(class UGameFrontendHUD* GameFrontendHUD, bool bShow);
	static void SetShouldShowWatchingDetialBtn(class UGameFrontendHUD* GameFrontendHUD, bool bCan);
	static void SetScreenHole(const struct FString& sceenHole);
	static void SetPlayerBaseInfo(class UGameFrontendHUD* GameFrontendHUD, const struct FString& OpenID, uint64_t RoleID, const struct FString& PlayerName, const struct FString& HeadIconUrl, int RoleLevel);
	static void SetMyFriendObserversDetail(class UGameFrontendHUD* GameFrontendHUD, TArray<struct FFriendObserver> FriendObserversDetails);
	static bool SetLinkStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool ShowUnderline);
	static void SetIntSettingConfig(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key, int Value);
	static void SetIntDefaultConfig(int Value);
	static bool SetImageStyle(const struct FString& StyleName, int ImageSize, const struct FString& ImagePath, const struct FString& ImageColor);
	static void SetGameStatusMap(class UGameFrontendHUD* GameFrontendHUD, TMap<struct FName, struct FString> GameStatusMap);
	static void SetGameSrvID(class UGameFrontendHUD* GameFrontendHUD, int GameSrvID);
	static bool SetFontStyle(const struct FString& StyleName, int FontSize, const struct FString& FontPath, const struct FString& FontColor, bool UseShadow);
	static void SetCanWatchEnemy(class UGameFrontendHUD* GameFrontendHUD, bool bCan);
	static void SetBoolSettingConfig(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key, bool Value);
	static void SetBLEResult(int Result);
	static void SetBLEIdendify(const struct FString& Key);
	static void SendRetriveBeginnerFinisheGuideReq(class UGameFrontendHUD* GameFrontendHUD);
	static void SendRecordFinishedGuideReq(class UGameFrontendHUD* GameFrontendHUD, const struct FString& tipsID);
	static void SendLobbyChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& content);
	static void SendDirtyToFilter(class UGameFrontendHUD* GameFrontendHUD, const struct FString& dirtyString);
	static bool SaveSavFileWithMemData_LuaState();
	static bool SaveSavFile(const struct FString& CompressedData, const struct FString& Filename, int CompressedSize, int UnCompressedSize);
	static void SaveLuaMemoryFile(const struct FString& Filename, const struct FString& InputContent, bool RmExistFile);
	static int Save_LuaState();
	static void ReturnToLobby(class UGameFrontendHUD* GameFrontendHUD);
	static void ResetReportComplaintNames(class UGameFrontendHUD* GameFrontendHUD);
	static void RequestWebService(const struct FString& servicename, const struct FString& URL, const struct FString& verb, const struct FString& content);
	static void ReportPrajna(const struct FString& SerialNumber, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ReplyInvite(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, bool bReply);
	static void RepairPak(class UGameFrontendHUD* GameFrontendHUD);
	static void RemoveTssLoginInfo();
	static void RegisterPay(class UGameFrontendHUD* GameFrontendHUD);
	static void QuitVoiceRoom(class UGameFrontendHUD* GameFrontendHUD);
	static void QuitLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD);
	static void QuitGroupsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD);
	static void QuitFightChat(class UGameFrontendHUD* GameFrontendHUD);
	static void QueryMyInfo(int channelType, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void QQShareWithPhotoExtra(const struct FString& _imgPath, const struct FString& _extraScene, const struct FString& _messageExt, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void QQShareWithPhoto(const struct FString& _descShare, const struct FString& _titleShare, const struct FString& _imgPath, int _shareScene, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void QQShareToFriend(const struct FString& targetUrl, int act, const struct FString& OpenID, const struct FString& Title, const struct FString& Desc, const struct FString& msdkExtInfo, const struct FString& imgUrl, const struct FString& previewText, const struct FString& gameTag, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void QQShare(const struct FString& _imgPath, const struct FString& _descShare, const struct FString& _titleShare, int _shareScene, const struct FString& _imgUrl, const struct FString& _url, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void QQAddFriend(const struct FString& OpenID, const struct FString& Desc, const struct FString& Message, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void PopPanel();
	static void PopAllPanel();
	static void PandoraSendCmd(const struct FString& jsonStr);
	static void PandoraInit(const struct FString& InOpenId, const struct FString& InRoleId, const struct FString& InAppId, const struct FString& InPlatId, const struct FString& InAccType, const struct FString& InArea, const struct FString& InPartion, const struct FString& InCloudTest, const struct FString& InAccessToken, const struct FString& InSdkVersion, const struct FString& InGameVersion, const struct FString& InRoleName, const struct FString& InPayToken, const struct FString& InHeadUrl, const struct FString& InChanelId);
	static void PandoraClose();
	static void OpenURL(const struct FString& URL, int Dir);
	static void OpenFullScreenWebViewWithJson(const struct FString& Json, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static int OnTableReleaseAll_LuaState();
	static void OnReceiveBLEMsg(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Msg);
	static void OnNotifyFightFriendChat(class UGameFrontendHUD* GameFrontendHUD, const struct FFightFriendChat& Data);
	static void OnInviteNextBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid, const struct FString& Name);
	static void OnHttpGetResponse(const struct FString& Result);
	static void OnFilterFinish(class UGameFrontendHUD* GameFrontendHUD, const struct FString& filterText);
	static void OnBattleResult(class UGameFrontendHUD* GameFrontendHUD, const struct FBattleResultData& BattleResultData);
	static void NotifyBeginnerFinishedGuideUpdated(class UGameFrontendHUD* GameFrontendHUD, bool GuideSwitch, TArray<struct FPlayerFinishedGuide> finished_guide, int player_level, int player_exp_type);
	static void MidasPay(class UGameFrontendHUD* GameFrontendHUD, int payItem, const struct FString& productId);
	static struct FString MD5HashAnsiString(const struct FString& str);
	static void MatchVersion(class UGameFrontendHUD* GameFrontendHUD);
	static int LuaSnapShot_LuaState();
	static void Logout(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void Login(uint32_t Channel, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void LoadStreamLevel(class UObject* WorldContextObject, const struct FName& LevelName, bool bMakeVisibleAfterLoad, bool bShouldBlockOnLoad, int levelId);
	static int LoadSavFile_LuaState();
	static void LoadLuaFile(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Filename);
	static int Load_LuaState();
	static void LauchMpInfo(class UGameFrontendHUD* GameFrontendHUD);
	static void JumpSettingPage();
	static void JumpNoticeCenterPage();
	static void JoinVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& roomName, const struct FString& userId);
	static void JoinLbsVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& lbsRoomName, const struct FString& userId);
	static void JoinGroupVoiceRoom(class UGameFrontendHUD* GameFrontendHUD, const struct FString& groupRoomName, const struct FString& userId);
	static bool IsWithWINMSDK(class UGameFrontendHUD* GameFrontendHUD);
	static bool IsWindowOB(class UGameFrontendHUD* GameFrontendHUD);
	static int IsTableDataExist_LuaState();
	static bool IsShippingBuild();
	static bool IsPlayWithEditor();
	static bool IsPlatformSupportStoreKit();
	static bool IsIOSCheck();
	static bool IsInstallWX(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsInstallQQ(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool IsForCE();
	static bool IsEmulatorWhenInit();
	static bool IsEmulator();
	static bool IsConnected(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void InstallNewApp(class UGameFrontendHUD* GameFrontendHUD);
	static void InitLoginAccount(uint64_t AccUin, const struct FString& AccPswd, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void HttpGetRequest(const struct FString& URL);
	static int HasNotice_LuaState();
	static bool HasActiveWifi();
	static void GuildPlatformAppraiseWithType(int Type);
	static void GotoPlatformAppraise();
	static struct FString GetUnrealNetworkStatus(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetUIStackTopSrcTag();
	static struct FString GetUIStackTopPanel();
	static struct FString GetUIStackTopDstTag();
	static struct FString GetUIRectOffset();
	static struct FString GetTelecomSvr();
	static int GetTableDataField_LuaState();
	static int GetTableData_LuaState();
	static int GetTableCount(const struct FString& TableName);
	static int GetTable_LuaState();
	static int GetShaderPrecompileProgress();
	static void GetSettingGameStaticFrontendHUD(class UGameFrontendHUD* GameFrontendHUD);
	static int GetScreenWidth();
	static struct FString GetScreenHole();
	static int GetScreenHight();
	static int GetScreenDensity();
	static struct FString GetRegisterChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetPhoneType();
	static struct FString GetPhoneDeviceID();
	static struct FString GetPfKey(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetPf(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetPayToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetOSVersion();
	static struct FString GetNetWorkType();
	static void GetNearbyPersonInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static TArray<struct FString> GetMyFriendObservers(class UGameFrontendHUD* GameFrontendHUD);
	static int GetMemoryStats_LuaState();
	static int GetMemorySize();
	static int GetLoginChannel(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void GetLocationInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetIpAddr();
	static int GetIntSettingConfig(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key);
	static int GetIntDefaultOffset();
	static struct FString GetInstallChannelID(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FGroupInfoWrapper GetGroupInfo(int SnsAction, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetGPSCity(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetGLVersion();
	static struct FString GetGLType();
	static struct FString GetGameStatus(class UGameFrontendHUD* GameFrontendHUD);
	static float GetFPS();
	static struct FString GetFileMD5(const struct FString& file);
	static struct FString GetEncodeUrl(const struct FString& URL);
	static struct FString GetEmulatorName();
	static struct FString GetDSVersion(class UGameFrontendHUD* GameFrontendHUD);
	static struct FString GetDevicePlatformName();
	static struct FString GetCpuType();
	static void GetConnectIPURL(const struct FString& domanName, const struct FString& URL, const struct FString& httpDNSUrl, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool GetBoolSettingConfig(class UGameFrontendHUD* GameFrontendHUD, const struct FString& Key);
	static EUBLEType GetBLEDeviceType();
	static struct FString GetAppVersion();
	static struct FString GetAppid(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static struct FString GetAccessToken(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void GenerateQRImage(int Tag, int Size, const struct FString& content, const struct FString& logoPath, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void GameJoySwitchOn(int isOn);
	static void GameJoyStopManualRecord();
	static void GameJoyStartMomentsRecord();
	static void GameJoyStartManualRecord();
	static void GameJoySetVideoQuality(int quality);
	static void GameJoySetMomentRecordSwitchOn(int isOn);
	static void GameJoySetCurrentRecorderPosition(float X, float Y);
	static void GameJoyMarkReturnBattleAfterKillProcess();
	static bool GameJoyIsSDKFeatureSupport();
	static void GameJoyGenerateMomentsVideo(TArray<struct FTimeStamp> shortVideosTimeStampList, TArray<struct FTimeStamp> largeVideosTimeStampList, const struct FString& Title, TMap<struct FString, struct FString> extraInfo);
	static void GameJoyEndMomentsRecord();
	static void GameJoyClearMomentsVideo();
	static TArray<struct FNearByPersonInfo> FetchNearByPersonInfo(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ExitGame();
	static void EnterFightChat(class UGameFrontendHUD* GameFrontendHUD, const struct FString& gid);
	static void EnterBattle(class UGameFrontendHUD* GameFrontendHUD, const struct FString& HostnameOrIP, uint32_t Port, uint32_t PlayerKey, const struct FString& PlayerName, const struct FString& PacketKey, uint64_t GameId);
	static struct FString EncryptUID(const struct FString& sUid, const struct FString& sKey);
	static struct FString EncryptServerKey(const struct FString& ServerKey);
	static void EnableDeathPlayback(class UGameFrontendHUD* GameFrontendHUD, bool bEnable, bool bFlush);
	static void DumpLog();
	static void DisconnectBLE();
	static void Disconnect(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool DelSavFile(const struct FString& Filename);
	static bool DeleteFilesFromImageDownload(int MaxNum);
	static struct FString CopyContentPathToSavePath(const struct FString& content_file_path, const struct FString& save_file_path);
	static void ConnectToURL(const struct FString& URL, TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void ConnectBLE();
	static void CloseVideoListDialog();
	static struct FString ClipboardPaste();
	static void ClipBoardCopy(const struct FString& Text);
	static void ClientEnterWarMode(class UGameFrontendHUD* GameFrontendHUD);
	static void ClearFrontendHUDLobbyAsset(class UGameFrontendHUD* GameFrontendHUD);
	static void CleanRecord(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static void CleanLocation(TScriptInterface<class UClientNetInterface>* ClientNetInterface);
	static bool CheckNoticeCenterPermission();
	static bool CheckLocationPermission();
	static void CallIngameFirstTimeTips(class UGameFrontendHUD* GameFrontendHUD, const struct FString& TableName, const struct FString& FunctionName);
	static void AutoTestWaitForSecond(int sec);
	static bool AutoTestWaitForJumpPlane();
	static void AutoTestVaultWall();
	static void AutoTestUseItem(int ItemID);
	static void AutoTestThrowBoom(int SkillID);
	static void AutoTestSwitchWeapon(int WeaponType);
	static void AutoTestStopRecordStats();
	static void AutoTestStartRecordStats(const struct FString& FileStr);
	static void AutoTestStartFire(int X, int Y, int Z, int sec);
	static void AutoTestSpawnVehicle(const struct FString& ResPath);
	static void AutoTestSetVehicleRotation(int X, int Y, int Z);
	static void AutoTestSetRecordFrequency(uint32_t Frequency);
	static void AutoTestSetActorRotation(float Rate, float Speed);
	static void AutoTestSetActorPitch(float Rate);
	static void AutoTestSetActorFacePoint(int X, int Y, int Z);
	static struct FVector2D AutoTestPickupItem();
	static void AutoTestOpenScope(bool bOpenScope);
	static void AutoTestMoveVehicleForward(int Speed, int Rate, int sec);
	static void AutoTestMoveToPoint(int X, int Y, int Z);
	static void AutoTestJumpPlane(int sec);
	static void AutoTestJump();
	static void AutoTestInputMovement(float Rate);
	static void AutoTestGMGoto(int X, int Y, int Z);
	static void AutoTestGMCommand(const struct FString& Command);
	static struct FVector AutoTestGetVehicleLocation();
	static void AutoTestGetRuntimeStats();
	static void AutoTestGetOnVehicle();
	static void AutoTestGetOffVehicle();
	static struct FVector AutoTestGetNearVehiclePos();
	static struct FString AutoTestGetMapName();
	static struct FVector AutoTestGetFrameInfo();
	static int AutoTestGetDis2D(int X, int Y, int Z, int x2, int y2, int z2);
	static struct FString AutoTestGetActorName();
	static struct FVector AutoTestGetActorLocation(const struct FString& PlayerName);
	static void AutoTestContinuousMoveTo(float X, float Y, float Z);
	static void AutoTestConsoleCommand(const struct FString& Command);
	static void AutoTestAddItem(int ItemID, int nCount);
};


// Class Client.ScriptHelperEngine
// 0x0004 (0x0020 - 0x001C)
class UScriptHelperEngine : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.ScriptHelperEngine");
		return pStaticClass;
	}

};


// Class Client.TableManager
// 0x00BC (0x00D8 - 0x001C)
class UTableManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xBC];                                      // 0x001C(0x00BC) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TableManager");
		return pStaticClass;
	}

};


// Class Client.TssManager
// 0x0004 (0x0020 - 0x001C)
class UTssManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.TssManager");
		return pStaticClass;
	}


	int SendSkdData_LuaState();
	int OnRecvData_LuaState();
};


// Class Client.UAEClientGameMode
// 0x0000 (0x0340 - 0x0340)
class AUAEClientGameMode : public AGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAEClientGameMode");
		return pStaticClass;
	}

};


// Class Client.UAELobbyGameMode
// 0x0000 (0x0340 - 0x0340)
class AUAELobbyGameMode : public AUAEClientGameMode
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAELobbyGameMode");
		return pStaticClass;
	}

};


// Class Client.UAELobbyPlayerController
// 0x0000 (0x0550 - 0x0550)
class AUAELobbyPlayerController : public APlayerController
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UAELobbyPlayerController");
		return pStaticClass;
	}

};


// Class Client.UTRichTextBlock
// 0x0660 (0x0730 - 0x00D0)
class UUTRichTextBlock : public UWidget
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00D0(0x0018) MISSED OFFSET
	struct FSlateFontInfo                              Font;                                                     // 0x00E8(0x0040) (Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                               bSupportHyLink;                                           // 0x0128(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bSupportImage;                                            // 0x0129(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x012A(0x0002) MISSED OFFSET
	struct FLinearColor                                TextColor;                                                // 0x012C(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	TEnumAsByte<ETextJustify>                          Justification;                                            // 0x013C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               AutoWrapText;                                             // 0x013D(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x013E(0x0002) MISSED OFFSET
	struct FScrollBarStyle                             ScrollBarStyle;                                           // 0x0140(0x03B0) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     HScrollBarPadding;                                        // 0x04F0(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	struct FMargin                                     VScrollBarPadding;                                        // 0x0500(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)
	float                                              WrapTextAt;                                               // 0x0510(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     Margin;                                                   // 0x0514(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	float                                              LineHeightPercentage;                                     // 0x0524(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FMargin                                     HyperlinkPadding;                                         // 0x0528(0x0010) (Edit, BlueprintVisible, BlueprintReadOnly)
	struct FString                                     HyperlinkDecoratorTag;                                    // 0x0538(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackFunctionName;                            // 0x0544(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HyperlinkCallBackTableName;                               // 0x0550(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0x1C4];                                     // 0x055C(0x01C4) MISSED OFFSET
	class UGameFrontendHUD*                            GameFrontendHUD;                                          // 0x0720(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0xC];                                       // 0x0724(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.UTRichTextBlock");
		return pStaticClass;
	}


	void SetText(const struct FText& InText);
	void SetGameFrontendHUD(class UGameFrontendHUD* InHUD);
	struct FText GetText();
};


// Class Client.WebService
// 0x000C (0x0028 - 0x001C)
class UWebService : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Client.WebService");
		return pStaticClass;
	}

};


}

