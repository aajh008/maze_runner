#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Sprite
struct Sprite_t309593783;
// UnityEngine.UI.Button
struct Button_t2872111280;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainScreen
struct  MainScreen_t1502697305  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite MainScreen::imgSoundOn
	Sprite_t309593783 * ___imgSoundOn_2;
	// UnityEngine.Sprite MainScreen::imgSoundOff
	Sprite_t309593783 * ___imgSoundOff_3;
	// UnityEngine.UI.Button MainScreen::btnSoundOnOff
	Button_t2872111280 * ___btnSoundOnOff_4;
	// UnityEngine.AudioSource[] MainScreen::audioSources
	AudioSourceU5BU5D_t1873220070* ___audioSources_5;
	// System.Boolean MainScreen::isOneTimeLoadSelectStage
	bool ___isOneTimeLoadSelectStage_6;

public:
	inline static int32_t get_offset_of_imgSoundOn_2() { return static_cast<int32_t>(offsetof(MainScreen_t1502697305, ___imgSoundOn_2)); }
	inline Sprite_t309593783 * get_imgSoundOn_2() const { return ___imgSoundOn_2; }
	inline Sprite_t309593783 ** get_address_of_imgSoundOn_2() { return &___imgSoundOn_2; }
	inline void set_imgSoundOn_2(Sprite_t309593783 * value)
	{
		___imgSoundOn_2 = value;
		Il2CppCodeGenWriteBarrier(&___imgSoundOn_2, value);
	}

	inline static int32_t get_offset_of_imgSoundOff_3() { return static_cast<int32_t>(offsetof(MainScreen_t1502697305, ___imgSoundOff_3)); }
	inline Sprite_t309593783 * get_imgSoundOff_3() const { return ___imgSoundOff_3; }
	inline Sprite_t309593783 ** get_address_of_imgSoundOff_3() { return &___imgSoundOff_3; }
	inline void set_imgSoundOff_3(Sprite_t309593783 * value)
	{
		___imgSoundOff_3 = value;
		Il2CppCodeGenWriteBarrier(&___imgSoundOff_3, value);
	}

	inline static int32_t get_offset_of_btnSoundOnOff_4() { return static_cast<int32_t>(offsetof(MainScreen_t1502697305, ___btnSoundOnOff_4)); }
	inline Button_t2872111280 * get_btnSoundOnOff_4() const { return ___btnSoundOnOff_4; }
	inline Button_t2872111280 ** get_address_of_btnSoundOnOff_4() { return &___btnSoundOnOff_4; }
	inline void set_btnSoundOnOff_4(Button_t2872111280 * value)
	{
		___btnSoundOnOff_4 = value;
		Il2CppCodeGenWriteBarrier(&___btnSoundOnOff_4, value);
	}

	inline static int32_t get_offset_of_audioSources_5() { return static_cast<int32_t>(offsetof(MainScreen_t1502697305, ___audioSources_5)); }
	inline AudioSourceU5BU5D_t1873220070* get_audioSources_5() const { return ___audioSources_5; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_audioSources_5() { return &___audioSources_5; }
	inline void set_audioSources_5(AudioSourceU5BU5D_t1873220070* value)
	{
		___audioSources_5 = value;
		Il2CppCodeGenWriteBarrier(&___audioSources_5, value);
	}

	inline static int32_t get_offset_of_isOneTimeLoadSelectStage_6() { return static_cast<int32_t>(offsetof(MainScreen_t1502697305, ___isOneTimeLoadSelectStage_6)); }
	inline bool get_isOneTimeLoadSelectStage_6() const { return ___isOneTimeLoadSelectStage_6; }
	inline bool* get_address_of_isOneTimeLoadSelectStage_6() { return &___isOneTimeLoadSelectStage_6; }
	inline void set_isOneTimeLoadSelectStage_6(bool value)
	{
		___isOneTimeLoadSelectStage_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
