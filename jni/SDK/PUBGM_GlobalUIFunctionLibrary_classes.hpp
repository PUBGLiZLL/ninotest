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

// BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C
// 0x0000 (0x0020 - 0x0020)
class UGlobalUIFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("BlueprintGeneratedClass GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C");
		return pStaticClass;
	}


	static void TimeSecToSimpleTimeStr(int TimeSec, class UObject* __WorldContext, struct FString* TimeStr);
	static void ShouldTouchDispatch(const struct FPointerEvent& PointerEventData, bool IsLeftRightMove, class UObject* __WorldContext, bool* ShouldDispatch, float* DealtaValue);
	static void GetCorpsRomanNumerals(int Num, class UObject* __WorldContext, struct FString* String);
	static void SetCorpsRankLevel(class UImage* iconImage, class UTextBlock* levelText, int levelId, int Style, class UObject* __WorldContext);
	static void SetSeasonPassImg(int SeasonID, int PassType, bool IsBigIcon, class UImage* Img, class UObject* __WorldContext);
	static void GetChineseNumber(int ID, class UObject* __WorldContext, struct FString* Ret);
	static void GetSeasonPassImgPath(int SeasonID, int PassType, bool IsBigIcon, class UObject* __WorldContext, struct FString* imgPath);
	static void GetDefaultAvatarInfo(class UObject* __WorldContext, int* HeadId, int* gender, TArray<int>* AvatarList);
	static void CancelPreviewAvatar(class UObject* __WorldContext);
	static void SetLobbyDefaultLightProperty(class UObject* __WorldContext);
	static void SetSceneSkyLightProperty(const struct FString& lightName, const struct FTransform& Trans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext);
	static void SwitchSystemCameraByIndex(const struct FString& ManagerName, int Index, float blendTime, const struct FString& posOffset, const struct FString& abnormalPosOffset, class UObject* __WorldContext);
	static void SwitchLobbyCameraByIndex(int Index, float blendTime, bool forceSwitch, const struct FString& posOffset, const struct FString& abnormalPosOffset, class UObject* __WorldContext, bool* Success);
	static void TryPreviewAvatarInfo(int resID, class UObject* __WorldContext);
	static void CloseTouchTips(class UObject* __WorldContext);
	static void ShowTouchTipsByButton(const struct FString& str, class UButton* btn, float offsetX, float offsetY, const struct FString& titleStr, class UObject* __WorldContext);
	static void SwitchLobbyMeshBg(int BgIdx, class UObject* __WorldContext);
	static void PreviewAvatarInfo(int resID, class UObject* __WorldContext);
	static void GetOnLineColor(int onlineflag, bool isonline, class UObject* __WorldContext, struct FSlateColor* Color);
	static void GetGameGender(class UObject* __WorldContext, int* gender);
	static void SetItemQuality(int itemquality, class UImage* imageres, class UObject* __WorldContext);
	static void SetScenePointLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, bool useTemperature, float Temperature, class UObject* __WorldContext);
	static void SetSceneDirectionalLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext);
	static void UpdateIntimacyRelationIcon(int relation, class UCanvasPanel* panel, class UWidgetSwitcher* switcher, class UTextBlock* TextBlock, class UObject* __WorldContext);
	static void SetIntimacy(class UImage* heart, int intimacynum, class UTextBlock* intimacyText, class UObject* __WorldContext);
	static void SwitchSceneCameraByIndex(int Idx, float blendTime, const struct FString& posOffset, const struct FString& abnormalPosOffset, class UObject* __WorldContext);
	static void SetCorpsSegmentLimit(class UCommon_RankIntegralLevel_Style_Small_UIBP_C* segmentWidget, class UTextBlock* textWidget, int levelId, class UObject* __WorldContext);
	static void SetCorpsLevelLimit(class UTextBlock* textWidget, int Level, class UObject* __WorldContext);
	static void GetLobbyCorpsIcon(int iconId, class UObject* __WorldContext, class UTexture2D** Value);
	static void CloseHelpTips(class UObject* __WorldContext);
	static void ShowHelpTipsByButton(int StrID, class UButton* Button, class UObject* __WorldContext);
	static void TimeSecToTimeStr(int Second, class UObject* __WorldContext, struct FString* TimeStr);
	static void GetLobbyHeadTexture(const struct FString& URL, class UObject* __WorldContext, class UTexture2D** Value);
	static void StoreLobbyHeadTexture(const struct FString& URL, class UTexture2D* headTexture, class UObject* __WorldContext);
	static void GetLobbyRankTexture(int rankIntegral, class UObject* __WorldContext, class UTexture2D** Output);
	static void GetLobbyFrameTexture(int frameLevel, class UObject* __WorldContext, class UTexture2D** Output);
	static void GetLobbyGlobalBp(class UObject* __WorldContext, class UGlobal_Bp_C** AsGlobal_Bp);
	static void InvoleBpFunctionNoFetch(const struct FName& bp_name, const struct FString& func_name, class UObject* __WorldContext);
	static void GetPlayerPrefs(class UObject* __WorldContext, class UPlayerPrefs_C** bp_playerprefs);
	static void OpenUseItemUI(const struct FString& itemInsID, class UObject* __WorldContext);
	static void ShowLobbyMenuEnterAnimation(class UObject* __WorldContext);
	static void SetLobbyMenuStatus(int MenuId, bool Status, class UObject* __WorldContext);
	static void CheckIfMenuOpen(int MenuId, class UObject* __WorldContext, bool* Ret);
	static void GetValidStringAll(const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeSpace, bool CanBeChinese, class UObject* __WorldContext, struct FString* validText);
	static void UpdateLobbyRedpointStatus(bool IsShow, int modeId, class UObject* __WorldContext);
	static void GetItemTimeS_Server(int expire_ts, int valid_hours, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit);
	static void GetItemTimeS(int res_id, int FirstTimeNum, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit);
	static void TimeNumToTimeS(int time_num, class UObject* __WorldContext, struct FString* time_s);
	static void ShowItemTipsWithItemInfo(class UButton* Button, const struct FBP_STRUCT_CommonItemData& item_info, bool ignoreJump, class UObject* __WorldContext);
	static void ShowItemTipsByButton(int ItemID, class UButton* Button, class UObject* __WorldContext);
	static void CloseItemTips(class UObject* __WorldContext);
	static void ShowItemTipsByPos(int ItemID, const struct FVector2D& pos, class UObject* __WorldContext);
	static void CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget);
	static void PlaySoundCloseButton(class UObject* __WorldContext);
	static void ShowEffect(bool IsShow, class UObject* __WorldContext, TArray<class UWidget*>* Widget);
	static void IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible);
	static void PlaySoundClickButton(class UObject* __WorldContext);
	static void IsChinese(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void SendBAReport(int ButtonType, int Reason, class UObject* __WorldContext);
	static void IsValidChar(const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeSpace, bool CanBeChinese, class UObject* __WorldContext, bool* Result);
	static void IsNumber(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void IsSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result);
	static void GetTextLength(const struct FString& Text, bool chineseSensity, class UObject* __WorldContext, int* Length);
	static void BoolToVisible(bool Visible, bool collapse, bool isButton, class UObject* __WorldContext, ESlateVisibility* Visibility);
	static void GetValidString(int maxLength, const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeSpace, bool CanBeChinese, bool chineseSensity, class UObject* __WorldContext, struct FString* validText);
	static void isEnglish(const struct FString& Text, class UObject* __WorldContext, bool* isEnglish);
	static void OpenURL(const struct FString& URL, EScreenDir Direction, bool hastoken, class UObject* __WorldContext);
	static void UpdateRankName(class UTextBlock* Text, int Level, class UObject* __WorldContext);
	static void UpdateRankIcon(class UImage* imageObj, int Level, class UObject* __WorldContext);
	static void GetGlobalData(class UObject* __WorldContext, class Abp_global_C** globalObj);
	static void InvoleBpFunction(const struct FName& bp_name, const struct FString& func_name, class UObject* __WorldContext);
	static void GetLocalizeString(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, class UObject* __WorldContext, struct FString* TextValue);
	static void GetGlobalUIEventDispatcher(class UFrontendHUD* FrontendHUD, class UObject* __WorldContext, class UGlobalUIEventDispatcher_BP_C** NewParam);
};


}

