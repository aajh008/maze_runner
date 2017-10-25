#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameStory
struct  GameStory_t2367581111  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text GameStory::txtHeading
	Text_t356221433 * ___txtHeading_2;
	// UnityEngine.UI.Button GameStory::btnBack
	Button_t2872111280 * ___btnBack_3;
	// UnityEngine.UI.Button GameStory::btnForward
	Button_t2872111280 * ___btnForward_4;
	// UnityEngine.UI.Text GameStory::txtSkip
	Text_t356221433 * ___txtSkip_5;
	// System.Boolean GameStory::fromMainScreenLocal
	bool ___fromMainScreenLocal_6;

public:
	inline static int32_t get_offset_of_txtHeading_2() { return static_cast<int32_t>(offsetof(GameStory_t2367581111, ___txtHeading_2)); }
	inline Text_t356221433 * get_txtHeading_2() const { return ___txtHeading_2; }
	inline Text_t356221433 ** get_address_of_txtHeading_2() { return &___txtHeading_2; }
	inline void set_txtHeading_2(Text_t356221433 * value)
	{
		___txtHeading_2 = value;
		Il2CppCodeGenWriteBarrier(&___txtHeading_2, value);
	}

	inline static int32_t get_offset_of_btnBack_3() { return static_cast<int32_t>(offsetof(GameStory_t2367581111, ___btnBack_3)); }
	inline Button_t2872111280 * get_btnBack_3() const { return ___btnBack_3; }
	inline Button_t2872111280 ** get_address_of_btnBack_3() { return &___btnBack_3; }
	inline void set_btnBack_3(Button_t2872111280 * value)
	{
		___btnBack_3 = value;
		Il2CppCodeGenWriteBarrier(&___btnBack_3, value);
	}

	inline static int32_t get_offset_of_btnForward_4() { return static_cast<int32_t>(offsetof(GameStory_t2367581111, ___btnForward_4)); }
	inline Button_t2872111280 * get_btnForward_4() const { return ___btnForward_4; }
	inline Button_t2872111280 ** get_address_of_btnForward_4() { return &___btnForward_4; }
	inline void set_btnForward_4(Button_t2872111280 * value)
	{
		___btnForward_4 = value;
		Il2CppCodeGenWriteBarrier(&___btnForward_4, value);
	}

	inline static int32_t get_offset_of_txtSkip_5() { return static_cast<int32_t>(offsetof(GameStory_t2367581111, ___txtSkip_5)); }
	inline Text_t356221433 * get_txtSkip_5() const { return ___txtSkip_5; }
	inline Text_t356221433 ** get_address_of_txtSkip_5() { return &___txtSkip_5; }
	inline void set_txtSkip_5(Text_t356221433 * value)
	{
		___txtSkip_5 = value;
		Il2CppCodeGenWriteBarrier(&___txtSkip_5, value);
	}

	inline static int32_t get_offset_of_fromMainScreenLocal_6() { return static_cast<int32_t>(offsetof(GameStory_t2367581111, ___fromMainScreenLocal_6)); }
	inline bool get_fromMainScreenLocal_6() const { return ___fromMainScreenLocal_6; }
	inline bool* get_address_of_fromMainScreenLocal_6() { return &___fromMainScreenLocal_6; }
	inline void set_fromMainScreenLocal_6(bool value)
	{
		___fromMainScreenLocal_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
