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

// Class LevelSequence.LevelSequence
// 0x00B0 (0x0330 - 0x0280)
class ULevelSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x38];                                      // 0x0280(0x0038) MISSED OFFSET
	struct FLevelSequenceBindingReferences             BindingReferences;                                        // 0x02B8(0x003C)
	TMap<struct FString, struct FLevelSequenceObject>  PossessedObjects;                                         // 0x02F4(0x0050) (ZeroConstructor, Deprecated)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequence");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequenceBurnInInitSettings
// 0x0004 (0x0020 - 0x001C)
class ULevelSequenceBurnInInitSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInInitSettings");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequenceBurnInOptions
// 0x0024 (0x0040 - 0x001C)
class ULevelSequenceBurnInOptions : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	struct FSoftClassPath                              BurnInClass;                                              // 0x0020(0x0018) (Edit)
	class ULevelSequenceBurnInInitSettings*            Settings;                                                 // 0x0038(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x003C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnInOptions");
		return pStaticClass;
	}

};


// Class LevelSequence.LevelSequenceActor
// 0x0060 (0x0318 - 0x02B8)
class ALevelSequenceActor : public AActor
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02B8(0x0004) MISSED OFFSET
	bool                                               bAutoPlay;                                                // 0x02BC(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x02BD(0x0003) MISSED OFFSET
	struct FMovieSceneSequencePlaybackSettings         PlaybackSettings;                                         // 0x02C0(0x0020) (Edit, BlueprintVisible, BlueprintReadOnly)
	class ULevelSequencePlayer*                        SequencePlayer;                                           // 0x02E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x02E4(0x0004) MISSED OFFSET
	struct FSoftObjectPath                             LevelSequence;                                            // 0x02E8(0x0018) (Edit, BlueprintVisible, BlueprintReadOnly)
	TArray<class AActor*>                              AdditionalEventReceivers;                                 // 0x0300(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	class ULevelSequenceBurnInOptions*                 BurnInOptions;                                            // 0x030C(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class UMovieSceneBindingOverrides*                 BindingOverrides;                                         // 0x0310(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	class ULevelSequenceBurnIn*                        BurnInInstance;                                           // 0x0314(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceActor");
		return pStaticClass;
	}


	void SetSequence(class ULevelSequence* InSequence);
	void SetEventReceivers(TArray<class AActor*> AdditionalReceivers);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*> Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	class ULevelSequence* GetSequence(bool bLoad, bool bInitializePlayer);
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};


// Class LevelSequence.LevelSequenceBurnIn
// 0x0030 (0x01E0 - 0x01B0)
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	unsigned char                                      UnknownData00[0x2C];                                      // 0x01B0(0x002C) MISSED OFFSET
	class ALevelSequenceActor*                         LevelSequenceActor;                                       // 0x01DC(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequenceBurnIn");
		return pStaticClass;
	}


	void SetSettings(class UObject* InSettings);
	class UClass* GetSettingsClass();
};


// Class LevelSequence.LevelSequencePlayer
// 0x0080 (0x0720 - 0x06A0)
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	struct FScriptMulticastDelegate                    OnCameraCut;                                              // 0x06A0(0x000C) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0x2C];                                      // 0x06AC(0x002C) MISSED OFFSET
	TArray<class UObject*>                             AdditionalEventReceivers;                                 // 0x06D8(0x000C) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x06E4(0x003C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class LevelSequence.LevelSequencePlayer");
		return pStaticClass;
	}


	static class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};


}

