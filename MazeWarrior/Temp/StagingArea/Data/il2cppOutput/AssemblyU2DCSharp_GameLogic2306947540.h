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
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameLogic
struct  GameLogic_t2306947540  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text GameLogic::txtCoins
	Text_t356221433 * ___txtCoins_2;
	// UnityEngine.UI.Text GameLogic::txtTimer
	Text_t356221433 * ___txtTimer_3;
	// UnityEngine.UI.Text GameLogic::txtPlayerHealth
	Text_t356221433 * ___txtPlayerHealth_4;
	// System.Int32 GameLogic::totalCoins
	int32_t ___totalCoins_5;
	// System.Int32 GameLogic::stageTimer
	int32_t ___stageTimer_8;
	// System.Boolean GameLogic::gameOverOneTimeLogic
	bool ___gameOverOneTimeLogic_13;
	// UnityEngine.GameObject GameLogic::player
	GameObject_t1756533147 * ___player_14;
	// UnityEngine.GameObject GameLogic::playerBodyMesh
	GameObject_t1756533147 * ___playerBodyMesh_15;
	// System.Boolean GameLogic::waitPlayerUnderAttack
	bool ___waitPlayerUnderAttack_16;

public:
	inline static int32_t get_offset_of_txtCoins_2() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___txtCoins_2)); }
	inline Text_t356221433 * get_txtCoins_2() const { return ___txtCoins_2; }
	inline Text_t356221433 ** get_address_of_txtCoins_2() { return &___txtCoins_2; }
	inline void set_txtCoins_2(Text_t356221433 * value)
	{
		___txtCoins_2 = value;
		Il2CppCodeGenWriteBarrier(&___txtCoins_2, value);
	}

	inline static int32_t get_offset_of_txtTimer_3() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___txtTimer_3)); }
	inline Text_t356221433 * get_txtTimer_3() const { return ___txtTimer_3; }
	inline Text_t356221433 ** get_address_of_txtTimer_3() { return &___txtTimer_3; }
	inline void set_txtTimer_3(Text_t356221433 * value)
	{
		___txtTimer_3 = value;
		Il2CppCodeGenWriteBarrier(&___txtTimer_3, value);
	}

	inline static int32_t get_offset_of_txtPlayerHealth_4() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___txtPlayerHealth_4)); }
	inline Text_t356221433 * get_txtPlayerHealth_4() const { return ___txtPlayerHealth_4; }
	inline Text_t356221433 ** get_address_of_txtPlayerHealth_4() { return &___txtPlayerHealth_4; }
	inline void set_txtPlayerHealth_4(Text_t356221433 * value)
	{
		___txtPlayerHealth_4 = value;
		Il2CppCodeGenWriteBarrier(&___txtPlayerHealth_4, value);
	}

	inline static int32_t get_offset_of_totalCoins_5() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___totalCoins_5)); }
	inline int32_t get_totalCoins_5() const { return ___totalCoins_5; }
	inline int32_t* get_address_of_totalCoins_5() { return &___totalCoins_5; }
	inline void set_totalCoins_5(int32_t value)
	{
		___totalCoins_5 = value;
	}

	inline static int32_t get_offset_of_stageTimer_8() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___stageTimer_8)); }
	inline int32_t get_stageTimer_8() const { return ___stageTimer_8; }
	inline int32_t* get_address_of_stageTimer_8() { return &___stageTimer_8; }
	inline void set_stageTimer_8(int32_t value)
	{
		___stageTimer_8 = value;
	}

	inline static int32_t get_offset_of_gameOverOneTimeLogic_13() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___gameOverOneTimeLogic_13)); }
	inline bool get_gameOverOneTimeLogic_13() const { return ___gameOverOneTimeLogic_13; }
	inline bool* get_address_of_gameOverOneTimeLogic_13() { return &___gameOverOneTimeLogic_13; }
	inline void set_gameOverOneTimeLogic_13(bool value)
	{
		___gameOverOneTimeLogic_13 = value;
	}

	inline static int32_t get_offset_of_player_14() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___player_14)); }
	inline GameObject_t1756533147 * get_player_14() const { return ___player_14; }
	inline GameObject_t1756533147 ** get_address_of_player_14() { return &___player_14; }
	inline void set_player_14(GameObject_t1756533147 * value)
	{
		___player_14 = value;
		Il2CppCodeGenWriteBarrier(&___player_14, value);
	}

	inline static int32_t get_offset_of_playerBodyMesh_15() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___playerBodyMesh_15)); }
	inline GameObject_t1756533147 * get_playerBodyMesh_15() const { return ___playerBodyMesh_15; }
	inline GameObject_t1756533147 ** get_address_of_playerBodyMesh_15() { return &___playerBodyMesh_15; }
	inline void set_playerBodyMesh_15(GameObject_t1756533147 * value)
	{
		___playerBodyMesh_15 = value;
		Il2CppCodeGenWriteBarrier(&___playerBodyMesh_15, value);
	}

	inline static int32_t get_offset_of_waitPlayerUnderAttack_16() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540, ___waitPlayerUnderAttack_16)); }
	inline bool get_waitPlayerUnderAttack_16() const { return ___waitPlayerUnderAttack_16; }
	inline bool* get_address_of_waitPlayerUnderAttack_16() { return &___waitPlayerUnderAttack_16; }
	inline void set_waitPlayerUnderAttack_16(bool value)
	{
		___waitPlayerUnderAttack_16 = value;
	}
};

struct GameLogic_t2306947540_StaticFields
{
public:
	// System.Int32 GameLogic::coinsLeft
	int32_t ___coinsLeft_6;
	// System.Int32 GameLogic::enemiesLeft
	int32_t ___enemiesLeft_7;
	// System.Boolean GameLogic::isPlayerUnderAttack
	bool ___isPlayerUnderAttack_9;
	// System.Boolean GameLogic::isTreausreCollected
	bool ___isTreausreCollected_10;
	// System.Int32 GameLogic::totalScore
	int32_t ___totalScore_11;
	// System.Boolean GameLogic::isGameOver
	bool ___isGameOver_12;

public:
	inline static int32_t get_offset_of_coinsLeft_6() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540_StaticFields, ___coinsLeft_6)); }
	inline int32_t get_coinsLeft_6() const { return ___coinsLeft_6; }
	inline int32_t* get_address_of_coinsLeft_6() { return &___coinsLeft_6; }
	inline void set_coinsLeft_6(int32_t value)
	{
		___coinsLeft_6 = value;
	}

	inline static int32_t get_offset_of_enemiesLeft_7() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540_StaticFields, ___enemiesLeft_7)); }
	inline int32_t get_enemiesLeft_7() const { return ___enemiesLeft_7; }
	inline int32_t* get_address_of_enemiesLeft_7() { return &___enemiesLeft_7; }
	inline void set_enemiesLeft_7(int32_t value)
	{
		___enemiesLeft_7 = value;
	}

	inline static int32_t get_offset_of_isPlayerUnderAttack_9() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540_StaticFields, ___isPlayerUnderAttack_9)); }
	inline bool get_isPlayerUnderAttack_9() const { return ___isPlayerUnderAttack_9; }
	inline bool* get_address_of_isPlayerUnderAttack_9() { return &___isPlayerUnderAttack_9; }
	inline void set_isPlayerUnderAttack_9(bool value)
	{
		___isPlayerUnderAttack_9 = value;
	}

	inline static int32_t get_offset_of_isTreausreCollected_10() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540_StaticFields, ___isTreausreCollected_10)); }
	inline bool get_isTreausreCollected_10() const { return ___isTreausreCollected_10; }
	inline bool* get_address_of_isTreausreCollected_10() { return &___isTreausreCollected_10; }
	inline void set_isTreausreCollected_10(bool value)
	{
		___isTreausreCollected_10 = value;
	}

	inline static int32_t get_offset_of_totalScore_11() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540_StaticFields, ___totalScore_11)); }
	inline int32_t get_totalScore_11() const { return ___totalScore_11; }
	inline int32_t* get_address_of_totalScore_11() { return &___totalScore_11; }
	inline void set_totalScore_11(int32_t value)
	{
		___totalScore_11 = value;
	}

	inline static int32_t get_offset_of_isGameOver_12() { return static_cast<int32_t>(offsetof(GameLogic_t2306947540_StaticFields, ___isGameOver_12)); }
	inline bool get_isGameOver_12() const { return ___isGameOver_12; }
	inline bool* get_address_of_isGameOver_12() { return &___isGameOver_12; }
	inline void set_isGameOver_12(bool value)
	{
		___isGameOver_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
