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
// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyScript
struct  EnemyScript_t321581343  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject EnemyScript::playerObject
	GameObject_t1756533147 * ___playerObject_2;
	// UnityEngine.Rigidbody EnemyScript::enemyRB
	Rigidbody_t4233889191 * ___enemyRB_3;
	// UnityEngine.Animator EnemyScript::enemyAnim
	Animator_t69676727 * ___enemyAnim_4;
	// System.Single EnemyScript::enemySpeed
	float ___enemySpeed_5;
	// System.Single EnemyScript::enemyWatchThreshold
	float ___enemyWatchThreshold_6;
	// System.Single EnemyScript::enemyShootThreshold
	float ___enemyShootThreshold_7;
	// System.Single EnemyScript::enemyCloseThreshold
	float ___enemyCloseThreshold_8;
	// System.Boolean EnemyScript::localIsPlayerUnderAttack
	bool ___localIsPlayerUnderAttack_9;

public:
	inline static int32_t get_offset_of_playerObject_2() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___playerObject_2)); }
	inline GameObject_t1756533147 * get_playerObject_2() const { return ___playerObject_2; }
	inline GameObject_t1756533147 ** get_address_of_playerObject_2() { return &___playerObject_2; }
	inline void set_playerObject_2(GameObject_t1756533147 * value)
	{
		___playerObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___playerObject_2, value);
	}

	inline static int32_t get_offset_of_enemyRB_3() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___enemyRB_3)); }
	inline Rigidbody_t4233889191 * get_enemyRB_3() const { return ___enemyRB_3; }
	inline Rigidbody_t4233889191 ** get_address_of_enemyRB_3() { return &___enemyRB_3; }
	inline void set_enemyRB_3(Rigidbody_t4233889191 * value)
	{
		___enemyRB_3 = value;
		Il2CppCodeGenWriteBarrier(&___enemyRB_3, value);
	}

	inline static int32_t get_offset_of_enemyAnim_4() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___enemyAnim_4)); }
	inline Animator_t69676727 * get_enemyAnim_4() const { return ___enemyAnim_4; }
	inline Animator_t69676727 ** get_address_of_enemyAnim_4() { return &___enemyAnim_4; }
	inline void set_enemyAnim_4(Animator_t69676727 * value)
	{
		___enemyAnim_4 = value;
		Il2CppCodeGenWriteBarrier(&___enemyAnim_4, value);
	}

	inline static int32_t get_offset_of_enemySpeed_5() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___enemySpeed_5)); }
	inline float get_enemySpeed_5() const { return ___enemySpeed_5; }
	inline float* get_address_of_enemySpeed_5() { return &___enemySpeed_5; }
	inline void set_enemySpeed_5(float value)
	{
		___enemySpeed_5 = value;
	}

	inline static int32_t get_offset_of_enemyWatchThreshold_6() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___enemyWatchThreshold_6)); }
	inline float get_enemyWatchThreshold_6() const { return ___enemyWatchThreshold_6; }
	inline float* get_address_of_enemyWatchThreshold_6() { return &___enemyWatchThreshold_6; }
	inline void set_enemyWatchThreshold_6(float value)
	{
		___enemyWatchThreshold_6 = value;
	}

	inline static int32_t get_offset_of_enemyShootThreshold_7() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___enemyShootThreshold_7)); }
	inline float get_enemyShootThreshold_7() const { return ___enemyShootThreshold_7; }
	inline float* get_address_of_enemyShootThreshold_7() { return &___enemyShootThreshold_7; }
	inline void set_enemyShootThreshold_7(float value)
	{
		___enemyShootThreshold_7 = value;
	}

	inline static int32_t get_offset_of_enemyCloseThreshold_8() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___enemyCloseThreshold_8)); }
	inline float get_enemyCloseThreshold_8() const { return ___enemyCloseThreshold_8; }
	inline float* get_address_of_enemyCloseThreshold_8() { return &___enemyCloseThreshold_8; }
	inline void set_enemyCloseThreshold_8(float value)
	{
		___enemyCloseThreshold_8 = value;
	}

	inline static int32_t get_offset_of_localIsPlayerUnderAttack_9() { return static_cast<int32_t>(offsetof(EnemyScript_t321581343, ___localIsPlayerUnderAttack_9)); }
	inline bool get_localIsPlayerUnderAttack_9() const { return ___localIsPlayerUnderAttack_9; }
	inline bool* get_address_of_localIsPlayerUnderAttack_9() { return &___localIsPlayerUnderAttack_9; }
	inline void set_localIsPlayerUnderAttack_9(bool value)
	{
		___localIsPlayerUnderAttack_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
