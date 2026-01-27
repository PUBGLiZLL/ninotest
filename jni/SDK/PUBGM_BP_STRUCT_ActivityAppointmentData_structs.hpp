#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:43 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_ActivityAppointmentData.BP_STRUCT_ActivityAppointmentData
// 0x004C
struct FBP_STRUCT_ActivityAppointmentData
{
	bool                                               IsDone_0_631163406102424D27398FE6003CB685;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     Desc_1_4FE1F280719381B027AA9AB400BF9793;                  // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               IsOpened_2_082478807223E5AE17ECCB5B0D668484;              // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0011(0x0003) MISSED OFFSET
	struct FString                                     Detail_4_4556A780718A9DEE102C06B90F97A74C;                // 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     Title_5_06B4F34060CCADB959EF7EEF0BEABB25;                 // 0x0020(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_AppointmentAward                 BP_STRUCT_AppointmentAward_7_4645DF804726E41C018481EE07A6C404;// 0x002C(0x0010) (Edit, BlueprintVisible)
	struct FBP_STRUCT_ShareAward                       BP_STRUCT_ShareAward_8_2FE97880741D537C158DD69F0F746ED4;  // 0x003C(0x0010) (Edit, BlueprintVisible)
};

}

