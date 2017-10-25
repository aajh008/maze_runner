#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_LayerMask3188175821.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Collider
struct Collider_t3497673348;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DontGoThroughThings
struct  DontGoThroughThings_t3899548871  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean DontGoThroughThings::sendTriggerMessage
	bool ___sendTriggerMessage_2;
	// UnityEngine.LayerMask DontGoThroughThings::layerMask
	LayerMask_t3188175821  ___layerMask_3;
	// System.Single DontGoThroughThings::skinWidth
	float ___skinWidth_4;
	// System.Single DontGoThroughThings::minimumExtent
	float ___minimumExtent_5;
	// System.Single DontGoThroughThings::partialExtent
	float ___partialExtent_6;
	// System.Single DontGoThroughThings::sqrMinimumExtent
	float ___sqrMinimumExtent_7;
	// UnityEngine.Vector3 DontGoThroughThings::previousPosition
	Vector3_t2243707580  ___previousPosition_8;
	// UnityEngine.Rigidbody DontGoThroughThings::myRigidbody
	Rigidbody_t4233889191 * ___myRigidbody_9;
	// UnityEngine.Collider DontGoThroughThings::myCollider
	Collider_t3497673348 * ___myCollider_10;

public:
	inline static int32_t get_offset_of_sendTriggerMessage_2() { return static_cast<int32_t>(offsetof(DontGoThroughThings_t3899548871, ___sendTriggerMessage_2)); }
	inline bool get_sendTriggerMessage_2() const { return ___sendTriggerMessage_2; }
	inline bool* get_address_of_sendTriggerMessage_2() { return &___sendTriggerMessage_2; }
	inline void set_sendTriggerMessage_2(bool value)
	{
		___sendTriggerMessage_2 = value;
	}

	inline static int32_t get_offset_of_layerMask_3() { return static_cast<int32_t>(offsetof(DontGoThroughThings_t3899548871, ___layerMask_3)); }
	inline LayerMask_t3188175821  get_layerMask_3() const { return ___layerMask_3; }
	inline LayerMask_t3188175821 * get_address_of_layerMask_3() { return &___layerMask_3; }
	inline void set_layerMask_3(LayerMask_t3188175821  value)
	{
		___layerMask_3 = value;
	}

	inline static int32_t get_offset_of_skinWidth_4() { return static_cast<int32_t>(offsetof(DontGoThroughThings_t3899548871, ___skinWidth_4)); }
	inline float get_skinWidth_4() const { return ___skinWidth_4; }
	inline float* get_address_of_skinWidth_4() { return &___skinWidth_4; }
	inline void set_skinWidth_4(float value)
	{
		___skinWidth_4 = value;
	}

	inline static int32_t get_offset_of_minimumExtent_5() { return static_cast<int32_t>(offsetof(DontGoThroughThings_t3899548871, ___minimumExtent_5)); }
	inline float get_minimumExtent_5() const { return ___minimumExtent_5; }
	inline float* get_address_of_minimumExtent_5() { return &___minimumExtent_5; }
	inline void set_minimumExtent_5(float value)
	{
		___minimumExtent_5 = value;
	}

	inline static int32_t get_offset_of_partialExtent_6() { return static_cast<int32_t>(offsetof(DontGoThroughThings_t3899548871, ___partialExtent_6)); }
	inline float get_partialExtent_6() const { return ___partialExtent_6; }
	inline float* get_address_of_partialExtent_6() { return &___partialExtent_6; }
	inline void set_partialExtent_6(float value)
	{
		___partialExtent_6 = value;
	}

	inline static int32_t get_offset_of_sqrMinimumExtent_7() { return static_cast<int32_t>(offsetof(DontGoThroughThings_t3899548871, ___sqrMinimumExtent_7)); }
	inline float get_sqrMinimumExtent_7() const { return ___sqrMinimumExtent_7; }
	inline float* get_address_of_sqrMinimumExtent_7() { return &___sqrMinimumExtent_7; }
	inline void set_sqrMinimumExtent_7(float value)
	{
		___sqrMinimumExtent_7 = value;
	}

	inline static int32_t get_offset_of_previousPosition_8() { return static_cast<int32_t>(offsetof(DontGoThroughThings_t3899548871, ___previousPosition_8)); }
	inline Vector3_t2243707580  get_previousPosition_8() const { return ___previousPosition_8; }
	inline Vector3_t2243707580 * get_address_of_previousPosition_8() { return &___previousPosition_8; }
	inline void set_previousPosition_8(Vector3_t2243707580  value)
	{
		___previousPosition_8 = value;
	}

	inline static int32_t get_offset_of_myRigidbody_9() { return static_cast<int32_t>(offsetof(DontGoThroughThings_t3899548871, ___myRigidbody_9)); }
	inline Rigidbody_t4233889191 * get_myRigidbody_9() const { return ___myRigidbody_9; }
	inline Rigidbody_t4233889191 ** get_address_of_myRigidbody_9() { return &___myRigidbody_9; }
	inline void set_myRigidbody_9(Rigidbody_t4233889191 * value)
	{
		___myRigidbody_9 = value;
		Il2CppCodeGenWriteBarrier(&___myRigidbody_9, value);
	}

	inline static int32_t get_offset_of_myCollider_10() { return static_cast<int32_t>(offsetof(DontGoThroughThings_t3899548871, ___myCollider_10)); }
	inline Collider_t3497673348 * get_myCollider_10() const { return ___myCollider_10; }
	inline Collider_t3497673348 ** get_address_of_myCollider_10() { return &___myCollider_10; }
	inline void set_myCollider_10(Collider_t3497673348 * value)
	{
		___myCollider_10 = value;
		Il2CppCodeGenWriteBarrier(&___myCollider_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
