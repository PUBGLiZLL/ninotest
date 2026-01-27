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

// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileGradeScore
// 0x001C (0x0038 - 0x001C)
class UAndroidCommonDeviceProfileGradeScore : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FGradeScoreProfileName>              GradeScoreProfileName;                                    // 0x0020(0x000C) (Edit, ZeroConstructor, Config)
	TArray<float>                                      GradeScoreTypePercentage;                                 // 0x002C(0x000C) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileGradeScore");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileMatchingRules
// 0x000C (0x0028 - 0x001C)
class UAndroidCommonDeviceProfileMatchingRules : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileWhiteList
// 0x000C (0x0028 - 0x001C)
class UAndroidCommonDeviceProfileWhiteList : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidCommonDeviceProfileWhiteList");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidDeviceProfileMatchingRules
// 0x000C (0x0028 - 0x001C)
class UAndroidDeviceProfileMatchingRules : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidDeviceProfileMatchingRules");
		return pStaticClass;
	}

};


// Class AndroidDeviceProfileSelector.AndroidJavaSurfaceViewDevices
// 0x000C (0x0028 - 0x001C)
class UAndroidJavaSurfaceViewDevices : public UObject
{
public:
	unsigned char                                      UnknownData00[0xC];                                       // 0x001C(0x000C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class AndroidDeviceProfileSelector.AndroidJavaSurfaceViewDevices");
		return pStaticClass;
	}

};


}

