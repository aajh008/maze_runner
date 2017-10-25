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

// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.CharacterController
struct CharacterController_t4094781467;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Goblin_ro_ctrl
struct  Goblin_ro_ctrl_t2312601187  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Animator Goblin_ro_ctrl::anim
	Animator_t69676727 * ___anim_2;
	// UnityEngine.CharacterController Goblin_ro_ctrl::controller
	CharacterController_t4094781467 * ___controller_3;
	// System.Boolean Goblin_ro_ctrl::battle_state
	bool ___battle_state_4;
	// System.Single Goblin_ro_ctrl::speed
	float ___speed_5;
	// System.Single Goblin_ro_ctrl::runSpeed
	float ___runSpeed_6;
	// System.Single Goblin_ro_ctrl::turnSpeed
	float ___turnSpeed_7;
	// System.Single Goblin_ro_ctrl::gravity
	float ___gravity_8;
	// UnityEngine.Vector3 Goblin_ro_ctrl::moveDirection
	Vector3_t2243707580  ___moveDirection_9;

public:
	inline static int32_t get_offset_of_anim_2() { return static_cast<int32_t>(offsetof(Goblin_ro_ctrl_t2312601187, ___anim_2)); }
	inline Animator_t69676727 * get_anim_2() const { return ___anim_2; }
	inline Animator_t69676727 ** get_address_of_anim_2() { return &___anim_2; }
	inline void set_anim_2(Animator_t69676727 * value)
	{
		___anim_2 = value;
		Il2CppCodeGenWriteBarrier(&___anim_2, value);
	}

	inline static int32_t get_offset_of_controller_3() { return static_cast<int32_t>(offsetof(Goblin_ro_ctrl_t2312601187, ___controller_3)); }
	inline CharacterController_t4094781467 * get_controller_3() const { return ___controller_3; }
	inline CharacterController_t4094781467 ** get_address_of_controller_3() { return &___controller_3; }
	inline void set_controller_3(CharacterController_t4094781467 * value)
	{
		___controller_3 = value;
		Il2CppCodeGenWriteBarrier(&___controller_3, value);
	}

	inline static int32_t get_offset_of_battle_state_4() { return static_cast<int32_t>(offsetof(Goblin_ro_ctrl_t2312601187, ___battle_state_4)); }
	inline bool get_battle_state_4() const { return ___battle_state_4; }
	inline bool* get_address_of_battle_state_4() { return &___battle_state_4; }
	inline void set_battle_state_4(bool value)
	{
		___battle_state_4 = value;
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(Goblin_ro_ctrl_t2312601187, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_runSpeed_6() { return static_cast<int32_t>(offsetof(Goblin_ro_ctrl_t2312601187, ___runSpeed_6)); }
	inline float get_runSpeed_6() const { return ___runSpeed_6; }
	inline float* get_address_of_runSpeed_6() { return &___runSpeed_6; }
	inline void set_runSpeed_6(float value)
	{
		___runSpeed_6 = value;
	}

	inline static int32_t get_offset_of_turnSpeed_7() { return static_cast<int32_t>(offsetof(Goblin_ro_ctrl_t2312601187, ___turnSpeed_7)); }
	inline float get_turnSpeed_7() const { return ___turnSpeed_7; }
	inline float* get_address_of_turnSpeed_7() { return &___turnSpeed_7; }
	inline void set_turnSpeed_7(float value)
	{
		___turnSpeed_7 = value;
	}

	inline static int32_t get_offset_of_gravity_8() { return static_cast<int32_t>(offsetof(Goblin_ro_ctrl_t2312601187, ___gravity_8)); }
	inline float get_gravity_8() const { return ___gravity_8; }
	inline float* get_address_of_gravity_8() { return &___gravity_8; }
	inline void set_gravity_8(float value)
	{
		___gravity_8 = value;
	}

	inline static int32_t get_offset_of_moveDirection_9() { return static_cast<int32_t>(offsetof(Goblin_ro_ctrl_t2312601187, ___moveDirection_9)); }
	inline Vector3_t2243707580  get_moveDirection_9() const { return ___moveDirection_9; }
	inline Vector3_t2243707580 * get_address_of_moveDirection_9() { return &___moveDirection_9; }
	inline void set_moveDirection_9(Vector3_t2243707580  value)
	{
		___moveDirection_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
