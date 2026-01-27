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

// ScriptBlueprintGeneratedClass bp_pandora_test.bp_pandora_test_C
// 0x00B0 (0x0380 - 0x02D0)
class Abp_pandora_test_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_PandoraTest_Cmd;                                       // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FBP_STRUCT_PandoraUserData                  BP_STRUCT_PandoraUserData;                                // 0x02E0(0x009C) (Edit, BlueprintVisible)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x037C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_pandora_test.bp_pandora_test_C");
		return pStaticClass;
	}


	void EventPandoraTestGetUserData_NoFetch();
	void EventPandoraTestGetUserData();
	void EventPandoraTestInit_NoFetch();
	void EventPandoraTestInit();
	void EventPandoraTestClose_NoFetch();
	void EventPandoraTestClose();
	void EventPandoraTestPopShow_NoFetch();
	void EventPandoraTestPopShow();
	void EventPandoraTestWish_NoFetch();
	void EventPandoraTestWish();
	void EventPandoraTestCollection_NoFetch();
	void EventPandoraTestCollection();
	void EventPandoraTestToCmd_NoFetch();
	void EventPandoraTestToCmd();
	void EventPandoraTestShare_NoFetch();
	void EventPandoraTestShare();
	void EventPandoraTestPopHide_NoFetch();
	void EventPandoraTestPopHide();
	void UserConstructionScript();
};


}

