#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function PandoraComponent.LuaBlueprintLibrary.GetStringFromVar
struct ULuaBlueprintLibrary_GetStringFromVar_Params
{
	struct FLuaBPVar                                   Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PandoraComponent.LuaBlueprintLibrary.GetObjectFromVar
struct ULuaBlueprintLibrary_GetObjectFromVar_Params
{
	struct FLuaBPVar                                   Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	class UObject*                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraComponent.LuaBlueprintLibrary.GetNumberFromVar
struct ULuaBlueprintLibrary_GetNumberFromVar_Params
{
	struct FLuaBPVar                                   Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraComponent.LuaBlueprintLibrary.GetIntFromVar
struct ULuaBlueprintLibrary_GetIntFromVar_Params
{
	struct FLuaBPVar                                   Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraComponent.LuaBlueprintLibrary.GetBoolFromVar
struct ULuaBlueprintLibrary_GetBoolFromVar_Params
{
	struct FLuaBPVar                                   Value;                                                    // (Parm)
	int                                                Index;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromString
struct ULuaBlueprintLibrary_CreateVarFromString_Params
{
	struct FString                                     Value;                                                    // (Parm, ZeroConstructor)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromObject
struct ULuaBlueprintLibrary_CreateVarFromObject_Params
{
	class UObject*                                     Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromNumber
struct ULuaBlueprintLibrary_CreateVarFromNumber_Params
{
	float                                              Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromInt
struct ULuaBlueprintLibrary_CreateVarFromInt_Params
{
	int                                                Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.LuaBlueprintLibrary.CreateVarFromBool
struct ULuaBlueprintLibrary_CreateVarFromBool_Params
{
	bool                                               Value;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.LuaBlueprintLibrary.CallToLua
struct ULuaBlueprintLibrary_CallToLua_Params
{
	struct FString                                     FunctionName;                                             // (Parm, ZeroConstructor)
	TArray<struct FLuaBPVar>                           Args;                                                     // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
	struct FLuaBPVar                                   ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

// Function PandoraComponent.LuaDelegate.EventTrigger
struct ULuaDelegate_EventTrigger_Params
{
};

// Function PandoraComponent.PandoraBpFunctionLibrary.Tnm2Test
struct UPandoraBpFunctionLibrary_Tnm2Test_Params
{
	struct FString                                     errMsg;                                                   // (Parm, ZeroConstructor)
	int                                                iId;                                                      // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                iType;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               bSend;                                                    // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.SetGameInstance
struct UPandoraBpFunctionLibrary_SetGameInstance_Params
{
	class UGameInstance*                               instance;                                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickOpenPop
struct UPandoraBpFunctionLibrary_OnClickOpenPop_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickInit
struct UPandoraBpFunctionLibrary_OnClickInit_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.OnClickClose
struct UPandoraBpFunctionLibrary_OnClickClose_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.LogoutPandora
struct UPandoraBpFunctionLibrary_LogoutPandora_Params
{
};

// Function PandoraComponent.PandoraBpFunctionLibrary.InitPandora
struct UPandoraBpFunctionLibrary_InitPandora_Params
{
	struct FString                                     InOpenId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InRoleId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InAppId;                                                  // (Parm, ZeroConstructor)
	struct FString                                     InPlatId;                                                 // (Parm, ZeroConstructor)
	struct FString                                     InAccType;                                                // (Parm, ZeroConstructor)
	struct FString                                     InArea;                                                   // (Parm, ZeroConstructor)
	struct FString                                     InPartion;                                                // (Parm, ZeroConstructor)
	struct FString                                     InCloudTest;                                              // (Parm, ZeroConstructor)
	struct FString                                     InAccessToken;                                            // (Parm, ZeroConstructor)
	struct FString                                     InSdkVersion;                                             // (Parm, ZeroConstructor)
	struct FString                                     InGameVersion;                                            // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function PandoraComponent.PandoraBpFunctionLibrary.GetHappyMessage
struct UPandoraBpFunctionLibrary_GetHappyMessage_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function PandoraComponent.PandoraRichTextBox.SetText
struct UPandoraRichTextBox_SetText_Params
{
	struct FText                                       InText;                                                   // (Parm)
};

// Function PandoraComponent.PandoraRichTextBox.GetText
struct UPandoraRichTextBox_GetText_Params
{
	struct FText                                       ReturnValue;                                              // (Parm, OutParm, ReturnParm)
};

}

