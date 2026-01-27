#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:39 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function UnrealArchExt.UAEUserWidget.Visible
struct UUAEUserWidget_Visible_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.UnRegistFromGameFrontendHUD
struct UUAEUserWidget_UnRegistFromGameFrontendHUD_Params
{
};

// Function UnrealArchExt.UAEUserWidget.SynchronizeBlueprintProperties
struct UUAEUserWidget_SynchronizeBlueprintProperties_Params
{
};

// Function UnrealArchExt.UAEUserWidget.Show
struct UUAEUserWidget_Show_Params
{
};

// Function UnrealArchExt.UAEUserWidget.SetParentWidget
struct UUAEUserWidget_SetParentWidget_Params
{
	class UUAEUserWidget*                              InParentWidget;                                           // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.SetAdapation
struct UUAEUserWidget_SetAdapation_Params
{
	float                                              Left;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Top;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Right;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Bottom;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.RegistToGameFrontendHUD
struct UUAEUserWidget_RegistToGameFrontendHUD_Params
{
};

// Function UnrealArchExt.UAEUserWidget.Register
struct UUAEUserWidget_Register_Params
{
	class ULogicManagerBase*                           LogicManager;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bAddToViewport;                                           // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.ReceiveShow
struct UUAEUserWidget_ReceiveShow_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ReceiveHide
struct UUAEUserWidget_ReceiveHide_Params
{
};

// Function UnrealArchExt.UAEUserWidget.ReceivedInitWidget
struct UUAEUserWidget_ReceivedInitWidget_Params
{
};

// Function UnrealArchExt.UAEUserWidget.OnRightClicked
struct UUAEUserWidget_OnRightClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.OnFadeOutFinished
struct UUAEUserWidget_OnFadeOutFinished_Params
{
};

// Function UnrealArchExt.UAEUserWidget.OnFadeInFinished
struct UUAEUserWidget_OnFadeInFinished_Params
{
};

// Function UnrealArchExt.UAEUserWidget.OnDoubleClicked
struct UUAEUserWidget_OnDoubleClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.OnClicked
struct UUAEUserWidget_OnClicked_Params
{
	struct FVector2D                                   TempScreenPos;                                            // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.Hide
struct UUAEUserWidget_Hide_Params
{
};

// Function UnrealArchExt.UAEUserWidget.HandleUIMessageBattle
struct UUAEUserWidget_HandleUIMessageBattle_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.HandleUIMessage
struct UUAEUserWidget_HandleUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.UAEUserWidget.GetParentWidget
struct UUAEUserWidget_GetParentWidget_Params
{
	class UUAEUserWidget*                              ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetOwningPlayer
struct UUAEUserWidget_GetOwningPlayer_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetOwningLogicManager
struct UUAEUserWidget_GetOwningLogicManager_Params
{
	class ULogicManagerBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetOwningFrontendHUD
struct UUAEUserWidget_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.UAEUserWidget.GetImgDynamicMaterial
struct UUAEUserWidget_GetImgDynamicMaterial_Params
{
	class UImage*                                      ImageMat;                                                 // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UMaterialInstanceDynamic*                    ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.BackendHUD.GetFrontendHUD
struct UBackendHUD_GetFrontendHUD_Params
{
	int                                                FrontendHUDIndex;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.SetEnableRemoveDynamicWidgets
struct ULogicManagerBase_SetEnableRemoveDynamicWidgets_Params
{
	bool                                               bEnable;                                                  // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.IsEnableRemoveDynamicWidgets
struct ULogicManagerBase_IsEnableRemoveDynamicWidgets_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.GetOwningFrontendHUD
struct ULogicManagerBase_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.GetDefaultSceneCamera
struct ULogicManagerBase_GetDefaultSceneCamera_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.LogicManagerBase.DispatchUIMessage
struct ULogicManagerBase_DispatchUIMessage_Params
{
	struct FString                                     UIMessage;                                                // (Parm, ZeroConstructor)
	class UObject*                                     Source;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Target;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.SwitchGameStatus
struct UFrontendHUD_SwitchGameStatus_Params
{
	struct FName                                       GameStatus;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     Options;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.FrontendHUD.OnPreLoadMap
struct UFrontendHUD_OnPreLoadMap_Params
{
	struct FString                                     MapName;                                                  // (Parm, ZeroConstructor)
};

// Function UnrealArchExt.FrontendHUD.OnPostLoadMapWithWorld
struct UFrontendHUD_OnPostLoadMapWithWorld_Params
{
	class UWorld*                                      World;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.OnGameViewportClientCreated
struct UFrontendHUD_OnGameViewportClientCreated_Params
{
};

// Function UnrealArchExt.FrontendHUD.LoadingScreenChange
struct UFrontendHUD_LoadingScreenChange_Params
{
	bool                                               bVisible;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetWorld
struct UFrontendHUD_GetWorld_Params
{
	class UWorld*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetUtils
struct UFrontendHUD_GetUtils_Params
{
	class UFrontendUtils*                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetPlayerController
struct UFrontendHUD_GetPlayerController_Params
{
	class APlayerController*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetLogicManagerByName
struct UFrontendHUD_GetLogicManagerByName_Params
{
	struct FName                                       LogicManagerTagName;                                      // (Parm, ZeroConstructor, IsPlainOldData)
	class ULogicManagerBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetLogicManager
struct UFrontendHUD_GetLogicManager_Params
{
	int                                                LogicManagerIndex;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	class ULogicManagerBase*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetGameViewportClient
struct UFrontendHUD_GetGameViewportClient_Params
{
	class UGameViewportClient*                         ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendHUD.GetGameMode
struct UFrontendHUD_GetGameMode_Params
{
	class AGameMode*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.UnRegisterScenePointLight
struct UFrontendUtils_UnRegisterScenePointLight_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APointLight*                                 Light;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.UnRegisterSceneCamera
struct UFrontendUtils_UnRegisterSceneCamera_Params
{
	struct FName                                       SceneCameraName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                SceneCamera;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform
struct UFrontendUtils_SwitchSceneCameraToTransform_Params
{
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              FOV;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SwitchSceneCamera
struct UFrontendUtils_SwitchSceneCamera_Params
{
	struct FName                                       SceneCameraName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              blendTime;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bForce;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SetSceneSkyLightProperty
struct UFrontendUtils_SetSceneSkyLightProperty_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty
struct UFrontendUtils_SetScenePointLightProperty_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	int                                                inverseSquareFalloff;                                     // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Radius;                                                   // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bUseTemperature;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              Temperature;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty
struct UFrontendUtils_SetSceneDirectionalLightProperty_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	struct FTransform                                  targetTrans;                                              // (Parm, IsPlainOldData)
	float                                              Intensity;                                                // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                Color;                                                    // (Parm, IsPlainOldData)
	struct FLightingChannels                           Channel;                                                  // (Parm)
};

// Function UnrealArchExt.FrontendUtils.RegisterSceneSkyLight
struct UFrontendUtils_RegisterSceneSkyLight_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ASkyLight*                                   Light;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.RegisterScenePointLight
struct UFrontendUtils_RegisterScenePointLight_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class APointLight*                                 Light;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.RegisterSceneMatChangeableMesh
struct UFrontendUtils_RegisterSceneMatChangeableMesh_Params
{
	struct FName                                       meshName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      Mesh;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight
struct UFrontendUtils_RegisterSceneDirectionalLight_Params
{
	struct FName                                       sceneLightName;                                           // (Parm, ZeroConstructor, IsPlainOldData)
	class ADirectionalLight*                           Light;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.RegisterSceneCamera
struct UFrontendUtils_RegisterSceneCamera_Params
{
	struct FName                                       SceneCameraName;                                          // (Parm, ZeroConstructor, IsPlainOldData)
	class ACameraActor*                                SceneCamera;                                              // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.PopAllPushedUI
struct UFrontendUtils_PopAllPushedUI_Params
{
};

// Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered
struct UFrontendUtils_OnAllSceneCamerasRegistered_Params
{
};

// Function UnrealArchExt.FrontendUtils.IsPushedPanel
struct UFrontendUtils_IsPushedPanel_Params
{
	struct FName                                       ManagerName;                                              // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.HideAllOtherPanelExceptOwnThisWidget
struct UFrontendUtils_HideAllOtherPanelExceptOwnThisWidget_Params
{
	class UWidget*                                     Widget;                                                   // (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	bool                                               Hide;                                                     // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GlobalUIEventDispatcher_GetDelegateIsBound
struct UFrontendUtils_GlobalUIEventDispatcher_GetDelegateIsBound_Params
{
	struct FString                                     DelegateNum;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetUIStackTopSrcTag
struct UFrontendUtils_GetUIStackTopSrcTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealArchExt.FrontendUtils.GetUIStackTopDstTag
struct UFrontendUtils_GetUIStackTopDstTag_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealArchExt.FrontendUtils.GetUIStackTop
struct UFrontendUtils_GetUIStackTop_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function UnrealArchExt.FrontendUtils.GetSceneMatChangeableMeshByIdx
struct UFrontendUtils_GetSceneMatChangeableMeshByIdx_Params
{
	struct FName                                       meshName;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetPushedUICount
struct UFrontendUtils_GetPushedUICount_Params
{
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD
struct UFrontendUtils_GetOwningFrontendHUD_Params
{
	class UFrontendHUD*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetGlobalUIEventDispatcher
struct UFrontendUtils_GetGlobalUIEventDispatcher_Params
{
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer
struct UFrontendUtils_GetGlobalUIContainer_Params
{
	struct FName                                       ContainerName;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	class UUAEWidgetContainer*                         ReturnValue;                                              // (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.GetCurrentSceneCamera
struct UFrontendUtils_GetCurrentSceneCamera_Params
{
	class ACameraActor*                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function UnrealArchExt.FrontendUtils.ClearLobbyAsset
struct UFrontendUtils_ClearLobbyAsset_Params
{
};

// Function UnrealArchExt.UAEWidgetContainer.RemoveWidgetInternal
struct UUAEWidgetContainer_RemoveWidgetInternal_Params
{
	class UUAEUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.RemoveWidget
struct UUAEWidgetContainer_RemoveWidget_Params
{
	class UUAEUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.AddWidgetInternal
struct UUAEWidgetContainer_AddWidgetInternal_Params
{
	class UUAEUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// Function UnrealArchExt.UAEWidgetContainer.AddWidget
struct UUAEWidgetContainer_AddWidget_Params
{
	class UUAEUserWidget*                              Widget;                                                   // (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
};

}

