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

// UserDefinedStruct BP_STRUCT_RoomWaitingInfo.BP_STRUCT_RoomWaitingInfo
// 0x006D
struct FBP_STRUCT_RoomWaitingInfo
{
	int                                                game_start_0_DB98D70E450D5F1C2CBE3AA11538E773;            // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                map_id_1_776BECA545D38EE4FDD3D1AECF733145;                // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     owner_name_2_DD7007704A9D0E714C2676A29AEFD1C6;            // 0x0008(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                group_type_3_5D229F3D4158DB32A881AE8F82520499;            // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     name_4_227DD90047E11F7515483C8510697D06;                  // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     state_5_26BE14D04F72D98DFA8DA191292EA4D3;                 // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                id_6_2FCD4C5143826807F4BC1CB2539D8EC3;                    // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     owner_id_7_08C2A2C54381C8A26B70B886BEF82A5D;              // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                player_count_8_E60306904F3F6BF80B25108DEB6406FC;          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     version_9_2B313E3A4D0AC5492D33A9A156C9A865;               // 0x0044(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               lock_state_10_F3674EC7420B12176706A5A900154DBB;           // 0x0050(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0051(0x0003) MISSED OFFSET
	int                                                create_time_11_60CE1E854D18D76D97180F9527517A71;          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_room_player_12_59E51E40432978D1292898A5E2CF48D3;      // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_room_ob_13_0518A49E4262AF2A46B3F78E16267A5C;          // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ob_count_14_ECC4D8804E208750E4288087D6F96672;             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               allow_invite_15_67913F805B2C89503EC3EFED0B02A465;         // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0065(0x0003) MISSED OFFSET
	int                                                game_mode_id_18_4E268EC03B2706437A65657E0E0F0CC4;         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_fpp_19_0C38FC805C9150664901911F0F8D3F00;               // 0x006C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

