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

// Class TApm.TApmHelper
// 0x0000 (0x0020 - 0x0020)
class UTApmHelper : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class TApm.TApmHelper");
		return pStaticClass;
	}


	static struct FString ValidateDevice();
	static void UpdateGameStatusToVmp(int Key, const struct FString& Value);
	static void SetVersionIden(const struct FString& versionName);
	static void SetUserId(const struct FString& userId);
	static void SetTragetFrameRate(int Target);
	static void SetQuality(int quality);
	static void SetPssManualMode();
	static void SetLocale(const struct FString& Locale);
	static void setAffinityForThread(int tid);
	static void requestResourceGuarantee(int Condition, int loadType, int applyType);
	static void RequestPssSample();
	static void RegisterRomCallBackMeta(const struct FString& OpenID, const struct FString& ZoneID);
	static void PutKVS(const struct FString& Key, const struct FString& Value);
	static void PutKVI(const struct FString& Key, int Value);
	static void PutKVD(const struct FString& Key, float Value);
	static void PostValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value);
	static void PostValueI3(const struct FString& catgory, const struct FString& Key, int A, int B, int C);
	static void PostValueI2(const struct FString& catgory, const struct FString& Key, int A, int B);
	static void PostValueI1(const struct FString& catgory, const struct FString& Key, int A);
	static void PostValueF3(const struct FString& catgory, const struct FString& Key, float A, float B, float C);
	static void PostValueF2(const struct FString& catgory, const struct FString& Key, float A, float B);
	static void PostValueF1(const struct FString& catgory, const struct FString& Key, float A);
	static void PostTrackState(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
	static void PostStreamEvent(int stepId, int Status, int Code, const struct FString& Info);
	static void PostNTL(int latency);
	static void PostLagStatus(float Distance);
	static void PostGameStatusToTGPASS(const struct FString& Key, const struct FString& Value);
	static void PostGameStatusToTGPAIS(int Key, const struct FString& Value);
	static void PostFrame(float DeltaTime);
	static void PostEvent(int Key, const struct FString& Info);
	static void MarkLevelLoadCompleted();
	static void MarkLevelLoad(const struct FString& SceneName, int quality);
	static void MarkLevelFin();
	static void MarkAppFinishLaunch();
	static void InitTGPA();
	static int GetDeviceLevelByQcc(const struct FString& configName, const struct FString& GPUFamily);
	static int GetDeviceLevel();
	static void EndTupleWrap();
	static void EndTag();
	static void EndExclude();
	static void EnableDebugMode();
	static void cancelAffinityForThread(int tid);
	static void BeginTupleWrap(const struct FString& Key);
	static void BeginExclude();
	static void AddTag(const struct FString& TagName);
};


}

