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

// UserDefinedStruct BP_STRUCT_ChatRoomPlayer.BP_STRUCT_ChatRoomPlayer
// 0x0064
struct FBP_STRUCT_ChatRoomPlayer
{
	bool                                               isHost_0_F2CF40FB4C2BCA9C34EE1D831EA8B33B;                // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0001(0x0003) MISSED OFFSET
	struct FString                                     id_2_C6C357DA4A610D710BA27C9DFE903782;                    // 0x0004(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     headUrl_4_5141DEF349472CC1BF1D59B58652495E;               // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     name_5_30338FEB4696ABDD4B9A008C23D38A14;                  // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                gender_6_0EEFA2FA4E5A13C56359EDAF5FFC35DF;                // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                currentTeamAmount_13_E673F49E4A2B0948C6A132A9B4938648;    // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamId_14_334C842B47838E52A4D4BDB8D4A8AB92;               // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                teamState_15_3DB5300A4FC96A9B6576859FF98A29EE;            // 0x0034(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                online_16_AAF7EEFC4D6E732C2F645EB50877C1A5;               // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                timeSinceGameBegin_17_5ED90A07408FA87CA8AA40AB12C44AE7;   // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                maxTeamAmount_18_91AAFEE84A4851707366E4BE3AC7031F;        // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isSelf_19_17B0B5924EA03B1652C4089E8E5B6AEB;               // 0x0044(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isFriend_21_AE2924DA409BD9521FD380A4974E3D10;             // 0x0045(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               isPullBlack_22_CC3B955C4F6D9125E73D92A1DA1B9635;          // 0x0046(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x1];                                       // 0x0047(0x0001) MISSED OFFSET
	int                                                cur_avatar_box_id_26_A4B1E05B489BD200093D24AB5DD0407B;    // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                level_27_B6B2FF50484F3A692DE8CE8F04D8A9BC;                // 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                history_max_segment_level_28_7A2B220442392AC04381E3BBAB0382B9;// 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                cur_max_segment_level_32_45742DC052DF7B27796884DD0AFA05BC;// 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     stateStr_33_65D0364030AFE6D16246B44005803C42;             // 0x0058(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
};

}

