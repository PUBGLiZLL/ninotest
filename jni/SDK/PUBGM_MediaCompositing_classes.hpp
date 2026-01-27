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

// Class MediaCompositing.MediaPlane
// 0x0008 (0x02C0 - 0x02B8)
class AMediaPlane : public AActor
{
public:
	class UMediaPlaneComponent*                        MediaPlane;                                               // 0x02B8(0x0004) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02BC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlane");
		return pStaticClass;
	}

};


// Class MediaCompositing.MediaPlaneComponent
// 0x00C0 (0x06B0 - 0x05F0)
class UMediaPlaneComponent : public UPrimitiveComponent
{
public:
	struct FMediaPlaneParameters                       Plane;                                                    // 0x05F0(0x0030) (Edit)
	unsigned char                                      UnknownData00[0x90];                                      // 0x0620(0x0090) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlaneComponent");
		return pStaticClass;
	}


	void SetMediaPlane(const struct FMediaPlaneParameters& Plane);
	void OnRenderTextureChanged();
	struct FMediaPlaneParameters GetPlane();
};


// Class MediaCompositing.MediaPlaneFrustumComponent
// 0x0000 (0x05F0 - 0x05F0)
class UMediaPlaneFrustumComponent : public UPrimitiveComponent
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MediaPlaneFrustumComponent");
		return pStaticClass;
	}

};


// Class MediaCompositing.MovieSceneMediaSection
// 0x0010 (0x0100 - 0x00F0)
class UMovieSceneMediaSection : public UMovieSceneSection
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x00F0(0x0008) MISSED OFFSET
	class UMediaSource*                                MediaSource;                                              // 0x00F8(0x0004) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x00FC(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MovieSceneMediaSection");
		return pStaticClass;
	}

};


// Class MediaCompositing.MovieSceneMediaTrack
// 0x0000 (0x00D0 - 0x00D0)
class UMovieSceneMediaTrack : public UMovieScenePropertyTrack
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MediaCompositing.MovieSceneMediaTrack");
		return pStaticClass;
	}

};


}

