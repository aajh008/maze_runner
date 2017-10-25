#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.AudioListener
struct AudioListener_t1996719162;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraSwitch
struct  CameraSwitch_t2061834593  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraSwitch::cameraOne
	GameObject_t1756533147 * ___cameraOne_2;
	// UnityEngine.GameObject CameraSwitch::cameraTwo
	GameObject_t1756533147 * ___cameraTwo_3;
	// UnityEngine.AudioListener CameraSwitch::cameraOneAudioLis
	AudioListener_t1996719162 * ___cameraOneAudioLis_4;
	// UnityEngine.AudioListener CameraSwitch::cameraTwoAudioLis
	AudioListener_t1996719162 * ___cameraTwoAudioLis_5;

public:
	inline static int32_t get_offset_of_cameraOne_2() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___cameraOne_2)); }
	inline GameObject_t1756533147 * get_cameraOne_2() const { return ___cameraOne_2; }
	inline GameObject_t1756533147 ** get_address_of_cameraOne_2() { return &___cameraOne_2; }
	inline void set_cameraOne_2(GameObject_t1756533147 * value)
	{
		___cameraOne_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraOne_2, value);
	}

	inline static int32_t get_offset_of_cameraTwo_3() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___cameraTwo_3)); }
	inline GameObject_t1756533147 * get_cameraTwo_3() const { return ___cameraTwo_3; }
	inline GameObject_t1756533147 ** get_address_of_cameraTwo_3() { return &___cameraTwo_3; }
	inline void set_cameraTwo_3(GameObject_t1756533147 * value)
	{
		___cameraTwo_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTwo_3, value);
	}

	inline static int32_t get_offset_of_cameraOneAudioLis_4() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___cameraOneAudioLis_4)); }
	inline AudioListener_t1996719162 * get_cameraOneAudioLis_4() const { return ___cameraOneAudioLis_4; }
	inline AudioListener_t1996719162 ** get_address_of_cameraOneAudioLis_4() { return &___cameraOneAudioLis_4; }
	inline void set_cameraOneAudioLis_4(AudioListener_t1996719162 * value)
	{
		___cameraOneAudioLis_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraOneAudioLis_4, value);
	}

	inline static int32_t get_offset_of_cameraTwoAudioLis_5() { return static_cast<int32_t>(offsetof(CameraSwitch_t2061834593, ___cameraTwoAudioLis_5)); }
	inline AudioListener_t1996719162 * get_cameraTwoAudioLis_5() const { return ___cameraTwoAudioLis_5; }
	inline AudioListener_t1996719162 ** get_address_of_cameraTwoAudioLis_5() { return &___cameraTwoAudioLis_5; }
	inline void set_cameraTwoAudioLis_5(AudioListener_t1996719162 * value)
	{
		___cameraTwoAudioLis_5 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTwoAudioLis_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
