#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// MoveSpace
struct MoveSpace_t3061227413;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"

// System.Void MoveSpace::.ctor()
extern "C"  void MoveSpace__ctor_m2003185014 (MoveSpace_t3061227413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveSpace::Start()
extern "C"  void MoveSpace_Start_m950322806 (MoveSpace_t3061227413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveSpace::Update()
extern "C"  void MoveSpace_Update_m3696055383 (MoveSpace_t3061227413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveSpace::SetTransformX(System.Single)
extern "C"  void MoveSpace_SetTransformX_m1683222633 (MoveSpace_t3061227413 * __this, float ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveSpace::SetTransformY(System.Single)
extern "C"  void MoveSpace_SetTransformY_m1172688456 (MoveSpace_t3061227413 * __this, float ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveSpace::SetTransformZ(System.Single)
extern "C"  void MoveSpace_SetTransformZ_m662154279 (MoveSpace_t3061227413 * __this, float ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveSpace::moveSpaceShip(System.Single,System.Single,System.Single)
extern "C"  void MoveSpace_moveSpaceShip_m3712502480 (MoveSpace_t3061227413 * __this, float ___x, float ___y, float ___z, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveSpace::moveSpaceDirection(System.String)
extern "C"  void MoveSpace_moveSpaceDirection_m1163996938 (MoveSpace_t3061227413 * __this, String_t* ___sMove, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MoveSpace::VerificarLimite()
extern "C"  void MoveSpace_VerificarLimite_m2228970569 (MoveSpace_t3061227413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
