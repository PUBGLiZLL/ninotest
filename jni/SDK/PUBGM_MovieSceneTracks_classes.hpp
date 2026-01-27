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

// Class MovieSceneTracks.MovieScene3DConstraintSection
// 0x0010 (0x0100 - 0x00F0)
class UMovieScene3DConstraintSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachSection
// 0x0020 (0x0120 - 0x0100)
class UMovieScene3DAttachSection : public UMovieScene3DConstraintSection
{
public:
	struct FName                                       AttachSocketName;                                         // 0x0100(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	struct FName                                       AttachComponentName;                                      // 0x0108(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AttachmentLocationRule;                                   // 0x0110(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AttachmentRotationRule;                                   // 0x0111(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EAttachmentRule                                    AttachmentScaleRule;                                      // 0x0112(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    DetachmentLocationRule;                                   // 0x0113(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    DetachmentRotationRule;                                   // 0x0114(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EDetachmentRule                                    DetachmentScaleRule;                                      // 0x0115(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xA];                                       // 0x0116(0x000A) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieScene3DConstraintTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DConstraintTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieScene3DAttachTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieScene3DAttachTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DAttachTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieScene3DPathSection
// 0x0060 (0x0160 - 0x0100)
class UMovieScene3DPathSection : public UMovieScene3DConstraintSection
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x0100(0x0050) MISSED OFFSET
	EMovieScene3DPathSection_Axis                      FrontAxisEnum;                                            // 0x0150(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	EMovieScene3DPathSection_Axis                      UpAxisEnum;                                               // 0x0151(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bFollow : 1;                                              // 0x0152(0x0001) (Edit)
	unsigned char                                      bReverse : 1;                                             // 0x0152(0x0001) (Edit)
	unsigned char                                      bForceUpright : 1;                                        // 0x0152(0x0001) (Edit)
	unsigned char                                      UnknownData01[0xD];                                       // 0x0153(0x000D) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieScene3DPathTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DPathTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformSection
// 0x0350 (0x0440 - 0x00F0)
class UMovieScene3DTransformSection : public UMovieSceneSection
{
public:
	struct FMovieSceneTransformMask                    TransformMask;                                            // 0x00F0(0x0004)
	struct FRichCurve                                  Translation[0x3];                                         // 0x00F4(0x0054)
	struct FRichCurve                                  Rotation[0x3];                                            // 0x01F0(0x0054)
	struct FRichCurve                                  Scale[0x3];                                               // 0x02EC(0x0054)
	struct FRichCurve                                  ManualWeight;                                             // 0x03E8(0x0054)
	unsigned char                                      UnknownData00[0x4];                                       // 0x043C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieScenePropertyTrack
// 0x0020 (0x00D0 - 0x00B0)
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
public:
	struct FString                                     PropertyPath;                                             // 0x00B0(0x000C) (ZeroConstructor)
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x00BC(0x000C) (ExportObject, ZeroConstructor)
	unsigned char                                      UnknownData00[0x8];                                       // 0x00C8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScenePropertyTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieScene3DTransformTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieScene3DTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieScene3DTransformTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceSection
// 0x0070 (0x0160 - 0x00F0)
class UMovieSceneActorReferenceSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              ActorGuidIndexCurve;                                      // 0x00F0(0x0054)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0144(0x000C) MISSED OFFSET
	TArray<struct FString>                             ActorGuidStrings;                                         // 0x0150(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData01[0x4];                                       // 0x015C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneActorReferenceTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneActorReferenceTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneAudioSection
// 0x00F0 (0x01E0 - 0x00F0)
class UMovieSceneAudioSection : public UMovieSceneSection
{
public:
	float                                              StartOffset;                                              // 0x00F0(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	float                                              AudioStartTime;                                           // 0x00F4(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioDilationFactor;                                      // 0x00F8(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              AudioVolume;                                              // 0x00FC(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	struct FRichCurve                                  SoundVolume;                                              // 0x0100(0x0054) (Edit)
	struct FRichCurve                                  PitchMultiplier;                                          // 0x0154(0x0054) (Edit)
	bool                                               bSuppressSubtitles;                                       // 0x01A8(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bOverrideAttenuation;                                     // 0x01A9(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x01AA(0x0002) MISSED OFFSET
	class USoundAttenuation*                           AttenuationSettings;                                      // 0x01AC(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	struct FScriptDelegate                             OnQueueSubtitles;                                         // 0x01B0(0x0010) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAudioFinished;                                          // 0x01C0(0x000C) (ZeroConstructor, InstancedReference)
	struct FScriptMulticastDelegate                    OnAudioPlaybackPercent;                                   // 0x01CC(0x000C) (ZeroConstructor, InstancedReference)
	unsigned char                                      UnknownData01[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneAudioTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneAudioTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneAudioTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneBoolSection
// 0x0060 (0x0150 - 0x00F0)
class UMovieSceneBoolSection : public UMovieSceneSection
{
public:
	bool                                               DefaultValue;                                             // 0x00F0(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00F1(0x0003) MISSED OFFSET
	struct FIntegralCurve                              BoolCurve;                                                // 0x00F4(0x0054)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneBoolTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneBoolTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneBoolTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneByteSection
// 0x0060 (0x0150 - 0x00F0)
class UMovieSceneByteSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              ByteCurve;                                                // 0x00F0(0x0054)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0144(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneByteTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneByteTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimSection
// 0x0030 (0x0120 - 0x00F0)
class UMovieSceneCameraAnimSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00F0(0x0014) MISSED OFFSET
	class UCameraAnim*                                 CameraAnim;                                               // 0x0104(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0108(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayScale;                                                // 0x010C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BlendInTime;                                              // 0x0110(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              BlendOutTime;                                             // 0x0114(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	bool                                               bLooping;                                                 // 0x0118(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0119(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneCameraAnimTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraAnimTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutSection
// 0x0010 (0x0100 - 0x00F0)
class UMovieSceneCameraCutSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneCameraCutTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraCutTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeSection
// 0x0030 (0x0120 - 0x00F0)
class UMovieSceneCameraShakeSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x00F0(0x0014) MISSED OFFSET
	class UClass*                                      ShakeClass;                                               // 0x0104(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayScale;                                                // 0x0108(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	TEnumAsByte<ECameraAnimPlaySpace>                  PlaySpace;                                                // 0x010C(0x0001) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x010D(0x0003) MISSED OFFSET
	struct FRotator                                    UserDefinedPlaySpace;                                     // 0x0110(0x000C) (Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x011C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneCameraShakeTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCameraShakeTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneSubSection
// 0x0060 (0x0150 - 0x00F0)
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET
	float                                              StartOffset;                                              // 0x0100(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              TimeScale;                                                // 0x0104(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PrerollTime;                                              // 0x0108(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UMovieSceneSequence*                         SubSequence;                                              // 0x010C(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	TLazyObjectPtr<class AActor>                       ActorToRecord;                                            // 0x0110(0x001C) (Edit, IsPlainOldData)
	struct FString                                     TargetSequenceName;                                       // 0x012C(0x000C) (Edit, ZeroConstructor)
	struct FDirectoryPath                              TargetPathToRecordTo;                                     // 0x0138(0x000C) (Edit)
	unsigned char                                      UnknownData01[0xC];                                       // 0x0144(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotSection
// 0x0000 (0x0150 - 0x0150)
class UMovieSceneCinematicShotSection : public UMovieSceneSubSection
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneSubTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSubTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneCinematicShotTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneCinematicShotTrack : public UMovieSceneSubTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneCinematicShotTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneColorSection
// 0x0150 (0x0240 - 0x00F0)
class UMovieSceneColorSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  RedCurve;                                                 // 0x00F0(0x0054)
	struct FRichCurve                                  GreenCurve;                                               // 0x0144(0x0054)
	struct FRichCurve                                  BlueCurve;                                                // 0x0198(0x0054)
	struct FRichCurve                                  AlphaCurve;                                               // 0x01EC(0x0054)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneColorTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneColorTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneEnumSection
// 0x0060 (0x0150 - 0x00F0)
class UMovieSceneEnumSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              EnumCurve;                                                // 0x00F0(0x0054)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0144(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneEnumTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneEnumTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneEventSection
// 0x00C0 (0x01B0 - 0x00F0)
class UMovieSceneEventSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x48];                                      // 0x00F0(0x0048) MISSED OFFSET
	struct FMovieSceneEventSectionData                 EventData;                                                // 0x0138(0x0018)
	unsigned char                                      UnknownData01[0x60];                                      // 0x0150(0x0060) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneEventTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET
	TArray<class UMovieSceneSection*>                  Sections;                                                 // 0x00B4(0x000C) (ExportObject, ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneEventTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneFloatSection
// 0x0060 (0x0150 - 0x00F0)
class UMovieSceneFloatSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  FloatCurve;                                               // 0x00F0(0x0054)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0144(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneFadeSection
// 0x0010 (0x0160 - 0x0150)
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x0150(0x0004) MISSED OFFSET
	unsigned char                                      bFadeAudio : 1;                                           // 0x0154(0x0001) (Edit)
	unsigned char                                      UnknownData01[0xB];                                       // 0x0155(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneFloatTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneFloatTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneFloatTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneFadeTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneFadeTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerSection
// 0x0060 (0x0150 - 0x00F0)
class UMovieSceneIntegerSection : public UMovieSceneSection
{
public:
	struct FIntegralCurve                              IntegerCurve;                                             // 0x00F0(0x0054)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0144(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneIntegerTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneIntegerTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneIntegerTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilitySection
// 0x0010 (0x0100 - 0x00F0)
class UMovieSceneLevelVisibilitySection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00F0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilitySection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneLevelVisibilityTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneLevelVisibilityTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneLevelVisibilityTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneMaterialTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneMaterialParameterCollectionTrack : public UMovieSceneMaterialTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneMaterialParameterCollectionTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneComponentMaterialTrack
// 0x0000 (0x00C0 - 0x00C0)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneComponentMaterialTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneParameterSection
// 0x0020 (0x0110 - 0x00F0)
class UMovieSceneParameterSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	TArray<struct FVectorParameterNameAndCurves>       VectorParameterNamesAndCurves;                            // 0x00F8(0x000C) (ZeroConstructor)
	TArray<struct FColorParameterNameAndCurves>        ColorParameterNamesAndCurves;                             // 0x0104(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneParameterSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneParticleParameterTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneParticleParameterTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleParameterTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneParticleSection
// 0x0050 (0x0140 - 0x00F0)
class UMovieSceneParticleSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x50];                                      // 0x00F0(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneParticleTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneParticleTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x00B0(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneParticleTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationSection
// 0x00A0 (0x0190 - 0x00F0)
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSkeletalAnimationParams          Params;                                                   // 0x00F0(0x0078) (Edit)
	class UAnimSequence*                               AnimSequence;                                             // 0x0168(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	class UAnimSequenceBase*                           Animation;                                                // 0x016C(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              StartOffset;                                              // 0x0170(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              EndOffset;                                                // 0x0174(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	float                                              PlayRate;                                                 // 0x0178(0x0004) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      bReverse : 1;                                             // 0x017C(0x0001) (Deprecated)
	unsigned char                                      UnknownData00[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	struct FName                                       SlotName;                                                 // 0x0180(0x0008) (ZeroConstructor, Deprecated, IsPlainOldData)
	unsigned char                                      UnknownData01[0x8];                                       // 0x0188(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack
// 0x0010 (0x00C0 - 0x00B0)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET
	bool                                               bUseLegacySectionIndexBlend;                              // 0x00B4(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0xB];                                       // 0x00B5(0x000B) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSkeletalAnimationTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoSection
// 0x0000 (0x0150 - 0x0150)
class UMovieSceneSlomoSection : public UMovieSceneFloatSection
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneSlomoTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneSlomoTrack : public UMovieSceneFloatTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSlomoTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnSection
// 0x0000 (0x0150 - 0x0150)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneSpawnTrack
// 0x0020 (0x00D0 - 0x00B0)
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x00B0(0x0004) MISSED OFFSET
	struct FGuid                                       ObjectGuid;                                               // 0x00B4(0x0010) (IsPlainOldData)
	unsigned char                                      UnknownData01[0xC];                                       // 0x00C4(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneSpawnTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneStringSection
// 0x0060 (0x0150 - 0x00F0)
class UMovieSceneStringSection : public UMovieSceneSection
{
public:
	struct FStringCurve                                StringCurve;                                              // 0x00F0(0x0058)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0148(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneStringTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneStringTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneTransformTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneTransformTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneTransformTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneVectorSection
// 0x0160 (0x0250 - 0x00F0)
class UMovieSceneVectorSection : public UMovieSceneSection
{
public:
	struct FRichCurve                                  Curves[0x4];                                              // 0x00F0(0x0054)
	int                                                ChannelsUsed;                                             // 0x0240(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0xC];                                       // 0x0244(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorSection");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneVectorTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneVectorTrack");
		return pStaticClass;
	}

};


// Class MovieSceneTracks.MovieSceneVisibilityTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneVisibilityTrack : public UMovieSceneBoolTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MovieSceneTracks.MovieSceneVisibilityTrack");
		return pStaticClass;
	}

};


}

