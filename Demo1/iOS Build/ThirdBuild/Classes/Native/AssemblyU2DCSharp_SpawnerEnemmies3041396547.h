#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpawnerEnemmies
struct  SpawnerEnemmies_t3041396547  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject SpawnerEnemmies::gameObject
	GameObject_t4012695102 * ___gameObject_2;
	// UnityEngine.Vector3 SpawnerEnemmies::spawn_position
	Vector3_t3525329789  ___spawn_position_3;
	// System.Single SpawnerEnemmies::timer
	float ___timer_4;
	// UnityEngine.GameObject SpawnerEnemmies::enemy1
	GameObject_t4012695102 * ___enemy1_5;
	// UnityEngine.GameObject SpawnerEnemmies::enemy2
	GameObject_t4012695102 * ___enemy2_6;
	// UnityEngine.GameObject SpawnerEnemmies::enemy3
	GameObject_t4012695102 * ___enemy3_7;
	// UnityEngine.GameObject[] SpawnerEnemmies::enemies
	GameObjectU5BU5D_t3499186955* ___enemies_8;

public:
	inline static int32_t get_offset_of_gameObject_2() { return static_cast<int32_t>(offsetof(SpawnerEnemmies_t3041396547, ___gameObject_2)); }
	inline GameObject_t4012695102 * get_gameObject_2() const { return ___gameObject_2; }
	inline GameObject_t4012695102 ** get_address_of_gameObject_2() { return &___gameObject_2; }
	inline void set_gameObject_2(GameObject_t4012695102 * value)
	{
		___gameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_2, value);
	}

	inline static int32_t get_offset_of_spawn_position_3() { return static_cast<int32_t>(offsetof(SpawnerEnemmies_t3041396547, ___spawn_position_3)); }
	inline Vector3_t3525329789  get_spawn_position_3() const { return ___spawn_position_3; }
	inline Vector3_t3525329789 * get_address_of_spawn_position_3() { return &___spawn_position_3; }
	inline void set_spawn_position_3(Vector3_t3525329789  value)
	{
		___spawn_position_3 = value;
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(SpawnerEnemmies_t3041396547, ___timer_4)); }
	inline float get_timer_4() const { return ___timer_4; }
	inline float* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(float value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_enemy1_5() { return static_cast<int32_t>(offsetof(SpawnerEnemmies_t3041396547, ___enemy1_5)); }
	inline GameObject_t4012695102 * get_enemy1_5() const { return ___enemy1_5; }
	inline GameObject_t4012695102 ** get_address_of_enemy1_5() { return &___enemy1_5; }
	inline void set_enemy1_5(GameObject_t4012695102 * value)
	{
		___enemy1_5 = value;
		Il2CppCodeGenWriteBarrier(&___enemy1_5, value);
	}

	inline static int32_t get_offset_of_enemy2_6() { return static_cast<int32_t>(offsetof(SpawnerEnemmies_t3041396547, ___enemy2_6)); }
	inline GameObject_t4012695102 * get_enemy2_6() const { return ___enemy2_6; }
	inline GameObject_t4012695102 ** get_address_of_enemy2_6() { return &___enemy2_6; }
	inline void set_enemy2_6(GameObject_t4012695102 * value)
	{
		___enemy2_6 = value;
		Il2CppCodeGenWriteBarrier(&___enemy2_6, value);
	}

	inline static int32_t get_offset_of_enemy3_7() { return static_cast<int32_t>(offsetof(SpawnerEnemmies_t3041396547, ___enemy3_7)); }
	inline GameObject_t4012695102 * get_enemy3_7() const { return ___enemy3_7; }
	inline GameObject_t4012695102 ** get_address_of_enemy3_7() { return &___enemy3_7; }
	inline void set_enemy3_7(GameObject_t4012695102 * value)
	{
		___enemy3_7 = value;
		Il2CppCodeGenWriteBarrier(&___enemy3_7, value);
	}

	inline static int32_t get_offset_of_enemies_8() { return static_cast<int32_t>(offsetof(SpawnerEnemmies_t3041396547, ___enemies_8)); }
	inline GameObjectU5BU5D_t3499186955* get_enemies_8() const { return ___enemies_8; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_enemies_8() { return &___enemies_8; }
	inline void set_enemies_8(GameObjectU5BU5D_t3499186955* value)
	{
		___enemies_8 = value;
		Il2CppCodeGenWriteBarrier(&___enemies_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
