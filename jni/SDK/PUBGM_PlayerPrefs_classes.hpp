#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:52 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPrefs.PlayerPrefs_C
// 0x0194 (0x01B4 - 0x0020)
class UPlayerPrefs_C : public USaveGame
{
public:
	int                                                LoginCount;                                               // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LoginTime;                                                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               FirstInLobby;                                             // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
	int                                                YXXYRedPoint;                                             // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<struct FString>                             NearByNewTipsList;                                        // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x3C];                                      // 0x003C(0x003C) UNKNOWN PROPERTY: SetProperty PlayerPrefs.PlayerPrefs_C.CloseLocationList
	int                                                CoprsShopLevelRedPoint;                                   // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                WXYouxiquanRedPoint;                                      // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TMap<struct FString, struct FString>               ConfigStringMap;                                          // 0x0080(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, int>                          ConfigIntMap;                                             // 0x00BC(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, float>                        ConfigFloatMap;                                           // 0x00F8(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<struct FString, bool>                         ConfigBoolMap;                                            // 0x0134(0x0050) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<int>                                        MysticalDivineOpenedCardIdxs;                             // 0x0170(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               HasMatchTagGuide;                                         // 0x017C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x017D(0x0003) MISSED OFFSET
	struct FString                                     SeasonSwitch;                                             // 0x0180(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                               IfHasShowExcitingTourTips;                                // 0x018C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x018D(0x0003) MISSED OFFSET
	int                                                LastEnterExcitingTourTimeSec;                             // 0x0190(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                LastEnterMysticalDivineTimeSec;                           // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     XGCreatePlayerTime;                                       // 0x0198(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	int                                                LastCorpsWarInviteTime;                                   // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FString                                     ServerKey;                                                // 0x01A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass PlayerPrefs.PlayerPrefs_C");
		return pStaticClass;
	}


	void FetchServerKey(struct FString* RetServerKey);
	void UpdateServerKey(const struct FString& ServerKey);
	void SetLastCorpsWarInviteTime(int Time);
	void SetXGCreatePlayerTime(const struct FString& timeData);
	void SetSeasonSwitch(const struct FString& Data);
	void SetMatchTagGuideFlag(bool hasGuide);
	void SetWXYouxiquanRedPoint(int IsRed);
	void SetCorpsShopRedPoint(int coprsLevel);
	void HasCloseLocation(const struct FString& UID, bool* Has);
	void SetCloseLocation(bool CloseLocation, const struct FString& UID);
	void HasNearByNewTips(const struct FString& UID, bool* Has);
	void SetNearByNewTipsRead(const struct FString& UID);
	void SetYXXYRedPoint(int IsRed);
	void SetFirstInLobby();
	void SetTime(int arg);
	void ClearCount();
	void SetCount(int Count);
	class USaveGame* LoadData();
	void SaveData(bool* SaveDataState);
};


}

