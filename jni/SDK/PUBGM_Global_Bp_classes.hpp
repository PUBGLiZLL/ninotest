#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C
// 0x0208 (0x0478 - 0x0270)
class UGlobal_Bp_C : public UUAEUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0004) (Transient, DuplicateTransient)
	class Abp_global_C*                                bp_global;                                                // 0x0274(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, class UTexture2D*>            rankTextureMap;                                           // 0x0278(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UTexture2D*>            frameTextureMap;                                          // 0x02B4(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UTexture2D*>            headBucket1st;                                            // 0x02F0(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UTexture2D*>            headBucket2nd;                                            // 0x032C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UTexture2D*>            headBucket3rd;                                            // 0x0368(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UTexture2D*>            corpsIconTextureMap;                                      // 0x03A4(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                bucketMax;                                                // 0x03E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                bucketIndex;                                              // 0x03E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                TimerHandle;                                              // 0x03E8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	class USettingConfig_C*                            settingConfig;                                            // 0x03F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              lastTryPreviewTime;                                       // 0x03F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FTimerHandle                                previewAvatarHandle;                                      // 0x03F8(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<struct FString, class UTexture2D*>            rankLargeBaseTextureMap;                                  // 0x0400(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UTexture2D*>            rankLargeLevelTextureMap;                                 // 0x043C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("WidgetBlueprintGeneratedClass Global_Bp.Global_Bp_C");
		return pStaticClass;
	}


	void FetchServerKey();
	void UpdateServerKey();
	void GetXGCreatePlayerTime();
	void SetXGCreatePlayerTime();
	void OnQueryCustomSettingHandle();
	void GetRankLargeLevelTexture(int rankIntegral, class UTexture2D** Output);
	void GetRankLargeBaseTexture(int rankIntegral, class UTexture2D** Output);
	void SetSeasonSwitchData();
	void GetSeasonSwitchData();
	void InnerPreviewAvatar();
	void CancelPreviewAvatar();
	void SetMatchTagGuideFlag();
	void GetMatchTagGuideFlag(bool* hasGuide);
	void SwitchCameraFarImmediate();
	void SwitchWarzoneBG();
	void TryPreviewAvatar(int NewParam);
	void SwitchLobbyMeshBg();
	void SwitchSceneCameraByIndex();
	void PreviewAvatar(int resID);
	void GetGlobalConfigData();
	void SetGlobalConfigData();
	void GetDragDropWidget(int dragDropType);
	void ClearWXYouxiquanRedPoint();
	void SetWXYouxiquanRedPoint();
	void GetWXYouxiquanRedPoint();
	void StopBGM();
	void ResumeBGM();
	void SetCorpsShopRedPoint();
	void InitPlayerPrefsData();
	void ClearLobbyBuffer();
	void GetCorpsIconTexture(int iconId, class UTexture2D** Value);
	void CoverLobbyCamera();
	void RecoverLobbyCamera();
	void TickHeadTexture();
	void StoreHeadTexture(const struct FString& URL, class UTexture2D* headTexture);
	void GetHeadTexture(const struct FString& URL, class UTexture2D** Value);
	void GetRankTexture(int rankIntegral, class UTexture2D** Output);
	void GetFrameTexture(int frameLevel, class UTexture2D** Output);
	void GetCloseLocation();
	void SetCloseLocation();
	void SetNearByRedPoint();
	void ClearYXXYRedPoint();
	void GetYXXYRedPoint();
	void SetYXXYRedPoint();
	void EnterCreateRoleDelay();
	void EnterCreateRole();
	void EnterFightStopMusic();
	void OpenPGUrl();
	void EventAndroidQuitGame();
	void QuitGame();
	void EnterLobby();
	void EnterLogin();
	void Construct();
	void PreloadLobbyTextures();
	void Destruct();
	void LockLobbyMaxFps();
	void RecoverMaxFps();
	void UpdateLobbyMenuOpenStatus();
	void SwitchLobbySkin();
	void OnLoadStreamLevelCompleted();
	void OnUnLoadStreamLevelCompleted();
	void ExecuteUbergraph_Global_Bp(int EntryPoint);
};


}

