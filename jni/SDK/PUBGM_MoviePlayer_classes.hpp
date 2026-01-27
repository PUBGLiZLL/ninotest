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

// Class MoviePlayer.MoviePlayerSettings
// 0x001C (0x0038 - 0x001C)
class UMoviePlayerSettings : public UObject
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
	TArray<struct FString>                             bMoviesAreSkippable;                                      // 0x0020(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)
	TArray<struct FString>                             StartupMovies;                                            // 0x002C(0x000C) (Edit, ZeroConstructor, Config, GlobalConfig)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class MoviePlayer.MoviePlayerSettings");
		return pStaticClass;
	}

};


}

