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
// UnityEngine.UI.Text
struct Text_t356221433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SelectNavImage
struct  SelectNavImage_t4011857062  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite SelectNavImage::navUnLockImage
	Sprite_t309593783 * ___navUnLockImage_2;
	// UnityEngine.Sprite SelectNavImage::navLockImage
	Sprite_t309593783 * ___navLockImage_3;
	// UnityEngine.Sprite SelectNavImage::stageLockImage
	Sprite_t309593783 * ___stageLockImage_4;
	// UnityEngine.UI.Button SelectNavImage::btnSelectStage
	Button_t2872111280 * ___btnSelectStage_5;
	// UnityEngine.UI.Text SelectNavImage::btnSelectStageText
	Text_t356221433 * ___btnSelectStageText_6;

public:
	inline static int32_t get_offset_of_navUnLockImage_2() { return static_cast<int32_t>(offsetof(SelectNavImage_t4011857062, ___navUnLockImage_2)); }
	inline Sprite_t309593783 * get_navUnLockImage_2() const { return ___navUnLockImage_2; }
	inline Sprite_t309593783 ** get_address_of_navUnLockImage_2() { return &___navUnLockImage_2; }
	inline void set_navUnLockImage_2(Sprite_t309593783 * value)
	{
		___navUnLockImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___navUnLockImage_2, value);
	}

	inline static int32_t get_offset_of_navLockImage_3() { return static_cast<int32_t>(offsetof(SelectNavImage_t4011857062, ___navLockImage_3)); }
	inline Sprite_t309593783 * get_navLockImage_3() const { return ___navLockImage_3; }
	inline Sprite_t309593783 ** get_address_of_navLockImage_3() { return &___navLockImage_3; }
	inline void set_navLockImage_3(Sprite_t309593783 * value)
	{
		___navLockImage_3 = value;
		Il2CppCodeGenWriteBarrier(&___navLockImage_3, value);
	}

	inline static int32_t get_offset_of_stageLockImage_4() { return static_cast<int32_t>(offsetof(SelectNavImage_t4011857062, ___stageLockImage_4)); }
	inline Sprite_t309593783 * get_stageLockImage_4() const { return ___stageLockImage_4; }
	inline Sprite_t309593783 ** get_address_of_stageLockImage_4() { return &___stageLockImage_4; }
	inline void set_stageLockImage_4(Sprite_t309593783 * value)
	{
		___stageLockImage_4 = value;
		Il2CppCodeGenWriteBarrier(&___stageLockImage_4, value);
	}

	inline static int32_t get_offset_of_btnSelectStage_5() { return static_cast<int32_t>(offsetof(SelectNavImage_t4011857062, ___btnSelectStage_5)); }
	inline Button_t2872111280 * get_btnSelectStage_5() const { return ___btnSelectStage_5; }
	inline Button_t2872111280 ** get_address_of_btnSelectStage_5() { return &___btnSelectStage_5; }
	inline void set_btnSelectStage_5(Button_t2872111280 * value)
	{
		___btnSelectStage_5 = value;
		Il2CppCodeGenWriteBarrier(&___btnSelectStage_5, value);
	}

	inline static int32_t get_offset_of_btnSelectStageText_6() { return static_cast<int32_t>(offsetof(SelectNavImage_t4011857062, ___btnSelectStageText_6)); }
	inline Text_t356221433 * get_btnSelectStageText_6() const { return ___btnSelectStageText_6; }
	inline Text_t356221433 ** get_address_of_btnSelectStageText_6() { return &___btnSelectStageText_6; }
	inline void set_btnSelectStageText_6(Text_t356221433 * value)
	{
		___btnSelectStageText_6 = value;
		Il2CppCodeGenWriteBarrier(&___btnSelectStageText_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
