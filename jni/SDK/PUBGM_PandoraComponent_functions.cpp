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

// Function PandoraComponent.LuaBlueprintLibrary.GetStringFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLuaBPVar               Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString ULuaBlueprintLibrary::GetStringFromVar(const struct FLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.GetStringFromVar");

	ULuaBlueprintLibrary_GetStringFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaBlueprintLibrary.GetObjectFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLuaBPVar               Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// class UObject*                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UObject* ULuaBlueprintLibrary::GetObjectFromVar(const struct FLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.GetObjectFromVar");

	ULuaBlueprintLibrary_GetObjectFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaBlueprintLibrary.GetNumberFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLuaBPVar               Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ULuaBlueprintLibrary::GetNumberFromVar(const struct FLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.GetNumberFromVar");

	ULuaBlueprintLibrary_GetNumberFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaBlueprintLibrary.GetIntFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLuaBPVar               Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// int                            ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

int ULuaBlueprintLibrary::GetIntFromVar(const struct FLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.GetIntFromVar");

	ULuaBlueprintLibrary_GetIntFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaBlueprintLibrary.GetBoolFromVar
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FLuaBPVar               Value                          (Parm)
// int                            Index                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ULuaBlueprintLibrary::GetBoolFromVar(const struct FLuaBPVar& Value, int Index)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.GetBoolFromVar");

	ULuaBlueprintLibrary_GetBoolFromVar_Params params;
	params.Value = Value;
	params.Index = Index;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 Value                          (Parm, ZeroConstructor)
// struct FLuaBPVar               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromString(const struct FString& Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromString");

	ULuaBlueprintLibrary_CreateVarFromString_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromObject
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                 Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLuaBPVar               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromObject(class UObject* Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromObject");

	ULuaBlueprintLibrary_CreateVarFromObject_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromNumber
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                          Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLuaBPVar               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromNumber(float Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromNumber");

	ULuaBlueprintLibrary_CreateVarFromNumber_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromInt
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int                            Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLuaBPVar               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromInt(int Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromInt");

	ULuaBlueprintLibrary_CreateVarFromInt_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromBool
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                           Value                          (Parm, ZeroConstructor, IsPlainOldData)
// struct FLuaBPVar               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLuaBPVar ULuaBlueprintLibrary::CreateVarFromBool(bool Value)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromBool");

	ULuaBlueprintLibrary_CreateVarFromBool_Params params;
	params.Value = Value;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaBlueprintLibrary.CallToLua
// (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
// struct FString                 FunctionName                   (Parm, ZeroConstructor)
// TArray<struct FLuaBPVar>       Args                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FLuaBPVar               ReturnValue                    (Parm, OutParm, ReturnParm)

struct FLuaBPVar ULuaBlueprintLibrary::CallToLua(const struct FString& FunctionName, TArray<struct FLuaBPVar> Args)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaBlueprintLibrary.CallToLua");

	ULuaBlueprintLibrary_CallToLua_Params params;
	params.FunctionName = FunctionName;
	params.Args = Args;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.LuaDelegate.EventTrigger
// (Final, Native, Public, BlueprintCallable)

void ULuaDelegate::EventTrigger()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.LuaDelegate.EventTrigger");

	ULuaDelegate_EventTrigger_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraComponent.PandoraBpFunctionLibrary.Tnm2Test
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 errMsg                         (Parm, ZeroConstructor)
// int                            iId                            (Parm, ZeroConstructor, IsPlainOldData)
// int                            iType                          (Parm, ZeroConstructor, IsPlainOldData)
// bool                           bSend                          (Parm, ZeroConstructor, IsPlainOldData)

void UPandoraBpFunctionLibrary::Tnm2Test(const struct FString& errMsg, int iId, int iType, bool bSend)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.Tnm2Test");

	UPandoraBpFunctionLibrary_Tnm2Test_Params params;
	params.errMsg = errMsg;
	params.iId = iId;
	params.iType = iType;
	params.bSend = bSend;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraComponent.PandoraBpFunctionLibrary.SetGameInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UGameInstance*           instance                       (Parm, ZeroConstructor, IsPlainOldData)

void UPandoraBpFunctionLibrary::SetGameInstance(class UGameInstance* instance)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.SetGameInstance");

	UPandoraBpFunctionLibrary_SetGameInstance_Params params;
	params.instance = instance;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickOpenPop
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPandoraBpFunctionLibrary::OnClickOpenPop()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.OnClickOpenPop");

	UPandoraBpFunctionLibrary_OnClickOpenPop_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickInit
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPandoraBpFunctionLibrary::OnClickInit()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.OnClickInit");

	UPandoraBpFunctionLibrary_OnClickInit_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickClose
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPandoraBpFunctionLibrary::OnClickClose()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.OnClickClose");

	UPandoraBpFunctionLibrary_OnClickClose_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.PandoraBpFunctionLibrary.LogoutPandora
// (Final, Native, Static, Public, BlueprintCallable)

void UPandoraBpFunctionLibrary::LogoutPandora()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.LogoutPandora");

	UPandoraBpFunctionLibrary_LogoutPandora_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraComponent.PandoraBpFunctionLibrary.InitPandora
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 InOpenId                       (Parm, ZeroConstructor)
// struct FString                 InRoleId                       (Parm, ZeroConstructor)
// struct FString                 InAppId                        (Parm, ZeroConstructor)
// struct FString                 InPlatId                       (Parm, ZeroConstructor)
// struct FString                 InAccType                      (Parm, ZeroConstructor)
// struct FString                 InArea                         (Parm, ZeroConstructor)
// struct FString                 InPartion                      (Parm, ZeroConstructor)
// struct FString                 InCloudTest                    (Parm, ZeroConstructor)
// struct FString                 InAccessToken                  (Parm, ZeroConstructor)
// struct FString                 InSdkVersion                   (Parm, ZeroConstructor)
// struct FString                 InGameVersion                  (Parm, ZeroConstructor)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UPandoraBpFunctionLibrary::InitPandora(const struct FString& InOpenId, const struct FString& InRoleId, const struct FString& InAppId, const struct FString& InPlatId, const struct FString& InAccType, const struct FString& InArea, const struct FString& InPartion, const struct FString& InCloudTest, const struct FString& InAccessToken, const struct FString& InSdkVersion, const struct FString& InGameVersion)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.InitPandora");

	UPandoraBpFunctionLibrary_InitPandora_Params params;
	params.InOpenId = InOpenId;
	params.InRoleId = InRoleId;
	params.InAppId = InAppId;
	params.InPlatId = InPlatId;
	params.InAccType = InAccType;
	params.InArea = InArea;
	params.InPartion = InPartion;
	params.InCloudTest = InCloudTest;
	params.InAccessToken = InAccessToken;
	params.InSdkVersion = InSdkVersion;
	params.InGameVersion = InGameVersion;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.PandoraBpFunctionLibrary.GetHappyMessage
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FString                 ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm)

struct FString UPandoraBpFunctionLibrary::GetHappyMessage()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraBpFunctionLibrary.GetHappyMessage");

	UPandoraBpFunctionLibrary_GetHappyMessage_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	static auto defaultObj = StaticClass()->GetDefaultObject();
	defaultObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PandoraComponent.PandoraRichTextBox.SetText
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FText                   InText                         (Parm)

void UPandoraRichTextBox::SetText(const struct FText& InText)
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraRichTextBox.SetText");

	UPandoraRichTextBox_SetText_Params params;
	params.InText = InText;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function PandoraComponent.PandoraRichTextBox.GetText
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FText                   ReturnValue                    (Parm, OutParm, ReturnParm)

struct FText UPandoraRichTextBox::GetText()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function PandoraComponent.PandoraRichTextBox.GetText");

	UPandoraRichTextBox_GetText_Params params;

	auto flags = pFunc->FunctionFlags;
	pFunc->FunctionFlags |= 0x400;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;

	return params.ReturnValue;
}


}

