#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:44 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_corps_rename.bp_corps_rename_C
// 0x0020 (0x02F0 - 0x02D0)
class Abp_corps_rename_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	struct FString                                     BP_CorpsRename_FinalName;                                 // 0x02D4(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	struct FString                                     BP_CorpsRename_Desc;                                      // 0x02E0(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02EC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_corps_rename.bp_corps_rename_C");
		return pStaticClass;
	}


	void EventCorpsRenameOnClickClose_NoFetch();
	void EventCorpsRenameOnClickClose();
	void EventCorpsRenameOnClickOK_NoFetch();
	void EventCorpsRenameOnClickOK();
	void UserConstructionScript();
};


}

