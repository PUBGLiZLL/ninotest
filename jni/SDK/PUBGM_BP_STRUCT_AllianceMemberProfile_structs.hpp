#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:46 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct BP_STRUCT_AllianceMemberProfile.BP_STRUCT_AllianceMemberProfile
// 0x00F0
struct FBP_STRUCT_AllianceMemberProfile
{
	struct FString                                     applyMsg_0_F26BBAA94F527968A3A6508854D7547A;              // 0x0000(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     createTimeStr_1_02E74E1A4269A8F32F63DAB7AEE2A980;         // 0x000C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     nickName_2_F311990B47F869CDC46BF18E81832C0A;              // 0x0018(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                ladder_3_D64A9800498FFE8ED65B2DB92BC714A5;                // 0x0024(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     picUrl_4_95C820634824568EFEC28CBDA38229DC;                // 0x0028(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     platName_5_2EA70FFE4EC004E3CD0B95B4BFB37158;              // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                online_6_A096EBFA40C7652C429DD49CDD6F389C;                // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxTeamAmount_7_50BDE46D44A68B79E2B60BA9D97EA65F;         // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastOnlineTime_8_795F95D14952D3871FD6B19386173A7F;        // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     lastOnlineTimeStr_9_EB9EB147419140640388F193D03DD5CF;     // 0x004C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     timeSinceGameBeginStr_10_7EE32DDB4FF0DE3564A76BA721DF5EEB;// 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                timeSinceGameBegin_11_6F7B4A004D33F4462CDD90AC63451924;   // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                createTime_12_43343A4B41119FAD3739B4B1FF6C49E3;           // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                sex_13_DA360E7040209D4772B13AB788F4E62A;                  // 0x006C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_14_2191C12B427F2FD624BC358593968975;    // 0x0070(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_15_75587A414B1926678EDCCBA79A6492FB;               // 0x0074(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamState_16_6590DB364C3043F73A71EB9A4CD9FB2D;            // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                friendType_17_23B1318745BBCE616204CBBB9B8698C3;           // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                vipLevel_18_4DA4702E48D7312D6AE1AB943C54827B;             // 0x0080(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     gid_19_1EBAF39B47CE75E9B2033ABE703D3866;                  // 0x0084(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_squad_20_20BBFD604952EC79E75894BE709C44D2;   // 0x0090(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     militaryRank_21_0BA851F647FEF359041824BFA6C79870;         // 0x0094(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                segment_info_duo_22_559F70F244687D4EF98495AA45DF195D;     // 0x00A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                segment_info_solo_23_0F79269741CCB0F8C60229903352449E;    // 0x00A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                exp_24_BC634BF24FE6ABF7102129BF2210DAF1;                  // 0x00A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_25_A37648A64065A686D7D74C85B10A56B4;                // 0x00AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                lastLoginTime_26_4417FC3449B8EDB90279B887D4DA2564;        // 0x00B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isCaptain_27_75F5A63346964F5F08ED3A930AFFD682;            // 0x00B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x00B5(0x0003) MISSED OFFSET
	struct FString                                     allianceId_28_5B66F4A1448CE3E2585181B5273EE865;           // 0x00B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isMyFriend_29_F84818484E3093A9FC7B688A27387E02;           // 0x00C4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x00C5(0x0003) MISSED OFFSET
	int                                                cur_avatar_box_id_30_E9E6B583490CC8A310567C91354AEC14;    // 0x00C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     openId_33_D31B1D154A987F35FAE6608CAFF88BD7;               // 0x00CC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               isInSnsGroup_34_6762FBA547E837E2FF57E3A069B384CD;         // 0x00D8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x00D9(0x0003) MISSED OFFSET
	int                                                qq_vip_35_7063A5974FE0504B6B9FCA97F34151BB;               // 0x00DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                startup_type_36_EEAE16A84300A7613093D8A5F8735AF8;         // 0x00E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_max_segment_level_37_7A37FBC0786080AF54818224033254FC;// 0x00E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                history_max_segment_level_38_5863ADC00415F27714D62A670F213D3C;// 0x00E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                ownerID_39_666AFBC05426D53306016DA70A7257E4;              // 0x00EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

