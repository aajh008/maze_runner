#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioScript
struct  AudioScript_t3705221699  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct AudioScript_t3705221699_StaticFields
{
public:
	// UnityEngine.AudioSource[] AudioScript::audioSources
	AudioSourceU5BU5D_t1873220070* ___audioSources_2;
	// System.Boolean AudioScript::isSoundOnBool
	bool ___isSoundOnBool_3;

public:
	inline static int32_t get_offset_of_audioSources_2() { return static_cast<int32_t>(offsetof(AudioScript_t3705221699_StaticFields, ___audioSources_2)); }
	inline AudioSourceU5BU5D_t1873220070* get_audioSources_2() const { return ___audioSources_2; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_audioSources_2() { return &___audioSources_2; }
	inline void set_audioSources_2(AudioSourceU5BU5D_t1873220070* value)
	{
		___audioSources_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSources_2, value);
	}

	inline static int32_t get_offset_of_isSoundOnBool_3() { return static_cast<int32_t>(offsetof(AudioScript_t3705221699_StaticFields, ___isSoundOnBool_3)); }
	inline bool get_isSoundOnBool_3() const { return ___isSoundOnBool_3; }
	inline bool* get_address_of_isSoundOnBool_3() { return &___isSoundOnBool_3; }
	inline void set_isSoundOnBool_3(bool value)
	{
		___isSoundOnBool_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
