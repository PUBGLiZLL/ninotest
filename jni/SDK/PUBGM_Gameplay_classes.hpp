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

// Class Gameplay.UAEGameMode
// 0x0E90 (0x11D0 - 0x0340)
class AUAEGameMode : public AGameMode
{
public:
	float                                              GridCheckSize;                                            // 0x0340(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeepCheckSize;                                            // 0x0344(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                MaxPlayerLimit;                                           // 0x0348(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableClimbing;                                          // 0x034C(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x034D(0x0003) MISSED OFFSET
	int                                                WeatherID;                                                // 0x0350(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     WeatherName;                                              // 0x0354(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                RoomMode;                                                 // 0x0360(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SeasonIdx;                                                // 0x0364(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	int                                                AirdropId;                                                // 0x0368(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              MeteorShowerRatio;                                        // 0x036C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTableName;                                            // 0x0370(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ItemClassPath;                                            // 0x037C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PickupBoxConfigClassPath;                                 // 0x0388(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     PickupBoxConfigDataTableName;                             // 0x0394(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VehicleTableName;                                         // 0x03A0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     VehicleClassPath;                                         // 0x03AC(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                GameType;                                                 // 0x03B8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, float>                        BattleCustomConfig;                                       // 0x03BC(0x0050) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                MaxAllowReplicatedCharacterCount;                         // 0x03F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                AINoRepTimeInReady;                                       // 0x03FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ObserverPlayerStateClass;                                 // 0x0400(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData)
	bool                                               bEnableDamage;                                            // 0x0404(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0405(0x0003) MISSED OFFSET
	float                                              NearDeathRestoredOriginHealth;                            // 0x0408(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              NearDeathDecreateBreathRate;                              // 0x040C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               NearDeathApplyCurveLayeredDeathInterval;                  // 0x0410(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0411(0x0003) MISSED OFFSET
	float                                              RescueOtherRestoreDuration;                               // 0x0414(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DeadTombBoxLifeSpan;                                      // 0x0418(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                DefaultPlayerBornPointID;                                 // 0x041C(0x0004) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UGroupSpotSceneComponent*>            ItemGroupComponents;                                      // 0x0420(0x000C) (ExportObject, ZeroConstructor)
	TArray<struct FIDIPDynamicBlock>                   IDIPDynamicBlocks;                                        // 0x042C(0x000C) (ZeroConstructor)
	TArray<class AActor*>                              DynamicBlockActors;                                       // 0x0438(0x000C) (ZeroConstructor, Transient)
	class AActor*                                      ChosenPlayerStartBuildingGroup;                           // 0x0444(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	TArray<struct FDynamicTriggerConfig>               DynamicTriggerConfigs;                                    // 0x0448(0x000C) (ZeroConstructor)
	TArray<class AActor*>                              DynamicTriggers;                                          // 0x0454(0x000C) (ZeroConstructor)
	int                                                IsGameModeFpp;                                            // 0x0460(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FDropdownSchemeData>                 DropdownSchemeArray;                                      // 0x0464(0x000C) (ZeroConstructor)
	struct FString                                     DelaySpawnActorPath;                                      // 0x0470(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData03[0xB04];                                     // 0x047C(0x0B04) MISSED OFFSET
	bool                                               bIsPreCreatingPlayerController;                           // 0x0F80(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x97];                                      // 0x0F81(0x0097) MISSED OFFSET
	float                                              OBInfoTimeStep;                                           // 0x1018(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1C];                                      // 0x101C(0x001C) MISSED OFFSET
	TArray<struct FAirDropBoxInOb>                     AirDropBoxInfoList;                                       // 0x1038(0x000C) (ZeroConstructor)
	TArray<uint32_t>                                   FiringPlayerList;                                         // 0x1044(0x000C) (ZeroConstructor)
	TArray<class AUAEPlayerController*>                ObserverControllerList;                                   // 0x1050(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData06[0x104];                                     // 0x105C(0x0104) MISSED OFFSET
	TArray<struct FAdvertisementActorConfig>           AdvConfigList;                                            // 0x1160(0x000C) (ZeroConstructor)
	TArray<class AUAEAdvertisementActor*>              AdvActorList;                                             // 0x116C(0x000C) (ZeroConstructor, Transient)
	bool                                               bEnablePlaneBanner;                                       // 0x1178(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x1179(0x0003) MISSED OFFSET
	struct FString                                     HttpPlaneBannerLeftImgPath;                               // 0x117C(0x000C) (ZeroConstructor)
	struct FString                                     HttpPlaneBannerRightImgPath;                              // 0x1188(0x000C) (ZeroConstructor)
	struct FCakeInfo                                   CakeInfo;                                                 // 0x1194(0x0018)
	TArray<struct FCharacterOverrideAttrData>          CharacterOverrideAttrs;                                   // 0x11AC(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData08[0x18];                                      // 0x11B8(0x0018) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEGameMode");
		return pStaticClass;
	}


	void SyncPlayerNames();
	void SyncNewCorpsData(TArray<struct FDSCorpsInfo> OutCorpsData);
	class APawn* SpawnUAEPawnFor(class AController* NewPlayer, const struct FTransform& Trans);
	void SoftKickPlayer(uint32_t PlayerKey, const struct FName& PlayerType, bool bSendFailure, const struct FString& FailureMessage);
	void SetPlayerOpenId(uint32_t InPlayerKey, const struct FString& InPlayerOpenID);
	struct FGameModeTeamBattleResultData RetrieveTeamBattleResultData(int TeamID);
	void RetrieveBattleData(struct FBattleData* OutBattleData);
	void RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot);
	void Rescue(class APawn* RescueWho, class APawn* Hero);
	void RegisterItemGroupSpotsByTag(const struct FName& Tag, class UGroupSpotSceneComponent* GroupSpotComponent);
	void RegisterItemGroupSpots(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RefreshWorldActiveRange();
	void RefreshWatchTeammates(class AUAEPlayerController* InController, int InTeamID);
	void RefreshPlayerNames(uint32_t InPlayerKey, const struct FString& InPlayerName, int TeamID, bool IsLogin);
	int RecoardAlivePlayerNum();
	class APlayerController* PreCreatePlayerController(uint32_t PlayerKey);
	void OnPlayerFiring(uint32_t InPlayerKey);
	void OnObserverLogout(class AUAEPlayerController* InController);
	void OnObserverLogin(class AUAEPlayerController* InController);
	void OnMsg(const struct FString& Msg);
	void OnAirDropBoxLanded(int boxId, const struct FVector& pos);
	void OnAirDropBoxEmpty(int boxId);
	void NotifyPlayerExit(uint32_t PlayerKey, const struct FName& PlayerType, bool bDestroyPlayerController, bool bDestroyCharacter, bool bSendFailure, const struct FString& FailureMessage);
	void NotifyPlayerAbleToExitSafely(uint32_t PlayerKey, const struct FName& PlayerType);
	void NotifyGameModeInit();
	void NotifyAIPlayerEnter(uint32_t PlayerKey);
	float ModifyDamage(float Damage, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AController* VictimController, class AActor* DamageCauser);
	void Killed(class AController* Killer, class AController* VictimPlayer, class APawn* VictimPawn, class UDamageType* DamageType);
	void InitWorldActiveRange();
	void InitGenerator();
	void InitDynamicTriggers();
	void InitDynamicBlocks();
	void InitAdvertisement();
	void HeartBeat();
	bool HasDynamicBlocks();
	void HandlePlayerPaintDecalResponse(uint32_t PlayerKey, const struct FName& PlayerType, int Result, int DecalId, int Count);
	void HandlePlayerGiftItemResponse(uint32_t PlayerKey, const struct FName& PlayerType, int Result, int GiftResID, int Count);
	void GotoNearDeath(class AController* DamageInstigator, class APawn* VictimPawn);
	int GetSurvivingTeamCount();
	int GetSurvivingCharacterCount();
	TArray<class AUAEPlayerState*> GetPlayerStateListWithTeamID(int TeamID, const struct FName& PlayerType);
	TArray<class AUAEPlayerController*> GetPlayerControllerListWithTeamID(int TeamID, const struct FName& PlayerType);
	void GetPlayerAndRealAiNum(int* OutPlayerNum, int* OutRealAiNum);
	TArray<class AUAEPlayerController*> GetObserverControllerList();
	class AUAEPlayerState* FindPlayerStateWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
	class AUAEPlayerController* FindPlayerControllerWithPlayerKey(uint32_t PlayerKey, const struct FName& PlayerType);
	void DestroyNoActiveWorldActor(struct FVector* Location, float* Radius);
	void DestroyCharacterForPlayerController(class APlayerController* PC);
	void DebugEnterFriendObserver(class AUAEPlayerController* InController);
	void CollectAllPlayerInfo(float DeltaSeconds);
	void ChangeName(class AController* Controller, const struct FString& NewName, bool bNameChange);
	void AddAirDropBox(int boxId, const struct FVector& pos);
};


// Class Gameplay.UAEGameState
// 0x0008 (0x0310 - 0x0308)
class AUAEGameState : public AGameState
{
public:
	unsigned char                                      UnknownData00[0x6];                                       // 0x0308(0x0006) MISSED OFFSET
	bool                                               IsSetItemMaxCount;                                        // 0x030E(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x030F(0x0001) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEGameState");
		return pStaticClass;
	}

};


// Class Gameplay.UAEPlayerState
// 0x0268 (0x0588 - 0x0320)
class AUAEPlayerState : public APlayerState
{
public:
	float                                              surviveTime;                                              // 0x0320(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              Pronetime;                                                // 0x0324(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0328(0x0008) MISSED OFFSET
	float                                              marchDistance;                                            // 0x0330(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              travelDistance;                                           // 0x0334(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DriveDistance;                                            // 0x0338(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                destroyVehicleNum;                                        // 0x033C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                rescueTimes;                                              // 0x0340(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                startToRescueTimes;                                       // 0x0344(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GVMemberID;                                               // 0x0348(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x034C(0x0004) MISSED OFFSET
	struct FName                                       PlayerType;                                               // 0x0350(0x0008) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsMonster;                                               // 0x0358(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x0359(0x0003) MISSED OFFSET
	uint32_t                                           PlayerKey;                                                // 0x035C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x10];                                      // 0x0360(0x0010) MISSED OFFSET
	uint64_t                                           UID;                                                      // 0x0370(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerUID;                                                // 0x0378(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                TeamID;                                                   // 0x0384(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                CampID;                                                   // 0x0388(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	int                                                PlayerBornPointID;                                        // 0x038C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Kills;                                                    // 0x0390(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x8];                                       // 0x0394(0x0008) MISSED OFFSET
	int                                                Assists;                                                  // 0x039C(0x0004) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x03A0(0x0004) MISSED OFFSET
	unsigned char                                      PlatformGender;                                           // 0x03A4(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsFireworksActOpen;                                      // 0x03A5(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x03A6(0x0002) MISSED OFFSET
	int                                                MatchLabel;                                               // 0x03A8(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	uint32_t                                           Killer;                                                   // 0x03AC(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     KillerName;                                               // 0x03B0(0x000C) (ZeroConstructor)
	int                                                KillerWeaponId;                                           // 0x03BC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              KillerDistance;                                           // 0x03C0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotNum;                                       // 0x03C4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum;                           // 0x03C8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HeadShotNum;                                              // 0x03CC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                HealTimes;                                                // 0x03D0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              DamageAmount;                                             // 0x03D4(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HealAmount;                                               // 0x03D8(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FString>                             KillFlow;                                                 // 0x03DC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData07[0xC];                                       // 0x03E8(0x000C) MISSED OFFSET
	TArray<struct FTLog_PickUpItemFlow>                TLog_PickUpItemFlowData;                                  // 0x03F4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FUseItemFlow>                        UseItemFlow;                                              // 0x0400(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FTLog_PropEquipUnequipFlow>          TLog_PropEquipUnequipFlowData;                            // 0x040C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	float                                              OutsideBlueCircleTime;                                    // 0x0418(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FVehicleDriveDisData>                VehicleDriveDisDataArray;                                 // 0x041C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	int                                                FirstOpenedAirDropBoxNum;                                 // 0x0428(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              HitEnemyHeadAmount;                                       // 0x042C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                GetPropsNumFromTeammates;                                 // 0x0430(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	int                                                SendPropsNumToTeammates;                                  // 0x0434(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FFlareGunReport                             FlareGunReport;                                           // 0x0438(0x0010)
	struct FVector                                     LandLocation;                                             // 0x0448(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FVector                                     DeadLocation;                                             // 0x0454(0x000C) (BlueprintVisible, BlueprintReadOnly, IsPlainOldData)
	struct FString                                     DeadDamangeType;                                          // 0x0460(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     DeadTimeStr;                                              // 0x046C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	unsigned char                                      UnknownData08[0x8];                                       // 0x0478(0x0008) MISSED OFFSET
	struct FEquipmentData                              EquipmentData;                                            // 0x0480(0x0050)
	unsigned char                                      UnknownData09[0x8];                                       // 0x04D0(0x0008) MISSED OFFSET
	bool                                               bIsGameTerminator;                                        // 0x04D8(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x04D9(0x0003) MISSED OFFSET
	int                                                GamePlayingTime;                                          // 0x04DC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x4];                                       // 0x04E0(0x0004) MISSED OFFSET
	int                                                TouchDownAreaID;                                          // 0x04E4(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                TouchDownLocTypeID;                                       // 0x04E8(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     TouchDownObjectName;                                      // 0x04EC(0x000C) (ZeroConstructor)
	TArray<struct FGameModePlayerTaskData>             CompletedTaskList;                                        // 0x04F8(0x000C) (ZeroConstructor)
	TArray<struct FReportCollection>                   SpecialCollectionList;                                    // 0x0504(0x000C) (ZeroConstructor)
	TArray<struct FWeaponDamageRecord>                 WeaponDamageRecordList;                                   // 0x0510(0x000C) (ZeroConstructor)
	TArray<int>                                        SecretAreaIDList;                                         // 0x051C(0x000C) (ZeroConstructor)
	TArray<struct FSpecialPickItemState>               CollectItemRecord;                                        // 0x0528(0x000C) (Net, ZeroConstructor)
	int                                                KillNumInVehicle;                                         // 0x0534(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalSprintDistance;                                      // 0x0538(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              TotalBeenDamageAmount;                                    // 0x053C(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              DestroyVehicleWheelNum;                                   // 0x0540(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                BreakDoorNum;                                             // 0x0544(0x0004) (ZeroConstructor, IsPlainOldData)
	TArray<struct FUseItemFlow>                        UseSpecificBulletFlow;                                    // 0x0548(0x000C) (ZeroConstructor)
	int                                                FollowState;                                              // 0x0554(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                InviteTimes;                                              // 0x0558(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                MemberIdInVoiceRoom;                                      // 0x055C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               PlayerVoiceEnable;                                        // 0x0560(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData12[0x27];                                      // 0x0561(0x0027) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEPlayerState");
		return pStaticClass;
	}


	void SetGVMemberIDServerCall(int memberID);
	void SetGVMemberID(int memberID);
	void ReportTaskExtInfo(int TaskID, const struct FString& ExtInfo);
	void ReportTaskData(int TaskID, int process);
	void ReportSpecialCollection(int ItemID, int Count);
	void ReportSecretAreaID(int SecretAreaID);
	void ReportLandLocType(int TouchDownLocType, const struct FString& TouchDownLocName);
	void ReportLandArea(int TouchDownArea);
	void OnReportSpecificBulletUsed(int ItemID, int Count);
	void OnRep_UID();
	void OnRep_PlayerKillsChange();
	void OnRep_MatchLabel();
	void OnRep_CollectItemRecord();
	void OnRep_CampID();
	bool IsSpecialPickItemCollectionCompleted(int ItemID);
	bool IsSpecialPickItem(int ItemID);
	uint32_t GetUserIDByMemberID(int memberID);
	struct FString GetUIDString();
	struct FGameModeTeammateBattleResultData GetTeammateBattleResultData();
	struct FGameModePlayerBattleResultData GetPlayerBattleResultData();
	void ChangeCollectItemRecord(int InItemID, bool InNewState);
};


// Class Gameplay.UAEPlayerController
// 0x0240 (0x0790 - 0x0550)
class AUAEPlayerController : public APlayerController
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0550(0x0010) MISSED OFFSET
	struct FName                                       PlayerType;                                               // 0x0560(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x0568(0x000C) (Net, ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x0574(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0578(0x000C) MISSED OFFSET
	int                                                TeamID;                                                   // 0x0584(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FVector                                     CharacterLocation;                                        // 0x0588(0x000C) (Net, IsPlainOldData)
	int                                                RoomMode;                                                 // 0x0594(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FWeatherInfo                                WeatherInfo;                                              // 0x0598(0x0014) (Net)
	int                                                PlayerStartID;                                            // 0x05AC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bUsedSimulation;                                          // 0x05B0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05B1(0x0003) MISSED OFFSET
	struct FPlayerNetStats                             NetStats;                                                 // 0x05B4(0x0030)
	unsigned char                                      UnknownData03[0x10];                                      // 0x05E4(0x0010) MISSED OFFSET
	TArray<struct FPlayerOBInfo>                       PlayerOBInfoList;                                         // 0x05F4(0x000C) (BlueprintVisible, Net, ZeroConstructor)
	bool                                               bIsGM;                                                    // 0x0600(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData04[0x1];                                       // 0x0601(0x0001) MISSED OFFSET
	bool                                               bIsTeammateEscaped;                                       // 0x0602(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	ECharacterGender                                   DefaultCharacterGender;                                   // 0x0603(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          // 0x0604(0x000C) (ZeroConstructor)
	TArray<struct FGameModePlayerItem>                 InitialWeaponAvatarList;                                  // 0x0610(0x000C) (ZeroConstructor)
	TMap<int, int>                                     WeaponAvatarItemList;                                     // 0x061C(0x0050) (ZeroConstructor)
	TArray<struct FGameModePlayerExpressionItem>       InitialExpressionItemList;                                // 0x0658(0x000C) (ZeroConstructor)
	TArray<struct FGameModePlayerTaskData>             InitialTaskDataList;                                      // 0x0664(0x000C) (ZeroConstructor)
	TArray<struct FSpecialPickItem>                    InitialSpecialPickItemList;                               // 0x0670(0x000C) (ZeroConstructor)
	int                                                AnchorPlatResID;                                          // 0x067C(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	int                                                AnchorPlatColorID;                                        // 0x0680(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x0684(0x0004) MISSED OFFSET
	int64_t                                            LastGameResultTime;                                       // 0x0688(0x0008) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsObserver;                                              // 0x0690(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpectating;                                            // 0x0691(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x0692(0x0002) MISSED OFFSET
	uint32_t                                           WatchPlayerKey;                                           // 0x0694(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsWatchEnd;                                              // 0x0698(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData07[0x3];                                       // 0x0699(0x0003) MISSED OFFSET
	TArray<struct FString>                             FriendObservers;                                          // 0x069C(0x000C) (Net, ZeroConstructor)
	unsigned char                                      UnknownData08[0x8];                                       // 0x06A8(0x0008) MISSED OFFSET
	bool                                               bIsSpectatingEnemy;                                       // 0x06B0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData09[0x3];                                       // 0x06B1(0x0003) MISSED OFFSET
	TWeakObjectPtr<class UUAEUserWidget>               InGameUIRoot;                                             // 0x06B4(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData10[0x3];                                       // 0x06BC(0x0003) MISSED OFFSET
	bool                                               bReconnected;                                             // 0x06BF(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x10];                                      // 0x06C0(0x0010) MISSED OFFSET
	struct FScriptMulticastDelegate                    PlayerControllerLostDelegate;                             // 0x06D0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerRecoveredDelegate;                        // 0x06DC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToReconnectDelegate;                 // 0x06E8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerReconnectedDelegate;                      // 0x06F4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerRespawnedDelegate;                        // 0x0700(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    PlayerControllerAboutToExitDelegate;                      // 0x070C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData12[0x78];                                      // 0x0718(0x0078) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEPlayerController");
		return pStaticClass;
	}


	void UpdatePlayerOBBattleInfo(const struct FString& UIDString, const struct FPlayerOBBattleInfo& NewBattleInfo);
	void TestLogout();
	void SetUsedSimulationCVar(bool Value);
	void SetPanels(TArray<class UUAEUserWidget*> panels);
	void ServerTestLogout();
	void ServerSetVoiceId(int VoiceID);
	void ServerKickSelf();
	void ServerGotoSpectating(class APawn* ViewTarget);
	void ServerExitGame();
	void ServerAcknowledgeReconnection_2(uint32_t Token);
	void ResetUsedSimulationCVar();
	void ReleaseInGameUI();
	void PrintStatistics();
	void PlayerStartIDReceived();
	void OnRep_WatchPlayerKey();
	void OnRep_UsedSimulation();
	void OnRep_PlayerOBInfoList();
	void OnRep_LastGameResultTime();
	void OnRep_IsSpectatingEnemy();
	void OnRep_IsSpectating();
	void OnRep_IsObserver();
	void OnRep_FriendObservers();
	void KickSelf();
	bool IsSpectator();
	bool IsRoomMode();
	bool IsPureSpectator();
	bool IsObserver();
	bool IsInSpectatingEnemy();
	bool IsInSpectating();
	bool IsFriendOrEnemySpectator();
	bool IsFriendObserver();
	bool IsDemoRecSpectator();
	bool IsDemoPlaySpectator();
	void InitWithPlayerParams(const struct FGameModePlayerParams& Params);
	void InitWeaponAvatarItems();
	void InitPlayerOBInfoList();
	void InitInGameUI();
	int GotoSpectating(int PlayerID);
	struct FString GetOBPlayerUIDString(const struct FPlayerOBInfo& PlayerOBInfo);
	uint32_t GetCurrentOBPlayerKey();
	int GetCurrentOBPlayerInfoIndex();
	void ExitGame();
	void ExhaustCPU();
	void ExecDSCommand(const struct FString& DSCommand);
	void ExcuteIntRecord(const struct FString& Key, int Count);
	void ExcuteIntCounterRecord(const struct FString& Key, int Count);
	void EnableInGameUI();
	void DumpNetActors();
	void DumpAllUI();
	void DumpAllObjects();
	void DumpAllActors();
	void DoCrash();
	void DisableInGameUI();
	void ClientShowTeammateEscapeNotice();
	void ClientInitPlayerOBInfoButton();
	void ClientBroadcastRespawnComplete();
	void ClientBroadcastReconnectionSuccessful();
	void ClientAcknowledgeReconnection_4(uint32_t Token);
	void CheckPlayerOBInfoButtonInit();
	bool CheckAcknowledgedPawn(class APawn* InPawn);
	void CastUIMsg(const struct FString& strMsg, const struct FString& module);
	void CallLuaTableFunction(const struct FString& TableName, const struct FString& FunctionName);
	void CallLuaGlobalFunction(const struct FString& FunctionName);
};


// Class Gameplay.ItemSceneComponent
// 0x0010 (0x02D0 - 0x02C0)
class UItemSceneComponent : public USceneComponent
{
public:
	bool                                               IsEditorNetCullDistance;                                  // 0x02C0(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02C1(0x0003) MISSED OFFSET
	float                                              NetCullDistance;                                          // 0x02C4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x02C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemSceneComponent");
		return pStaticClass;
	}

};


// Class Gameplay.UAECharacter
// 0x0080 (0x0630 - 0x05B0)
class AUAECharacter : public ACharacter
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x05B0(0x0008) MISSED OFFSET
	struct FName                                       PlayerType;                                               // 0x05B8(0x0008) (ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerName;                                               // 0x05C0(0x000C) (Net, ZeroConstructor)
	uint32_t                                           PlayerKey;                                                // 0x05CC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	struct FString                                     PlayerUID;                                                // 0x05D0(0x000C) (Net, ZeroConstructor)
	int                                                TeamID;                                                   // 0x05DC(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	bool                                               bTeamLeader;                                              // 0x05E0(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x05E1(0x0003) MISSED OFFSET
	int                                                CampID;                                                   // 0x05E4(0x0004) (Net, ZeroConstructor, IsPlainOldData)
	ECharacterGender                                   DefaultCharacterGender;                                   // 0x05E8(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x05E9(0x0003) MISSED OFFSET
	TArray<struct FGameModePlayerItem>                 InitialItemList;                                          // 0x05EC(0x000C) (ZeroConstructor)
	TArray<struct FGameModePlayerTaskData>             InitialTaskDataList;                                      // 0x05F8(0x000C) (ZeroConstructor)
	bool                                               bIsAI;                                                    // 0x0604(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               bIsMonster;                                               // 0x0605(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x12];                                      // 0x0606(0x0012) MISSED OFFSET
	bool                                               UseWholeBodyModel;                                        // 0x0618(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	bool                                               DefaultIsUseWholeBodyModel;                               // 0x0619(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x16];                                      // 0x061A(0x0016) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharacter");
		return pStaticClass;
	}


	void RegisterAsRegionObject();
	void OnRep_UseWholeModel();
	void OnRep_TeamID();
	void OnRep_PlayerName();
	void OnRep_PlayerKey();
	void OnRep_CampID();
	void NotifyPlayerActiveRegionsChanged(bool bEnter);
	struct FString GetPlayerKey();
	TArray<class UActorComponent*> GetNonSimulatedComponents_OnFighting();
	TArray<class UActorComponent*> GetNonSimulatedComponents_NonTeammates();
	TArray<class UActorComponent*> GetNonSimulatedComponents();
	TArray<class UActorComponent*> GetNonDedicatedComponents();
	void DeactiveCameraOnSimulation();
	void ClientAcknowledgeReconnection_3(uint32_t Token);
};


// Class Gameplay.UAEHouseActor
// 0x00A8 (0x0370 - 0x02C8)
class AUAEHouseActor : public AUAENetActor
{
public:
	float                                              WindowLoadDistanceSquared;                                // 0x02C8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquaredOnVeryLowDevice;                 // 0x02CC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	float                                              WindowLoadDistanceSquaredOnServer;                        // 0x02D0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TArray<struct FUAEWindowRepData>                   WindowList;                                               // 0x02D4(0x000C) (Net, ZeroConstructor)
	TMap<int, class UUAEWindowComponent*>              WindowComponents;                                         // 0x02E0(0x0050) (ExportObject, ZeroConstructor, Transient)
	bool                                               bEnableWindow;                                            // 0x031C(0x0001) (ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x53];                                      // 0x031D(0x0053) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEHouseActor");
		return pStaticClass;
	}


	void OnRep_WindowList();
	void BroadcastWindowRepDataUpdated(const struct FUAEWindowRepData& InRepData);
};


// Class Gameplay.UAEOBState
// 0x0000 (0x0320 - 0x0320)
class AUAEOBState : public APlayerState
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEOBState");
		return pStaticClass;
	}

};


// Class Gameplay.BackpackComponent
// 0x0110 (0x01D0 - 0x00C0)
class UBackpackComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C0(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    ItemListUpdatedDelegate;                                  // 0x00C4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SingleItemUpdatedDelegate;                                // 0x00D0(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    SingleItemDeleteDelegate;                                 // 0x00DC(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    CapacityUpdatedDelegate;                                  // 0x00E8(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationDelegate;                                    // 0x00F4(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperCountDelegate;                                    // 0x0100(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemOperationFailedDelegate;                              // 0x010C(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference, BlueprintAssignable)
	struct FScriptMulticastDelegate                    ItemUpdatedDelegate;                                      // 0x0118(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    ItemRemovedDelegate;                                      // 0x0124(0x000C) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, InstancedReference)
	TArray<struct FSpecialPickInfo>                    specialCountLimit;                                        // 0x0130(0x000C) (Net, ZeroConstructor)
	unsigned char                                      UnknownData01[0xC];                                       // 0x013C(0x000C) MISSED OFFSET
	struct FIncNetArray                                ItemListNet;                                              // 0x0148(0x0018) (Net)
	TArray<struct FBattleItemData>                     CachItemList;                                             // 0x0160(0x000C) (ZeroConstructor)
	TArray<class UItemHandleBase*>                     ItemHandleList;                                           // 0x016C(0x000C) (ZeroConstructor)
	TMap<struct FItemDefineID, class UItemHandleBase*> ItemHandleMap;                                            // 0x0178(0x0050) (ZeroConstructor)
	int                                                CapacityThreshold;                                        // 0x01B4(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              Capacity;                                                 // 0x01B8(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              OccupiedCapacity;                                         // 0x01BC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x10];                                      // 0x01C0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.BackpackComponent");
		return pStaticClass;
	}


	bool UseItem(const struct FItemDefineID& DefineID, const struct FBattleItemUseTarget& Target, EBattleItemUseReason Reason);
	float UpdateOccupiedCapacity();
	float UpdateCapacity();
	void UnequipItem(const struct FItemDefineID& DefineID);
	void TryMergeItemHandles(const struct FItemDefineID& DefineID);
	int TakeItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandleDrop);
	bool SwapItem(const struct FItemDefineID& DefineID1, const struct FItemDefineID& DefineID2);
	void ServerEnableItem(const struct FItemDefineID& DefineID, bool bUse);
	int ReturnItem(const struct FItemDefineID& DefineID, int Count, bool bCallHandlePickup);
	bool RemoveItemHandle(const struct FItemDefineID& DefineID);
	void ReceiveItemList();
	void ReceiveCapacity();
	bool PickupItem(const struct FItemDefineID& DefineID, const struct FBattleItemPickupInfo& PickupInfo, EBattleItemPickupReason Reason);
	void OnRep_specialCountLimit();
	void OnRep_ItemListNet();
	void OnRep_ItemList();
	void OnRep_Capacity();
	void NotifyItemUpdated(const struct FItemDefineID& DefineID);
	void NotifyItemRemoved(const struct FItemDefineID& DefineID);
	void NotifyItemListUpdated();
	void NotifyCapacityUpdated();
	class UBattleItemHandleBase* NewItemHandle(const struct FItemDefineID& DefineID);
	void ModifyItemHandleEquippingState(class UItemHandleBase* ItemHandle, bool bEquipping);
	void ModifyItemHandleCount(class UItemHandleBase* ItemHandle, int Count);
	struct FBattleItemData ItemNet2Data(const struct FNetArrayUnit& netItem);
	bool HasItemBySubType(int subType);
	bool HasItemByDefindIdRange(int LowValue, int HighValue);
	class UWorld* GetWorld_BP();
	struct FSpecialPickInfo GetSpecialItemNow(const struct FItemDefineID& DefineID);
	struct FSpecialPickInfo GetSpecialItemBefore(int itemResID);
	TArray<struct FBattleItemData> GetItemListByDefineID(const struct FItemDefineID& DefineID);
	TMap<struct FItemDefineID, class UItemHandleBase*> GetItemHandleMap();
	TArray<class UItemHandleBase*> GetItemHandleList();
	struct FBattleItemData GetItemByDefineID(const struct FItemDefineID& DefineID);
	struct FBattleItemFeatureData GetBattleItemFeatureDataByDefineID(const struct FItemDefineID& DefineID);
	TArray<struct FBattleItemData> GetAllItemList();
	void ForceNetUpdate();
	void EquipItem(const struct FItemDefineID& DefineID);
	bool DropItem(const struct FItemDefineID& DefineID, int Count, EBattleItemDropReason Reason);
	bool DisuseItem(const struct FItemDefineID& DefineID, EBattleItemDisuseReason Reason);
	class UBattleItemHandleBase* CreateItemHandleInternal(const struct FItemDefineID& DefineID);
	class UItemHandleBase* CreateItemHandle(const struct FItemDefineID& DefineID);
	int ConsumeItem(const struct FItemDefineID& DefineID, int Count);
	void ClientUpdateItemData(const struct FBattleItemData& InItemData);
	void ClientRemoveItemData(const struct FBattleItemData& InItemData);
	void ClientBroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, EBattleItemOperationFailedReason FailedReason);
	void ClientBroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, unsigned char Reason);
	int CheckCapacityForItem(const struct FItemDefineID& DefineID, int Count);
	bool CanDisuseToBackpack(const struct FItemDefineID& DefineID);
	void BroadcastItemOperCountDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, int Count);
	void BroadcastItemOperationFailedDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, EBattleItemOperationFailedReason FailedReason);
	void BroadcastItemOperationDelegate(const struct FItemDefineID& DefineID, EBattleItemOperationType operationType, unsigned char Reason);
	bool AddItemHandle(const struct FItemDefineID& DefineID, class UItemHandleBase* ItemHandle);
};


// Class Gameplay.ItemActorComponent
// 0x0000 (0x00C0 - 0x00C0)
class UItemActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemActorComponent");
		return pStaticClass;
	}

};


// Class Gameplay.BaseGeneratorComponent
// 0x00A8 (0x0168 - 0x00C0)
class UBaseGeneratorComponent : public UItemActorComponent
{
public:
	int                                                GenerateSpotCountPerTick;                                 // 0x00C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     ItemTableName;                                            // 0x00C4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class UUAEDataTable*                               ItemTable;                                                // 0x00D0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsWriteStatisticsToLog;                                   // 0x00D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00D5(0x0003) MISSED OFFSET
	int                                                MaxItemCount;                                             // 0x00D8(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00DC(0x0004) MISSED OFFSET
	TMap<TEnumAsByte<ESpotGroupType>, struct FGroupSpotComponentArray> AllGroupSpots;                                            // 0x00E0(0x0050) (ZeroConstructor)
	TArray<class USpotSceneComponent*>                 AllSpotsToTick;                                           // 0x011C(0x000C) (ExportObject, ZeroConstructor)
	TMap<int, struct FWorldTileSpotArray>              WorldTileSpots;                                           // 0x0128(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0164(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.BaseGeneratorComponent");
		return pStaticClass;
	}


	void RegisterWorldTileSpot(class USpotSceneComponent* Spot);
	void RegisterSpotComponentToTick(class USpotSceneComponent* SpotComponent);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void GeneratorWorldTileSpots(struct FWorldTileSpotArray* SpotArray);
	void GenerateSpots();
	void GenerateSpotOnTick();
	void CheckTileLevelsVisible();
};


// Class Gameplay.ConfigInterface
// 0x0000 (0x0020 - 0x0020)
class UConfigInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ConfigInterface");
		return pStaticClass;
	}

};


// Class Gameplay.GameModeConfigComponent
// 0x0008 (0x00C8 - 0x00C0)
class UGameModeConfigComponent : public UActorComponent
{
public:
	int                                                appleGrenadeCount;                                        // 0x00C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GameModeConfigComponent");
		return pStaticClass;
	}

};


// Class Gameplay.GameModeStatisticsComponent
// 0x0000 (0x00C0 - 0x00C0)
class UGameModeStatisticsComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GameModeStatisticsComponent");
		return pStaticClass;
	}

};


// Class Gameplay.GeneratorActorAIInterface
// 0x0000 (0x0020 - 0x0020)
class UGeneratorActorAIInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GeneratorActorAIInterface");
		return pStaticClass;
	}


	void RegisterAIPickupPoint(class UItemSpotSceneComponent* Spot, class AActor* PickUpActor);
};


// Class Gameplay.GeneratorActorInterface
// 0x0000 (0x0020 - 0x0020)
class UGeneratorActorInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GeneratorActorInterface");
		return pStaticClass;
	}


	void InitData(class UItemSpotSceneComponent* ItemSpotSceneComponent, int ItemCount, const struct FString& Value, const struct FString& Category, bool RepeatGenerateItem);
};


// Class Gameplay.GeneratorVehicleInterface
// 0x0000 (0x0020 - 0x0020)
class UGeneratorVehicleInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GeneratorVehicleInterface");
		return pStaticClass;
	}


	void SetSafeSpawn(bool ab_IsSafeSpawn);
	void InitVehicle(int FuelPercent, bool bEngineOn);
};


// Class Gameplay.GlobalConfigActor
// 0x0008 (0x02C0 - 0x02B8)
class AGlobalConfigActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B8(0x0004) MISSED OFFSET
	bool                                               bInitComponents;                                          // 0x02BC(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02BD(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GlobalConfigActor");
		return pStaticClass;
	}


	void Init();
};


// Class Gameplay.GroupSpotSceneComponent
// 0x0010 (0x02E0 - 0x02D0)
class UGroupSpotSceneComponent : public UItemSceneComponent
{
public:
	float                                              LastGenerateItemTime;                                     // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData)
	float                                              GenerateItemTimeCD;                                       // 0x02D4(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bPickup;                                                  // 0x02D8(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bRepeatGenerateItem;                                      // 0x02D9(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsValidGroup;                                            // 0x02DA(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x5];                                       // 0x02DB(0x0005) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.GroupSpotSceneComponent");
		return pStaticClass;
	}


	void SetGroupValid(bool Valid);
	bool IsValidGroup();
	int FindWorldCompositionID();
	void DoPickUp();
};


// Class Gameplay.ItemConfigActorComponent
// 0x0048 (0x0108 - 0x00C0)
class UItemConfigActorComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C0(0x0008) MISSED OFFSET
	TMap<int, struct FGroupTypeSceneComponents>        AllSpotGroups;                                            // 0x00C8(0x0050) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0104(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemConfigActorComponent");
		return pStaticClass;
	}


	void RegisterGroupSceneComponent(int GroupType, class USceneComponent* GroupSceneComponent);
	TArray<struct FItemSpawnClass> RandomItemSpawnClass(const struct FString& ItemValue, const struct FString& ItemCategory);
	TArray<class USceneComponent*> RandomGroupSceneComponents(int GroupType, int Persent);
	class USceneComponent* RandomGroupSceneComponent(TArray<class USceneComponent*> AllGroups);
	class UClass* LoadActorClass(const struct FString& Path);
	TArray<struct FItemSpawnClass> GetItemSpawnClass(const struct FItemSpawnData& Data);
};


// Class Gameplay.ItemGeneratorComponent
// 0x01E8 (0x0350 - 0x0168)
class UItemGeneratorComponent : public UBaseGeneratorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	TEnumAsByte<ESpotGroupType>                        BornIslandGroupType;                                      // 0x0170(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	bool                                               bStatisticsValid;                                         // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0172(0x0002) MISSED OFFSET
	struct FItemGenerateStatisticsData                 ItemStatisticsData;                                       // 0x0174(0x00C4)
	TArray<struct FSpotGroupProperty>                  SpotGroupPropertys;                                       // 0x0238(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TMap<TEnumAsByte<ESpotGroupType>, struct FSpotGroupProperty> SpotGroupPropertysDic;                                    // 0x0244(0x0050) (ZeroConstructor)
	struct FSpotGroupProperty                          DefaultSpotGroupProperty;                                 // 0x0280(0x0020)
	class UCurveFloat*                                 SpotRateCurve;                                            // 0x02A0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UCurveFloat*                                 ItemRateCurve;                                            // 0x02A4(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	TMap<struct FString, float>                        CategoryRates;                                            // 0x02A8(0x0050) (Edit, BlueprintVisible, ZeroConstructor)
	TMap<struct FString, struct FItemGenerateSpawnDataArray> ItemGenerateSpawnDatas;                                   // 0x02E4(0x0050) (ZeroConstructor)
	TArray<class AActor*>                              BornIslandItems;                                          // 0x0320(0x000C) (ZeroConstructor)
	TArray<class UItemGroupSpotSceneComponent*>        AllValidGroups;                                           // 0x032C(0x000C) (ExportObject, ZeroConstructor)
	bool                                               bIsGenerateBornIslandItems;                               // 0x0338(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGenerateMainlandItems;                                 // 0x0339(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsGenerateWorldTileItems;                                // 0x033A(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x5];                                       // 0x033B(0x0005) MISSED OFFSET
	struct FDateTime                                   GenerateBornIslandTime;                                   // 0x0340(0x0008)
	struct FDateTime                                   GenerateMainlandTime;                                     // 0x0348(0x0008)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemGeneratorComponent");
		return pStaticClass;
	}


	void WriteItemClassStatisticsDatas();
	void WriteGroupStatisticsDatas();
	void WriteBuildingStatisticsDatas();
	void WriteAllStatisticsDatasToLog();
	void WriteAllStatisticsDatas();
	void SetCatetoryRate(TMap<struct FString, float> Rates);
	void RegisterItemGenerateSpawnData(const struct FItemGenerateSpawnData& Data);
	void RegisterBornIslandItem(class AActor* Item);
	class UItemGroupSpotSceneComponent* RandomSingleGroup(const struct FSpotGroupProperty& GroupProperty, TArray<class UGroupSpotSceneComponent*>* Groups);
	struct FItemGenerateSpawnData RandomItemGenerateSpawnData(TArray<struct FItemGenerateSpawnData>* items);
	void RandomGroupsByType(const struct FSpotGroupProperty& GroupProperty);
	void RandomGroups();
	void RandomBornIslandGroups();
	void LoadItemGenerateTable();
	bool IsCatetoryEnabled();
	void InitCatetorys();
	struct FSpotGroupProperty GetSpotGroupPropertyByGroupType(TEnumAsByte<ESpotGroupType> SpotGroupType);
	bool GetRandomItemClassArray(bool RepeatGenerateItem, struct FString* Value, struct FString* Category, TArray<struct FItemGenerateSpawnClass>* Results);
	float GetCatetoryRate(const struct FString& Catetory);
	void GenerateSpotOnTick();
	void DeleteValidGroups();
	void DeleteBornIslandItems();
};


// Class Gameplay.ItemGroupSpotSceneComponent
// 0x0020 (0x0300 - 0x02E0)
class UItemGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:
	TArray<class UItemSpotSceneComponent*>             SpotsCacheCur;                                            // 0x02E0(0x000C) (ExportObject, ZeroConstructor)
	TArray<class UItemSpotSceneComponent*>             SpotsCacheAll;                                            // 0x02EC(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x02F8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemGroupSpotSceneComponent");
		return pStaticClass;
	}


	void SetGroupProperty(class UItemGeneratorComponent* Generator, const struct FSpotGroupProperty& Property);
	void RepeatSpots();
	void RepeatSingleSpot(class UItemSpotSceneComponent* Spot);
	void RandomSpotByType(TEnumAsByte<ESpotType> SpotType, const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* AllSpots);
	void RandomSingleSpot(const struct FSpotTypeProperty& Property, TArray<class UItemSpotSceneComponent*>* Spots);
	float RandomRepeatGenerateItemCD(const struct FSpotGroupProperty& GroupProperty);
};


// Class Gameplay.SpotSceneComponent
// 0x0020 (0x02F0 - 0x02D0)
class USpotSceneComponent : public UItemSceneComponent
{
public:
	int                                                WorldCompositionID;                                       // 0x02D0(0x0004) (ZeroConstructor, IsPlainOldData)
	bool                                               bRepeatGenerateItem;                                      // 0x02D4(0x0001) (ZeroConstructor, IsPlainOldData)
	bool                                               bIsSpotValid;                                             // 0x02D5(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x02D6(0x0002) MISSED OFFSET
	float                                              LineOffsetZ;                                              // 0x02D8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bRandomRotation;                                          // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	float                                              RandomRotationMin;                                        // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RandomRotationMax;                                        // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x8];                                       // 0x02E8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.SpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotValid(bool Valid);
	bool LineTraceSingle(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bIgnoreSelf, struct FHitResult* OutHit);
	bool IsSpotValid();
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	bool GenerateSpot();
	class AActor* GenerateActor(class UClass* ActorClass, ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod, struct FVector* ActorLocation, struct FRotator* ActorRotator);
};


// Class Gameplay.ItemSpotSceneComponent
// 0x0050 (0x0340 - 0x02F0)
class UItemSpotSceneComponent : public USpotSceneComponent
{
public:
	class UItemGeneratorComponent*                     ItemGenerator;                                            // 0x02F0(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TArray<struct FItemGenerateSpawnClass>             AllItems;                                                 // 0x02F4(0x000C) (ZeroConstructor)
	class UGroupSpotSceneComponent*                    GroupSpotSceneComponent;                                  // 0x0300(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	TMap<struct FString, int>                          CacheItemValeCategory;                                    // 0x0304(0x0050) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.ItemSpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotProperty(int CompositionID, TEnumAsByte<ESpotGroupType> GroupType, class UItemGeneratorComponent* Generator, const struct FSpotTypeProperty& Property, class UGroupSpotSceneComponent* Component, bool RepeatGenerateItem);
	void RepeatSpotProperty(const struct FSpotTypeProperty& Property);
	bool GenerateSpot();
	void GenerateItems(TArray<struct FItemGenerateSpawnClass>* AllItemClass);
	void DoPickUp(const struct FString& ItemValue, const struct FString& ItemCategory);
	int CountCacheItemValeCategory();
};


// Class Gameplay.SpotGeneratorStruct
// 0x0004 (0x0020 - 0x001C)
class USpotGeneratorStruct : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.SpotGeneratorStruct");
		return pStaticClass;
	}

};


// Class Gameplay.UAEAdvertisementActor
// 0x0028 (0x02E8 - 0x02C0)
class AUAEAdvertisementActor : public AStaticMeshActor
{
public:
	class UStaticMesh*                                 StaticMesh;                                               // 0x02C0(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	struct FString                                     StaticMeshPath;                                           // 0x02C4(0x000C) (Net, ZeroConstructor)
	struct FString                                     PicUrl;                                                   // 0x02D0(0x000C) (Net, ZeroConstructor)
	class UFrontendHUD*                                FrontendHUD;                                              // 0x02DC(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02E0(0x0004) MISSED OFFSET
	float                                              NetCullDistance;                                          // 0x02E4(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEAdvertisementActor");
		return pStaticClass;
	}


	void OnRequestImgSuccess(class UTexture2D* Texture, const struct FString& RequestedURL);
	void OnRep_PicURL();
	void OnRep_MeshPath();
};


// Class Gameplay.UAECharAnimListCompBase
// 0x0000 (0x0138 - 0x0138)
class UUAECharAnimListCompBase : public UUAEAnimListComponentBase
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharAnimListCompBase");
		return pStaticClass;
	}

};


// Class Gameplay.UAECharacterAnimListComponent
// 0x0048 (0x0180 - 0x0138)
class UUAECharacterAnimListComponent : public UUAECharAnimListCompBase
{
public:
	TArray<struct FCharacterMovementAnimData>          CharacterMovementAnimEditList;                            // 0x0138(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterMovementAnimData>          CharacterFPPAnimEditList;                                 // 0x0144(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterShieldAnimData>            CharacterShieldAnimEditList;                              // 0x0150(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditList;                                    // 0x015C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<struct FCharacterJumpAnimData>              CharacterJumpEditListFPP;                                 // 0x0168(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class UCurveFloat*                                 FallingIKCurve;                                           // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               CurrentIsTPP;                                             // 0x0178(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               CurrentHoldShield;                                        // 0x0179(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x017A(0x0006) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAECharacterAnimListComponent");
		return pStaticClass;
	}


	void OnAsyncLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam);
	TArray<struct FPlayerAnimData> GetCharacterJumpAnim(TEnumAsByte<ECharacterJumpType> JumpType);
	class UAnimationAsset* GetCharacterAnim(TEnumAsByte<ECharacterAnimType> AnimType, TEnumAsByte<ECharacterPoseType> PoseType);
};


// Class Gameplay.UAEChaVehAnimListComponent
// 0x0010 (0x0148 - 0x0138)
class UUAEChaVehAnimListComponent : public UUAECharAnimListCompBase
{
public:
	TArray<struct FVehCharAnimData>                    VehCharAnimDataList;                                      // 0x0138(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEChaVehAnimListComponent");
		return pStaticClass;
	}

};


// Class Gameplay.AELobbyCharAnimListComp
// 0x0010 (0x0148 - 0x0138)
class UAELobbyCharAnimListComp : public UUAECharAnimListCompBase
{
public:
	TArray<struct FCharacterMovementAnimData>          CharacterMovementAnimEditList;                            // 0x0138(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0144(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.AELobbyCharAnimListComp");
		return pStaticClass;
	}


	void OnAsyncLoadingFinished(const struct FAsyncLoadCharAnimParams& LoadingParam);
	class UAnimationAsset* GetCharacterAnim(TEnumAsByte<ECharacterAnimType> AnimType, TEnumAsByte<ECharacterPoseType> PoseType);
};


// Class Gameplay.UAEProjectile
// 0x0038 (0x02F0 - 0x02B8)
class AUAEProjectile : public AActor
{
public:
	bool                                               IsServerAlreadyExplodedCpp;                               // 0x02B8(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02B9(0x0003) MISSED OFFSET
	struct FVector                                     ProjInitialRelativeOffset;                                // 0x02BC(0x000C) (BlueprintVisible, Net, IsPlainOldData)
	struct FVector                                     ProjStandOffset;                                          // 0x02C8(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FVector                                     ProjCrouchOffset;                                         // 0x02D4(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	struct FVector                                     ProjProneOffset;                                          // 0x02E0(0x000C) (BlueprintVisible, BlueprintReadOnly, Net, IsPlainOldData)
	TEnumAsByte<ECharacterPoseType>                    ProjPrevoisOwnerPose;                                     // 0x02EC(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02ED(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEProjectile");
		return pStaticClass;
	}


	void WorkAsBuffApplierEvent(const struct FString& BuffName, class APawn* BuffTarget);
	void SetActorInitialRelativeOffset(const struct FVector& Offset, const struct FVector& StandOffset, const struct FVector& CrouchOffset, const struct FVector& ProneOffset, TEnumAsByte<ECharacterPoseType> PrevoisOwnerPose);
	void OnRep_IsServerAlreadyExplodedCpp();
	void IsServerAlreadyExplodedCppNotify();
	bool IsOwnerAutomous();
	void GlassDetect(const struct FVector& Start, const struct FVector& End);
	float GetRemainingEffectTime();
};


// Class Gameplay.UAESimpleSceneActor
// 0x0000 (0x02B8 - 0x02B8)
class AUAESimpleSceneActor : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAESimpleSceneActor");
		return pStaticClass;
	}

};


// Class Gameplay.UAEWindowComponent
// 0x0060 (0x06C0 - 0x0660)
class UUAEWindowComponent : public UStaticMeshComponent
{
public:
	bool                                               bBroken;                                                  // 0x0660(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0661(0x0003) MISSED OFFSET
	class APawn*                                       LastInstigatorPawn;                                       // 0x0664(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	class UStaticMesh*                                 BrokenMesh;                                               // 0x0668(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             BrokenEffect;                                             // 0x066C(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x50];                                      // 0x0670(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.UAEWindowComponent");
		return pStaticClass;
	}


	void NotifyServerBroken();
	void NotifyRepDataUpdated(bool bInitial, bool bLocal);
	void LocalHandleWindowBrokenBP(bool bInitial, bool bLocal);
	void LocalHandleWindowBroken(bool bInitial, bool bLocal);
	void HandleBroken(class APlayerController* Instigator, bool bLocal);
	struct FUAEWindowRepData GetRepData();
};


// Class Gameplay.VehicleConfigActorComponent
// 0x0000 (0x00C0 - 0x00C0)
class UVehicleConfigActorComponent : public UActorComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleConfigActorComponent");
		return pStaticClass;
	}


	class UClass* LoadActorClass(const struct FString& Path);
};


// Class Gameplay.VehicleAndTreasureBoxGeneratorComponent
// 0x0118 (0x0280 - 0x0168)
class UVehicleAndTreasureBoxGeneratorComponent : public UBaseGeneratorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	TArray<struct FTreasureBoxSpotProperty>            TreasureBoxSpotPropertys;                                 // 0x0170(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               bStatisticsValid;                                         // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRandom;                                                // 0x017D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x017E(0x0002) MISSED OFFSET
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          // 0x0180(0x0050) (ZeroConstructor)
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllTreasureBoxSpots;                                      // 0x01BC(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                // 0x01F8(0x0050) (ZeroConstructor)
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    // 0x0234(0x0048)
	class UUAEDataTable*                               VehicleDataTable;                                         // 0x027C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleAndTreasureBoxGeneratorComponent");
		return pStaticClass;
	}


	void WriteVehicleSpotStatisticsDatas();
	void WriteVehicleClassStatisticsDatas();
	void WriteAllVehicleStatisticsDatasToLog();
	void WriteAllVehicleStatisticsDatas();
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RandomTreasureBoxSpotsByType(struct FTreasureBoxSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomTreasureBoxSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FTreasureBoxSpotProperty* Property);
	void RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property);
	void RandomGroups();
	void LoadVehicleGenerateTable();
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty);
	struct FVehicleGenerateRandomInfo GetTreasureBoxSpotRandomInfo(struct FTreasureBoxSpotProperty* SpotProperty);
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	void GenerateSpotOnTick();
	void DeleteGroups();
	void AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ);
	void AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count);
};


// Class Gameplay.VehicleGeneratorComponent
// 0x00D0 (0x0238 - 0x0168)
class UVehicleGeneratorComponent : public UBaseGeneratorComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0168(0x0008) MISSED OFFSET
	bool                                               bStatisticsValid;                                         // 0x0170(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsRandom;                                                // 0x0171(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x2];                                       // 0x0172(0x0002) MISSED OFFSET
	TMap<TEnumAsByte<ESpotType>, struct FVehicleSpotComponentArray> AllVehicleSpots;                                          // 0x0174(0x0050) (ZeroConstructor)
	TMap<struct FString, struct FVehicleGenerateSpawnDataArray> VehicleGenerateSpawnDatas;                                // 0x01B0(0x0050) (ZeroConstructor)
	struct FVehicleGenerateStatisticsData              VehicleStatisticsData;                                    // 0x01EC(0x0048)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0234(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleGeneratorComponent");
		return pStaticClass;
	}


	void WriteVehicleSpotStatisticsDatas();
	void WriteVehicleClassStatisticsDatas();
	void WriteAllVehicleStatisticsDatas();
	void RegisterVehicleGenerateSpawnData(const struct FVehicleGenerateSpawnData& Data);
	void RegisterGroupSpotComponent(class UGroupSpotSceneComponent* GroupSpotComponent);
	void RandomSpotsByType(struct FVehicleSpotProperty* Property, struct FVehicleSpotComponentArray* Spots);
	void RandomSingleSpots(TArray<class UVehicleSpotSceneComponent*>* AllSpots, struct FVehicleSpotProperty* Property);
	void RandomGroups();
	void LoadVehicleGenerateTable();
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfoBySpotType(TEnumAsByte<ESpotType> SpotType);
	struct FVehicleGenerateRandomInfo GetVehicleSpotRandomInfo(struct FVehicleSpotProperty* SpotProperty);
	struct FVehicleGenerateSpawnData GetRandomVehicleClass(const struct FString& Category);
	struct FString GetRandomCategory(TArray<struct FSpotWeight> SpotWeights);
	void GenerateSpotOnTick();
	void DeleteGroups();
	void AddVehicleSpotCount(TEnumAsByte<ESpotType> SpotType, const struct FString& Path, float LocationX, float LocationY, float LocationZ);
	void AddVehicleClassCount(const struct FString& Path, bool IsValid, int Count);
};


// Class Gameplay.VehicleGroupSpotSceneComponent
// 0x0000 (0x02E0 - 0x02E0)
class UVehicleGroupSpotSceneComponent : public UGroupSpotSceneComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleGroupSpotSceneComponent");
		return pStaticClass;
	}

};


// Class Gameplay.VehicleSpotSceneComponent
// 0x0020 (0x0310 - 0x02F0)
class UVehicleSpotSceneComponent : public USpotSceneComponent
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x02F0(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.VehicleSpotSceneComponent");
		return pStaticClass;
	}


	void SetSpotRandomInfo(struct FVehicleGenerateRandomInfo* RandomInfo);
	bool GenerateSpot();
};


// Class Gameplay.WeatherConfigComponent
// 0x0030 (0x00F0 - 0x00C0)
class UWeatherConfigComponent : public UActorComponent
{
public:
	struct FWeatherInfo                                WeatherLevelInfo;                                         // 0x00C0(0x0014) (BlueprintVisible, BlueprintReadOnly, Net)
	struct FString                                     LastLoadedWeatherLevelName;                               // 0x00D4(0x000C) (ZeroConstructor)
	struct FString                                     DefaultWeatherLevelName;                                  // 0x00E0(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	bool                                               bLoadWeatherLevel;                                        // 0x00EC(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDefaulLevelLoaded;                                       // 0x00ED(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x00EE(0x0002) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Gameplay.WeatherConfigComponent");
		return pStaticClass;
	}


	void UnloadStreamLevel(const struct FString& LevelName);
	void SyncWeatherLevelInfo();
	void OnUnLoadStreamLevelCompleted();
	void OnRep_WeatherSyncCount();
	void OnLoadStreamLevelCompleted();
	void LoadWeatherLevel();
	void LoadStreamLevel(const struct FString& LevelName, int WeatherID);
	void LoadDefaultWeatherLevel();
	void Init();
};


}

