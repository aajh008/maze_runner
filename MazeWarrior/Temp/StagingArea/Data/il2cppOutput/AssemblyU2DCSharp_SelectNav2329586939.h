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
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectNav
struct  SelectNav_t2329586939  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite SelectNav::navUnLockImage
	Sprite_t309593783 * ___navUnLockImage_2;
	// UnityEngine.UI.Text SelectNav::txtHeading
	Text_t356221433 * ___txtHeading_3;
	// UnityEngine.UI.Text SelectNav::txtCoins
	Text_t356221433 * ___txtCoins_4;
	// System.Int32 SelectNav::totalCoins
	int32_t ___totalCoins_5;

public:
	inline static int32_t get_offset_of_navUnLockImage_2() { return static_cast<int32_t>(offsetof(SelectNav_t2329586939, ___navUnLockImage_2)); }
	inline Sprite_t309593783 * get_navUnLockImage_2() const { return ___navUnLockImage_2; }
	inline Sprite_t309593783 ** get_address_of_navUnLockImage_2() { return &___navUnLockImage_2; }
	inline void set_navUnLockImage_2(Sprite_t309593783 * value)
	{
		___navUnLockImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___navUnLockImage_2, value);
	}

	inline static int32_t get_offset_of_txtHeading_3() { return static_cast<int32_t>(offsetof(SelectNav_t2329586939, ___txtHeading_3)); }
	inline Text_t356221433 * get_txtHeading_3() const { return ___txtHeading_3; }
	inline Text_t356221433 ** get_address_of_txtHeading_3() { return &___txtHeading_3; }
	inline void set_txtHeading_3(Text_t356221433 * value)
	{
		___txtHeading_3 = value;
		Il2CppCodeGenWriteBarrier(&___txtHeading_3, value);
	}

	inline static int32_t get_offset_of_txtCoins_4() { return static_cast<int32_t>(offsetof(SelectNav_t2329586939, ___txtCoins_4)); }
	inline Text_t356221433 * get_txtCoins_4() const { return ___txtCoins_4; }
	inline Text_t356221433 ** get_address_of_txtCoins_4() { return &___txtCoins_4; }
	inline void set_txtCoins_4(Text_t356221433 * value)
	{
		___txtCoins_4 = value;
		Il2CppCodeGenWriteBarrier(&___txtCoins_4, value);
	}

	inline static int32_t get_offset_of_totalCoins_5() { return static_cast<int32_t>(offsetof(SelectNav_t2329586939, ___totalCoins_5)); }
	inline int32_t get_totalCoins_5() const { return ___totalCoins_5; }
	inline int32_t* get_address_of_totalCoins_5() { return &___totalCoins_5; }
	inline void set_totalCoins_5(int32_t value)
	{
		___totalCoins_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
