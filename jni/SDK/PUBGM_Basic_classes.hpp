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

// Class Basic.UAENetActor
// 0x0010 (0x02C8 - 0x02B8)
class AUAENetActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x02B8(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetActor");
		return pStaticClass;
	}

};


// Class Basic.ItemHandleBase
// 0x006C (0x0088 - 0x001C)
class UItemHandleBase : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	int                                                MaxCount;                                                 // 0x0020(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUnique;                                                  // 0x0024(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bStackable;                                               // 0x0025(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0026(0x0002) MISSED OFFSET
	TMap<struct FName, struct FItemAssociation>        AssociationMap;                                           // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0064(0x0004) MISSED OFFSET
	struct FItemDefineID                               DefineID;                                                 // 0x0068(0x0018)
	unsigned char                                      UnknownData03[0x8];                                       // 0x0080(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemHandleBase");
		return pStaticClass;
	}


	void SetAssociation(const struct FName& Name, const struct FItemAssociation& Association);
	void RemoveAssociation(const struct FName& Name);
	void Init(const struct FItemDefineID& InDefineID);
	struct FItemDefineID GetDefineID();
	TMap<struct FName, struct FItemAssociation> GetAssociationMap();
	TArray<struct FItemAssociation> GetAssociationListByTargetType(int Type);
	struct FItemAssociation GetAssociationByTargetDefineID(const struct FItemDefineID& TargetDefineID);
	struct FItemAssociation GetAssociation(const struct FName& Name);
	void AddAssociation(const struct FName& Name, const struct FItemAssociation& Association);
};


// Class Basic.BattleItemHandleBase
// 0x0018 (0x00A0 - 0x0088)
class UBattleItemHandleBase : public UItemHandleBase
{
public:
	TArray<struct FBattleItemAdditionalData>           AdditionalData;                                           // 0x0088(0x000C) (BlueprintVisible, ZeroConstructor)
	float                                              UnitWeight;                                               // 0x0094(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bEquippable;                                              // 0x0098(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bConsumable;                                              // 0x0099(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAutoEquipAndDrop;                                        // 0x009A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x009B(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BattleItemHandleBase");
		return pStaticClass;
	}


	bool HandleUse(const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	bool HandlePickup(const TScriptInterface<class UItemContainerInterface>& ItemContainer, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	bool HandleEnable(bool bEnable);
	bool HandleDrop(int InCount, EBattleItemDropReason Reason);
	bool HandleDisuse(EBattleItemDisuseReason Reason);
	class UWorld* GetWorldInternal();
	struct FBattleItemData ExtractItemData();
};


// Class Basic.STBaseBuffStatusType
// 0x0004 (0x0020 - 0x001C)
class USTBaseBuffStatusType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffStatusType");
		return pStaticClass;
	}

};


// Class Basic.UAEGameInstance
// 0x00C0 (0x0320 - 0x0260)
class UUAEGameInstance : public UGameInstance
{
public:
	struct FClientBaseInfo                             ClientBaseInfo;                                           // 0x0260(0x00A0)
	unsigned char                                      UnknownData00[0x18];                                      // 0x0300(0x0018) MISSED OFFSET
	class UFrontendHUD*                                AssociatedFrontendHUD;                                    // 0x0318(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x031C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEGameInstance");
		return pStaticClass;
	}


	float GetWeatherTime();
	int GetWeatherID();
	int GetDeviceLevel();
	class UFrontendHUD* GetAssociatedFrontendHUD();
};


// Class Basic.AttrModifyComponent
// 0x00A0 (0x0160 - 0x00C0)
class UAttrModifyComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	int                                                AttrGroup;                                                // 0x00C8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FAttrModifyItem>                     ConfigAttrModifyList;                                     // 0x00CC(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FAttrModifyGroupItem>                ConfigAttrModifyGroupList;                                // 0x00D8(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x00E4(0x003C) MISSED OFFSET
	TArray<int8_t>                                     AttrModifyStateList;                                      // 0x0120(0x000C) (Net, ZeroConstructor, Transient)
	TArray<int8_t>                                     AttrModifyGroupStateList;                                 // 0x012C(0x000C) (Net, ZeroConstructor, Transient)
	TArray<struct FAttrModifyItem>                     DynamicModifierRepList;                                   // 0x0138(0x000C) (Net, ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0144(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.AttrModifyComponent");
		return pStaticClass;
	}


	bool UpdateRegisteredModifyAbleAttr(const struct FAttrRegisterItem& AttrRegistItem);
	bool RegisterModifyAbleAttr(TArray<struct FAttrRegisterItem> AttrRegists, bool bSetAttrByOrigin);
	void OnRep_DynamicModifierList();
	void OnRep_AttrModifyStateList();
	void OnRep_AttrModifyGroupStateList();
	void OnAttrModifiedEvent__DelegateSignature(TArray<struct FAttrAffected> AffectedAttrS);
	bool EnableAttrModifier(const struct FString& AttrModifyItemName);
	bool EnableAllAttrModifier();
	bool DisableModifierToActor(class AActor* TargetActor);
	bool DisableAttrModifier(const struct FString& AttrModifyItemName);
	bool DisableAllAttrModifier();
};


// Class Basic.AttrModifyInterface
// 0x0000 (0x0020 - 0x0020)
class UAttrModifyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.AttrModifyInterface");
		return pStaticClass;
	}


	void SetAttrValue(const struct FString& AttrName, float NewVal, int Reason);
	void RegisterModifiedAttributes();
	TArray<class AActor*> GetAttrModifyRelevantActors();
	class UAttrModifyComponent* GetAttrModifyComponent();
	float GetAttributeValue(const struct FString& AttrName);
	void AddAttrValue(const struct FString& AttrName, float AddVal, int Reason);
};


// Class Basic.BPClassManager
// 0x0090 (0x00B0 - 0x0020)
class UBPClassManager : public UDataAsset
{
public:
	TArray<struct FBPClassItem>                        BPClassList;                                              // 0x0020(0x000C) (Edit, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x3C];                                      // 0x002C(0x003C) UNKNOWN PROPERTY: MapProperty Basic.BPClassManager.BPClassLookUp
	unsigned char                                      UnknownData01[0x3C];                                      // 0x0068(0x003C) UNKNOWN PROPERTY: MapProperty Basic.BPClassManager.BPClassNameLookUp
	struct FString                                     BPClassManagerPath;                                       // 0x00A4(0x000C) (ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BPClassManager");
		return pStaticClass;
	}


	class UClass* GetUClass(int KeyIndex);
	class UClass* GetBPClassOverrideByName(const struct FString& ClassTagName);
	class UClass* GetBPClassOverride(class UClass* InNativeClass);
	static class UBPClassManager* Get();
};


// Class Basic.DataTableManagerUtils
// 0x0004 (0x0020 - 0x001C)
class UDataTableManagerUtils : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.DataTableManagerUtils");
		return pStaticClass;
	}

};


// Class Basic.ItemContainerInterface
// 0x0000 (0x0020 - 0x0020)
class UItemContainerInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemContainerInterface");
		return pStaticClass;
	}


	class UObject* GetOwningObject();
	TArray<class UItemHandleBase*> GetItemHandleListByDefineID(const struct FItemDefineID& DefineID);
	class UItemHandleBase* GetItemHandleByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FItemDefineID> GetItemDefineIDList();
};


// Class Basic.ItemFactoryInterface
// 0x0000 (0x0020 - 0x0020)
class UItemFactoryInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.ItemFactoryInterface");
		return pStaticClass;
	}

};


// Class Basic.NetRelevancyGroup
// 0x0024 (0x0040 - 0x001C)
class UNetRelevancyGroup : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<class UUAENetConnection*>                   Connections;                                              // 0x0020(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x14];                                      // 0x002C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.NetRelevancyGroup");
		return pStaticClass;
	}

};


// Class Basic.OwnerRelevancyDependencyInterface
// 0x0000 (0x0020 - 0x0020)
class UOwnerRelevancyDependencyInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.OwnerRelevancyDependencyInterface");
		return pStaticClass;
	}

};


// Class Basic.PackTool
// 0x000C (0x0028 - 0x001C)
class UPackTool : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.PackTool");
		return pStaticClass;
	}


	void CookResBySelection();
};


// Class Basic.STBaseBuff
// 0x00AC (0x00C8 - 0x001C)
class USTBaseBuff : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	struct FString                                     DisplayName;                                              // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Message;                                                  // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Icon;                                                     // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  SoundData;                                                // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsDeBuff;                                                 // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IgnoreMagicalImmunity;                                    // 0x0049(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               Layerable;                                                // 0x004A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedDetachAndAttachForReplaceExit;                        // 0x004B(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedDetachAndAttachForAddLayer;                           // 0x004C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ReplaceExsist;                                            // 0x004D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               StaysOnDeath;                                             // 0x004E(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bAllowOtherPawnRefreshBuff;                               // 0x004F(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerMax;                                                 // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                InitialLayerCount;                                        // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                LayerCount;                                               // 0x0058(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	float                                              ValidityTime;                                             // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Internal;                                                 // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<class UUTSkillCondition*>                   BuffConditions;                                           // 0x0064(0x000C) (Edit, BlueprintVisible, ExportObject, ZeroConstructor)
	float                                              Expiry;                                                   // 0x0070(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FStatusChange>                       StatusChanges;                                            // 0x0074(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               NeedSimulateToClientMulticast;                            // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               NeedSimulateToClient;                                     // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<ESimulateAddBuffRole>                  SimulateAddBuffRole;                                      // 0x0082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0083(0x0001) MISSED OFFSET
	TArray<struct FName>                               MutexBuffers;                                             // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBuffActionItem>                     BuffActions;                                              // 0x0090(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBuffEventActionItem>                EventBuffActions;                                         // 0x009C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              fADScale;                                                 // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              fAPScale;                                                 // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsAlwaysExists;                                           // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00B1(0x0003) MISSED OFFSET
	class AController*                                 CauserPawnController;                                     // 0x00B4(0x0004) (ZeroConstructor, IsPlainOldData)
	class APawn*                                       Target;                                                   // 0x00B8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x8];                                       // 0x00BC(0x0008) MISSED OFFSET
	class AActor*                                      BuffApplier;                                              // 0x00C4(0x0004) (ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuff");
		return pStaticClass;
	}


	float GetBuffPassPercentage();
};


// Class Basic.STBaseBuffCarrierInterface
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffCarrierInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffCarrierInterface");
		return pStaticClass;
	}


	void SyncInvincibleData(float TotalTime);
	bool SetBuffExpiry(const struct FName& BuffName, float ExpirySecondsFromNow);
	bool RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	bool IsSameTeamWithFirstPC();
	bool HasBuff(const struct FName& BuffName);
	class USTBaseBuff* GetBuffByName(const struct FName& BuffName);
	bool AddBuffLayer(const struct FName& BuffName, int layerNum);
	bool AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	int AddBuff(const struct FName& BuffName, class AController* SkillActor, int LayerCount, class AActor* BuffApplierActor);
};


// Class Basic.STBaseBuffConditionBase
// 0x0008 (0x00C8 - 0x00C0)
class USTBaseBuffConditionBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffConditionBase");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType
// 0x0004 (0x0020 - 0x001C)
class USTBaseBuffEventType : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_LayerMax
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_LayerMax : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_LayerMax");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_LayerSpecific
// 0x0008 (0x0028 - 0x0020)
class USTBaseBuffEventType_LayerSpecific : public USTBaseBuffEventType
{
public:
	int                                                LayerCountParam;                                          // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_LayerSpecific");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_Removed
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_Removed : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_Removed");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_TakeBuffDamage
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_TakeBuffDamage : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_TakeBuffDamage");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_OnAttach
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_OnAttach : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_OnAttach");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffEventType_ConditionNotMatch
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffEventType_ConditionNotMatch : public USTBaseBuffEventType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffEventType_ConditionNotMatch");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffList
// 0x000C (0x0028 - 0x001C)
class USTBaseBuffList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffList");
		return pStaticClass;
	}

};


// Class Basic.BuffManagerPathClass
// 0x0010 (0x02C8 - 0x02B8)
class ABuffManagerPathClass : public AActor
{
public:
	struct FString                                     BuffManagerBlueprintPath;                                 // 0x02B8(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BuffManagerPathClass");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffManager
// 0x0024 (0x0040 - 0x001C)
class USTBaseBuffManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<class UClass*>                              BuffListTemplates;                                        // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0034(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffManager");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffStatusType_ImmuneDebuff
// 0x0000 (0x0020 - 0x0020)
class USTBaseBuffStatusType_ImmuneDebuff : public USTBaseBuffStatusType
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffStatusType_ImmuneDebuff");
		return pStaticClass;
	}

};


// Class Basic.STBaseBuffSystemComponent
// 0x0030 (0x00F0 - 0x00C0)
class USTBaseBuffSystemComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnBuffDetached;                                           // 0x00C8(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	TArray<struct FBuffInstancedItem>                  AllBuffs;                                                 // 0x00D4(0x000C) (ZeroConstructor)
	TWeakObjectPtr<class APawn>                        PawnOwner;                                                // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x00E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.STBaseBuffSystemComponent");
		return pStaticClass;
	}


	bool SetBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	void ResetForDeath();
	bool RemoveBuffWithCauser(const struct FName& BuffName, bool RemoveLayerOnly, class AController* pCauser);
	bool RemoveBuffByID(int BuffID, bool RemoveLayerOnly, class AController* pCauser, class AActor* BuffApplierActor);
	bool RemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	bool IsBufferMutexed(const struct FName& NewBuffName);
	void InitModifier(class APawn* TempPawn);
	bool HasBuff(const struct FName& BuffName);
	struct FName GetBuffName(int BuffID);
	int GetBuffID(const struct FName& BuffName);
	class USTBaseBuff* GetBuffByName(const struct FName& BuffName);
	void ClientSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void ClientSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	void ClientMulticastSimulateRemoveBuff(const struct FName& BuffName, bool RemoveLayerOnly, class AActor* BuffApplierActor);
	void ClientMulticastSimulateAddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	void ClientMulticastSetBuffExpiry(const struct FName& BuffName, float LeftSecondsAfterNow);
	void ClearBuff(bool bDebuff, bool bGainBuff);
	bool CheckBuffStatus(class UClass* Status, bool* Value);
	void BuffDetached__DelegateSignature(const struct FName& BuffName);
	void BuffAttached__DelegateSignature(const struct FName& BuffName);
	bool AddBuffLayer(const struct FName& BuffName, int layerNum);
	bool AddBuffExpiry(const struct FName& BuffName, float ExpirySeconds);
	int AddBuffByID(int BuffID, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
	int AddBuff(const struct FName& BuffName, class AController* BuffCauser, int LayerCount, class AActor* BuffApplierActor);
};


// Class Basic.UAEAnimListComponentBase
// 0x0078 (0x0138 - 0x00C0)
class UUAEAnimListComponentBase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x00C0(0x0038) MISSED OFFSET
	TMap<int, struct FAnimListMapValueData>            AnimListMap;                                              // 0x00F8(0x0050) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0134(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEAnimListComponentBase");
		return pStaticClass;
	}

};


// Class Basic.UAEGameEngine
// 0x0040 (0x0CB0 - 0x0C70)
class UUAEGameEngine : public UGameEngine
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x0C70(0x000C) MISSED OFFSET
	class UBackendHUD*                                 AssociatedBackendHUD;                                     // 0x0C7C(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0C80(0x000C) MISSED OFFSET
	bool                                               bEnableAutoStat;                                          // 0x0C8C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0C8D(0x0003) MISSED OFFSET
	float                                              StatCollection_AvgTickDeltaThreshold;                     // 0x0C90(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_AvgTickDeltaThreshold;                           // 0x0C94(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_StartTime;                                       // 0x0C98(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x0C9C(0x0004) MISSED OFFSET
	float                                              AutoStat_Duration_Engine;                                 // 0x0CA0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              AutoStat_Duration_PhysX;                                  // 0x0CA4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0CA8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEGameEngine");
		return pStaticClass;
	}

};


// Class Basic.BPTable
// 0x004C (0x0068 - 0x001C)
class UBPTable : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TMap<int, struct FBPTableItem>                     BPTableItemMap;                                           // 0x0028(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0064(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.BPTable");
		return pStaticClass;
	}


	struct FString GetPath(int ID);
	class UClass* GetClass(int ID);
};


// Class Basic.UAELoadedClassManager
// 0x01AC (0x01C8 - 0x001C)
class UUAELoadedClassManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TMap<uint32_t, class UClass*>                      m_CookClass;                                              // 0x0028(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0064(0x0008) MISSED OFFSET
	TMap<int, struct FUAEResList>                      m_ResTableData;                                           // 0x006C(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, class UBPTable*>              BPTableMap;                                               // 0x00A8(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     LoadedClassManagerClassName;                              // 0x00E4(0x000C) (ZeroConstructor, Config)
	unsigned char                                      UnknownData02[0xD8];                                      // 0x00F0(0x00D8) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAELoadedClassManager");
		return pStaticClass;
	}


	void InitTableData();
	void InitBPTableMap();
	void Init();
	struct FString GetPath(const struct FString& BPTableName, int ID);
	class UClass* GetClass(const struct FString& BPTableName, int ID);
	static class UUAELoadedClassManager* Get();
	class UBPTable* CreateAndAddBPTable(const struct FString& BPTableName);
	void ClearAllData();
};


// Class Basic.UAEMeshComponent
// 0x0000 (0x0B60 - 0x0B60)
class UUAEMeshComponent : public USkeletalMeshComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAEMeshComponent");
		return pStaticClass;
	}

};


// Class Basic.UAENetConnection
// 0x0260 (0x29790 - 0x29530)
class UUAENetConnection : public UIpConnection
{
public:
	unsigned char                                      UnknownData00[0x188];                                     // 0x29530(0x0188) MISSED OFFSET
	float                                              MinRegionActorTickDelta;                                  // 0x296B8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              MaxRegionActorTickDelta;                                  // 0x296BC(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x28];                                      // 0x296C0(0x0028) MISSED OFFSET
	int                                                InitialHandshakeTimeoutNumThreshold;                      // 0x296E8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x296EC(0x0004) MISSED OFFSET
	int                                                ActorChannelProcessBunchErrorNumThreshold_Server_Global;  // 0x296F0(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_Global;  // 0x296F4(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	int                                                ActorChannelProcessBunchErrorNumThreshold_Client_PerActor;// 0x296F8(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3C];                                      // 0x296FC(0x003C) MISSED OFFSET
	bool                                               bEnableHTTPDNS;                                           // 0x29738(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x29739(0x0003) MISSED OFFSET
	struct FString                                     HTTPDNSServerAddr;                                        // 0x2973C(0x000C) (ZeroConstructor, Config)
	float                                              HTTPDNSResponseTimeout;                                   // 0x29748(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData05[0xC];                                       // 0x2974C(0x000C) MISSED OFFSET
	class UNetRelevancyGroup*                          RelevancyGroup;                                           // 0x29758(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRecreateSocketOnLost;                                    // 0x2975C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData06[0x33];                                      // 0x2975D(0x0033) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetConnection");
		return pStaticClass;
	}

};


// Class Basic.UAENetDriver
// 0x0018 (0x03E0 - 0x03C8)
class UUAENetDriver : public UIpNetDriver
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x03C8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAENetDriver");
		return pStaticClass;
	}

};


// Class Basic.UAETableManager
// 0x0064 (0x0080 - 0x001C)
class UUAETableManager : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET
	TArray<struct FString>                             InitalizedTables;                                         // 0x0028(0x000C) (ZeroConstructor, Config)
	TArray<class UUAEDataTable*>                       TableObjList;                                             // 0x0034(0x000C) (ZeroConstructor)
	TMap<struct FName, TWeakObjectPtr<class UUAEDataTable>> TableObjMap;                                              // 0x0040(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x007C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Basic.UAETableManager");
		return pStaticClass;
	}


	void ReleaseTable(const struct FName& TableName);
	class UUAEDataTable* GetTablePtr(const struct FName& TableName);
};


}

