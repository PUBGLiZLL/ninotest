#pragma once

//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:40 2025

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class ScriptPlugin.NetInterface
// 0x0000 (0x0020 - 0x0020)
class UNetInterface : public UInterface
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.NetInterface");
		return pStaticClass;
	}

};


// Class ScriptPlugin.LuaContext
// 0x0010 (0x02C8 - 0x02B8)
class ALuaContext : public AActor
{
public:
	class ULuaStateWrapper*                            OwningLuaStateWrapper;                                    // 0x02B8(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UObject*                                     OwningObject;                                             // 0x02BC(0x0004) (ZeroConstructor, Transient, IsPlainOldData)
	class UScriptContextComponent*                     ScriptContextComponent;                                   // 0x02C0(0x0004) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x02C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaContext");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptProfiler
// 0x0014 (0x0030 - 0x001C)
class UScriptProfiler : public UObject
{
public:
	unsigned char                                      UnknownData00[0x14];                                      // 0x001C(0x0014) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptProfiler");
		return pStaticClass;
	}

};


// Class ScriptPlugin.LuaStateWrapper
// 0x00A4 (0x00C0 - 0x001C)
class ULuaStateWrapper : public UObject
{
public:
	unsigned char                                      UnknownData00[0xA4];                                      // 0x001C(0x00A4) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaStateWrapper");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptBlueprint
// 0x0010 (0x0170 - 0x0160)
class UScriptBlueprint : public UBlueprint
{
public:
	struct FString                                     SourceCode;                                               // 0x0160(0x000C) (ZeroConstructor)
	unsigned char                                      UnknownData00[0x4];                                       // 0x016C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptBlueprint");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptBlueprintGeneratedClass
// 0x0020 (0x01F8 - 0x01D8)
class UScriptBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x01D8(0x0008) MISSED OFFSET
	struct FString                                     SourceCode;                                               // 0x01E0(0x000C) (ZeroConstructor)
	TArray<class UProperty*>                           ScriptProperties;                                         // 0x01EC(0x000C) (ZeroConstructor)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptBlueprintGeneratedClass");
		return pStaticClass;
	}

};


// Class ScriptPlugin.ScriptContext
// 0x0004 (0x0020 - 0x001C)
class UScriptContext : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptContext");
		return pStaticClass;
	}


	void CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptContextComponent
// 0x0008 (0x00C8 - 0x00C0)
class UScriptContextComponent : public UActorComponent
{
public:
	class ULuaStateWrapper*                            OwningLuaStateWrapper;                                    // 0x00C0(0x0004) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x00C4(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptContextComponent");
		return pStaticClass;
	}


	void PushOneScriptPropertyValues(const struct FString& ParamName);
	void PushAllScriptPropertyValues();
	void FetchOneScriptPropertyValues(const struct FString& ParamName);
	void FetchAllScriptPropertyValues();
	void CallScriptFunctionWithoutFetch(const struct FString& FunctionName);
	void CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptHelperNetInterface
// 0x0004 (0x0020 - 0x001C)
class UScriptHelperNetInterface : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptHelperNetInterface");
		return pStaticClass;
	}


	static int SendPacket_LuaState();
	static void Disconnect(TScriptInterface<class UNetInterface>* NetInterface);
	static void Connect(int Timeout, TScriptInterface<class UNetInterface>* NetInterface);
};


// Class ScriptPlugin.ScriptPluginComponent
// 0x0004 (0x0020 - 0x001C)
class UScriptPluginComponent : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptPluginComponent");
		return pStaticClass;
	}


	bool CallScriptFunction(const struct FString& FunctionName);
};


// Class ScriptPlugin.ScriptTestActor
// 0x0018 (0x02D0 - 0x02B8)
class AScriptTestActor : public AActor
{
public:
	struct FString                                     TestString;                                               // 0x02B8(0x000C) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              TestValue;                                                // 0x02C4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               TestBool;                                                 // 0x02C8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x02C9(0x0007) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.ScriptTestActor");
		return pStaticClass;
	}


	float TestFunction(float InValue, float InFactor, bool bMultiply);
};


// Class ScriptPlugin.LuaClassBaseObj
// 0x0000 (0x02B8 - 0x02B8)
class ALuaClassBaseObj : public AActor
{
public:

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class ScriptPlugin.LuaClassBaseObj");
		return pStaticClass;
	}


	struct FString ItsATest(const struct FPlayerInfo& Player1, TArray<int> nums, int X, const struct FString& Q, TArray<struct FPlayerInfo> Player2);
	void HandleUIMessage(const struct FString& UIMessage);
	struct FString GetGameStatus();
};


}

