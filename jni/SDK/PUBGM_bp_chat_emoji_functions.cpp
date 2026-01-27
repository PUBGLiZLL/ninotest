//PUBGM(0.13.5)32位SDK
//作者:清华
//Telegram:@qinghuanb666
//生成时间:Fri Apr 18 20:44:50 2025

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function bp_chat_emoji.bp_chat_emoji_C.EventClickEmojiItem_NoFetch
// (BlueprintCallable, BlueprintEvent)

void Abp_chat_emoji_C::EventClickEmojiItem_NoFetch()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_chat_emoji.bp_chat_emoji_C.EventClickEmojiItem_NoFetch");

	Abp_chat_emoji_C_EventClickEmojiItem_NoFetch_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_chat_emoji.bp_chat_emoji_C.EventClickEmojiItem
// (BlueprintCallable, BlueprintEvent)

void Abp_chat_emoji_C::EventClickEmojiItem()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_chat_emoji.bp_chat_emoji_C.EventClickEmojiItem");

	Abp_chat_emoji_C_EventClickEmojiItem_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


// Function bp_chat_emoji.bp_chat_emoji_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void Abp_chat_emoji_C::UserConstructionScript()
{
	static UFunction *pFunc = 0;
	if (!pFunc)
		pFunc  = UObject::FindObject<UFunction>("Function bp_chat_emoji.bp_chat_emoji_C.UserConstructionScript");

	Abp_chat_emoji_C_UserConstructionScript_Params params;

	auto flags = pFunc->FunctionFlags;

	UObject *currentObj = (UObject *) this;
	currentObj->ProcessEvent(pFunc, &params);

	pFunc->FunctionFlags = flags;
}


}

