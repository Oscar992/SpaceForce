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

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MoveSpace
struct  MoveSpace_t3061227413  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject MoveSpace::gameObject
	GameObject_t4012695102 * ___gameObject_2;
	// System.Single MoveSpace::playerSpeed
	float ___playerSpeed_3;
	// System.Int32 MoveSpace::moveDirection
	int32_t ___moveDirection_4;

public:
	inline static int32_t get_offset_of_gameObject_2() { return static_cast<int32_t>(offsetof(MoveSpace_t3061227413, ___gameObject_2)); }
	inline GameObject_t4012695102 * get_gameObject_2() const { return ___gameObject_2; }
	inline GameObject_t4012695102 ** get_address_of_gameObject_2() { return &___gameObject_2; }
	inline void set_gameObject_2(GameObject_t4012695102 * value)
	{
		___gameObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___gameObject_2, value);
	}

	inline static int32_t get_offset_of_playerSpeed_3() { return static_cast<int32_t>(offsetof(MoveSpace_t3061227413, ___playerSpeed_3)); }
	inline float get_playerSpeed_3() const { return ___playerSpeed_3; }
	inline float* get_address_of_playerSpeed_3() { return &___playerSpeed_3; }
	inline void set_playerSpeed_3(float value)
	{
		___playerSpeed_3 = value;
	}

	inline static int32_t get_offset_of_moveDirection_4() { return static_cast<int32_t>(offsetof(MoveSpace_t3061227413, ___moveDirection_4)); }
	inline int32_t get_moveDirection_4() const { return ___moveDirection_4; }
	inline int32_t* get_address_of_moveDirection_4() { return &___moveDirection_4; }
	inline void set_moveDirection_4(int32_t value)
	{
		___moveDirection_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
