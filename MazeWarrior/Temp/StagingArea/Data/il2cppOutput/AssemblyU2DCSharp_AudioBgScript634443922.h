#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// System.String
struct String_t;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t1873220070;
// AudioBgScript
struct AudioBgScript_t634443922;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AudioBgScript
struct  AudioBgScript_t634443922  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct AudioBgScript_t634443922_StaticFields
{
public:
	// System.String AudioBgScript::isSoundOn
	String_t* ___isSoundOn_2;
	// UnityEngine.AudioSource[] AudioBgScript::audioSources
	AudioSourceU5BU5D_t1873220070* ___audioSources_3;
	// AudioBgScript AudioBgScript::instance
	AudioBgScript_t634443922 * ___instance_4;

public:
	inline static int32_t get_offset_of_isSoundOn_2() { return static_cast<int32_t>(offsetof(AudioBgScript_t634443922_StaticFields, ___isSoundOn_2)); }
	inline String_t* get_isSoundOn_2() const { return ___isSoundOn_2; }
	inline String_t** get_address_of_isSoundOn_2() { return &___isSoundOn_2; }
	inline void set_isSoundOn_2(String_t* value)
	{
		___isSoundOn_2 = value;
		Il2CppCodeGenWriteBarrier(&___isSoundOn_2, value);
	}

	inline static int32_t get_offset_of_audioSources_3() { return static_cast<int32_t>(offsetof(AudioBgScript_t634443922_StaticFields, ___audioSources_3)); }
	inline AudioSourceU5BU5D_t1873220070* get_audioSources_3() const { return ___audioSources_3; }
	inline AudioSourceU5BU5D_t1873220070** get_address_of_audioSources_3() { return &___audioSources_3; }
	inline void set_audioSources_3(AudioSourceU5BU5D_t1873220070* value)
	{
		___audioSources_3 = value;
		Il2CppCodeGenWriteBarrier(&___audioSources_3, value);
	}

	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(AudioBgScript_t634443922_StaticFields, ___instance_4)); }
	inline AudioBgScript_t634443922 * get_instance_4() const { return ___instance_4; }
	inline AudioBgScript_t634443922 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(AudioBgScript_t634443922 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier(&___instance_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
