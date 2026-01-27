//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TApm.TApmHelper.ValidateDevice
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UTApmHelper::ValidateDevice()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.ValidateDevice");

	UTApmHelper_ValidateDevice_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TApm.TApmHelper.UpdateGameStatusToVmp
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::UpdateGameStatusToVmp(int Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.UpdateGameStatusToVmp");

	UTApmHelper_UpdateGameStatusToVmp_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.SetVersionIden
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 versionName                    (Parm, ZeroConstructor)

void UTApmHelper::SetVersionIden(const struct FString& versionName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetVersionIden");

	UTApmHelper_SetVersionIden_Params params;
	params.versionName = versionName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.SetUserId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 userId                         (Parm, ZeroConstructor)

void UTApmHelper::SetUserId(const struct FString& userId)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetUserId");

	UTApmHelper_SetUserId_Params params;
	params.userId = userId;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.SetTragetFrameRate
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Target                         (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::SetTragetFrameRate(int Target)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetTragetFrameRate");

	UTApmHelper_SetTragetFrameRate_Params params;
	params.Target = Target;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.SetQuality
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::SetQuality(int quality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetQuality");

	UTApmHelper_SetQuality_Params params;
	params.quality = quality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.SetPssManualMode
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::SetPssManualMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetPssManualMode");

	UTApmHelper_SetPssManualMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.SetLocale
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Locale                         (Parm, ZeroConstructor)

void UTApmHelper::SetLocale(const struct FString& Locale)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.SetLocale");

	UTApmHelper_SetLocale_Params params;
	params.Locale = Locale;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.setAffinityForThread
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            tid                            (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::setAffinityForThread(int tid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.setAffinityForThread");

	UTApmHelper_setAffinityForThread_Params params;
	params.tid = tid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.requestResourceGuarantee
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// int                            loadType                       (Parm, ZeroConstructor, IsPlainOldData)
// int                            applyType                      (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::requestResourceGuarantee(int Condition, int loadType, int applyType)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.requestResourceGuarantee");

	UTApmHelper_requestResourceGuarantee_Params params;
	params.Condition = Condition;
	params.loadType = loadType;
	params.applyType = applyType;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.RequestPssSample
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::RequestPssSample()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.RequestPssSample");

	UTApmHelper_RequestPssSample_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.RegisterRomCallBackMeta
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 OpenID                         (Parm, ZeroConstructor)
// struct FString                 ZoneID                         (Parm, ZeroConstructor)

void UTApmHelper::RegisterRomCallBackMeta(const struct FString& OpenID, const struct FString& ZoneID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.RegisterRomCallBackMeta");

	UTApmHelper_RegisterRomCallBackMeta_Params params;
	params.OpenID = OpenID;
	params.ZoneID = ZoneID;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PutKVS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::PutKVS(const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PutKVS");

	UTApmHelper_PutKVS_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PutKVI
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PutKVI(const struct FString& Key, int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PutKVI");

	UTApmHelper_PutKVI_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PutKVD
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PutKVD(const struct FString& Key, float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PutKVD");

	UTApmHelper_PutKVD_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostValueS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::PostValueS(const struct FString& catgory, const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueS");

	UTApmHelper_PostValueS_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostValueI3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            C                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueI3(const struct FString& catgory, const struct FString& Key, int A, int B, int C)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueI3");

	UTApmHelper_PostValueI3_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostValueI2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)
// int                            B                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueI2(const struct FString& catgory, const struct FString& Key, int A, int B)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueI2");

	UTApmHelper_PostValueI2_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;
	params.B = B;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostValueI1
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// int                            A                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueI1(const struct FString& catgory, const struct FString& Key, int A)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueI1");

	UTApmHelper_PostValueI1_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostValueF3
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          C                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueF3(const struct FString& catgory, const struct FString& Key, float A, float B, float C)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueF3");

	UTApmHelper_PostValueF3_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;
	params.B = B;
	params.C = C;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostValueF2
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          B                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueF2(const struct FString& catgory, const struct FString& Key, float A, float B)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueF2");

	UTApmHelper_PostValueF2_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;
	params.B = B;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostValueF1
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 catgory                        (Parm, ZeroConstructor)
// struct FString                 Key                            (Parm, ZeroConstructor)
// float                          A                              (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostValueF1(const struct FString& catgory, const struct FString& Key, float A)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostValueF1");

	UTApmHelper_PostValueF1_Params params;
	params.catgory = catgory;
	params.Key = Key;
	params.A = A;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostTrackState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          X                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Y                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Z                              (Parm, ZeroConstructor, IsPlainOldData)
// float                          Pitch                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          Yaw                            (Parm, ZeroConstructor, IsPlainOldData)
// float                          Roll                           (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostTrackState(float X, float Y, float Z, float Pitch, float Yaw, float Roll)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostTrackState");

	UTApmHelper_PostTrackState_Params params;
	params.X = X;
	params.Y = Y;
	params.Z = Z;
	params.Pitch = Pitch;
	params.Yaw = Yaw;
	params.Roll = Roll;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostStreamEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            stepId                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Status                         (Parm, ZeroConstructor, IsPlainOldData)
// int                            Code                           (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Info                           (Parm, ZeroConstructor)

void UTApmHelper::PostStreamEvent(int stepId, int Status, int Code, const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostStreamEvent");

	UTApmHelper_PostStreamEvent_Params params;
	params.stepId = stepId;
	params.Status = Status;
	params.Code = Code;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostNTL
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            latency                        (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostNTL(int latency)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostNTL");

	UTApmHelper_PostNTL_Params params;
	params.latency = latency;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostLagStatus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Distance                       (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostLagStatus(float Distance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostLagStatus");

	UTApmHelper_PostLagStatus_Params params;
	params.Distance = Distance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostGameStatusToTGPASS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::PostGameStatusToTGPASS(const struct FString& Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostGameStatusToTGPASS");

	UTApmHelper_PostGameStatusToTGPASS_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostGameStatusToTGPAIS
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Value                          (Parm, ZeroConstructor)

void UTApmHelper::PostGameStatusToTGPAIS(int Key, const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostGameStatusToTGPAIS");

	UTApmHelper_PostGameStatusToTGPAIS_Params params;
	params.Key = Key;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostFrame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          DeltaTime                      (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::PostFrame(float DeltaTime)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostFrame");

	UTApmHelper_PostFrame_Params params;
	params.DeltaTime = DeltaTime;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.PostEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Key                            (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Info                           (Parm, ZeroConstructor)

void UTApmHelper::PostEvent(int Key, const struct FString& Info)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.PostEvent");

	UTApmHelper_PostEvent_Params params;
	params.Key = Key;
	params.Info = Info;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.MarkLevelLoadCompleted
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::MarkLevelLoadCompleted()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkLevelLoadCompleted");

	UTApmHelper_MarkLevelLoadCompleted_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.MarkLevelLoad
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 SceneName                      (Parm, ZeroConstructor)
// int                            quality                        (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::MarkLevelLoad(const struct FString& SceneName, int quality)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkLevelLoad");

	UTApmHelper_MarkLevelLoad_Params params;
	params.SceneName = SceneName;
	params.quality = quality;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.MarkLevelFin
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::MarkLevelFin()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkLevelFin");

	UTApmHelper_MarkLevelFin_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.MarkAppFinishLaunch
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::MarkAppFinishLaunch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.MarkAppFinishLaunch");

	UTApmHelper_MarkAppFinishLaunch_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.InitTGPA
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::InitTGPA()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.InitTGPA");

	UTApmHelper_InitTGPA_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.GetDeviceLevelByQcc
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 configName                     (Parm, ZeroConstructor)
// struct FString                 GPUFamily                      (Parm, ZeroConstructor)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTApmHelper::GetDeviceLevelByQcc(const struct FString& configName, const struct FString& GPUFamily)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.GetDeviceLevelByQcc");

	UTApmHelper_GetDeviceLevelByQcc_Params params;
	params.configName = configName;
	params.GPUFamily = GPUFamily;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TApm.TApmHelper.GetDeviceLevel
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int UTApmHelper::GetDeviceLevel()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.GetDeviceLevel");

	UTApmHelper_GetDeviceLevel_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TApm.TApmHelper.EndTupleWrap
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::EndTupleWrap()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.EndTupleWrap");

	UTApmHelper_EndTupleWrap_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.EndTag
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::EndTag()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.EndTag");

	UTApmHelper_EndTag_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.EndExclude
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::EndExclude()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.EndExclude");

	UTApmHelper_EndExclude_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.EnableDebugMode
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::EnableDebugMode()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.EnableDebugMode");

	UTApmHelper_EnableDebugMode_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.cancelAffinityForThread
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            tid                            (Parm, ZeroConstructor, IsPlainOldData)

void UTApmHelper::cancelAffinityForThread(int tid)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.cancelAffinityForThread");

	UTApmHelper_cancelAffinityForThread_Params params;
	params.tid = tid;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.BeginTupleWrap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Key                            (Parm, ZeroConstructor)

void UTApmHelper::BeginTupleWrap(const struct FString& Key)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.BeginTupleWrap");

	UTApmHelper_BeginTupleWrap_Params params;
	params.Key = Key;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.BeginExclude
// (Final, Native, Static, Public, BlueprintCallable)

void UTApmHelper::BeginExclude()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.BeginExclude");

	UTApmHelper_BeginExclude_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function TApm.TApmHelper.AddTag
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 TagName                        (Parm, ZeroConstructor)

void UTApmHelper::AddTag(const struct FString& TagName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function TApm.TApmHelper.AddTag");

	UTApmHelper_AddTag_Params params;
	params.TagName = TagName;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

