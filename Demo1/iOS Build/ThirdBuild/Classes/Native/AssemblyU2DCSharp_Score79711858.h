#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t3286458198;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Score
struct  Score_t79711858  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.UI.Text Score::txtScore
	Text_t3286458198 * ___txtScore_2;

public:
	inline static int32_t get_offset_of_txtScore_2() { return static_cast<int32_t>(offsetof(Score_t79711858, ___txtScore_2)); }
	inline Text_t3286458198 * get_txtScore_2() const { return ___txtScore_2; }
	inline Text_t3286458198 ** get_address_of_txtScore_2() { return &___txtScore_2; }
	inline void set_txtScore_2(Text_t3286458198 * value)
	{
		___txtScore_2 = value;
		Il2CppCodeGenWriteBarrier(&___txtScore_2, value);
	}
};

struct Score_t79711858_StaticFields
{
public:
	// System.Double Score::numberScore
	double ___numberScore_3;

public:
	inline static int32_t get_offset_of_numberScore_3() { return static_cast<int32_t>(offsetof(Score_t79711858_StaticFields, ___numberScore_3)); }
	inline double get_numberScore_3() const { return ___numberScore_3; }
	inline double* get_address_of_numberScore_3() { return &___numberScore_3; }
	inline void set_numberScore_3(double value)
	{
		___numberScore_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
