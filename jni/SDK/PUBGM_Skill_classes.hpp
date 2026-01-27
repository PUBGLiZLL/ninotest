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

// Class Skill.UTSkillBaseWidget
// 0x0018 (0x00D8 - 0x00C0)
class UUTSkillBaseWidget : public UActorComponent
{
public:
	struct FString                                     WidgetDescription;                                        // 0x00C0(0x000C) (ZeroConstructor)
	class APawn*                                       BuffOwnerPawn;                                            // 0x00CC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class AActor*                                      BuffTargetActor;                                          // 0x00D0(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00D4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillBaseWidget");
		return pStaticClass;
	}

};


// Class Skill.UTSkillEffect
// 0x0010 (0x00E8 - 0x00D8)
class UUTSkillEffect : public UUTSkillBaseWidget
{
public:
	float                                              fAPScale;                                                 // 0x00D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x00DC(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00E4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillEffect");
		return pStaticClass;
	}


	void UpdateAction(float DeltaSeconds);
	void UndoAction();
	void DoHurtAppearance(class APawn* Victim);
	bool DoAction();
};


// Class Skill.UTSkillAction
// 0x0018 (0x0100 - 0x00E8)
class UUTSkillAction : public UUTSkillEffect
{
public:
	unsigned char                                      UnknownData00[0x18];                                      // 0x00E8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillAction");
		return pStaticClass;
	}


	void UpdateAction(float DeltaSeconds);
	void UndoAction();
	void Reset();
	bool RealDoAction();
	bool JudgeNeedPhaseWait();
	bool DoAction();
};


// Class Skill.UTSkill
// 0x00E0 (0x0398 - 0x02B8)
class AUTSkill : public AActor
{
public:
	struct FString                                     SkillName;                                                // 0x02B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SkillDescription;                                         // 0x02C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     SkillDetailDes;                                           // 0x02D0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bMeleeSkill;                                              // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bNeedAutonomousClientSimulate;                            // 0x02DD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bClearInputCache;                                         // 0x02DE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x02DF(0x0001) MISSED OFFSET
	struct FUTSkillCreateData                          BaseData;                                                 // 0x02E0(0x002C) (Edit, BlueprintVisible)
	class UTexture2D*                                  SkillIcon;                                                // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UTexture2D*                                  SkillVehicleIcon;                                         // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     SkillVehicleName;                                         // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               NegativeSkill;                                            // 0x0320(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ShouldShowTargetPrompt;                                   // 0x0321(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               ChangePawnStatus;                                         // 0x0322(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0323(0x0001) MISSED OFFSET
	TWeakObjectPtr<class APawn>                        OwnerPawn;                                                // 0x0324(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class UUTSkillManagerComponent>     OwnerSkillManager;                                        // 0x032C(0x0008) (ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData)
	TWeakObjectPtr<class AActor>                       LastSpawnedActor;                                         // 0x0334(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	TWeakObjectPtr<class APawn>                        LastSpawnedPawn;                                          // 0x033C(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2C];                                      // 0x0344(0x002C) MISSED OFFSET
	float                                              PhasePercentage;                                          // 0x0370(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FString>                             ParentFolderPath;                                         // 0x0374(0x000C) (ZeroConstructor)
	int64_t                                            LastEditBluePrintTime;                                    // 0x0380(0x0008) (ZeroConstructor, IsPlainOldData)
	int                                                CurComponentNameIndex;                                    // 0x0388(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               IsSkillEnabled;                                           // 0x038C(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0xB];                                       // 0x038D(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkill");
		return pStaticClass;
	}


	void SetSkillPhasePercentage(float Percentage);
	bool OnEvent(TEnumAsByte<EUTSkillEventType> TheEventType);
	float GetSkillPhasePercentage();
	class UUTSkillPhase* GetSkillPhase(int PhaseIndex);
	void DoSkillCoolDown();
	bool CanBePlayed(bool bShowErrorMsg);
};


// Class Skill.UTSkillCondition
// 0x0008 (0x00E0 - 0x00D8)
class UUTSkillCondition : public UUTSkillBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillCondition");
		return pStaticClass;
	}


	bool IsTargetOK(class APawn* Target);
	bool IsOK();
};


// Class Skill.UTSkillEventEffectMapForEditor
// 0x0020 (0x00F8 - 0x00D8)
class UUTSkillEventEffectMapForEditor : public UUTSkillBaseWidget
{
public:
	class UUTSkillEffect*                              SkillEffect;                                              // 0x00D8(0x0004) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FSkillConditionWarpper>              Conditions;                                               // 0x00DC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FSkillConditionWarpper>              TargetConditions;                                         // 0x00E8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00F4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillEventEffectMapForEditor");
		return pStaticClass;
	}

};


// Class Skill.UTSkillInterface
// 0x0000 (0x0020 - 0x0020)
class UUTSkillInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillInterface");
		return pStaticClass;
	}


	void TriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void HandleSkillStart(int SkillID, bool CalledFromRep);
	void HandleSkillEnd(int SkillID, EUTSkillStopReason Reason, bool CalledFromRep);
};


// Class Skill.UTSkillManagerComponent
// 0x00F0 (0x01B0 - 0x00C0)
class UUTSkillManagerComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x00C0(0x000C) UNKNOWN PROPERTY: ArrayProperty Skill.UTSkillManagerComponent.SkillArchetypes
	TArray<int>                                        SkillInitIndices;                                         // 0x00CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<class AUTSkill*>                            Skills;                                                   // 0x00D8(0x000C) (ZeroConstructor, Transient)
	class AActor*                                      Target;                                                   // 0x00E4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<class APawn*>                               RepTargets;                                               // 0x00E8(0x000C) (Net, ZeroConstructor)
	struct FUTSkillSynData                             SkillSynData;                                             // 0x00F4(0x000C) (BlueprintVisible, Net)
	struct FScriptMulticastDelegate                    OnSkillHit;                                               // 0x0100(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnSkillCast;                                              // 0x010C(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0118(0x0008) MISSED OFFSET
	struct FUTSkillHitInfo                             SkillHitInfo;                                             // 0x0120(0x0028) (Net)
	struct FUTSkillHitEnvInfo                          SkillHitEnvInfo;                                          // 0x0148(0x0028)
	TArray<struct FString>                             MutexMontageGroupBeenPlayed;                              // 0x0170(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x14];                                      // 0x017C(0x0014) MISSED OFFSET
	struct FString                                     LastESkillTargetDesc;                                     // 0x0190(0x000C) (ZeroConstructor)
	int                                                SkillSynRandomSeed;                                       // 0x019C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FRandomStream                               SkillSynRandStream;                                       // 0x01A0(0x0008)
	int                                                SkillSynRandomSeedExpireCount;                            // 0x01A8(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x4];                                       // 0x01AC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillManagerComponent");
		return pStaticClass;
	}


	bool TraceTarget(const struct FVector& StartTrace, const struct FVector& EndTrace, EUTPickerTargetType TargetType, float Radius, class APawn** TargetActor);
	void SwitchSkill(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void StopSkill(int SkillID, EUTSkillStopReason StopReason);
	bool ShouldTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	void SetCurSkill(int SkillIndex);
	void ServerTriggerEvent(int SkillID, TEnumAsByte<EUTSkillEventType> EventType);
	bool ServerStartSkill(int SkillID, bool bAutoCast);
	void ServerNotifyRandomSeed(int Seed);
	void RepSkillSynData();
	void RepSkillHitInfo();
	int RandRangeSyn(int StartIndex, int EndIndex);
	bool PreCheckNewSkill(int SkillID);
	void PlayHurtSkillEffect(const struct FUTSkillHitInfo& TheSkillHitInfo);
	static bool OnSameTeam(class AActor* A, class AActor* B);
	void OnRep_SkillHitInfo();
	bool IsReadyToCastSkill(int SkillID);
	bool IsCastingSkill();
	void InitSkillSystem(bool isDedicateServer);
	class AUTSkill* GetSkillByName(const struct FString& SkillName);
	class AUTSkill* GetSkill(int SkillID);
	class UUTSkillPhase* GetCurSkillPhase();
	class AUTSkill* GetCurSkill();
	void ClearSkill();
	bool CheckNewSkill(int SkillID);
	void CheckAutoSkill();
};


// Class Skill.UTSkillPhase
// 0x00B0 (0x0170 - 0x00C0)
class UUTSkillPhase : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	struct FString                                     PhaseDescription;                                         // 0x00C8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bPhaseEnabled;                                            // 0x00D4(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x00D8(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x20];                                      // 0x00E0(0x0020) MISSED OFFSET
	struct FUTSkillPhaseCreateData                     BaseData;                                                 // 0x0100(0x0054) (Edit)
	unsigned char                                      UnknownData03[0x14];                                      // 0x0154(0x0014) MISSED OFFSET
	class UUTSkillPicker*                              InEffectPickerOnAction;                                   // 0x0168(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData04[0x4];                                       // 0x016C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillPhase");
		return pStaticClass;
	}


	bool TryJumpToPhase(int PhaseID);
	void StopPhase();
	void StartPhase();
	void RepeatPhase();
	bool PlaySkillHurtEffect(class APawn* Victim);
	bool PlaySkillHurtAppearances(class APawn* Victim);
	void PickTargets();
	bool OnEvent(TEnumAsByte<EUTSkillEventType> TheEventType);
	bool OnCustomEvent(TEnumAsByte<EUTSkillEventType> TheEventType);
	float GetChargePhaseRate();
	bool ForceStopPhase();
	bool ClearAttachments();
};


// Class Skill.UTSkillPicker
// 0x0038 (0x0110 - 0x00D8)
class UUTSkillPicker : public UUTSkillBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET
	TWeakObjectPtr<class AUTSkill>                     OwnerSkill;                                               // 0x00E0(0x0008) (ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00E8(0x000C) MISSED OFFSET
	TArray<struct FUTSkillPickedTarget>                PickedResultTargets;                                      // 0x00F4(0x000C) (ZeroConstructor, Transient)
	TArray<TWeakObjectPtr<class AActor>>               IgnoreTargets;                                            // 0x0100(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x4];                                       // 0x010C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillPicker");
		return pStaticClass;
	}

};


// Class Skill.UTSkillLocationPicker
// 0x0008 (0x00E0 - 0x00D8)
class UUTSkillLocationPicker : public UUTSkillBaseWidget
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillLocationPicker");
		return pStaticClass;
	}

};


// Class Skill.UTSkillEvent
// 0x0004 (0x0020 - 0x001C)
class UUTSkillEvent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Skill.UTSkillEvent");
		return pStaticClass;
	}

};


}

