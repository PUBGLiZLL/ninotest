//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:51 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInfoWithoutNum
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RankLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              RankTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              RankTextureOutput              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankInfoWithoutNum(int RankLevel, class UTexture2D* RankTexture, class UTexture2D** RankTextureOutput)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInfoWithoutNum");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInfoWithoutNum_Params params;
	params.RankLevel = RankLevel;
	params.RankTexture = RankTexture;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RankTextureOutput != nullptr)
		*RankTextureOutput = params.RankTextureOutput;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInfo
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RankLevel                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              RankTexture                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              RankTextureOutput              (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankInfo(int RankLevel, class UTexture2D* RankTexture, class UTexture2D** RankTextureOutput)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInfo");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInfo_Params params;
	params.RankLevel = RankLevel;
	params.RankTexture = RankTexture;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (RankTextureOutput != nullptr)
		*RankTextureOutput = params.RankTextureOutput;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralExtend
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Texture                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTexture2D*              Output                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankInteralExtend(int rankIntegral, class UTextBlock* textIntegralName, class UTexture2D* Texture, class UTexture2D** Output)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteralExtend");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteralExtend_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;
	params.Texture = Texture;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	if (Output != nullptr)
		*Output = params.Output;
}


// Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteral
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            rankIntegral                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UTextBlock*              textIntegralName               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UCommon_RankIntegralLevel_Style_Small_UIBP_C::SetRankInteral(int rankIntegral, class UTextBlock* textIntegralName)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function Common_RankIntegralLevel_Style_Small_UIBP.Common_RankIntegralLevel_Style_Small_UIBP_C.SetRankInteral");

	UCommon_RankIntegralLevel_Style_Small_UIBP_C_SetRankInteral_Params params;
	params.rankIntegral = rankIntegral;
	params.textIntegralName = textIntegralName;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

