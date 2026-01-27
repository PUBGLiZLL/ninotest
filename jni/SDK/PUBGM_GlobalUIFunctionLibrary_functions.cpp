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

// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeSecToSimpleTimeStr
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            TimeSec                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TimeStr                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::TimeSecToSimpleTimeStr(int TimeSec, class UObject* __WorldContext, struct FString* TimeStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeSecToSimpleTimeStr");

	UGlobalUIFunctionLibrary_C_TimeSecToSimpleTimeStr_Params params;
	params.TimeSec = TimeSec;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStr != nullptr)
		*TimeStr = params.TimeStr;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShouldTouchDispatch
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent           PointerEventData               (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           IsLeftRightMove                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ShouldDispatch                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          DealtaValue                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShouldTouchDispatch(const struct FPointerEvent& PointerEventData, bool IsLeftRightMove, class UObject* __WorldContext, bool* ShouldDispatch, float* DealtaValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShouldTouchDispatch");

	UGlobalUIFunctionLibrary_C_ShouldTouchDispatch_Params params;
	params.PointerEventData = PointerEventData;
	params.IsLeftRightMove = IsLeftRightMove;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (ShouldDispatch != nullptr)
		*ShouldDispatch = params.ShouldDispatch;
	if (DealtaValue != nullptr)
		*DealtaValue = params.DealtaValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCorpsRomanNumerals
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Num                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 String                         (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetCorpsRomanNumerals(int Num, class UObject* __WorldContext, struct FString* String)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetCorpsRomanNumerals");

	UGlobalUIFunctionLibrary_C_GetCorpsRomanNumerals_Params params;
	params.Num = Num;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (String != nullptr)
		*String = params.String;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsRankLevel
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  iconImage                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              levelText                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            levelId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Style                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetCorpsRankLevel(class UImage* iconImage, class UTextBlock* levelText, int levelId, int Style, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsRankLevel");

	UGlobalUIFunctionLibrary_C_SetCorpsRankLevel_Params params;
	params.iconImage = iconImage;
	params.levelText = levelText;
	params.levelId = levelId;
	params.Style = Style;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSeasonPassImg
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SeasonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PassType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBigIcon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  Img                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetSeasonPassImg(int SeasonID, int PassType, bool IsBigIcon, class UImage* Img, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSeasonPassImg");

	UGlobalUIFunctionLibrary_C_SetSeasonPassImg_Params params;
	params.SeasonID = SeasonID;
	params.PassType = PassType;
	params.IsBigIcon = IsBigIcon;
	params.Img = Img;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetChineseNumber
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Ret                            (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetChineseNumber(int ID, class UObject* __WorldContext, struct FString* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetChineseNumber");

	UGlobalUIFunctionLibrary_C_GetChineseNumber_Params params;
	params.ID = ID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetSeasonPassImgPath
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            SeasonID                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            PassType                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           IsBigIcon                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 imgPath                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetSeasonPassImgPath(int SeasonID, int PassType, bool IsBigIcon, class UObject* __WorldContext, struct FString* imgPath)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetSeasonPassImgPath");

	UGlobalUIFunctionLibrary_C_GetSeasonPassImgPath_Params params;
	params.SeasonID = SeasonID;
	params.PassType = PassType;
	params.IsBigIcon = IsBigIcon;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (imgPath != nullptr)
		*imgPath = params.imgPath;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetDefaultAvatarInfo
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            HeadId                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// int                            gender                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// TArray<int>                    AvatarList                     (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetDefaultAvatarInfo(class UObject* __WorldContext, int* HeadId, int* gender, TArray<int>* AvatarList)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetDefaultAvatarInfo");

	UGlobalUIFunctionLibrary_C_GetDefaultAvatarInfo_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (HeadId != nullptr)
		*HeadId = params.HeadId;
	if (gender != nullptr)
		*gender = params.gender;
	if (AvatarList != nullptr)
		*AvatarList = params.AvatarList;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CancelPreviewAvatar
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CancelPreviewAvatar(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CancelPreviewAvatar");

	UGlobalUIFunctionLibrary_C_CancelPreviewAvatar_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetLobbyDefaultLightProperty(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyDefaultLightProperty");

	UGlobalUIFunctionLibrary_C_SetLobbyDefaultLightProperty_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              Trans                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetSceneSkyLightProperty(const struct FString& lightName, const struct FTransform& Trans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneSkyLightProperty");

	UGlobalUIFunctionLibrary_C_SetSceneSkyLightProperty_Params params;
	params.lightName = lightName;
	params.Trans = Trans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSystemCameraByIndex
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 ManagerName                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          blendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 posOffset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 abnormalPosOffset              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SwitchSystemCameraByIndex(const struct FString& ManagerName, int Index, float blendTime, const struct FString& posOffset, const struct FString& abnormalPosOffset, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSystemCameraByIndex");

	UGlobalUIFunctionLibrary_C_SwitchSystemCameraByIndex_Params params;
	params.ManagerName = ManagerName;
	params.Index = Index;
	params.blendTime = blendTime;
	params.posOffset = posOffset;
	params.abnormalPosOffset = abnormalPosOffset;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyCameraByIndex
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Index                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          blendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           forceSwitch                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 posOffset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 abnormalPosOffset              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Success                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SwitchLobbyCameraByIndex(int Index, float blendTime, bool forceSwitch, const struct FString& posOffset, const struct FString& abnormalPosOffset, class UObject* __WorldContext, bool* Success)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyCameraByIndex");

	UGlobalUIFunctionLibrary_C_SwitchLobbyCameraByIndex_Params params;
	params.Index = Index;
	params.blendTime = blendTime;
	params.forceSwitch = forceSwitch;
	params.posOffset = posOffset;
	params.abnormalPosOffset = abnormalPosOffset;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Success != nullptr)
		*Success = params.Success;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TryPreviewAvatarInfo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::TryPreviewAvatarInfo(int resID, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TryPreviewAvatarInfo");

	UGlobalUIFunctionLibrary_C_TryPreviewAvatarInfo_Params params;
	params.resID = resID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseTouchTips
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CloseTouchTips(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseTouchTips");

	UGlobalUIFunctionLibrary_C_CloseTouchTips_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowTouchTipsByButton
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 str                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UButton*                 btn                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          offsetX                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          offsetY                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 titleStr                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowTouchTipsByButton(const struct FString& str, class UButton* btn, float offsetX, float offsetY, const struct FString& titleStr, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowTouchTipsByButton");

	UGlobalUIFunctionLibrary_C_ShowTouchTipsByButton_Params params;
	params.str = str;
	params.btn = btn;
	params.offsetX = offsetX;
	params.offsetY = offsetY;
	params.titleStr = titleStr;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            BgIdx                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SwitchLobbyMeshBg(int BgIdx, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchLobbyMeshBg");

	UGlobalUIFunctionLibrary_C_SwitchLobbyMeshBg_Params params;
	params.BgIdx = BgIdx;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PreviewAvatarInfo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            resID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PreviewAvatarInfo(int resID, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PreviewAvatarInfo");

	UGlobalUIFunctionLibrary_C_PreviewAvatarInfo_Params params;
	params.resID = resID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetOnLineColor
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            onlineflag                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isonline                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FSlateColor             Color                          (Parm, OutParm)

void UGlobalUIFunctionLibrary_C::GetOnLineColor(int onlineflag, bool isonline, class UObject* __WorldContext, struct FSlateColor* Color)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetOnLineColor");

	UGlobalUIFunctionLibrary_C_GetOnLineColor_Params params;
	params.onlineflag = onlineflag;
	params.isonline = isonline;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Color != nullptr)
		*Color = params.Color;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGameGender
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            gender                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetGameGender(class UObject* __WorldContext, int* gender)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGameGender");

	UGlobalUIFunctionLibrary_C_GetGameGender_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (gender != nullptr)
		*gender = params.gender;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetItemQuality
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            itemquality                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UImage*                  imageres                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetItemQuality(int itemquality, class UImage* imageres, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetItemQuality");

	UGlobalUIFunctionLibrary_C_SetItemQuality_Params params;
	params.itemquality = itemquality;
	params.imageres = imageres;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              targetTrans                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// int                            inverseSquareFalloff           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Radius                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           useTemperature                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Temperature                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetScenePointLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, int inverseSquareFalloff, float Radius, bool useTemperature, float Temperature, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetScenePointLightProperty");

	UGlobalUIFunctionLibrary_C_SetScenePointLightProperty_Params params;
	params.lightName = lightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.inverseSquareFalloff = inverseSquareFalloff;
	params.Radius = Radius;
	params.useTemperature = useTemperature;
	params.Temperature = Temperature;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 lightName                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FTransform              targetTrans                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Intensity                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FLinearColor            Color                          (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetSceneDirectionalLightProperty(const struct FString& lightName, const struct FTransform& targetTrans, float Intensity, const struct FLinearColor& Color, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetSceneDirectionalLightProperty");

	UGlobalUIFunctionLibrary_C_SetSceneDirectionalLightProperty_Params params;
	params.lightName = lightName;
	params.targetTrans = targetTrans;
	params.Intensity = Intensity;
	params.Color = Color;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateIntimacyRelationIcon
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            relation                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UCanvasPanel*            panel                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UWidgetSwitcher*         switcher                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              TextBlock                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateIntimacyRelationIcon(int relation, class UCanvasPanel* panel, class UWidgetSwitcher* switcher, class UTextBlock* TextBlock, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateIntimacyRelationIcon");

	UGlobalUIFunctionLibrary_C_UpdateIntimacyRelationIcon_Params params;
	params.relation = relation;
	params.panel = panel;
	params.switcher = switcher;
	params.TextBlock = TextBlock;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetIntimacy
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  heart                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            intimacynum                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              intimacyText                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetIntimacy(class UImage* heart, int intimacynum, class UTextBlock* intimacyText, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetIntimacy");

	UGlobalUIFunctionLibrary_C_SetIntimacy_Params params;
	params.heart = heart;
	params.intimacynum = intimacynum;
	params.intimacyText = intimacyText;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSceneCameraByIndex
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Idx                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          blendTime                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 posOffset                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 abnormalPosOffset              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SwitchSceneCameraByIndex(int Idx, float blendTime, const struct FString& posOffset, const struct FString& abnormalPosOffset, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SwitchSceneCameraByIndex");

	UGlobalUIFunctionLibrary_C_SwitchSceneCameraByIndex_Params params;
	params.Idx = Idx;
	params.blendTime = blendTime;
	params.posOffset = posOffset;
	params.abnormalPosOffset = abnormalPosOffset;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsSegmentLimit
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommon_RankIntegralLevel_Style_Small_UIBP_C* segmentWidget                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            levelId                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetCorpsSegmentLimit(class UCommon_RankIntegralLevel_Style_Small_UIBP_C* segmentWidget, class UTextBlock* textWidget, int levelId, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsSegmentLimit");

	UGlobalUIFunctionLibrary_C_SetCorpsSegmentLimit_Params params;
	params.segmentWidget = segmentWidget;
	params.textWidget = textWidget;
	params.levelId = levelId;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsLevelLimit
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              textWidget                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetCorpsLevelLimit(class UTextBlock* textWidget, int Level, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetCorpsLevelLimit");

	UGlobalUIFunctionLibrary_C_SetCorpsLevelLimit_Params params;
	params.textWidget = textWidget;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            iconId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLobbyCorpsIcon(int iconId, class UObject* __WorldContext, class UTexture2D** Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyCorpsIcon");

	UGlobalUIFunctionLibrary_C_GetLobbyCorpsIcon_Params params;
	params.iconId = iconId;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseHelpTips
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CloseHelpTips(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseHelpTips");

	UGlobalUIFunctionLibrary_C_CloseHelpTips_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowHelpTipsByButton
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            StrID                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowHelpTipsByButton(int StrID, class UButton* Button, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowHelpTipsByButton");

	UGlobalUIFunctionLibrary_C_ShowHelpTipsByButton_Params params;
	params.StrID = StrID;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeSecToTimeStr
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Second                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TimeStr                        (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::TimeSecToTimeStr(int Second, class UObject* __WorldContext, struct FString* TimeStr)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeSecToTimeStr");

	UGlobalUIFunctionLibrary_C_TimeSecToTimeStr_Params params;
	params.Second = Second;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TimeStr != nullptr)
		*TimeStr = params.TimeStr;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyHeadTexture
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Value                          (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLobbyHeadTexture(const struct FString& URL, class UObject* __WorldContext, class UTexture2D** Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyHeadTexture");

	UGlobalUIFunctionLibrary_C_GetLobbyHeadTexture_Params params;
	params.URL = URL;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Value != nullptr)
		*Value = params.Value;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.StoreLobbyHeadTexture
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UTexture2D*              headTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::StoreLobbyHeadTexture(const struct FString& URL, class UTexture2D* headTexture, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.StoreLobbyHeadTexture");

	UGlobalUIFunctionLibrary_C_StoreLobbyHeadTexture_Params params;
	params.URL = URL;
	params.headTexture = headTexture;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyRankTexture
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLobbyRankTexture(int rankIntegral, class UObject* __WorldContext, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyRankTexture");

	UGlobalUIFunctionLibrary_C_GetLobbyRankTexture_Params params;
	params.rankIntegral = rankIntegral;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            frameLevel                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLobbyFrameTexture(int frameLevel, class UObject* __WorldContext, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyFrameTexture");

	UGlobalUIFunctionLibrary_C_GetLobbyFrameTexture_Params params;
	params.frameLevel = frameLevel;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGlobal_Bp_C*            AsGlobal_Bp                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetLobbyGlobalBp(class UObject* __WorldContext, class UGlobal_Bp_C** AsGlobal_Bp)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLobbyGlobalBp");

	UGlobalUIFunctionLibrary_C_GetLobbyGlobalBp_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (AsGlobal_Bp != nullptr)
		*AsGlobal_Bp = params.AsGlobal_Bp;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunctionNoFetch
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   bp_name                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 func_name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::InvoleBpFunctionNoFetch(const struct FName& bp_name, const struct FString& func_name, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunctionNoFetch");

	UGlobalUIFunctionLibrary_C_InvoleBpFunctionNoFetch_Params params;
	params.bp_name = bp_name;
	params.func_name = func_name;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPlayerPrefs
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPlayerPrefs_C*          bp_playerprefs                 (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetPlayerPrefs(class UObject* __WorldContext, class UPlayerPrefs_C** bp_playerprefs)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetPlayerPrefs");

	UGlobalUIFunctionLibrary_C_GetPlayerPrefs_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (bp_playerprefs != nullptr)
		*bp_playerprefs = params.bp_playerprefs;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenUseItemUI
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 itemInsID                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::OpenUseItemUI(const struct FString& itemInsID, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenUseItemUI");

	UGlobalUIFunctionLibrary_C_OpenUseItemUI_Params params;
	params.itemInsID = itemInsID;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowLobbyMenuEnterAnimation
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowLobbyMenuEnterAnimation(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowLobbyMenuEnterAnimation");

	UGlobalUIFunctionLibrary_C_ShowLobbyMenuEnterAnimation_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyMenuStatus
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MenuId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Status                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SetLobbyMenuStatus(int MenuId, bool Status, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SetLobbyMenuStatus");

	UGlobalUIFunctionLibrary_C_SetLobbyMenuStatus_Params params;
	params.MenuId = MenuId;
	params.Status = Status;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            MenuId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Ret                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CheckIfMenuOpen(int MenuId, class UObject* __WorldContext, bool* Ret)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CheckIfMenuOpen");

	UGlobalUIFunctionLibrary_C_CheckIfMenuOpen_Params params;
	params.MenuId = MenuId;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Ret != nullptr)
		*Ret = params.Ret;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidStringAll
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           CanBeEnglish                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeSpace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeChinese                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 validText                      (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetValidStringAll(const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeSpace, bool CanBeChinese, class UObject* __WorldContext, struct FString* validText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidStringAll");

	UGlobalUIFunctionLibrary_C_GetValidStringAll_Params params;
	params.Text = Text;
	params.CanBeEnglish = CanBeEnglish;
	params.CanBeNumber = CanBeNumber;
	params.CanBeSpace = CanBeSpace;
	params.CanBeChinese = CanBeChinese;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (validText != nullptr)
		*validText = params.validText;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateLobbyRedpointStatus
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            modeId                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateLobbyRedpointStatus(bool IsShow, int modeId, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateLobbyRedpointStatus");

	UGlobalUIFunctionLibrary_C_UpdateLobbyRedpointStatus_Params params;
	params.IsShow = IsShow;
	params.modeId = modeId;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS_Server
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            expire_ts                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            valid_hours                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 time_s                         (Parm, OutParm, ZeroConstructor)
// bool                           is_have_limit                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetItemTimeS_Server(int expire_ts, int valid_hours, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS_Server");

	UGlobalUIFunctionLibrary_C_GetItemTimeS_Server_Params params;
	params.expire_ts = expire_ts;
	params.valid_hours = valid_hours;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (time_s != nullptr)
		*time_s = params.time_s;
	if (is_have_limit != nullptr)
		*is_have_limit = params.is_have_limit;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            res_id                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            FirstTimeNum                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 time_s                         (Parm, OutParm, ZeroConstructor)
// bool                           is_have_limit                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetItemTimeS(int res_id, int FirstTimeNum, class UObject* __WorldContext, struct FString* time_s, bool* is_have_limit)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetItemTimeS");

	UGlobalUIFunctionLibrary_C_GetItemTimeS_Params params;
	params.res_id = res_id;
	params.FirstTimeNum = FirstTimeNum;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (time_s != nullptr)
		*time_s = params.time_s;
	if (is_have_limit != nullptr)
		*is_have_limit = params.is_have_limit;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeNumToTimeS
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            time_num                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 time_s                         (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::TimeNumToTimeS(int time_num, class UObject* __WorldContext, struct FString* time_s)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.TimeNumToTimeS");

	UGlobalUIFunctionLibrary_C_TimeNumToTimeS_Params params;
	params.time_num = time_num;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (time_s != nullptr)
		*time_s = params.time_s;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsWithItemInfo
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FBP_STRUCT_CommonItemData item_info                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                           ignoreJump                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowItemTipsWithItemInfo(class UButton* Button, const struct FBP_STRUCT_CommonItemData& item_info, bool ignoreJump, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsWithItemInfo");

	UGlobalUIFunctionLibrary_C_ShowItemTipsWithItemInfo_Params params;
	params.Button = Button;
	params.item_info = item_info;
	params.ignoreJump = ignoreJump;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UButton*                 Button                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowItemTipsByButton(int ItemID, class UButton* Button, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByButton");

	UGlobalUIFunctionLibrary_C_ShowItemTipsByButton_Params params;
	params.ItemID = ItemID;
	params.Button = Button;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CloseItemTips(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CloseItemTips");

	UGlobalUIFunctionLibrary_C_CloseItemTips_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByPos
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ItemID                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector2D               pos                            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowItemTipsByPos(int ItemID, const struct FVector2D& pos, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowItemTipsByPos");

	UGlobalUIFunctionLibrary_C_ShowItemTipsByPos_Params params;
	params.ItemID = ItemID;
	params.pos = pos;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                  Class                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Parent                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UUAEUserWidget*          Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::CreateUAEUserWidget(class UClass* Class, class UUAEUserWidget* Parent, class UObject* __WorldContext, class UUAEUserWidget** Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.CreateUAEUserWidget");

	UGlobalUIFunctionLibrary_C_CreateUAEUserWidget_Params params;
	params.Class = Class;
	params.Parent = Parent;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundCloseButton(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundCloseButton");

	UGlobalUIFunctionLibrary_C_PlaySoundCloseButton_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>         Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool                           IsShow                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::ShowEffect(bool IsShow, class UObject* __WorldContext, TArray<class UWidget*>* Widget)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.ShowEffect");

	UGlobalUIFunctionLibrary_C_ShowEffect_Params params;
	params.IsShow = IsShow;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                 Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Visible                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsWidgetVisible(class UWidget* Widget, class UObject* __WorldContext, bool* Visible)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsWidgetVisible");

	UGlobalUIFunctionLibrary_C_IsWidgetVisible_Params params;
	params.Widget = Widget;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visible != nullptr)
		*Visible = params.Visible;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::PlaySoundClickButton(class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.PlaySoundClickButton");

	UGlobalUIFunctionLibrary_C_PlaySoundClickButton_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsChinese
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsChinese(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsChinese");

	UGlobalUIFunctionLibrary_C_IsChinese_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ButtonType                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Reason                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::SendBAReport(int ButtonType, int Reason, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.SendBAReport");

	UGlobalUIFunctionLibrary_C_SendBAReport_Params params;
	params.ButtonType = ButtonType;
	params.Reason = Reason;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsValidChar
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           CanBeEnglish                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeSpace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeChinese                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsValidChar(const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeSpace, bool CanBeChinese, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsValidChar");

	UGlobalUIFunctionLibrary_C_IsValidChar_Params params;
	params.Text = Text;
	params.CanBeEnglish = CanBeEnglish;
	params.CanBeNumber = CanBeNumber;
	params.CanBeSpace = CanBeSpace;
	params.CanBeChinese = CanBeChinese;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsNumber
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsNumber(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsNumber");

	UGlobalUIFunctionLibrary_C_IsNumber_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsSpace
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::IsSpace(const struct FString& Text, class UObject* __WorldContext, bool* Result)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.IsSpace");

	UGlobalUIFunctionLibrary_C_IsSpace_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           chineseSensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Length                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetTextLength(const struct FString& Text, bool chineseSensity, class UObject* __WorldContext, int* Length)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetTextLength");

	UGlobalUIFunctionLibrary_C_GetTextLength_Params params;
	params.Text = Text;
	params.chineseSensity = chineseSensity;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Length != nullptr)
		*Length = params.Length;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visible                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           collapse                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isButton                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// ESlateVisibility               Visibility                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::BoolToVisible(bool Visible, bool collapse, bool isButton, class UObject* __WorldContext, ESlateVisibility* Visibility)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.BoolToVisible");

	UGlobalUIFunctionLibrary_C_BoolToVisible_Params params;
	params.Visible = Visible;
	params.collapse = collapse;
	params.isButton = isButton;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Visibility != nullptr)
		*Visibility = params.Visibility;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidString
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            maxLength                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// bool                           CanBeEnglish                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeNumber                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeSpace                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           CanBeChinese                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           chineseSensity                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 validText                      (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetValidString(int maxLength, const struct FString& Text, bool CanBeEnglish, bool CanBeNumber, bool CanBeSpace, bool CanBeChinese, bool chineseSensity, class UObject* __WorldContext, struct FString* validText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetValidString");

	UGlobalUIFunctionLibrary_C_GetValidString_Params params;
	params.maxLength = maxLength;
	params.Text = Text;
	params.CanBeEnglish = CanBeEnglish;
	params.CanBeNumber = CanBeNumber;
	params.CanBeSpace = CanBeSpace;
	params.CanBeChinese = CanBeChinese;
	params.chineseSensity = chineseSensity;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (validText != nullptr)
		*validText = params.validText;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.isEnglish
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           isEnglish                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::isEnglish(const struct FString& Text, class UObject* __WorldContext, bool* isEnglish)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.isEnglish");

	UGlobalUIFunctionLibrary_C_isEnglish_Params params;
	params.Text = Text;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (isEnglish != nullptr)
		*isEnglish = params.isEnglish;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenURL
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FString                 URL                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// EScreenDir                     Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           hastoken                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::OpenURL(const struct FString& URL, EScreenDir Direction, bool hastoken, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.OpenURL");

	UGlobalUIFunctionLibrary_C_OpenURL_Params params;
	params.URL = URL;
	params.Direction = Direction;
	params.hastoken = hastoken;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankName
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*              Text                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateRankName(class UTextBlock* Text, int Level, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankName");

	UGlobalUIFunctionLibrary_C_UpdateRankName_Params params;
	params.Text = Text;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankIcon
// (Static, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                  imageObj                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::UpdateRankIcon(class UImage* imageObj, int Level, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.UpdateRankIcon");

	UGlobalUIFunctionLibrary_C_UpdateRankIcon_Params params;
	params.imageObj = imageObj;
	params.Level = Level;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class Abp_global_C*            globalObj                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetGlobalData(class UObject* __WorldContext, class Abp_global_C** globalObj)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalData");

	UGlobalUIFunctionLibrary_C_GetGlobalData_Params params;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (globalObj != nullptr)
		*globalObj = params.globalObj;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunction
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName                   bp_name                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 func_name                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::InvoleBpFunction(const struct FName& bp_name, const struct FString& func_name, class UObject* __WorldContext)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.InvoleBpFunction");

	UGlobalUIFunctionLibrary_C_InvoleBpFunction_Params params;
	params.bp_name = bp_name;
	params.func_name = func_name;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString
// (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            ID                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 string1                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 string2                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// struct FString                 string3                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 TextValue                      (Parm, OutParm, ZeroConstructor)

void UGlobalUIFunctionLibrary_C::GetLocalizeString(int ID, const struct FString& string1, const struct FString& string2, const struct FString& string3, class UObject* __WorldContext, struct FString* TextValue)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetLocalizeString");

	UGlobalUIFunctionLibrary_C_GetLocalizeString_Params params;
	params.ID = ID;
	params.string1 = string1;
	params.string2 = string2;
	params.string3 = string3;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (TextValue != nullptr)
		*TextValue = params.TextValue;
}


// Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalUIEventDispatcher
// (Static, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFrontendHUD*            FrontendHUD                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 __WorldContext                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGlobalUIEventDispatcher_BP_C* NewParam                       (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UGlobalUIFunctionLibrary_C::GetGlobalUIEventDispatcher(class UFrontendHUD* FrontendHUD, class UObject* __WorldContext, class UGlobalUIEventDispatcher_BP_C** NewParam)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function GlobalUIFunctionLibrary.GlobalUIFunctionLibrary_C.GetGlobalUIEventDispatcher");

	UGlobalUIFunctionLibrary_C_GetGlobalUIEventDispatcher_Params params;
	params.FrontendHUD = FrontendHUD;
	params.__WorldContext = __WorldContext;

	auto flags = pFunc->FunctionFlags;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (NewParam != nullptr)
		*NewParam = params.NewParam;
}


}

