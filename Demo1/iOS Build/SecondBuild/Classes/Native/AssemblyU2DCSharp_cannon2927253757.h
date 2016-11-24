#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;
// UnityEngine.GameObject
struct GameObject_t4012695102;
// UnityEngine.Camera
struct Camera_t3533968274;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cannon
struct  cannon_t2927253757  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform cannon::m_cannonRot
	Transform_t284553113 * ___m_cannonRot_2;
	// UnityEngine.Transform cannon::m_muzzle
	Transform_t284553113 * ___m_muzzle_3;
	// UnityEngine.GameObject cannon::m_shotPrefab
	GameObject_t4012695102 * ___m_shotPrefab_4;
	// UnityEngine.Camera cannon::camera
	Camera_t3533968274 * ___camera_5;
	// UnityEngine.GameObject cannon::cursor
	GameObject_t4012695102 * ___cursor_6;
	// UnityEngine.AudioSource cannon::laser
	AudioSource_t3628549054 * ___laser_7;

public:
	inline static int32_t get_offset_of_m_cannonRot_2() { return static_cast<int32_t>(offsetof(cannon_t2927253757, ___m_cannonRot_2)); }
	inline Transform_t284553113 * get_m_cannonRot_2() const { return ___m_cannonRot_2; }
	inline Transform_t284553113 ** get_address_of_m_cannonRot_2() { return &___m_cannonRot_2; }
	inline void set_m_cannonRot_2(Transform_t284553113 * value)
	{
		___m_cannonRot_2 = value;
		Il2CppCodeGenWriteBarrier(&___m_cannonRot_2, value);
	}

	inline static int32_t get_offset_of_m_muzzle_3() { return static_cast<int32_t>(offsetof(cannon_t2927253757, ___m_muzzle_3)); }
	inline Transform_t284553113 * get_m_muzzle_3() const { return ___m_muzzle_3; }
	inline Transform_t284553113 ** get_address_of_m_muzzle_3() { return &___m_muzzle_3; }
	inline void set_m_muzzle_3(Transform_t284553113 * value)
	{
		___m_muzzle_3 = value;
		Il2CppCodeGenWriteBarrier(&___m_muzzle_3, value);
	}

	inline static int32_t get_offset_of_m_shotPrefab_4() { return static_cast<int32_t>(offsetof(cannon_t2927253757, ___m_shotPrefab_4)); }
	inline GameObject_t4012695102 * get_m_shotPrefab_4() const { return ___m_shotPrefab_4; }
	inline GameObject_t4012695102 ** get_address_of_m_shotPrefab_4() { return &___m_shotPrefab_4; }
	inline void set_m_shotPrefab_4(GameObject_t4012695102 * value)
	{
		___m_shotPrefab_4 = value;
		Il2CppCodeGenWriteBarrier(&___m_shotPrefab_4, value);
	}

	inline static int32_t get_offset_of_camera_5() { return static_cast<int32_t>(offsetof(cannon_t2927253757, ___camera_5)); }
	inline Camera_t3533968274 * get_camera_5() const { return ___camera_5; }
	inline Camera_t3533968274 ** get_address_of_camera_5() { return &___camera_5; }
	inline void set_camera_5(Camera_t3533968274 * value)
	{
		___camera_5 = value;
		Il2CppCodeGenWriteBarrier(&___camera_5, value);
	}

	inline static int32_t get_offset_of_cursor_6() { return static_cast<int32_t>(offsetof(cannon_t2927253757, ___cursor_6)); }
	inline GameObject_t4012695102 * get_cursor_6() const { return ___cursor_6; }
	inline GameObject_t4012695102 ** get_address_of_cursor_6() { return &___cursor_6; }
	inline void set_cursor_6(GameObject_t4012695102 * value)
	{
		___cursor_6 = value;
		Il2CppCodeGenWriteBarrier(&___cursor_6, value);
	}

	inline static int32_t get_offset_of_laser_7() { return static_cast<int32_t>(offsetof(cannon_t2927253757, ___laser_7)); }
	inline AudioSource_t3628549054 * get_laser_7() const { return ___laser_7; }
	inline AudioSource_t3628549054 ** get_address_of_laser_7() { return &___laser_7; }
	inline void set_laser_7(AudioSource_t3628549054 * value)
	{
		___laser_7 = value;
		Il2CppCodeGenWriteBarrier(&___laser_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
