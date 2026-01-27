//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:39 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function UnrealArchExt.UAEUserWidget.Visible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UUAEUserWidget::Visible()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Visible");

	UUAEUserWidget_Visible_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.UnRegistFromGameFrontendHUD
// (Final, Native, Public, BlueprintCallable)

void UUAEUserWidget::UnRegistFromGameFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.UnRegistFromGameFrontendHUD");

	UUAEUserWidget_UnRegistFromGameFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SynchronizeBlueprintProperties
// (Event, Public, BlueprintEvent)

void UUAEUserWidget::SynchronizeBlueprintProperties()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SynchronizeBlueprintProperties");

	UUAEUserWidget_SynchronizeBlueprintProperties_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.Show
// (Final, Native, Public, BlueprintCallable)

void UUAEUserWidget::Show()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Show");

	UUAEUserWidget_Show_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SetParentWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          InParentWidget                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEUserWidget::SetParentWidget(class UUAEUserWidget* InParentWidget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SetParentWidget");

	UUAEUserWidget_SetParentWidget_Params params;
	params.InParentWidget = InParentWidget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.SetAdapation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          Left                           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Top                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Right                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Bottom                         (Parm, ZeroConstructor, IsPlainOldData)

void UUAEUserWidget::SetAdapation(float Left, float Top, float Right, float Bottom)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.SetAdapation");

	UUAEUserWidget_SetAdapation_Params params;
	params.Left = Left;
	params.Top = Top;
	params.Right = Right;
	params.Bottom = Bottom;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.RegistToGameFrontendHUD
// (Final, Native, Public, BlueprintCallable)

void UUAEUserWidget::RegistToGameFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.RegistToGameFrontendHUD");

	UUAEUserWidget_RegistToGameFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.Register
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULogicManagerBase*       LogicManager                   (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bAddToViewport                 (Parm, ZeroConstructor, IsPlainOldData)

void UUAEUserWidget::Register(class ULogicManagerBase* LogicManager, bool bAddToViewport)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Register");

	UUAEUserWidget_Register_Params params;
	params.LogicManager = LogicManager;
	params.bAddToViewport = bAddToViewport;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReceiveShow
// (Event, Protected, BlueprintEvent)

void UUAEUserWidget::ReceiveShow()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReceiveShow");

	UUAEUserWidget_ReceiveShow_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReceiveHide
// (Event, Protected, BlueprintEvent)

void UUAEUserWidget::ReceiveHide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReceiveHide");

	UUAEUserWidget_ReceiveHide_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.ReceivedInitWidget
// (Event, Public, BlueprintEvent)

void UUAEUserWidget::ReceivedInitWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.ReceivedInitWidget");

	UUAEUserWidget_ReceivedInitWidget_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnRightClicked
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D               TempScreenPos                  (Parm, IsPlainOldData)

void UUAEUserWidget::OnRightClicked(const struct FVector2D& TempScreenPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnRightClicked");

	UUAEUserWidget_OnRightClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnFadeOutFinished
// (Native, Event, Protected, BlueprintEvent)

void UUAEUserWidget::OnFadeOutFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnFadeOutFinished");

	UUAEUserWidget_OnFadeOutFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnFadeInFinished
// (Native, Event, Protected, BlueprintEvent)

void UUAEUserWidget::OnFadeInFinished()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnFadeInFinished");

	UUAEUserWidget_OnFadeInFinished_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnDoubleClicked
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D               TempScreenPos                  (Parm, IsPlainOldData)

void UUAEUserWidget::OnDoubleClicked(const struct FVector2D& TempScreenPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnDoubleClicked");

	UUAEUserWidget_OnDoubleClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.OnClicked
// (Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector2D               TempScreenPos                  (Parm, IsPlainOldData)

void UUAEUserWidget::OnClicked(const struct FVector2D& TempScreenPos)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.OnClicked");

	UUAEUserWidget_OnClicked_Params params;
	params.TempScreenPos = TempScreenPos;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.Hide
// (Final, Native, Public, BlueprintCallable)

void UUAEUserWidget::Hide()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.Hide");

	UUAEUserWidget_Hide_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.HandleUIMessageBattle
// (Final, Native, Public)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void UUAEUserWidget::HandleUIMessageBattle(const struct FString& UIMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.HandleUIMessageBattle");

	UUAEUserWidget_HandleUIMessageBattle_Params params;
	params.UIMessage = UIMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.HandleUIMessage
// (Final, Native, Public)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)

void UUAEUserWidget::HandleUIMessage(const struct FString& UIMessage)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.HandleUIMessage");

	UUAEUserWidget_HandleUIMessage_Params params;
	params.UIMessage = UIMessage;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEUserWidget.GetParentWidget
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUAEUserWidget*          ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEUserWidget* UUAEUserWidget::GetParentWidget()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetParentWidget");

	UUAEUserWidget_GetParentWidget_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetOwningPlayer
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UUAEUserWidget::GetOwningPlayer()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetOwningPlayer");

	UUAEUserWidget_GetOwningPlayer_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetOwningLogicManager
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class ULogicManagerBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogicManagerBase* UUAEUserWidget::GetOwningLogicManager()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetOwningLogicManager");

	UUAEUserWidget_GetOwningLogicManager_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetOwningFrontendHUD
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UUAEUserWidget::GetOwningFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetOwningFrontendHUD");

	UUAEUserWidget_GetOwningFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.UAEUserWidget.GetImgDynamicMaterial
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UImage*                  ImageMat                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UMaterialInstanceDynamic* ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UMaterialInstanceDynamic* UUAEUserWidget::GetImgDynamicMaterial(class UImage* ImageMat)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEUserWidget.GetImgDynamicMaterial");

	UUAEUserWidget_GetImgDynamicMaterial_Params params;
	params.ImageMat = ImageMat;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.BackendHUD.GetFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            FrontendHUDIndex               (Parm, ZeroConstructor, IsPlainOldData)
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UBackendHUD::GetFrontendHUD(int FrontendHUDIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.BackendHUD.GetFrontendHUD");

	UBackendHUD_GetFrontendHUD_Params params;
	params.FrontendHUDIndex = FrontendHUDIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.SetEnableRemoveDynamicWidgets
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)

void ULogicManagerBase::SetEnableRemoveDynamicWidgets(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.SetEnableRemoveDynamicWidgets");

	ULogicManagerBase_SetEnableRemoveDynamicWidgets_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.LogicManagerBase.IsEnableRemoveDynamicWidgets
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULogicManagerBase::IsEnableRemoveDynamicWidgets()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.IsEnableRemoveDynamicWidgets");

	ULogicManagerBase_IsEnableRemoveDynamicWidgets_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.GetOwningFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* ULogicManagerBase::GetOwningFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.GetOwningFrontendHUD");

	ULogicManagerBase_GetOwningFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.GetDefaultSceneCamera
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULogicManagerBase::GetDefaultSceneCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.GetDefaultSceneCamera");

	ULogicManagerBase_GetDefaultSceneCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.LogicManagerBase.DispatchUIMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 UIMessage                      (Parm, ZeroConstructor)
// class UObject*                 Source                         (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Target                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void ULogicManagerBase::DispatchUIMessage(const struct FString& UIMessage, class UObject* Source, class UUAEUserWidget* Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.LogicManagerBase.DispatchUIMessage");

	ULogicManagerBase_DispatchUIMessage_Params params;
	params.UIMessage = UIMessage;
	params.Source = Source;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.SwitchGameStatus
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   GameStatus                     (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Options                        (Parm, ZeroConstructor)

void UFrontendHUD::SwitchGameStatus(const struct FName& GameStatus, const struct FString& Options)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.SwitchGameStatus");

	UFrontendHUD_SwitchGameStatus_Params params;
	params.GameStatus = GameStatus;
	params.Options = Options;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.OnPreLoadMap
// (Native, Protected)
// Parameters:
// struct FString                 MapName                        (Parm, ZeroConstructor)

void UFrontendHUD::OnPreLoadMap(const struct FString& MapName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.OnPreLoadMap");

	UFrontendHUD_OnPreLoadMap_Params params;
	params.MapName = MapName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.OnPostLoadMapWithWorld
// (Native, Protected)
// Parameters:
// class UWorld*                  World                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendHUD::OnPostLoadMapWithWorld(class UWorld* World)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.OnPostLoadMapWithWorld");

	UFrontendHUD_OnPostLoadMapWithWorld_Params params;
	params.World = World;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.OnGameViewportClientCreated
// (Final, Native, Protected)

void UFrontendHUD::OnGameViewportClientCreated()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.OnGameViewportClientCreated");

	UFrontendHUD_OnGameViewportClientCreated_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.LoadingScreenChange
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendHUD::LoadingScreenChange(bool bVisible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.LoadingScreenChange");

	UFrontendHUD_LoadingScreenChange_Params params;
	params.bVisible = bVisible;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendHUD.GetWorld
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UFrontendHUD::GetWorld()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetWorld");

	UFrontendHUD_GetWorld_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetUtils
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFrontendUtils*          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendUtils* UFrontendHUD::GetUtils()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetUtils");

	UFrontendHUD_GetUtils_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetPlayerController
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class APlayerController*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class APlayerController* UFrontendHUD::GetPlayerController()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetPlayerController");

	UFrontendHUD_GetPlayerController_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetLogicManagerByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   LogicManagerTagName            (Parm, ZeroConstructor, IsPlainOldData)
// class ULogicManagerBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogicManagerBase* UFrontendHUD::GetLogicManagerByName(const struct FName& LogicManagerTagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetLogicManagerByName");

	UFrontendHUD_GetLogicManagerByName_Params params;
	params.LogicManagerTagName = LogicManagerTagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetLogicManager
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            LogicManagerIndex              (Parm, ZeroConstructor, IsPlainOldData)
// class ULogicManagerBase*       ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ULogicManagerBase* UFrontendHUD::GetLogicManager(int LogicManagerIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetLogicManager");

	UFrontendHUD_GetLogicManager_Params params;
	params.LogicManagerIndex = LogicManagerIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetGameViewportClient
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGameViewportClient*     ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UGameViewportClient* UFrontendHUD::GetGameViewportClient()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetGameViewportClient");

	UFrontendHUD_GetGameViewportClient_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendHUD.GetGameMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class AGameMode*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AGameMode* UFrontendHUD::GetGameMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendHUD.GetGameMode");

	UFrontendHUD_GetGameMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.UnRegisterScenePointLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// class APointLight*             Light                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::UnRegisterScenePointLight(const struct FName& sceneLightName, class APointLight* Light)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.UnRegisterScenePointLight");

	UFrontendUtils_UnRegisterScenePointLight_Params params;
	params.sceneLightName = sceneLightName;
	params.Light = Light;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.UnRegisterSceneCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SceneCameraName                (Parm, ZeroConstructor, IsPlainOldData)
// class ACameraActor*            SceneCamera                    (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::UnRegisterSceneCamera(const struct FName& SceneCameraName, class ACameraActor* SceneCamera)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.UnRegisterSceneCamera");

	UFrontendUtils_UnRegisterSceneCamera_Params params;
	params.SceneCameraName = SceneCameraName;
	params.SceneCamera = SceneCamera;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// TEnumAsByte<ECameraProjectionMode> ProjectionMode                 (Parm, ZeroConstructor, IsPlainOldData)
// float                          FOV                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          blendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::SwitchSceneCameraToTransform(const struct FTransform& targetTrans, TEnumAsByte<ECameraProjectionMode> ProjectionMode, float FOV, float blendTime, bool bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SwitchSceneCameraToTransform");

	UFrontendUtils_SwitchSceneCameraToTransform_Params params;
	params.targetTrans = targetTrans;
	params.ProjectionMode = ProjectionMode;
	params.FOV = FOV;
	params.blendTime = blendTime;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SwitchSceneCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SceneCameraName                (Parm, ZeroConstructor, IsPlainOldData)
// float                          blendTime                      (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bForce                         (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::SwitchSceneCamera(const struct FName& SceneCameraName, float blendTime, bool bForce)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SwitchSceneCamera");

	UFrontendUtils_SwitchSceneCamera_Params params;
	params.SceneCameraName = SceneCameraName;
	params.blendTime = blendTime;
	params.bForce = bForce;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SetSceneSkyLightProperty
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)

void UFrontendUtils::SetSceneSkyLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SetSceneSkyLightProperty");

	UFrontendUtils_SetSceneSkyLightProperty_Params params;
	params.sceneLightName = sceneLightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)
// int                            inverseSquareFalloff           (Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bUseTemperature                (Parm, ZeroConstructor, IsPlainOldData)
// float                          Temperature                    (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::SetScenePointLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, bool bUseTemperature, float Temperature)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SetScenePointLightProperty");

	UFrontendUtils_SetScenePointLightProperty_Params params;
	params.sceneLightName = sceneLightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.inverseSquareFalloff = inverseSquareFalloff;
	params.Radius = Radius;
	params.bUseTemperature = bUseTemperature;
	params.Temperature = Temperature;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// struct FTransform              targetTrans                    (Parm, IsPlainOldData)
// float                          Intensity                      (Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (Parm, IsPlainOldData)
// struct FLightingChannels       Channel                        (Parm)

void UFrontendUtils::SetSceneDirectionalLightProperty(const struct FName& sceneLightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, const struct FLightingChannels& Channel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.SetSceneDirectionalLightProperty");

	UFrontendUtils_SetSceneDirectionalLightProperty_Params params;
	params.sceneLightName = sceneLightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.Channel = Channel;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterSceneSkyLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// class ASkyLight*               Light                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterSceneSkyLight(const struct FName& sceneLightName, class ASkyLight* Light)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterSceneSkyLight");

	UFrontendUtils_RegisterSceneSkyLight_Params params;
	params.sceneLightName = sceneLightName;
	params.Light = Light;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterScenePointLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// class APointLight*             Light                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterScenePointLight(const struct FName& sceneLightName, class APointLight* Light)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterScenePointLight");

	UFrontendUtils_RegisterScenePointLight_Params params;
	params.sceneLightName = sceneLightName;
	params.Light = Light;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterSceneMatChangeableMesh
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   meshName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  Mesh                           (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterSceneMatChangeableMesh(const struct FName& meshName, class AActor* Mesh)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterSceneMatChangeableMesh");

	UFrontendUtils_RegisterSceneMatChangeableMesh_Params params;
	params.meshName = meshName;
	params.Mesh = Mesh;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   sceneLightName                 (Parm, ZeroConstructor, IsPlainOldData)
// class ADirectionalLight*       Light                          (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterSceneDirectionalLight(const struct FName& sceneLightName, class ADirectionalLight* Light)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterSceneDirectionalLight");

	UFrontendUtils_RegisterSceneDirectionalLight_Params params;
	params.sceneLightName = sceneLightName;
	params.Light = Light;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.RegisterSceneCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   SceneCameraName                (Parm, ZeroConstructor, IsPlainOldData)
// class ACameraActor*            SceneCamera                    (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::RegisterSceneCamera(const struct FName& SceneCameraName, class ACameraActor* SceneCamera)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.RegisterSceneCamera");

	UFrontendUtils_RegisterSceneCamera_Params params;
	params.SceneCameraName = SceneCameraName;
	params.SceneCamera = SceneCamera;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.PopAllPushedUI
// (Final, Native, Public, BlueprintCallable)

void UFrontendUtils::PopAllPushedUI()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.PopAllPushedUI");

	UFrontendUtils_PopAllPushedUI_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered
// (Native, Public, BlueprintCallable)

void UFrontendUtils::OnAllSceneCamerasRegistered()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.OnAllSceneCamerasRegistered");

	UFrontendUtils_OnAllSceneCamerasRegistered_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.IsPushedPanel
// (Final, Native, Public, HasOutParms, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ManagerName                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrontendUtils::IsPushedPanel(const struct FName& ManagerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.IsPushedPanel");

	UFrontendUtils_IsPushedPanel_Params params;
	params.ManagerName = ManagerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.HideAllOtherPanelExceptOwnThisWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWidget*                 Widget                         (ConstParm, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool                           Hide                           (Parm, ZeroConstructor, IsPlainOldData)

void UFrontendUtils::HideAllOtherPanelExceptOwnThisWidget(class UWidget* Widget, bool Hide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.HideAllOtherPanelExceptOwnThisWidget");

	UFrontendUtils_HideAllOtherPanelExceptOwnThisWidget_Params params;
	params.Widget = Widget;
	params.Hide = Hide;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.FrontendUtils.GlobalUIEventDispatcher_GetDelegateIsBound
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 DelegateNum                    (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UFrontendUtils::GlobalUIEventDispatcher_GetDelegateIsBound(const struct FString& DelegateNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GlobalUIEventDispatcher_GetDelegateIsBound");

	UFrontendUtils_GlobalUIEventDispatcher_GetDelegateIsBound_Params params;
	params.DelegateNum = DelegateNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetUIStackTopSrcTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFrontendUtils::GetUIStackTopSrcTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetUIStackTopSrcTag");

	UFrontendUtils_GetUIStackTopSrcTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetUIStackTopDstTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFrontendUtils::GetUIStackTopDstTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetUIStackTopDstTag");

	UFrontendUtils_GetUIStackTopDstTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetUIStackTop
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UFrontendUtils::GetUIStackTop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetUIStackTop");

	UFrontendUtils_GetUIStackTop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetSceneMatChangeableMeshByIdx
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   meshName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class AActor* UFrontendUtils::GetSceneMatChangeableMeshByIdx(const struct FName& meshName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetSceneMatChangeableMeshByIdx");

	UFrontendUtils_GetSceneMatChangeableMeshByIdx_Params params;
	params.meshName = meshName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetPushedUICount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UFrontendUtils::GetPushedUICount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetPushedUICount");

	UFrontendUtils_GetPushedUICount_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UFrontendUtils::GetOwningFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetOwningFrontendHUD");

	UFrontendUtils_GetOwningFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetGlobalUIEventDispatcher
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UFrontendUtils::GetGlobalUIEventDispatcher()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetGlobalUIEventDispatcher");

	UFrontendUtils_GetGlobalUIEventDispatcher_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   ContainerName                  (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEWidgetContainer*     ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UUAEWidgetContainer* UFrontendUtils::GetGlobalUIContainer(const struct FName& ContainerName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetGlobalUIContainer");

	UFrontendUtils_GetGlobalUIContainer_Params params;
	params.ContainerName = ContainerName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.GetCurrentSceneCamera
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ACameraActor*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class ACameraActor* UFrontendUtils::GetCurrentSceneCamera()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.GetCurrentSceneCamera");

	UFrontendUtils_GetCurrentSceneCamera_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function UnrealArchExt.FrontendUtils.ClearLobbyAsset
// (Final, Native, Public, BlueprintCallable)

void UFrontendUtils::ClearLobbyAsset()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.FrontendUtils.ClearLobbyAsset");

	UFrontendUtils_ClearLobbyAsset_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.RemoveWidgetInternal
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UUAEUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::RemoveWidgetInternal(class UUAEUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.RemoveWidgetInternal");

	UUAEWidgetContainer_RemoveWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.RemoveWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::RemoveWidget(class UUAEUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.RemoveWidget");

	UUAEWidgetContainer_RemoveWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.AddWidgetInternal
// (Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UUAEUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::AddWidgetInternal(class UUAEUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.AddWidgetInternal");

	UUAEWidgetContainer_AddWidgetInternal_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function UnrealArchExt.UAEWidgetContainer.AddWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UUAEUserWidget*          Widget                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData)

void UUAEWidgetContainer::AddWidget(class UUAEUserWidget* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function UnrealArchExt.UAEWidgetContainer.AddWidget");

	UUAEWidgetContainer_AddWidget_Params params;
	params.Widget = Widget;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

