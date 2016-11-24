#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyScript
struct  EnemyScript_t1731161683  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 EnemyScript::HP
	int32_t ___HP_2;
	// UnityEngine.AudioSource EnemyScript::explosion
	AudioSource_t3628549054 * ___explosion_3;
	// System.Int32 EnemyScript::numberHits
	int32_t ___numberHits_4;

public:
	inline static int32_t get_offset_of_HP_2() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___HP_2)); }
	inline int32_t get_HP_2() const { return ___HP_2; }
	inline int32_t* get_address_of_HP_2() { return &___HP_2; }
	inline void set_HP_2(int32_t value)
	{
		___HP_2 = value;
	}

	inline static int32_t get_offset_of_explosion_3() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___explosion_3)); }
	inline AudioSource_t3628549054 * get_explosion_3() const { return ___explosion_3; }
	inline AudioSource_t3628549054 ** get_address_of_explosion_3() { return &___explosion_3; }
	inline void set_explosion_3(AudioSource_t3628549054 * value)
	{
		___explosion_3 = value;
		Il2CppCodeGenWriteBarrier(&___explosion_3, value);
	}

	inline static int32_t get_offset_of_numberHits_4() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___numberHits_4)); }
	inline int32_t get_numberHits_4() const { return ___numberHits_4; }
	inline int32_t* get_address_of_numberHits_4() { return &___numberHits_4; }
	inline void set_numberHits_4(int32_t value)
	{
		___numberHits_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
