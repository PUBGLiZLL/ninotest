#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:48 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_SeasonPassRewardItem.BP_STRUCT_SeasonPassRewardItem
// 0x0028
struct FBP_STRUCT_SeasonPassRewardItem
{
	int                                                ItemID_1_64E7014047D8671132298856019E3044;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Level_6_3E0BF840085A41D35D899910091B85AC;                 // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Title_7_5B6C1AC07CEB63033320504909144435;                 // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsLocked_9_19D73DC048D851091ACC6F4E04C41024;              // 0x0014(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0015(0x0003) MISSED OFFSET
	int                                                Count_10_1F90DC80326758AC41D13F1A09012344;                // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                DropID_12_6428A2C013DD3D6D37938C08002DF544;               // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsReceived_13_1455530012AFED681138F40D0A0B90A4;           // 0x0020(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0021(0x0003) MISSED OFFSET
	int                                                HighLightLevel_14_065976406A0CF0F7567BF89504DC731C;       // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

