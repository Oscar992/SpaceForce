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

// MoveCursor
struct  MoveCursor_t4250810023  : public MonoBehaviour_t3012272455
{
public:
	// System.Single MoveCursor::playerSpeed
	float ___playerSpeed_2;

public:
	inline static int32_t get_offset_of_playerSpeed_2() { return static_cast<int32_t>(offsetof(MoveCursor_t4250810023, ___playerSpeed_2)); }
	inline float get_playerSpeed_2() const { return ___playerSpeed_2; }
	inline float* get_address_of_playerSpeed_2() { return &___playerSpeed_2; }
	inline void set_playerSpeed_2(float value)
	{
		___playerSpeed_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
