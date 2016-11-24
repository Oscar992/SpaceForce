#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MultipleEnemySpawner
struct  MultipleEnemySpawner_t4046021392  : public MonoBehaviour_t3012272455
{
public:
	// System.Single MultipleEnemySpawner::timer
	float ___timer_2;
	// System.Int32 MultipleEnemySpawner::timerSpawner
	int32_t ___timerSpawner_3;
	// System.Int32 MultipleEnemySpawner::increaseEnemies
	int32_t ___increaseEnemies_4;

public:
	inline static int32_t get_offset_of_timer_2() { return static_cast<int32_t>(offsetof(MultipleEnemySpawner_t4046021392, ___timer_2)); }
	inline float get_timer_2() const { return ___timer_2; }
	inline float* get_address_of_timer_2() { return &___timer_2; }
	inline void set_timer_2(float value)
	{
		___timer_2 = value;
	}

	inline static int32_t get_offset_of_timerSpawner_3() { return static_cast<int32_t>(offsetof(MultipleEnemySpawner_t4046021392, ___timerSpawner_3)); }
	inline int32_t get_timerSpawner_3() const { return ___timerSpawner_3; }
	inline int32_t* get_address_of_timerSpawner_3() { return &___timerSpawner_3; }
	inline void set_timerSpawner_3(int32_t value)
	{
		___timerSpawner_3 = value;
	}

	inline static int32_t get_offset_of_increaseEnemies_4() { return static_cast<int32_t>(offsetof(MultipleEnemySpawner_t4046021392, ___increaseEnemies_4)); }
	inline int32_t get_increaseEnemies_4() const { return ___increaseEnemies_4; }
	inline int32_t* get_address_of_increaseEnemies_4() { return &___increaseEnemies_4; }
	inline void set_increaseEnemies_4(int32_t value)
	{
		___increaseEnemies_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
