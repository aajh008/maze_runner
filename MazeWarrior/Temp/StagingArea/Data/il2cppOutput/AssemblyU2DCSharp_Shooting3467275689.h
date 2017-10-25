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
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Shooting
struct  Shooting_t3467275689  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Shooting::player
	GameObject_t1756533147 * ___player_2;
	// UnityEngine.Animator Shooting::playerAnim
	Animator_t69676727 * ___playerAnim_3;

public:
	inline static int32_t get_offset_of_player_2() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___player_2)); }
	inline GameObject_t1756533147 * get_player_2() const { return ___player_2; }
	inline GameObject_t1756533147 ** get_address_of_player_2() { return &___player_2; }
	inline void set_player_2(GameObject_t1756533147 * value)
	{
		___player_2 = value;
		Il2CppCodeGenWriteBarrier(&___player_2, value);
	}

	inline static int32_t get_offset_of_playerAnim_3() { return static_cast<int32_t>(offsetof(Shooting_t3467275689, ___playerAnim_3)); }
	inline Animator_t69676727 * get_playerAnim_3() const { return ___playerAnim_3; }
	inline Animator_t69676727 ** get_address_of_playerAnim_3() { return &___playerAnim_3; }
	inline void set_playerAnim_3(Animator_t69676727 * value)
	{
		___playerAnim_3 = value;
		Il2CppCodeGenWriteBarrier(&___playerAnim_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
