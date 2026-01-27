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

// Enum Client.EScreenDir
enum class EScreenDir : uint8_t
{
	EScreenDir__kScreenDirSensor   = 0,
	EScreenDir__kScreenDirPortrait = 1,
	EScreenDir__kScreenDirLandscape = 2,
	EScreenDir__EScreenDir_MAX     = 3
};


// Enum Client.EContentType
enum class EContentType : uint8_t
{
	EContentType__kContentTypeText = 0,
	EContentType__kContentTypeImage = 1,
	EContentType__kContentTypeWeb  = 2,
	EContentType__EContentType_MAX = 3
};


// Enum Client.ENoticeType
enum class ENoticeType : uint8_t
{
	ENoticeType__kNoticeTypeAlert  = 0,
	ENoticeType__kNoticeTypeScroll = 1,
	ENoticeType__kNoticeTypeAll    = 2,
	ENoticeType__ENoticeType_MAX   = 3
};


// Enum Client.UBLEType
enum class EUBLEType : uint8_t
{
	UBLEType__BLEType_NotBLE       = 0,
	UBLEType__BLEType_Keyboard     = 1,
	UBLEType__BLEType_Joystick     = 2,
	UBLEType__BLEType_MAX          = 3
};



//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Client.GameWidgetConfig
// 0x0020
struct FGameWidgetConfig
{
	struct FString                                     Path;                                                     // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     Container;                                                // 0x000C(0x000C) (ZeroConstructor)
	int                                                ZOrder;                                                   // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	class UClass*                                      WidgetClass;                                              // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.GCloudLoginAccountInfo
// 0x0040
struct FGCloudLoginAccountInfo
{
	int                                                LoginChannel;                                             // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     OpenID;                                                   // 0x0004(0x000C) (ZeroConstructor)
	struct FString                                     OpenKey;                                                  // 0x0010(0x000C) (ZeroConstructor)
	struct FString                                     PayToken;                                                 // 0x001C(0x000C) (ZeroConstructor)
	struct FString                                     Pf;                                                       // 0x0028(0x000C) (ZeroConstructor)
	struct FString                                     PfKey;                                                    // 0x0034(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.NativeHUDTickContainer
// 0x000C
struct FNativeHUDTickContainer
{
	int                                                WidgetIndex;                                              // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	TWeakObjectPtr<class UUAEUserWidget>               PWidget;                                                  // 0x0004(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
};

// ScriptStruct Client.WebviewInfoWrapper
// 0x0024
struct FWebviewInfoWrapper
{
	int                                                ErrorCode;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason;                                                   // 0x0004(0x000C) (ZeroConstructor)
	int                                                Extend;                                                   // 0x0010(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Extend2;                                                  // 0x0014(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     MsgData;                                                  // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.WakeupInfoWrapper
// 0x003C
struct FWakeupInfoWrapper
{
	unsigned char                                      UnknownData00[0x3C];                                      // 0x0000(0x003C) MISSED OFFSET
};

// ScriptStruct Client.LocationInfoWrapper
// 0x0018
struct FLocationInfoWrapper
{
	int                                                ErrorCode;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0004(0x0004) MISSED OFFSET
	double                                             Longitude;                                                // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
	double                                             Latitude;                                                 // 0x0010(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.WechatGroupInfomation
// 0x0024
struct FWechatGroupInfomation
{
	struct FString                                     OpenIdList;                                               // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     MemberNum;                                                // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     ChatRoomURL;                                              // 0x0018(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.GroupInfoWrapper
// 0x0040
struct FGroupInfoWrapper
{
	int                                                SnsAction;                                                // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Flag;                                                     // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                ErrorCode;                                                // 0x0008(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Platform;                                                 // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     Desc;                                                     // 0x0010(0x000C) (ZeroConstructor)
	struct FWechatGroupInfomation                      wechatGroupInfo;                                          // 0x001C(0x0024)
};

// ScriptStruct Client.TimeStamp
// 0x0018
struct FTimeStamp
{
	struct FString                                     Title;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Priority;                                                 // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                StartTime;                                                // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                endTime;                                                  // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.PictureInfomation
// 0x001C
struct FPictureInfomation
{
	EScreenDir                                         PicScreenDir;                                             // 0x0000(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     PicPath;                                                  // 0x0004(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     HashValue;                                                // 0x0010(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.NoticeInfo
// 0x008C
struct FNoticeInfo
{
	struct FString                                     msgID;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     OpenID;                                                   // 0x000C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgUrl;                                                   // 0x0018(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	ENoticeType                                        MsgType;                                                  // 0x0024(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
	struct FString                                     MsgScene;                                                 // 0x0028(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     StartTime;                                                // 0x0034(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     endTime;                                                  // 0x0040(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	EContentType                                       MsgContentType;                                           // 0x004C(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x004D(0x0003) MISSED OFFSET
	struct FString                                     MsgOrder;                                                 // 0x0050(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     ContentUrl;                                               // 0x005C(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	TArray<struct FPictureInfomation>                  PicArray;                                                 // 0x0068(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     MsgTitle;                                                 // 0x0074(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
	struct FString                                     msgContent;                                               // 0x0080(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

// ScriptStruct Client.FightFriendChat
// 0x0028
struct FFightFriendChat
{
	struct FString                                     UID;                                                      // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     Name;                                                     // 0x000C(0x000C) (ZeroConstructor)
	struct FString                                     Msg;                                                      // 0x0018(0x000C) (ZeroConstructor)
	bool                                               selfMsg;                                                  // 0x0024(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0025(0x0003) MISSED OFFSET
};

// ScriptStruct Client.PlayerFinishedGuide
// 0x0008
struct FPlayerFinishedGuide
{
	int                                                guideID;                                                  // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                FinishedCounts;                                           // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.NearByPersonInfo
// 0x0020
struct FNearByPersonInfo
{
	struct FString                                     OpenID;                                                   // 0x0000(0x000C) (ZeroConstructor)
	struct FString                                     gender;                                                   // 0x000C(0x000C) (ZeroConstructor)
	bool                                               IsFriend;                                                 // 0x0018(0x0001) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                Distance;                                                 // 0x001C(0x0004) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Client.QRCodeGenQRImgInfo
// 0x0014
struct FQRCodeGenQRImgInfo
{
	int                                                Tag;                                                      // 0x0000(0x0004) (ZeroConstructor, IsPlainOldData)
	int                                                Result;                                                   // 0x0004(0x0004) (ZeroConstructor, IsPlainOldData)
	struct FString                                     ImagePath;                                                // 0x0008(0x000C) (ZeroConstructor)
};

// ScriptStruct Client.NoticeInfos
// 0x000C
struct FNoticeInfos
{
	TArray<struct FNoticeInfo>                         Infos;                                                    // 0x0000(0x000C) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor)
};

}

