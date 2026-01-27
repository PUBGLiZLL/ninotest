#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_TaskInfo.BP_STRUCT_TaskInfo
// 0x0020
struct FBP_STRUCT_TaskInfo
{
	int                                                id_0_88834A424D4F392624399BAD12C8C127;                    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                progress_1_D5C076DA4B60F62188BFBD9F75E08A54;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     status_3_39DA97DB471A0C77A2D3A59A86E20795;                // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FBP_STRUCT_TaskDropItem>             BP_ARRAY_CurrentDropList_6_D6AE82F946297E943253AE820973C098;// 0x0014(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

