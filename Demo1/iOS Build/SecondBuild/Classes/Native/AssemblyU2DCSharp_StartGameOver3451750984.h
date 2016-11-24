#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite
struct Sprite_t4006040370;
// UnityEngine.UI.Text
struct Text_t3286458198;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2279835437;
// UnityEngine.GameObject
struct GameObject_t4012695102;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// StartGameOver
struct  StartGameOver_t3451750984  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Sprite StartGameOver::loadImage
	Sprite_t4006040370 * ___loadImage_2;
	// UnityEngine.UI.Text StartGameOver::txtVida
	Text_t3286458198 * ___txtVida_3;
	// System.Int32 StartGameOver::vida
	int32_t ___vida_4;
	// UnityEngine.UI.Image[] StartGameOver::images
	ImageU5BU5D_t2279835437* ___images_5;
	// UnityEngine.UI.Image[] StartGameOver::barraVida
	ImageU5BU5D_t2279835437* ___barraVida_6;
	// UnityEngine.GameObject StartGameOver::canvasGameOver
	GameObject_t4012695102 * ___canvasGameOver_7;
	// UnityEngine.GameObject StartGameOver::canvasBarraVida
	GameObject_t4012695102 * ___canvasBarraVida_8;

public:
	inline static int32_t get_offset_of_loadImage_2() { return static_cast<int32_t>(offsetof(StartGameOver_t3451750984, ___loadImage_2)); }
	inline Sprite_t4006040370 * get_loadImage_2() const { return ___loadImage_2; }
	inline Sprite_t4006040370 ** get_address_of_loadImage_2() { return &___loadImage_2; }
	inline void set_loadImage_2(Sprite_t4006040370 * value)
	{
		___loadImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___loadImage_2, value);
	}

	inline static int32_t get_offset_of_txtVida_3() { return static_cast<int32_t>(offsetof(StartGameOver_t3451750984, ___txtVida_3)); }
	inline Text_t3286458198 * get_txtVida_3() const { return ___txtVida_3; }
	inline Text_t3286458198 ** get_address_of_txtVida_3() { return &___txtVida_3; }
	inline void set_txtVida_3(Text_t3286458198 * value)
	{
		___txtVida_3 = value;
		Il2CppCodeGenWriteBarrier(&___txtVida_3, value);
	}

	inline static int32_t get_offset_of_vida_4() { return static_cast<int32_t>(offsetof(StartGameOver_t3451750984, ___vida_4)); }
	inline int32_t get_vida_4() const { return ___vida_4; }
	inline int32_t* get_address_of_vida_4() { return &___vida_4; }
	inline void set_vida_4(int32_t value)
	{
		___vida_4 = value;
	}

	inline static int32_t get_offset_of_images_5() { return static_cast<int32_t>(offsetof(StartGameOver_t3451750984, ___images_5)); }
	inline ImageU5BU5D_t2279835437* get_images_5() const { return ___images_5; }
	inline ImageU5BU5D_t2279835437** get_address_of_images_5() { return &___images_5; }
	inline void set_images_5(ImageU5BU5D_t2279835437* value)
	{
		___images_5 = value;
		Il2CppCodeGenWriteBarrier(&___images_5, value);
	}

	inline static int32_t get_offset_of_barraVida_6() { return static_cast<int32_t>(offsetof(StartGameOver_t3451750984, ___barraVida_6)); }
	inline ImageU5BU5D_t2279835437* get_barraVida_6() const { return ___barraVida_6; }
	inline ImageU5BU5D_t2279835437** get_address_of_barraVida_6() { return &___barraVida_6; }
	inline void set_barraVida_6(ImageU5BU5D_t2279835437* value)
	{
		___barraVida_6 = value;
		Il2CppCodeGenWriteBarrier(&___barraVida_6, value);
	}

	inline static int32_t get_offset_of_canvasGameOver_7() { return static_cast<int32_t>(offsetof(StartGameOver_t3451750984, ___canvasGameOver_7)); }
	inline GameObject_t4012695102 * get_canvasGameOver_7() const { return ___canvasGameOver_7; }
	inline GameObject_t4012695102 ** get_address_of_canvasGameOver_7() { return &___canvasGameOver_7; }
	inline void set_canvasGameOver_7(GameObject_t4012695102 * value)
	{
		___canvasGameOver_7 = value;
		Il2CppCodeGenWriteBarrier(&___canvasGameOver_7, value);
	}

	inline static int32_t get_offset_of_canvasBarraVida_8() { return static_cast<int32_t>(offsetof(StartGameOver_t3451750984, ___canvasBarraVida_8)); }
	inline GameObject_t4012695102 * get_canvasBarraVida_8() const { return ___canvasBarraVida_8; }
	inline GameObject_t4012695102 ** get_address_of_canvasBarraVida_8() { return &___canvasBarraVida_8; }
	inline void set_canvasBarraVida_8(GameObject_t4012695102 * value)
	{
		___canvasBarraVida_8 = value;
		Il2CppCodeGenWriteBarrier(&___canvasBarraVida_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
