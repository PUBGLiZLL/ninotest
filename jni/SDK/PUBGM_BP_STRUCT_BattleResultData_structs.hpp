#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:42 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_BattleResultData.BP_STRUCT_BattleResultData
// 0x01CC
struct FBP_STRUCT_BattleResultData
{
	bool                                               is_last_survive_0_39FEAB006D01B2CA69538A1F01BBD165;       // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	int                                                destroyVehicleNum_1_2BC3F10053D4E9424588AA790C7FBBBD;     // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                person_rank_2_498BBB00445FCB9679BC3BBF00C972AB;           // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                max_game_num_3_1202AE0023D265763E6778CA0E9275CD;          // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cj_medal_num_4_5302CA005D5ADE8E029E3917038DF3AD;          // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                RemainingTeamCount_5_7150FD00798DB37E19DE20AB0AE56484;    // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                TotalTeamCount_6_447A17806827496841A81066034BDCA4;        // 0x0018(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     Reason_7_43C72C802307F2C2075906540A187DFE;                // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                battle_id_8_4D7D5C803BAC8D725394EB6805084444;             // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     final_level_9_3C2852C05CA037F5006745860CD7178C;           // 0x002C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_RADAR                            BP_STRUCT_RADAR_10_6ABC5A4041448BE54ADA703E03959F92;      // 0x0038(0x0078) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_MemBTResultData>          BP_ARRAY_TeammateList_11_77D1D8C01AC0D0190A57F8E40040AC34;// 0x00B0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                famous_id_12_42830040101C48A152F7C9950D3620A4;            // 0x00BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_GOLD_DETAIL                      BP_STRUCT_GOLD_DETAIL_13_1C8FCDC05838C5A512AF8CB1006082AC;// 0x00C0(0x0030) (Edit, BlueprintVisible)
	int                                                add_exp_14_5DFEA7C051EE1AF71C9908680E970660;              // 0x00F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                get_gold_today_15_7D6623C018AEF18365853FDC071BD7E9;       // 0x00F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_EXP_DETAIL                       BP_STRUCT_EXP_DETAIL_16_6B981F806E3EA50C320F08800CB414EC; // 0x00F8(0x003C) (Edit, BlueprintVisible)
	bool                                               is_team_result_17_29432A8031C09064603448BB0A13B6F4;       // 0x0134(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0135(0x0003) MISSED OFFSET
	int                                                team_rank_18_2F10FF007B55D65234894EC0098C05CB;            // 0x0138(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HeadShotRatio_19_40BCF64071BDEE1718F4A4270110499F;        // 0x013C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               segment_protect_20_6E49E7400FC56D9F1D16E4BD04F47144;      // 0x0140(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isobserver_21_14886380516A95CC7F3DB71A0C360762;           // 0x0141(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x2];                                       // 0x0142(0x0002) MISSED OFFSET
	int                                                RemainingPlayerCount_22_4A4016801F3C79C8753FE62F016D2E54; // 0x0144(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                battle_owner_23_234EB4007901F1E258B5EC0C045D9442;         // 0x0148(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sub_mode_24_30956600233A9EF42F9B8F200891AD95;             // 0x014C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FBP_STRUCT_BTRating                         BP_STRUCT_BTRating_25_1ECC9E8026A064401A90252105F79207;   // 0x0150(0x0018) (Edit, BlueprintVisible)
	int                                                battle_type_26_44FAB9C05BB2A8396BC48B6208471565;          // 0x0168(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               is_version_match_27_3C4CFDC0064778F974BCDB7A0B408E48;     // 0x016C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsSolo_28_59D568C04A7D89A75EA588D60C9B718F;               // 0x016D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData03[0x2];                                       // 0x016E(0x0002) MISSED OFFSET
	int                                                TotalPlayerCount_29_4C3EB1005EC883EE28BC38270FD507F4;     // 0x0170(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cj_activity_state_30_2F8B58C07B2DE4B37080B5C10F2A8235;    // 0x0174(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                HealTimes_31_26EA91806D9945B03118440409405443;            // 0x0178(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                add_gold_32_6591DE003B7B426E06D0F3EB09708DC4;             // 0x017C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotNum_33_320BA3C04E36A4611613A8D00E6072BD;   // 0x0180(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ShootWeaponShotAndHitPlayerNum_34_380BED000DC5A4947EF923090E6CADDD;// 0x0184(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_CorpsRank>                BP_ARRAY_CorpsRank_38_2C862B0013CC05A83ED85C8B04F27DFB;   // 0x0188(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                feats_36_5CE4774067BC788B45CE95F10A9587E3;                // 0x0194(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                kill_contibution_39_30A6C0C04728C17724F528C00A68481E;     // 0x0198(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                occupy_contibution_40_4FF59A8053A2C71223835D670A08B42E;   // 0x019C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                total_contibution_42_2538BEC06C5B70A76556610F0342C0CE;    // 0x01A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                explore_score_43_212971007F1DCE9269F8132800A32AA5;        // 0x01A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TArray<struct FBP_STRUCT_EXPLORE_DETAIL>           BP_ARRAY_EXPLORE_44_447CAE000CCDD0C218D4C73D090A9E95;     // 0x01A8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                Rank_45_752D758076916AFC1D80E88205AA15BB;                 // 0x01B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                topx_win_46_724070800532923C26F57C640589C5BE;             // 0x01B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                delay_time_47_43F119C04A44DD7B2A503CDA0D5F97E5;           // 0x01BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                GamePlayingTime_49_6ADF89C0736FCBF13289899804B13495;      // 0x01C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                assist_contibution_50_3BC4FB8074158D36174DEEBF0EDDA0FE;   // 0x01C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                give_box_num_52_6DFCB3006CA5980C1D10AF50023F254D;         // 0x01C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

