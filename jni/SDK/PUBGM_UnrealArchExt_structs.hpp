#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:39 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum UnrealArchExt.EUserWidgetFadingStatus
enum class EUserWidgetFadingStatus : uint8_t
{
	EUserWidgetFadingStatus__UserWidgetFadingStatus_None = 0,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_FadingIn = 1,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_FadingOut = 2,
	EUserWidgetFadingStatus__UserWidgetFadingStatus_MAX = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct UnrealArchExt.UserWidgetState
// 0x0020
struct FUserWidgetState
{
	struct FString                                     WidgetName;                                               // 0x0000(0x000C) (BlueprintVisible, ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FName                                       ContainerName;                                            // 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ZOrder;                                                   // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UUAEUserWidget*                              Widget;                                                   // 0x001C(0x0004) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct UnrealArchExt.UnixTimestampCallback
// 0x0050
struct FUnixTimestampCallback
{
	unsigned char                                      UnknownData00[0x50];                                      // 0x0000(0x0050) MISSED OFFSET
};

// ScriptStruct UnrealArchExt.LogicManagerCreateParams
// 0x0010
struct FLogicManagerCreateParams
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class UClass*                                      pLogicManagerClass;                                       // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
};

}

