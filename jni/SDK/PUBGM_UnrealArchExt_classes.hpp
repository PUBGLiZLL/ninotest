#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:39 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UnrealArchExt.UAEUserWidget
// 0x00C0 (0x0270 - 0x01B0)
class UUAEUserWidget : public UUserWidget
{
public:
	class ULogicManagerBase*                           OwningLogicManager;                                       // 0x01B0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UUAEWidgetContainer*                         OwningWidgetContainer;                                    // 0x01B4(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	class UUAEUserWidget*                              ParentWidget;                                             // 0x01B8(0x0004) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x01BC(0x003C) MISSED OFFSET
	struct FUserWidgetState                            DefaultUserWidgetState;                                   // 0x01F8(0x0020) (Edit)
	struct FUserWidgetState                            CurrentUserWidgetState;                                   // 0x0218(0x0020) (BlueprintVisible)
	float                                              TickRate;                                                 // 0x0238(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	bool                                               bReceiveOnClickedEvent;                                   // 0x023C(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveOnRightClickedEvent;                              // 0x023D(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bReceiveOnDoubleClickedEvent;                             // 0x023E(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoSetScreenPosOnMouseEnter;                            // 0x023F(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ScreenPos;                                                // 0x0240(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector2D                                   LastMouseEventScreenPos;                                  // 0x0248(0x0008) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	unsigned char                                      UnknownData01[0x9];                                       // 0x0250(0x0009) MISSED OFFSET
	EUserWidgetFadingStatus                            FadingStatus;                                             // 0x0259(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x025A(0x0002) MISSED OFFSET
	float                                              CurrentOpacity;                                           // 0x025C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FadingInTime;                                             // 0x0260(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FadingOutTime;                                            // 0x0264(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoFadeIn;                                                // 0x0268(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bNoFadeOut;                                               // 0x0269(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bShouldCollapse;                                          // 0x026A(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x5];                                       // 0x026B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEUserWidget");
		return pStaticClass;
	}


	bool Visible();
	void UnRegistFromGameFrontendHUD();
	void SynchronizeBlueprintProperties();
	void Show();
	void SetParentWidget(class UUAEUserWidget* InParentWidget);
	void SetAdapation(float Left, float Top, float Right, float Bottom);
	void RegistToGameFrontendHUD();
	void Register(class ULogicManagerBase* LogicManager, bool bAddToViewport);
	void ReceiveShow();
	void ReceiveHide();
	void ReceivedInitWidget();
	void OnRightClicked(const struct FVector2D& TempScreenPos);
	void OnFadeOutFinished();
	void OnFadeInFinished();
	void OnDoubleClicked(const struct FVector2D& TempScreenPos);
	void OnClicked(const struct FVector2D& TempScreenPos);
	void Hide();
	void HandleUIMessageBattle(const struct FString& UIMessage);
	void HandleUIMessage(const struct FString& UIMessage);
	class UUAEUserWidget* GetParentWidget();
	class APlayerController* GetOwningPlayer();
	class ULogicManagerBase* GetOwningLogicManager();
	class UFrontendHUD* GetOwningFrontendHUD();
	class UMaterialInstanceDynamic* GetImgDynamicMaterial(class UImage* ImageMat);
};


// Class UnrealArchExt.TableTraver
// 0x0004 (0x0020 - 0x001C)
class UTableTraver : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.TableTraver");
		return pStaticClass;
	}

};


// Class UnrealArchExt.BackendUtils
// 0x0004 (0x0020 - 0x001C)
class UBackendUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.BackendUtils");
		return pStaticClass;
	}

};


// Class UnrealArchExt.BackendHUD
// 0x0024 (0x0040 - 0x001C)
class UBackendHUD : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FString                                     BackendUtilsClassName;                                    // 0x0020(0x000C) (ZeroConstructor, Config)
	class UBackendUtils*                               Utils;                                                    // 0x002C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x10];                                      // 0x0030(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.BackendHUD");
		return pStaticClass;
	}


	class UFrontendHUD* GetFrontendHUD(int FrontendHUDIndex);
};


// Class UnrealArchExt.LogicManagerBase
// 0x008C (0x00A8 - 0x001C)
class ULogicManagerBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	class UFrontendHUD*                                OwningFrontendHUD;                                        // 0x0028(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPersistentUI;                                            // 0x002C(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bDynamicWidget;                                           // 0x002D(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bKeepDynamicWidget;                                       // 0x002E(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x002F(0x0001) MISSED OFFSET
	int                                                DefaultSceneCameraIndex;                                  // 0x0030(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0034(0x000C) MISSED OFFSET
	TArray<struct FName>                               GameStatusList;                                           // 0x0040(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData03[0x30];                                      // 0x004C(0x0030) MISSED OFFSET
	TArray<class UUAEUserWidget*>                      widgetList;                                               // 0x007C(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData04[0x10];                                      // 0x0088(0x0010) MISSED OFFSET
	TArray<class UObject*>                             DelayMessage_Obj;                                         // 0x0098(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData05[0x4];                                       // 0x00A4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.LogicManagerBase");
		return pStaticClass;
	}


	void SetEnableRemoveDynamicWidgets(bool bEnable);
	bool IsEnableRemoveDynamicWidgets();
	class UFrontendHUD* GetOwningFrontendHUD();
	int GetDefaultSceneCamera();
	void DispatchUIMessage(const struct FString& UIMessage, class UObject* Source, class UUAEUserWidget* Target);
};


// Class UnrealArchExt.FrontendHUD
// 0x00B4 (0x00D0 - 0x001C)
class UFrontendHUD : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x001C(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnFrontendHUDLoadingScreenChange;                         // 0x002C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	class UGameInstance*                               GameInstance;                                             // 0x0038(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET
	struct FString                                     FrontendUtilsClassName;                                   // 0x0040(0x000C) (ZeroConstructor, Config)
	class UFrontendUtils*                              Utils;                                                    // 0x004C(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<class ULogicManagerBase*>                   LogicManagerList;                                         // 0x0050(0x000C) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ULogicManagerBase>> LogicManagerMap;                                          // 0x005C(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0xC];                                       // 0x0098(0x000C) MISSED OFFSET
	int                                                UnusedWidgetMinCount;                                     // 0x00A4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                UnusedWidgetMaxCount;                                     // 0x00A8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                UnusedWidgetKeepTime;                                     // 0x00AC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	struct FName                                       CurrentGameStatus;                                        // 0x00B0(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FName                                       PendingGameStatus;                                        // 0x00B8(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     LatestGameStatusURL;                                      // 0x00C0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class UWorld*                                      CurrentGameStatusWorld;                                   // 0x00CC(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.FrontendHUD");
		return pStaticClass;
	}


	void SwitchGameStatus(const struct FName& GameStatus, const struct FString& Options);
	void OnPreLoadMap(const struct FString& MapName);
	void OnPostLoadMapWithWorld(class UWorld* World);
	void OnGameViewportClientCreated();
	void LoadingScreenChange(bool bVisible);
	class UWorld* GetWorld();
	class UFrontendUtils* GetUtils();
	class APlayerController* GetPlayerController();
	class ULogicManagerBase* GetLogicManagerByName(const struct FName& LogicManagerTagName);
	class ULogicManagerBase* GetLogicManager(int LogicManagerIndex);
	class UGameViewportClient* GetGameViewportClient();
	class AGameMode* GetGameMode();
};


// Class UnrealArchExt.FrontendUtils
// 0x03C4 (0x03E0 - 0x001C)
class UFrontendUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x74];                                      // 0x001C(0x0074) MISSED OFFSET
	struct FName                                       CurrentSceneCameraName;                                   // 0x0090(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class ACameraActor*>                        SceneCameraList;                                          // 0x0098(0x000C) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ACameraActor>> SceneCameraMap;                                           // 0x00A4(0x0050) (ZeroConstructor)
	TArray<class ADirectionalLight*>                   SceneDirectionalLightList;                                // 0x00E0(0x000C) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ADirectionalLight>> SceneDirectionalLightMap;                                 // 0x00EC(0x0050) (ZeroConstructor)
	TArray<class APointLight*>                         ScenePointLightList;                                      // 0x0128(0x000C) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class APointLight>> ScenePointLightMap;                                       // 0x0134(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class ASkyLight>> SceneSkyLightMap;                                         // 0x0170(0x0050) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class AActor>>   SceneMatChangeableMeshMap;                                // 0x01AC(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x118];                                     // 0x01E8(0x0118) MISSED OFFSET
	struct FString                                     GlobalUIEventDispatcherClassName;                         // 0x0300(0x000C) (ZeroConstructor, Config)
	class UClass*                                      GlobalUIEventDispatcherClass;                             // 0x030C(0x0004) (ZeroConstructor, IsPlainOldData)
	class UObject*                                     GlobalUIEventDispatcher;                                  // 0x0310(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     GlobalUIContainerClassName;                               // 0x0314(0x000C) (ZeroConstructor, Config)
	TArray<struct FName>                               GlobalUIContainerNames;                                   // 0x0320(0x000C) (ZeroConstructor, Config)
	TMap<struct FName, class UUAEWidgetContainer*>     GlobalUIContainers;                                       // 0x032C(0x0050) (ExportObject, ZeroConstructor)
	TArray<class UUAEWidgetContainer*>                 GlobalPushUIContainers;                                   // 0x0368(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData02[0x6C];                                      // 0x0374(0x006C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.FrontendUtils");
		return pStaticClass;
	}


	void UnRegisterScenePointLight(const struct FName& sceneLightName, class APointLight* Light);
	void UnRegisterSceneCamera(const struct FName& SceneCameraName, class ACameraActor* SceneCamera);
	void SwitchSceneCameraToTransform(const struct FTransform& targetTrans, TEnumAsByte<ECameraProjectionMode> ProjectionMode, float FOV, float blendTime, bool bForce);
	void SwitchSceneCamera(const struct FName& SceneCameraName, float blendTime, bool bForce);
	void SetSceneSkyLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color);
	void SetScenePointLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, bool bUseTemperature, float Temperature);
	void SetSceneDirectionalLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, const struct FLightingChannels& Channel);
	void RegisterSceneSkyLight(const struct FName& sceneLightName, class ASkyLight* Light);
	void RegisterScenePointLight(const struct FName& sceneLightName, class APointLight* Light);
	void RegisterSceneMatChangeableMesh(const struct FName& meshName, class AActor* Mesh);
	void RegisterSceneDirectionalLight(const struct FName& sceneLightName, class ADirectionalLight* Light);
	void RegisterSceneCamera(const struct FName& SceneCameraName, class ACameraActor* SceneCamera);
	void PopAllPushedUI();
	void OnAllSceneCamerasRegistered();
	bool IsPushedPanel(const struct FName& ManagerName);
	void HideAllOtherPanelExceptOwnThisWidget(class UWidget* Widget, bool Hide);
	bool GlobalUIEventDispatcher_GetDelegateIsBound(const struct FString& DelegateNum);
	struct FString GetUIStackTopSrcTag();
	struct FString GetUIStackTopDstTag();
	struct FString GetUIStackTop();
	class AActor* GetSceneMatChangeableMeshByIdx(const struct FName& meshName);
	int GetPushedUICount();
	class UFrontendHUD* GetOwningFrontendHUD();
	class UObject* GetGlobalUIEventDispatcher();
	class UUAEWidgetContainer* GetGlobalUIContainer(const struct FName& ContainerName);
	class ACameraActor* GetCurrentSceneCamera();
	void ClearLobbyAsset();
};


// Class UnrealArchExt.UAEDataTable
// 0x0048 (0x00A8 - 0x0060)
class UUAEDataTable : public UDataTable
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x0060(0x0048) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEDataTable");
		return pStaticClass;
	}

};


// Class UnrealArchExt.UAEWidgetContainer
// 0x0018 (0x0288 - 0x0270)
class UUAEWidgetContainer : public UUAEUserWidget
{
public:
	TArray<class UUAEUserWidget*>                      widgetList;                                               // 0x0270(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0xC];                                       // 0x027C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class UnrealArchExt.UAEWidgetContainer");
		return pStaticClass;
	}


	void RemoveWidgetInternal(class UUAEUserWidget* Widget);
	void RemoveWidget(class UUAEUserWidget* Widget);
	void AddWidgetInternal(class UUAEUserWidget* Widget);
	void AddWidget(class UUAEUserWidget* Widget);
};


}

