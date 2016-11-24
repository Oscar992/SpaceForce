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

// LoadAnyButton
struct  LoadAnyButton_t3162446296  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Sprite LoadAnyButton::loadImage
	Sprite_t4006040370 * ___loadImage_2;
	// UnityEngine.UI.Image[] LoadAnyButton::images
	ImageU5BU5D_t2279835437* ___images_3;
	// UnityEngine.UI.Button[] LoadAnyButton::buttons
	ButtonU5BU5D_t729687770* ___buttons_4;

public:
	inline static int32_t get_offset_of_loadImage_2() { return static_cast<int32_t>(offsetof(LoadAnyButton_t3162446296, ___loadImage_2)); }
	inline Sprite_t4006040370 * get_loadImage_2() const { return ___loadImage_2; }
	inline Sprite_t4006040370 ** get_address_of_loadImage_2() { return &___loadImage_2; }
	inline void set_loadImage_2(Sprite_t4006040370 * value)
	{
		___loadImage_2 = value;
		Il2CppCodeGenWriteBarrier(&___loadImage_2, value);
	}

	inline static int32_t get_offset_of_images_3() { return static_cast<int32_t>(offsetof(LoadAnyButton_t3162446296, ___images_3)); }
	inline ImageU5BU5D_t2279835437* get_images_3() const { return ___images_3; }
	inline ImageU5BU5D_t2279835437** get_address_of_images_3() { return &___images_3; }
	inline void set_images_3(ImageU5BU5D_t2279835437* value)
	{
		___images_3 = value;
		Il2CppCodeGenWriteBarrier(&___images_3, value);
	}

	inline static int32_t get_offset_of_buttons_4() { return static_cast<int32_t>(offsetof(LoadAnyButton_t3162446296, ___buttons_4)); }
	inline ButtonU5BU5D_t729687770* get_buttons_4() const { return ___buttons_4; }
	inline ButtonU5BU5D_t729687770** get_address_of_buttons_4() { return &___buttons_4; }
	inline void set_buttons_4(ButtonU5BU5D_t729687770* value)
	{
		___buttons_4 = value;
		Il2CppCodeGenWriteBarrier(&___buttons_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
