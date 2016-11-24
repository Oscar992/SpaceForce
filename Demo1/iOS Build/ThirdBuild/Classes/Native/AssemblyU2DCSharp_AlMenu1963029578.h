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
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t2279835437;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t729687770;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AlMenu
struct  AlMenu_t1963029578  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Sprite AlMenu::loadSprite
	Sprite_t4006040370 * ___loadSprite_2;
	// UnityEngine.UI.Image[] AlMenu::images
	ImageU5BU5D_t2279835437* ___images_3;
	// UnityEngine.UI.Button[] AlMenu::buttons
	ButtonU5BU5D_t729687770* ___buttons_4;
	// System.Boolean AlMenu::entro
	bool ___entro_5;

public:
	inline static int32_t get_offset_of_loadSprite_2() { return static_cast<int32_t>(offsetof(AlMenu_t1963029578, ___loadSprite_2)); }
	inline Sprite_t4006040370 * get_loadSprite_2() const { return ___loadSprite_2; }
	inline Sprite_t4006040370 ** get_address_of_loadSprite_2() { return &___loadSprite_2; }
	inline void set_loadSprite_2(Sprite_t4006040370 * value)
	{
		___loadSprite_2 = value;
		Il2CppCodeGenWriteBarrier(&___loadSprite_2, value);
	}

	inline static int32_t get_offset_of_images_3() { return static_cast<int32_t>(offsetof(AlMenu_t1963029578, ___images_3)); }
	inline ImageU5BU5D_t2279835437* get_images_3() const { return ___images_3; }
	inline ImageU5BU5D_t2279835437** get_address_of_images_3() { return &___images_3; }
	inline void set_images_3(ImageU5BU5D_t2279835437* value)
	{
		___images_3 = value;
		Il2CppCodeGenWriteBarrier(&___images_3, value);
	}

	inline static int32_t get_offset_of_buttons_4() { return static_cast<int32_t>(offsetof(AlMenu_t1963029578, ___buttons_4)); }
	inline ButtonU5BU5D_t729687770* get_buttons_4() const { return ___buttons_4; }
	inline ButtonU5BU5D_t729687770** get_address_of_buttons_4() { return &___buttons_4; }
	inline void set_buttons_4(ButtonU5BU5D_t729687770* value)
	{
		___buttons_4 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_4, value);
	}

	inline static int32_t get_offset_of_entro_5() { return static_cast<int32_t>(offsetof(AlMenu_t1963029578, ___entro_5)); }
	inline bool get_entro_5() const { return ___entro_5; }
	inline bool* get_address_of_entro_5() { return &___entro_5; }
	inline void set_entro_5(bool value)
	{
		___entro_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
