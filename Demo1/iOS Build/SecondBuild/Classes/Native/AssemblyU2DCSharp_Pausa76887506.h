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

// Pausa
struct  Pausa_t76887506  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject Pausa::pantallaPausa
	GameObject_t4012695102 * ___pantallaPausa_2;
	// System.Boolean Pausa::mostrar
	bool ___mostrar_3;

public:
	inline static int32_t get_offset_of_pantallaPausa_2() { return static_cast<int32_t>(offsetof(Pausa_t76887506, ___pantallaPausa_2)); }
	inline GameObject_t4012695102 * get_pantallaPausa_2() const { return ___pantallaPausa_2; }
	inline GameObject_t4012695102 ** get_address_of_pantallaPausa_2() { return &___pantallaPausa_2; }
	inline void set_pantallaPausa_2(GameObject_t4012695102 * value)
	{
		___pantallaPausa_2 = value;
		Il2CppCodeGenWriteBarrier(&___pantallaPausa_2, value);
	}

	inline static int32_t get_offset_of_mostrar_3() { return static_cast<int32_t>(offsetof(Pausa_t76887506, ___mostrar_3)); }
	inline bool get_mostrar_3() const { return ___mostrar_3; }
	inline bool* get_address_of_mostrar_3() { return &___mostrar_3; }
	inline void set_mostrar_3(bool value)
	{
		___mostrar_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
