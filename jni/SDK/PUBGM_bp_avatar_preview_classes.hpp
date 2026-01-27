#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:43 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_avatar_preview.bp_avatar_preview_C
// 0x0054 (0x0324 - 0x02D0)
class Abp_avatar_preview_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_AVATAR_PREVIEW_CLOTH;                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_AVATAR_PREVIEW_PANT;                                   // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_AVATAR_PREVIEW_OPEN;                                   // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	int                                                BP_AVATAR_PREVIEW_HEAD;                                   // 0x02E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_AVATAR_PREVIEW_HAT;                                    // 0x02E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_AVATAR_PREVIEW_GENDER;                                 // 0x02E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_AVATAR_PREVIEW_HAIR;                                   // 0x02EC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_AVATAR_PREVIEW_FACE;                                   // 0x02F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_AVATAR_PREVIEW_SUBTYPE;                                // 0x02F4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_AVATAR_PREVIEW_DESCRIPTION;                            // 0x0300(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	int                                                BP_AVATAR_PREVIEW_SHOE;                                   // 0x030C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_AVATAR_PREVIEW_QUALITY;                                // 0x0310(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FString                                     BP_AVATAR_PREVIEW_TYPE;                                   // 0x0314(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0320(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_avatar_preview.bp_avatar_preview_C");
		return pStaticClass;
	}


	void EventAvatarPreviewOnUIClose_NoFetch();
	void EventAvatarPreviewOnUIClose();
	void EventAvatarPreviewTryCloseUI_NoFetch();
	void EventAvatarPreviewTryCloseUI();
	void EventAvatarPreviewTestInit_NoFetch();
	void EventAvatarPreviewTestInit();
	void EventAvatarPreviewOnUIEnter_NoFetch();
	void EventAvatarPreviewOnUIEnter();
	void UserConstructionScript();
};


}

