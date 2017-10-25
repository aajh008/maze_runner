#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Camera
struct Camera_t189460977;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraTwo
struct  CameraTwo_t2963247423  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject CameraTwo::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.Vector3 CameraTwo::offset
	Vector3_t2243707580  ___offset_3;
	// UnityEngine.Camera CameraTwo::cameraTwo
	Camera_t189460977 * ___cameraTwo_4;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(CameraTwo_t2963247423, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_offset_3() { return static_cast<int32_t>(offsetof(CameraTwo_t2963247423, ___offset_3)); }
	inline Vector3_t2243707580  get_offset_3() const { return ___offset_3; }
	inline Vector3_t2243707580 * get_address_of_offset_3() { return &___offset_3; }
	inline void set_offset_3(Vector3_t2243707580  value)
	{
		___offset_3 = value;
	}

	inline static int32_t get_offset_of_cameraTwo_4() { return static_cast<int32_t>(offsetof(CameraTwo_t2963247423, ___cameraTwo_4)); }
	inline Camera_t189460977 * get_cameraTwo_4() const { return ___cameraTwo_4; }
	inline Camera_t189460977 ** get_address_of_cameraTwo_4() { return &___cameraTwo_4; }
	inline void set_cameraTwo_4(Camera_t189460977 * value)
	{
		___cameraTwo_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTwo_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
