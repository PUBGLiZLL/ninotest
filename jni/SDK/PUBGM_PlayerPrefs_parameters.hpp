#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PlayerPrefs.PlayerPrefs_C.FetchServerKey
struct UPlayerPrefs_C_FetchServerKey_Params
{
	struct FString                                     RetServerKey;                                             // (Parm, OutParm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.UpdateServerKey
struct UPlayerPrefs_C_UpdateServerKey_Params
{
	struct FString                                     ServerKey;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.SetLastCorpsWarInviteTime
struct UPlayerPrefs_C_SetLastCorpsWarInviteTime_Params
{
	int                                                Time;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetXGCreatePlayerTime
struct UPlayerPrefs_C_SetXGCreatePlayerTime_Params
{
	struct FString                                     timeData;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.SetSeasonSwitch
struct UPlayerPrefs_C_SetSeasonSwitch_Params
{
	struct FString                                     Data;                                                     // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.SetMatchTagGuideFlag
struct UPlayerPrefs_C_SetMatchTagGuideFlag_Params
{
	bool                                               hasGuide;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetWXYouxiquanRedPoint
struct UPlayerPrefs_C_SetWXYouxiquanRedPoint_Params
{
	int                                                IsRed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetCorpsShopRedPoint
struct UPlayerPrefs_C_SetCorpsShopRedPoint_Params
{
	int                                                coprsLevel;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.HasCloseLocation
struct UPlayerPrefs_C_HasCloseLocation_Params
{
	struct FString                                     UID;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Has;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetCloseLocation
struct UPlayerPrefs_C_SetCloseLocation_Params
{
	bool                                               CloseLocation;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     UID;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.HasNearByNewTips
struct UPlayerPrefs_C_HasNearByNewTips_Params
{
	struct FString                                     UID;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
	bool                                               Has;                                                      // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetNearByNewTipsRead
struct UPlayerPrefs_C_SetNearByNewTipsRead_Params
{
	struct FString                                     UID;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
};

// Function PlayerPrefs.PlayerPrefs_C.SetYXXYRedPoint
struct UPlayerPrefs_C_SetYXXYRedPoint_Params
{
	int                                                IsRed;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SetFirstInLobby
struct UPlayerPrefs_C_SetFirstInLobby_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.SetTime
struct UPlayerPrefs_C_SetTime_Params
{
	int                                                arg;                                                      // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.ClearCount
struct UPlayerPrefs_C_ClearCount_Params
{
};

// Function PlayerPrefs.PlayerPrefs_C.SetCount
struct UPlayerPrefs_C_SetCount_Params
{
	int                                                Count;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.LoadData
struct UPlayerPrefs_C_LoadData_Params
{
	class USaveGame*                                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PlayerPrefs.PlayerPrefs_C.SaveData
struct UPlayerPrefs_C_SaveData_Params
{
	bool                                               SaveDataState;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

}

