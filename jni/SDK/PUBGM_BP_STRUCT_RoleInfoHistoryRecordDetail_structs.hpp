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

// UserDefinedStruct BP_STRUCT_RoleInfoHistoryRecordDetail.BP_STRUCT_RoleInfoHistoryRecordDetail
// 0x00A6
struct FBP_STRUCT_RoleInfoHistoryRecordDetail
{
	int                                                total_player_count_0_5FDBA0454A582F43A43FBB9A9C4659E5;    // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                change_kill_rating_1_9D8293AA4A4E14D34D612CB6D75BDF5C;    // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_type_2_6E95E3214B9B992B88E17F8F9ABA5B25;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                rating_3_7F5D7F4A408E3EC9260BE89B68767B1B;                // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                person_rank_4_A4B76E8C4C882D3636EC7E9284221E9C;           // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_time_5_8D87B607405BB1C6675F8EA56C4A8D82;           // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                total_team_count_6_CD4351FE49B6DD1FB75482B756271974;      // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                add_gold_7_5DED3D8441C7BA842C0EA6BF6C454527;              // 0x001C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_id_8_9E715C374C7A264BD39379AFDCBBCBE3;             // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     final_level_9_23FDE5ED43092110DD3AA9858D38AB7B;           // 0x0024(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     final_score_10_1FF5A975472A85810D093083DC1E7ABF;          // 0x0030(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_11_9CB109DF44AB1DAAAA86349427A69209;              // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     wisdom_12_16B8D6EC489E9959160AECAE9EFBED3C;               // 0x0040(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     reason_result_13_214D755A4A2CA45C86C986B0F5D3F1A4;        // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                change_rating_14_E61D67004C39B2255EC69B9963D9760A;        // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     battle_typename_15_9BA61AB745C420081A71C7B28714FF86;      // 0x005C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                add_exp_16_09B22D5E43E9427011E19C8167AE3E2A;              // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     reason_17_2634F63740E69123136A36A5CC1ADC02;               // 0x006C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                change_win_rating_18_7BA61B8F46D3742550EBD6B7945EDEEB;    // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                team_rank_19_9CFDE8FF4B7F7E778D8BBEB6F4EF41EB;            // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_solo_20_A96C316F48D8B442240424BF422E5F63;              // 0x0080(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_segment_protect_21_06FF3140741430EF113E2C260D541724;   // 0x0081(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               murder_isAI_22_5FCA62C03349A6ED47E2C6B4094FD749;          // 0x0082(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0083(0x0001) MISSED OFFSET
	struct FString                                     murder_name_23_7D2E918029CD21B247A0C298094F9825;          // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                cj_day_act_25_6B156E002C1A650E64035A6F01DE3874;           // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_blackroom_26_3834CB00388D1E587CE390260378622D;         // 0x0094(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0095(0x0003) MISSED OFFSET
	struct FString                                     murder_uid_27_2B5CD9C0103124054AD402140194D6F4;           // 0x0098(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               is_resource_battle_28_51544D404E6940933AD1EA6C0B1ED165;   // 0x00A4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_resource_win_29_5CCC41C07C9B7F4327AAC84206A4849E;      // 0x00A5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

