//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PlayerPrefs.PlayerPrefs_C.FetchServerKey
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 RetServerKey                   (Parm, OutParm, ZeroConstructor)

void UPlayerPrefs_C::FetchServerKey(struct FString* RetServerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.FetchServerKey");

	UPlayerPrefs_C_FetchServerKey_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RetServerKey != nullptr)
		*RetServerKey = params.RetServerKey;
}


// Function PlayerPrefs.PlayerPrefs_C.UpdateServerKey
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ServerKey                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::UpdateServerKey(const struct FString& ServerKey)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.UpdateServerKey");

	UPlayerPrefs_C_UpdateServerKey_Params params;
	params.ServerKey = ServerKey;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetLastCorpsWarInviteTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Time                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetLastCorpsWarInviteTime(int Time)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetLastCorpsWarInviteTime");

	UPlayerPrefs_C_SetLastCorpsWarInviteTime_Params params;
	params.Time = Time;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetXGCreatePlayerTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 timeData                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetXGCreatePlayerTime(const struct FString& timeData)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetXGCreatePlayerTime");

	UPlayerPrefs_C_SetXGCreatePlayerTime_Params params;
	params.timeData = timeData;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetSeasonSwitch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Data                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetSeasonSwitch(const struct FString& Data)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetSeasonSwitch");

	UPlayerPrefs_C_SetSeasonSwitch_Params params;
	params.Data = Data;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetMatchTagGuideFlag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           hasGuide                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetMatchTagGuideFlag(bool hasGuide)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetMatchTagGuideFlag");

	UPlayerPrefs_C_SetMatchTagGuideFlag_Params params;
	params.hasGuide = hasGuide;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetWXYouxiquanRedPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IsRed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetWXYouxiquanRedPoint(int IsRed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetWXYouxiquanRedPoint");

	UPlayerPrefs_C_SetWXYouxiquanRedPoint_Params params;
	params.IsRed = IsRed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetCorpsShopRedPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            coprsLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetCorpsShopRedPoint(int coprsLevel)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCorpsShopRedPoint");

	UPlayerPrefs_C_SetCorpsShopRedPoint_Params params;
	params.coprsLevel = coprsLevel;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.HasCloseLocation
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UID                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::HasCloseLocation(const struct FString& UID, bool* Has)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.HasCloseLocation");

	UPlayerPrefs_C_HasCloseLocation_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
}


// Function PlayerPrefs.PlayerPrefs_C.SetCloseLocation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           CloseLocation                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 UID                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetCloseLocation(bool CloseLocation, const struct FString& UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCloseLocation");

	UPlayerPrefs_C_SetCloseLocation_Params params;
	params.CloseLocation = CloseLocation;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.HasNearByNewTips
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UID                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           Has                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::HasNearByNewTips(const struct FString& UID, bool* Has)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.HasNearByNewTips");

	UPlayerPrefs_C_HasNearByNewTips_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Has != nullptr)
		*Has = params.Has;
}


// Function PlayerPrefs.PlayerPrefs_C.SetNearByNewTipsRead
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 UID                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)

void UPlayerPrefs_C::SetNearByNewTipsRead(const struct FString& UID)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetNearByNewTipsRead");

	UPlayerPrefs_C_SetNearByNewTipsRead_Params params;
	params.UID = UID;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetYXXYRedPoint
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            IsRed                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetYXXYRedPoint(int IsRed)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetYXXYRedPoint");

	UPlayerPrefs_C_SetYXXYRedPoint_Params params;
	params.IsRed = IsRed;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetFirstInLobby
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::SetFirstInLobby()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetFirstInLobby");

	UPlayerPrefs_C_SetFirstInLobby_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetTime
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            arg                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetTime(int arg)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetTime");

	UPlayerPrefs_C_SetTime_Params params;
	params.arg = arg;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.ClearCount
// (Public, BlueprintCallable, BlueprintEvent)

void UPlayerPrefs_C::ClearCount()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.ClearCount");

	UPlayerPrefs_C_ClearCount_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.SetCount
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Count                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SetCount(int Count)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SetCount");

	UPlayerPrefs_C_SetCount_Params params;
	params.Count = Count;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PlayerPrefs.PlayerPrefs_C.LoadData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USaveGame*               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class USaveGame* UPlayerPrefs_C::LoadData()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.LoadData");

	UPlayerPrefs_C_LoadData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PlayerPrefs.PlayerPrefs_C.SaveData
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           SaveDataState                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPlayerPrefs_C::SaveData(bool* SaveDataState)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PlayerPrefs.PlayerPrefs_C.SaveData");

	UPlayerPrefs_C_SaveData_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (SaveDataState != nullptr)
		*SaveDataState = params.SaveDataState;
}


}

