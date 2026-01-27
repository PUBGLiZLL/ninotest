#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:44 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_CORPS_WeekRecordData.BP_STRUCT_CORPS_WeekRecordData
// 0x0029
struct FBP_STRUCT_CORPS_WeekRecordData
{
	int                                                teamRank_0_54D97CC04B2D1B9760A11F6C0EC47CDB;              // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                timeSec_1_725322806625E56458FFFB5109BFC673;               // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                feats_2_720AB4C07197B0C572FB9A1D0FDFE4D3;                 // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                killNum_3_351D07002215D5CA4833BD8802BF7A5D;               // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     timeStr_4_33AB4A002D6CD65458FFF4FA09BFC572;               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_CORPS_WeekRecord_PlayerInfo> BP_ARRAY_TeammateList_6_5D8C164048CC2D532DA57942030BE194; // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               me_7_60F364806FF3A72674BF694405C6FE05;                    // 0x0028(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

