#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum MidasSDK.ELoginPlatform
enum class ELoginPlatform : uint8_t
{
	ELoginPlatform_NONE            = 0,
	ELoginPlatform_Wechat          = 1,
	ELoginPlatform_QQ              = 2,
	ELoginPlatform_Guest           = 3,
	ELoginPlatform_MAX             = 4
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct MidasSDK.APPayResponseInfo
// 0x002C
struct FAPPayResponseInfo
{
	int                                                resultCode;                                               // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                payState;                                                 // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                provideState;                                             // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                netState;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                realSaveNum;                                              // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                payItem;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                payChannel;                                               // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ResultMsg;                                                // 0x001C(0x000C) (ZeroConstructor)
	bool                                               isReprovide;                                              // 0x0028(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0029(0x0003) MISSED OFFSET
};

}

