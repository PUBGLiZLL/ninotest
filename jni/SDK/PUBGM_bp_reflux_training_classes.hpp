#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:47 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_reflux_training.bp_reflux_training_C
// 0x0018 (0x02E8 - 0x02D0)
class Abp_reflux_training_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_RefluxTrainingUI_YouInvitedCount;                      // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_RefluxTrainingUI_InvitedYouCount;                      // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_RefluxTrainingUI_Checkbox_ID;                          // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_RefluxTrainingUI_H5ButtonRedpoint;                     // 0x02E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02E1(0x0003) MISSED OFFSET
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02E4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_reflux_training.bp_reflux_training_C");
		return pStaticClass;
	}


	void EventRefluxTrainingUIClickedInvitedYouButton_NoFetch();
	void EventRefluxTrainingUIClickedInvitedYouButton();
	void EventRefluxTrainingUIClickedYouInvitedButton_NoFetch();
	void EventRefluxTrainingUIClickedYouInvitedButton();
	void EventRefluxTrainingUIClickToggle_Push_NoFetch();
	void EventRefluxTrainingUIClickToggle_Push();
	void EventRefluxTrainingUIClickedShareButton_NoFetch();
	void EventRefluxTrainingUIClickedShareButton();
	void EventOnRefluxTrainingUIClose_NoFetch();
	void EventOnRefluxTrainingUIClose();
	void UserConstructionScript();
};


}

