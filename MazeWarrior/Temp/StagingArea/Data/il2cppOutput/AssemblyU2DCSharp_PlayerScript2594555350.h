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

// UnityEngine.Rigidbody
struct Rigidbody_t4233889191;
// UnityEngine.Animator
struct Animator_t69676727;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t2594555350  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerScript::playerSpeed
	float ___playerSpeed_2;
	// System.Single PlayerScript::rotationSpeed
	float ___rotationSpeed_3;
	// System.Single PlayerScript::playerJumpSpeed
	float ___playerJumpSpeed_5;
	// System.Boolean PlayerScript::canJump
	bool ___canJump_6;
	// UnityEngine.Rigidbody PlayerScript::rb
	Rigidbody_t4233889191 * ___rb_7;
	// System.Single PlayerScript::moveHorizontal
	float ___moveHorizontal_8;
	// System.Single PlayerScript::moveVertical
	float ___moveVertical_9;
	// System.Single PlayerScript::rotY
	float ___rotY_10;
	// UnityEngine.Vector3 PlayerScript::playerPosition
	Vector3_t2243707580  ___playerPosition_11;
	// System.Boolean PlayerScript::canUseTouch
	bool ___canUseTouch_12;
	// UnityEngine.Animator PlayerScript::animPlayer
	Animator_t69676727 * ___animPlayer_13;
	// System.Boolean PlayerScript::isPlayerMoving
	bool ___isPlayerMoving_14;
	// System.Boolean PlayerScript::isPlayerOnGround
	bool ___isPlayerOnGround_15;
	// System.Int32 PlayerScript::playerTurnAxisKeyBoard
	int32_t ___playerTurnAxisKeyBoard_16;
	// System.Int32 PlayerScript::playerRunAxsisKeyBoard
	int32_t ___playerRunAxsisKeyBoard_17;

public:
	inline static int32_t get_offset_of_playerSpeed_2() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___playerSpeed_2)); }
	inline float get_playerSpeed_2() const { return ___playerSpeed_2; }
	inline float* get_address_of_playerSpeed_2() { return &___playerSpeed_2; }
	inline void set_playerSpeed_2(float value)
	{
		___playerSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_3() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___rotationSpeed_3)); }
	inline float get_rotationSpeed_3() const { return ___rotationSpeed_3; }
	inline float* get_address_of_rotationSpeed_3() { return &___rotationSpeed_3; }
	inline void set_rotationSpeed_3(float value)
	{
		___rotationSpeed_3 = value;
	}

	inline static int32_t get_offset_of_playerJumpSpeed_5() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___playerJumpSpeed_5)); }
	inline float get_playerJumpSpeed_5() const { return ___playerJumpSpeed_5; }
	inline float* get_address_of_playerJumpSpeed_5() { return &___playerJumpSpeed_5; }
	inline void set_playerJumpSpeed_5(float value)
	{
		___playerJumpSpeed_5 = value;
	}

	inline static int32_t get_offset_of_canJump_6() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___canJump_6)); }
	inline bool get_canJump_6() const { return ___canJump_6; }
	inline bool* get_address_of_canJump_6() { return &___canJump_6; }
	inline void set_canJump_6(bool value)
	{
		___canJump_6 = value;
	}

	inline static int32_t get_offset_of_rb_7() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___rb_7)); }
	inline Rigidbody_t4233889191 * get_rb_7() const { return ___rb_7; }
	inline Rigidbody_t4233889191 ** get_address_of_rb_7() { return &___rb_7; }
	inline void set_rb_7(Rigidbody_t4233889191 * value)
	{
		___rb_7 = value;
		Il2CppCodeGenWriteBarrier(&___rb_7, value);
	}

	inline static int32_t get_offset_of_moveHorizontal_8() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___moveHorizontal_8)); }
	inline float get_moveHorizontal_8() const { return ___moveHorizontal_8; }
	inline float* get_address_of_moveHorizontal_8() { return &___moveHorizontal_8; }
	inline void set_moveHorizontal_8(float value)
	{
		___moveHorizontal_8 = value;
	}

	inline static int32_t get_offset_of_moveVertical_9() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___moveVertical_9)); }
	inline float get_moveVertical_9() const { return ___moveVertical_9; }
	inline float* get_address_of_moveVertical_9() { return &___moveVertical_9; }
	inline void set_moveVertical_9(float value)
	{
		___moveVertical_9 = value;
	}

	inline static int32_t get_offset_of_rotY_10() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___rotY_10)); }
	inline float get_rotY_10() const { return ___rotY_10; }
	inline float* get_address_of_rotY_10() { return &___rotY_10; }
	inline void set_rotY_10(float value)
	{
		___rotY_10 = value;
	}

	inline static int32_t get_offset_of_playerPosition_11() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___playerPosition_11)); }
	inline Vector3_t2243707580  get_playerPosition_11() const { return ___playerPosition_11; }
	inline Vector3_t2243707580 * get_address_of_playerPosition_11() { return &___playerPosition_11; }
	inline void set_playerPosition_11(Vector3_t2243707580  value)
	{
		___playerPosition_11 = value;
	}

	inline static int32_t get_offset_of_canUseTouch_12() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___canUseTouch_12)); }
	inline bool get_canUseTouch_12() const { return ___canUseTouch_12; }
	inline bool* get_address_of_canUseTouch_12() { return &___canUseTouch_12; }
	inline void set_canUseTouch_12(bool value)
	{
		___canUseTouch_12 = value;
	}

	inline static int32_t get_offset_of_animPlayer_13() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___animPlayer_13)); }
	inline Animator_t69676727 * get_animPlayer_13() const { return ___animPlayer_13; }
	inline Animator_t69676727 ** get_address_of_animPlayer_13() { return &___animPlayer_13; }
	inline void set_animPlayer_13(Animator_t69676727 * value)
	{
		___animPlayer_13 = value;
		Il2CppCodeGenWriteBarrier(&___animPlayer_13, value);
	}

	inline static int32_t get_offset_of_isPlayerMoving_14() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___isPlayerMoving_14)); }
	inline bool get_isPlayerMoving_14() const { return ___isPlayerMoving_14; }
	inline bool* get_address_of_isPlayerMoving_14() { return &___isPlayerMoving_14; }
	inline void set_isPlayerMoving_14(bool value)
	{
		___isPlayerMoving_14 = value;
	}

	inline static int32_t get_offset_of_isPlayerOnGround_15() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___isPlayerOnGround_15)); }
	inline bool get_isPlayerOnGround_15() const { return ___isPlayerOnGround_15; }
	inline bool* get_address_of_isPlayerOnGround_15() { return &___isPlayerOnGround_15; }
	inline void set_isPlayerOnGround_15(bool value)
	{
		___isPlayerOnGround_15 = value;
	}

	inline static int32_t get_offset_of_playerTurnAxisKeyBoard_16() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___playerTurnAxisKeyBoard_16)); }
	inline int32_t get_playerTurnAxisKeyBoard_16() const { return ___playerTurnAxisKeyBoard_16; }
	inline int32_t* get_address_of_playerTurnAxisKeyBoard_16() { return &___playerTurnAxisKeyBoard_16; }
	inline void set_playerTurnAxisKeyBoard_16(int32_t value)
	{
		___playerTurnAxisKeyBoard_16 = value;
	}

	inline static int32_t get_offset_of_playerRunAxsisKeyBoard_17() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350, ___playerRunAxsisKeyBoard_17)); }
	inline int32_t get_playerRunAxsisKeyBoard_17() const { return ___playerRunAxsisKeyBoard_17; }
	inline int32_t* get_address_of_playerRunAxsisKeyBoard_17() { return &___playerRunAxsisKeyBoard_17; }
	inline void set_playerRunAxsisKeyBoard_17(int32_t value)
	{
		___playerRunAxsisKeyBoard_17 = value;
	}
};

struct PlayerScript_t2594555350_StaticFields
{
public:
	// System.Int32 PlayerScript::playerHealth
	int32_t ___playerHealth_4;

public:
	inline static int32_t get_offset_of_playerHealth_4() { return static_cast<int32_t>(offsetof(PlayerScript_t2594555350_StaticFields, ___playerHealth_4)); }
	inline int32_t get_playerHealth_4() const { return ___playerHealth_4; }
	inline int32_t* get_address_of_playerHealth_4() { return &___playerHealth_4; }
	inline void set_playerHealth_4(int32_t value)
	{
		___playerHealth_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
