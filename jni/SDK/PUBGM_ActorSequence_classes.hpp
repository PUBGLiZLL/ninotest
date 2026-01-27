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

// Class ActorSequence.ActorSequence
// 0x0020 (0x02A0 - 0x0280)
class UActorSequence : public UMovieSceneSequence
{
public:
	unsigned char                                      UnknownData00[0x20];                                      // 0x0280(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequence");
		return pStaticClass;
	}

};


// Class ActorSequence.ActorSequenceComponent
// 0x0028 (0x00E8 - 0x00C0)
class UActorSequenceComponent : public UActorComponent
{
public:
	unsigned char                                      UnknownData00[0x1C];                                      // 0x00C0(0x001C) MISSED OFFSET
	class UActorSequence*                              Sequence;                                                 // 0x00DC(0x0004) (Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UActorSequencePlayer*                        SequencePlayer;                                           // 0x00E0(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData)
	bool                                               bAutoPlay;                                                // 0x00E4(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00E5(0x0003) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequenceComponent");
		return pStaticClass;
	}

};


// Class ActorSequence.ActorSequencePlayer
// 0x0000 (0x06A0 - 0x06A0)
class UActorSequencePlayer : public UMovieSceneSequencePlayer
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ActorSequence.ActorSequencePlayer");
		return pStaticClass;
	}

};


}

