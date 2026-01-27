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

// UserDefinedStruct BP_STRUCT_RoomInfo.BP_STRUCT_RoomInfo
// 0x0078
struct FBP_STRUCT_RoomInfo
{
	int                                                player_count_7_3C511CFC47DBC696B9C74790AFA73D83;          // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     owner_id_1_EC8BB0664920BD7961262791BFC2F3FB;              // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     state_2_98C921C84A16218020746FAAABDB13E4;                 // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_3_4D2491D0400DCB399113168B562B27C9;                  // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                id_9_E0E04E1B4356DD24D82151AC8F3E8CD3;                    // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     owner_name_5_F933685E47BD8C88B9063EB06ABD7B60;            // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                map_id_8_C36827ED47ACE4F3692212BA2948A845;                // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                group_type_12_2579951649F014C9A6DE85906F80F49C;           // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                create_time_13_49E1E18F4D6C152561542D99BDD37F51;          // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                game_start_14_E7C4BD4B4457B3F0720AFA98BBD026BC;           // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               lock_state_15_397B694144C77EE7DF88B4B628E86BEB;           // 0x0048(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0049(0x0003) MISSED OFFSET
	struct FString                                     version_16_DF55A7EE4F7F54F7CB22968980FC1EE3;              // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                max_room_ob_17_9F27B3614D3E06009605DB90DC56C70B;          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_room_player_18_918EBF384269FDDA4527FB950E0D0F43;      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ob_count_19_C0D112D7448C794CAFABA084763A6B59;             // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               allow_invite_20_647B8AC04277BDFB140635C90F748935;         // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_vip_room_21_462291007C98D2C23D601B1E04F94C1D;          // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_fpp_22_79DD07C0641ACDD55FD2A5890BFBD230;               // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0067(0x0001) MISSED OFFSET
	int                                                game_mode_id_23_4B10DA000F0AC4944AFD32120A7C23D4;         // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     mode_map_name_24_02A438000ABAD54827E14F1E053826B5;        // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

