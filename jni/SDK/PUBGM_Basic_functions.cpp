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

// Function Basic.ItemHandleBase.SetAssociation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        Association                    (Parm)

void UItemHandleBase::SetAssociation(const struct FName& Name, const struct FItemAssociation& Association)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.SetAssociation");

	UItemHandleBase_SetAssociation_Params params;
	params.Name = Name;
	params.Association = Association;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.RemoveAssociation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)

void UItemHandleBase::RemoveAssociation(const struct FName& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.RemoveAssociation");

	UItemHandleBase_RemoveAssociation_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.Init
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDefineID           InDefineID                     (Parm)

void UItemHandleBase::Init(const struct FItemDefineID& InDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.Init");

	UItemHandleBase_Init_Params params;
	params.InDefineID = InDefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.ItemHandleBase.GetDefineID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemDefineID UItemHandleBase::GetDefineID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetDefineID");

	UItemHandleBase_GetDefineID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationMap
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TMap<struct FName, struct FItemAssociation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TMap<struct FName, struct FItemAssociation> UItemHandleBase::GetAssociationMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationMap");

	UItemHandleBase_GetAssociationMap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationListByTargetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int                            Type                           (Parm, ZeroConstructor, IsPlainOldData)
// TArray<struct FItemAssociation> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemAssociation> UItemHandleBase::GetAssociationListByTargetType(int Type)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationListByTargetType");

	UItemHandleBase_GetAssociationListByTargetType_Params params;
	params.Type = Type;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociationByTargetDefineID
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FItemDefineID           TargetDefineID                 (Parm)
// struct FItemAssociation        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemAssociation UItemHandleBase::GetAssociationByTargetDefineID(const struct FItemDefineID& TargetDefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociationByTargetDefineID");

	UItemHandleBase_GetAssociationByTargetDefineID_Params params;
	params.TargetDefineID = TargetDefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.GetAssociation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        ReturnValue                    (Parm, OutParm, ReturnParm)

struct FItemAssociation UItemHandleBase::GetAssociation(const struct FName& Name)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.GetAssociation");

	UItemHandleBase_GetAssociation_Params params;
	params.Name = Name;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemHandleBase.AddAssociation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   Name                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FItemAssociation        Association                    (Parm)

void UItemHandleBase::AddAssociation(const struct FName& Name, const struct FItemAssociation& Association)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemHandleBase.AddAssociation");

	UItemHandleBase_AddAssociation_Params params;
	params.Name = Name;
	params.Association = Association;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BattleItemHandleBase.HandleUse
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBattleItemUseTarget    Target                         (Parm)
// EBattleItemUseReason           Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleUse(const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleUse");

	UBattleItemHandleBase_HandleUse_Params params;
	params.Target = Target;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandlePickup
// (Native, Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class UItemContainerInterface> ItemContainer                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// struct FBattleItemPickupInfo   PickupInfo                     (Parm)
// EBattleItemPickupReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandlePickup");

	UBattleItemHandleBase_HandlePickup_Params params;
	params.ItemContainer = ItemContainer;
	params.PickupInfo = PickupInfo;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleEnable
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bEnable                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleEnable(bool bEnable)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleEnable");

	UBattleItemHandleBase_HandleEnable_Params params;
	params.bEnable = bEnable;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleDrop
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            InCount                        (Parm, ZeroConstructor, IsPlainOldData)
// EBattleItemDropReason          Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleDrop(int InCount, EBattleItemDropReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleDrop");

	UBattleItemHandleBase_HandleDrop_Params params;
	params.InCount = InCount;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.HandleDisuse
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// EBattleItemDisuseReason        Reason                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UBattleItemHandleBase::HandleDisuse(EBattleItemDisuseReason Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.HandleDisuse");

	UBattleItemHandleBase_HandleDisuse_Params params;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.GetWorldInternal
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UWorld*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UWorld* UBattleItemHandleBase::GetWorldInternal()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.GetWorldInternal");

	UBattleItemHandleBase_GetWorldInternal_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BattleItemHandleBase.ExtractItemData
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FBattleItemData         ReturnValue                    (Parm, OutParm, ReturnParm)

struct FBattleItemData UBattleItemHandleBase::ExtractItemData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BattleItemHandleBase.ExtractItemData");

	UBattleItemHandleBase_ExtractItemData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetWeatherTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UUAEGameInstance::GetWeatherTime()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherTime");

	UUAEGameInstance_GetWeatherTime_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetWeatherID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameInstance::GetWeatherID()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetWeatherID");

	UUAEGameInstance_GetWeatherID_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetDeviceLevel
// (Native, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UUAEGameInstance::GetDeviceLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetDeviceLevel");

	UUAEGameInstance_GetDeviceLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAEGameInstance.GetAssociatedFrontendHUD
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFrontendHUD*            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UFrontendHUD* UUAEGameInstance::GetAssociatedFrontendHUD()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAEGameInstance.GetAssociatedFrontendHUD");

	UUAEGameInstance_GetAssociatedFrontendHUD_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.UpdateRegisteredModifyAbleAttr
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FAttrRegisterItem       AttrRegistItem                 (ConstParm, Parm, OutParm, ReferenceParm)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::UpdateRegisteredModifyAbleAttr(const struct FAttrRegisterItem& AttrRegistItem)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.UpdateRegisteredModifyAbleAttr");

	UAttrModifyComponent_UpdateRegisteredModifyAbleAttr_Params params;
	params.AttrRegistItem = AttrRegistItem;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.RegisterModifyAbleAttr
// (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
// TArray<struct FAttrRegisterItem> AttrRegists                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           bSetAttrByOrigin               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::RegisterModifyAbleAttr(TArray<struct FAttrRegisterItem> AttrRegists, bool bSetAttrByOrigin)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.RegisterModifyAbleAttr");

	UAttrModifyComponent_RegisterModifyAbleAttr_Params params;
	params.AttrRegists = AttrRegists;
	params.bSetAttrByOrigin = bSetAttrByOrigin;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.OnRep_DynamicModifierList
// (Final, Native, Private)

void UAttrModifyComponent::OnRep_DynamicModifierList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_DynamicModifierList");

	UAttrModifyComponent_OnRep_DynamicModifierList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList
// (Final, Native, Private)

void UAttrModifyComponent::OnRep_AttrModifyStateList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_AttrModifyStateList");

	UAttrModifyComponent_OnRep_AttrModifyStateList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.OnRep_AttrModifyGroupStateList
// (Final, Native, Private)

void UAttrModifyComponent::OnRep_AttrModifyGroupStateList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.OnRep_AttrModifyGroupStateList");

	UAttrModifyComponent_OnRep_AttrModifyGroupStateList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// TArray<struct FAttrAffected>   AffectedAttrS                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UAttrModifyComponent::OnAttrModifiedEvent__DelegateSignature(TArray<struct FAttrAffected> AffectedAttrS)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.AttrModifyComponent.OnAttrModifiedEvent__DelegateSignature");

	UAttrModifyComponent_OnAttrModifiedEvent__DelegateSignature_Params params;
	params.AffectedAttrS = AffectedAttrS;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyComponent.EnableAttrModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrModifyItemName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::EnableAttrModifier(const struct FString& AttrModifyItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.EnableAttrModifier");

	UAttrModifyComponent_EnableAttrModifier_Params params;
	params.AttrModifyItemName = AttrModifyItemName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.EnableAllAttrModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::EnableAllAttrModifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.EnableAllAttrModifier");

	UAttrModifyComponent_EnableAllAttrModifier_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableModifierToActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                  TargetActor                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableModifierToActor(class AActor* TargetActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableModifierToActor");

	UAttrModifyComponent_DisableModifierToActor_Params params;
	params.TargetActor = TargetActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAttrModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrModifyItemName             (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAttrModifier(const struct FString& AttrModifyItemName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAttrModifier");

	UAttrModifyComponent_DisableAttrModifier_Params params;
	params.AttrModifyItemName = AttrModifyItemName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyComponent.DisableAllAttrModifier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UAttrModifyComponent::DisableAllAttrModifier()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyComponent.DisableAllAttrModifier");

	UAttrModifyComponent_DisableAllAttrModifier_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.SetAttrValue
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          NewVal                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyInterface::SetAttrValue(const struct FString& AttrName, float NewVal, int Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.SetAttrValue");

	UAttrModifyInterface_SetAttrValue_Params params;
	params.AttrName = AttrName;
	params.NewVal = NewVal;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.RegisterModifiedAttributes
// (Native, Public, BlueprintCallable)

void UAttrModifyInterface::RegisterModifiedAttributes()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.RegisterModifiedAttributes");

	UAttrModifyInterface_RegisterModifiedAttributes_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class AActor*>          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class AActor*> UAttrModifyInterface::GetAttrModifyRelevantActors()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrModifyRelevantActors");

	UAttrModifyInterface_GetAttrModifyRelevantActors_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttrModifyComponent
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAttrModifyComponent*    ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class UAttrModifyComponent* UAttrModifyInterface::GetAttrModifyComponent()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttrModifyComponent");

	UAttrModifyInterface_GetAttrModifyComponent_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.GetAttributeValue
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttrModifyInterface::GetAttributeValue(const struct FString& AttrName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.GetAttributeValue");

	UAttrModifyInterface_GetAttributeValue_Params params;
	params.AttrName = AttrName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.AttrModifyInterface.AddAttrValue
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 AttrName                       (Parm, ZeroConstructor)
// float                          AddVal                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (Parm, ZeroConstructor, IsPlainOldData)

void UAttrModifyInterface::AddAttrValue(const struct FString& AttrName, float AddVal, int Reason)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.AttrModifyInterface.AddAttrValue");

	UAttrModifyInterface_AddAttrValue_Params params;
	params.AttrName = AttrName;
	params.AddVal = AddVal;
	params.Reason = Reason;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.BPClassManager.GetUClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int                            KeyIndex                       (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetUClass(int KeyIndex)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetUClass");

	UBPClassManager_GetUClass_Params params;
	params.KeyIndex = KeyIndex;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.GetBPClassOverrideByName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 ClassTagName                   (Parm, ZeroConstructor)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetBPClassOverrideByName(const struct FString& ClassTagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetBPClassOverrideByName");

	UBPClassManager_GetBPClassOverrideByName_Params params;
	params.ClassTagName = ClassTagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.GetBPClassOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                  InNativeClass                  (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPClassManager::GetBPClassOverride(class UClass* InNativeClass)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.GetBPClassOverride");

	UBPClassManager_GetBPClassOverride_Params params;
	params.InNativeClass = InNativeClass;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPClassManager.Get
// (Final, Native, Static, Public)
// Parameters:
// class UBPClassManager*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPClassManager* UBPClassManager::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPClassManager.Get");

	UBPClassManager_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetOwningObject
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* UItemContainerInterface::GetOwningObject()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetOwningObject");

	UItemContainerInterface_GetOwningObject_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemHandleListByDefineID
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// TArray<class UItemHandleBase*> ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<class UItemHandleBase*> UItemContainerInterface::GetItemHandleListByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemHandleListByDefineID");

	UItemContainerInterface_GetItemHandleListByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemHandleByDefineID
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FItemDefineID           DefineID                       (Parm)
// class UItemHandleBase*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UItemHandleBase* UItemContainerInterface::GetItemHandleByDefineID(const struct FItemDefineID& DefineID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemHandleByDefineID");

	UItemContainerInterface_GetItemHandleByDefineID_Params params;
	params.DefineID = DefineID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.ItemContainerInterface.GetItemDefineIDList
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<struct FItemDefineID>   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

TArray<struct FItemDefineID> UItemContainerInterface::GetItemDefineIDList()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.ItemContainerInterface.GetItemDefineIDList");

	UItemContainerInterface_GetItemDefineIDList_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.PackTool.CookResBySelection
// (Final, Native, Public, BlueprintCallable)

void UPackTool::CookResBySelection()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.PackTool.CookResBySelection");

	UPackTool_CookResBySelection_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuff.GetBuffPassPercentage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float USTBaseBuff::GetBuffPassPercentage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuff.GetBuffPassPercentage");

	USTBaseBuff_GetBuffPassPercentage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.SyncInvincibleData
// (Native, Public)
// Parameters:
// float                          TotalTime                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffCarrierInterface::SyncInvincibleData(float TotalTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.SyncInvincibleData");

	USTBaseBuffCarrierInterface_SyncInvincibleData_Params params;
	params.TotalTime = TotalTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffCarrierInterface.SetBuffExpiry
// (Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirySecondsFromNow           (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::SetBuffExpiry(const struct FName& BuffName, float ExpirySecondsFromNow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.SetBuffExpiry");

	USTBaseBuffCarrierInterface_SetBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.ExpirySecondsFromNow = ExpirySecondsFromNow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.RemoveBuff
// (Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.RemoveBuff");

	USTBaseBuffCarrierInterface_RemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.IsSameTeamWithFirstPC
// (Native, Public)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::IsSameTeamWithFirstPC()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.IsSameTeamWithFirstPC");

	USTBaseBuffCarrierInterface_IsSameTeamWithFirstPC_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.HasBuff
// (Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::HasBuff(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.HasBuff");

	USTBaseBuffCarrierInterface_HasBuff_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.GetBuffByName
// (Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class USTBaseBuff*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBaseBuff* USTBaseBuffCarrierInterface::GetBuffByName(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.GetBuffByName");

	USTBaseBuffCarrierInterface_GetBuffByName_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuffLayer
// (Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            layerNum                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::AddBuffLayer(const struct FName& BuffName, int layerNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuffLayer");

	USTBaseBuffCarrierInterface_AddBuffLayer_Params params;
	params.BuffName = BuffName;
	params.layerNum = layerNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuffExpiry
// (Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirySeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffCarrierInterface::AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuffExpiry");

	USTBaseBuffCarrierInterface_AddBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.ExpirySeconds = ExpirySeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffCarrierInterface.AddBuff
// (Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             SkillActor                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffCarrierInterface::AddBuff(const struct FName& BuffName, class AController* SkillActor, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffCarrierInterface.AddBuff");

	USTBaseBuffCarrierInterface_AddBuff_Params params;
	params.BuffName = BuffName;
	params.SkillActor = SkillActor;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.SetBuffExpiry
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirySeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::SetBuffExpiry(const struct FName& BuffName, float ExpirySeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.SetBuffExpiry");

	USTBaseBuffSystemComponent_SetBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.ExpirySeconds = ExpirySeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.ResetForDeath
// (Final, Native, Public)

void USTBaseBuffSystemComponent::ResetForDeath()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ResetForDeath");

	USTBaseBuffSystemComponent_ResetForDeath_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.RemoveBuffWithCauser
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             pCauser                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::RemoveBuffWithCauser(const struct FName& BuffName, bool RemoveLayerOnly, class AController* pCauser)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RemoveBuffWithCauser");

	USTBaseBuffSystemComponent_RemoveBuffWithCauser_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.pCauser = pCauser;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.RemoveBuffByID
// (Final, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             pCauser                        (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::RemoveBuffByID(int BuffID, bool RemoveLayerOnly, class AController* pCauser, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RemoveBuffByID");

	USTBaseBuffSystemComponent_RemoveBuffByID_Params params;
	params.BuffID = BuffID;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.pCauser = pCauser;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.RemoveBuff
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.RemoveBuff");

	USTBaseBuffSystemComponent_RemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.IsBufferMutexed
// (Final, Native, Public)
// Parameters:
// struct FName                   NewBuffName                    (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::IsBufferMutexed(const struct FName& NewBuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.IsBufferMutexed");

	USTBaseBuffSystemComponent_IsBufferMutexed_Params params;
	params.NewBuffName = NewBuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.InitModifier
// (Final, Native, Public)
// Parameters:
// class APawn*                   TempPawn                       (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::InitModifier(class APawn* TempPawn)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.InitModifier");

	USTBaseBuffSystemComponent_InitModifier_Params params;
	params.TempPawn = TempPawn;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.HasBuff
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::HasBuff(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.HasBuff");

	USTBaseBuffSystemComponent_HasBuff_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffName
// (Final, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// struct FName                   ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

struct FName USTBaseBuffSystemComponent::GetBuffName(int BuffID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffName");

	USTBaseBuffSystemComponent_GetBuffName_Params params;
	params.BuffID = BuffID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffID
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffSystemComponent::GetBuffID(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffID");

	USTBaseBuffSystemComponent_GetBuffID_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.GetBuffByName
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class USTBaseBuff*             ReturnValue                    (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData)

class USTBaseBuff* USTBaseBuffSystemComponent::GetBuffByName(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.GetBuffByName");

	USTBaseBuffSystemComponent_GetBuffByName_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.ClientSimulateRemoveBuff
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientSimulateRemoveBuff");

	USTBaseBuffSystemComponent_ClientSimulateRemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientSimulateAddBuff
// (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientSimulateAddBuff");

	USTBaseBuffSystemComponent_ClientSimulateAddBuff_Params params;
	params.BuffName = BuffName;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateRemoveBuff
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           RemoveLayerOnly                (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientMulticastSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateRemoveBuff");

	USTBaseBuffSystemComponent_ClientMulticastSimulateRemoveBuff_Params params;
	params.BuffName = BuffName;
	params.RemoveLayerOnly = RemoveLayerOnly;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateAddBuff
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientMulticastSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientMulticastSimulateAddBuff");

	USTBaseBuffSystemComponent_ClientMulticastSimulateAddBuff_Params params;
	params.BuffName = BuffName;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClientMulticastSetBuffExpiry
// (Net, NetReliable, Native, Event, NetMulticast, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          LeftSecondsAfterNow            (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClientMulticastSetBuffExpiry(const struct FName& BuffName, float LeftSecondsAfterNow)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClientMulticastSetBuffExpiry");

	USTBaseBuffSystemComponent_ClientMulticastSetBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.LeftSecondsAfterNow = LeftSecondsAfterNow;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.ClearBuff
// (Final, Native, Public)
// Parameters:
// bool                           bDebuff                        (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bGainBuff                      (Parm, ZeroConstructor, IsPlainOldData)

void USTBaseBuffSystemComponent::ClearBuff(bool bDebuff, bool bGainBuff)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.ClearBuff");

	USTBaseBuffSystemComponent_ClearBuff_Params params;
	params.bDebuff = bDebuff;
	params.bGainBuff = bGainBuff;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.CheckBuffStatus
// (Final, Native, Public, HasOutParms)
// Parameters:
// class UClass*                  Status                         (Parm, ZeroConstructor, IsPlainOldData)
// bool                           Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::CheckBuffStatus(class UClass* Status, bool* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.CheckBuffStatus");

	USTBaseBuffSystemComponent_CheckBuffStatus_Params params;
	params.Status = Status;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;

	return params.ReturnValue;
}


// DelegateFunction Basic.STBaseBuffSystemComponent.BuffDetached__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FName                   BuffName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USTBaseBuffSystemComponent::BuffDetached__DelegateSignature(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBaseBuffSystemComponent.BuffDetached__DelegateSignature");

	USTBaseBuffSystemComponent_BuffDetached__DelegateSignature_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// DelegateFunction Basic.STBaseBuffSystemComponent.BuffAttached__DelegateSignature
// (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
// struct FName                   BuffName                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)

void USTBaseBuffSystemComponent::BuffAttached__DelegateSignature(const struct FName& BuffName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("DelegateFunction Basic.STBaseBuffSystemComponent.BuffAttached__DelegateSignature");

	USTBaseBuffSystemComponent_BuffAttached__DelegateSignature_Params params;
	params.BuffName = BuffName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.STBaseBuffSystemComponent.AddBuffLayer
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            layerNum                       (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::AddBuffLayer(const struct FName& BuffName, int layerNum)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuffLayer");

	USTBaseBuffSystemComponent_AddBuffLayer_Params params;
	params.BuffName = BuffName;
	params.layerNum = layerNum;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.AddBuffExpiry
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// float                          ExpirySeconds                  (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool USTBaseBuffSystemComponent::AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuffExpiry");

	USTBaseBuffSystemComponent_AddBuffExpiry_Params params;
	params.BuffName = BuffName;
	params.ExpirySeconds = ExpirySeconds;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.AddBuffByID
// (Final, Native, Public)
// Parameters:
// int                            BuffID                         (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffSystemComponent::AddBuffByID(int BuffID, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuffByID");

	USTBaseBuffSystemComponent_AddBuffByID_Params params;
	params.BuffID = BuffID;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.STBaseBuffSystemComponent.AddBuff
// (Final, Native, Public)
// Parameters:
// struct FName                   BuffName                       (Parm, ZeroConstructor, IsPlainOldData)
// class AController*             BuffCauser                     (Parm, ZeroConstructor, IsPlainOldData)
// int                            LayerCount                     (Parm, ZeroConstructor, IsPlainOldData)
// class AActor*                  BuffApplierActor               (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int USTBaseBuffSystemComponent::AddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.STBaseBuffSystemComponent.AddBuff");

	USTBaseBuffSystemComponent_AddBuff_Params params;
	params.BuffName = BuffName;
	params.BuffCauser = BuffCauser;
	params.LayerCount = LayerCount;
	params.BuffApplierActor = BuffApplierActor;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetPath
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UBPTable::GetPath(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetPath");

	UBPTable_GetPath_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.BPTable.GetClass
// (Final, Native, Public)
// Parameters:
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UBPTable::GetClass(int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.BPTable.GetClass");

	UBPTable_GetClass_Params params;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.InitTableData
// (Native, Event, Public, BlueprintEvent)

void UUAELoadedClassManager::InitTableData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitTableData");

	UUAELoadedClassManager_InitTableData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.InitBPTableMap
// (Event, Public, BlueprintEvent)

void UUAELoadedClassManager::InitBPTableMap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.InitBPTableMap");

	UUAELoadedClassManager_InitBPTableMap_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.Init
// (Final, Native, Public, BlueprintCallable)

void UUAELoadedClassManager::Init()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.Init");

	UUAELoadedClassManager_Init_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAELoadedClassManager.GetPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UUAELoadedClassManager::GetPath(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetPath");

	UUAELoadedClassManager_GetPath_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.GetClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// int                            ID                             (Parm, ZeroConstructor, IsPlainOldData)
// class UClass*                  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UClass* UUAELoadedClassManager::GetClass(const struct FString& BPTableName, int ID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.GetClass");

	UUAELoadedClassManager_GetClass_Params params;
	params.BPTableName = BPTableName;
	params.ID = ID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.Get
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UUAELoadedClassManager*  ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAELoadedClassManager* UUAELoadedClassManager::Get()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.Get");

	UUAELoadedClassManager_Get_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.CreateAndAddBPTable
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FString                 BPTableName                    (Parm, ZeroConstructor)
// class UBPTable*                ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UBPTable* UUAELoadedClassManager::CreateAndAddBPTable(const struct FString& BPTableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.CreateAndAddBPTable");

	UUAELoadedClassManager_CreateAndAddBPTable_Params params;
	params.BPTableName = BPTableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function Basic.UAELoadedClassManager.ClearAllData
// (Final, Native, Public, BlueprintCallable)

void UUAELoadedClassManager::ClearAllData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAELoadedClassManager.ClearAllData");

	UUAELoadedClassManager_ClearAllData_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAETableManager.ReleaseTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TableName                      (Parm, ZeroConstructor, IsPlainOldData)

void UUAETableManager::ReleaseTable(const struct FName& TableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.ReleaseTable");

	UUAETableManager_ReleaseTable_Params params;
	params.TableName = TableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function Basic.UAETableManager.GetTablePtr
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FName                   TableName                      (Parm, ZeroConstructor, IsPlainOldData)
// class UUAEDataTable*           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UUAEDataTable* UUAETableManager::GetTablePtr(const struct FName& TableName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Basic.UAETableManager.GetTablePtr");

	UUAETableManager_GetTablePtr_Params params;
	params.TableName = TableName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

