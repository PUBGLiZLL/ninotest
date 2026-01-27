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

// ScriptBlueprintGeneratedClass bp_newteaching.bp_newteaching_C
// 0x000C (0x02DC - 0x02D0)
class Abp_newteaching_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_NewteachingUI_CurrentSelectIdx;                        // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02D8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_newteaching.bp_newteaching_C");
		return pStaticClass;
	}


	void EventNewteachingEnterRoom_NoFetch();
	void EventNewteachingEnterRoom();
	void EventNewteachingTitleBtnClick_NoFetch();
	void EventNewteachingTitleBtnClick();
	void EventNewteaching_Push_NoFetch();
	void EventNewteaching_Push();
	void UserConstructionScript();
};


}

