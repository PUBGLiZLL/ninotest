#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:45 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_UNINGame_AwardInfo.BP_STRUCT_UNINGame_AwardInfo
// 0x0040
struct FBP_STRUCT_UNINGame_AwardInfo
{
	struct FString                                     desc_0_5D41C8807C1C8DBC69630DA9037CE593;                  // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_UNInGame_AwardItemInfo>   BP_ARRAY_UNInGame_AwardList_1_6397640003B137784C5E13C50962AFE4;// 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               exists_6_188DA8C00D7FDD514C20F9190C8809C3;                // 0x0018(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0019(0x0003) MISSED OFFSET
	int                                                actId_3_1C18DA0029D9F3E42FED59B607C338C4;                 // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                status_4_19E189C06FAED8035D6F969C0DE388B3;                // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                actIndex_5_029FCCC06A7FA2331362B3B6038D36F8;              // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     endTimeStr_7_5FE5E080715CF0A00D06F11C099EA722;            // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     startTimeStr_8_72CBBE40328757DF41C6912507202052;          // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

