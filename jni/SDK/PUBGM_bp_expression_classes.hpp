#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// ScriptBlueprintGeneratedClass bp_expression.bp_expression_C
// 0x002C (0x02FC - 0x02D0)
class Abp_expression_C : public ALuaClassObj
{
public:
	class UScriptContextComponent*                     Generated_ScriptContext;                                  // 0x02D0(0x0004) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	int                                                BP_ExpressionClickIndex;                                  // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                BP_ExpressionMaxCount;                                    // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               BP_ExpressionHide_Setting;                                // 0x02DC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x02DD(0x0003) MISSED OFFSET
	struct FBP_STRUCT_Expression                       BP_STRUCT_Expression;                                     // 0x02E0(0x000C) (Edit, BlueprintVisible)
	TArray<struct FBP_STRUCT_Expression>               BP_ARRAY_ExpressionList;                                  // 0x02EC(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x02F8(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("ScriptBlueprintGeneratedClass bp_expression.bp_expression_C");
		return pStaticClass;
	}


	void EventOpenExpressionList_NoFetch();
	void EventOpenExpressionList();
	void EventOpenExpressionClick_NoFetch();
	void EventOpenExpressionClick();
	void EventCloseExpressionList_NoFetch();
	void EventCloseExpressionList();
	void EventOpenExpressionConfig_NoFetch();
	void EventOpenExpressionConfig();
	void UserConstructionScript();
};


}

