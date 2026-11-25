/* IL2CPP: RocketSystem$$ApplyFlightMotion
LitMotion_MotionHandle_o RocketSystem__ApplyFlightMotion (RocketSystem_o* __this, UnityEngine_Transform_o* instanceT, UnityEngine_Transform_o* cameraT, UnityEngine_Vector3_o from, UnityEngine_Vector3_o apex, UnityEngine_Vector3_o strike, UnityEngine_Vector3_o to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$ApplyFlightMotion
   LitMotion_MotionHandle_o RocketSystem__ApplyFlightMotion (RocketSystem_o* __this,
   UnityEngine_Transform_o* instanceT, UnityEngine_Transform_o* cameraT, UnityEngine_Vector3_o from,
   UnityEngine_Vector3_o apex, UnityEngine_Vector3_o strike, UnityEngine_Vector3_o to, const
   MethodInfo* method); */

void RocketSystem__ApplyFlightMotion_24b9ad8
               (undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,float param_5
               ,undefined4 param_6,long param_7,undefined8 param_8,long param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 in_stack_00000008;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  undefined1 auStack_90 [16];
  
  puVar2 = PTR_DAT_049c6dc0;
  fVar7 = param_3;
  if ((bRam0000000004f4bbb0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c6dc8);
    FUN_021f03f8(PTR_DAT_049c6dc0);
    bRam0000000004f4bbb0 = 1;
  }
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  lVar4 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Object___ctor_3142338(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = param_7;
    thunk_FUN_021f190c((long *)(lVar4 + 0x10),param_7);
    *(undefined8 *)(lVar4 + 0x18) = param_8;
    thunk_FUN_021f190c((undefined8 *)(lVar4 + 0x18),param_8);
    *(undefined4 *)(lVar4 + 0x20) = param_1;
    *(undefined4 *)(lVar4 + 0x24) = param_2;
    *(undefined4 *)(lVar4 + 0x38) = uStack0000000000000000;
    *(undefined4 *)(lVar4 + 0x3c) = uStack0000000000000004;
    *(undefined4 *)(lVar4 + 0x40) = in_stack_00000008;
    *(undefined4 *)(lVar4 + 0x44) = uStack0000000000000010;
    *(float *)(lVar4 + 0x28) = param_3;
    *(undefined4 *)(lVar4 + 0x2c) = param_4;
    *(undefined4 *)(lVar4 + 0x48) = uStack0000000000000014;
    *(undefined4 *)(lVar4 + 0x4c) = in_stack_00000018;
    *(float *)(lVar4 + 0x30) = param_5;
    *(undefined4 *)(lVar4 + 0x34) = param_6;
    if (param_9 != 0) {
      fVar6 = (float)UnityEngine_Transform__get_forward_3c2db78(param_9,0);
      fVar11 = *(float *)(lVar4 + 0x30);
      fVar12 = *(float *)(lVar4 + 0x34);
      fVar15 = *(float *)(lVar4 + 0x20);
      fVar18 = *(float *)(lVar4 + 0x24);
      fVar8 = *(float *)(lVar4 + 0x28);
      fVar9 = *(float *)(lVar4 + 0x2c);
      if (cRam0000000004f4bbb4 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf30);
        cRam0000000004f4bbb4 = '\x01';
      }
      puVar2 = PTR_DAT_049bbf30;
      fVar9 = fVar9 - fVar15;
      fVar11 = fVar11 - fVar18;
      fVar12 = fVar12 - fVar8;
      fVar8 = fVar7 * fVar7 + fVar6 * fVar6 + param_5 * param_5;
      if (**(float **)(*(long *)PTR_DAT_049bbf30 + 0xb8) <= fVar8) {
        fVar15 = fVar7 * fVar12 + fVar6 * fVar9 + param_5 * fVar11;
        fVar9 = fVar9 - (fVar6 * fVar15) / fVar8;
        fVar11 = fVar11 - (param_5 * fVar15) / fVar8;
        fVar12 = fVar12 - (fVar7 * fVar15) / fVar8;
      }
      if (cRam0000000004f4a55d == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a55d = '\x01';
      }
      puVar1 = PTR_DAT_049b8758;
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar15 = *(float *)(lVar4 + 0x3c);
      fVar18 = *(float *)(lVar4 + 0x40);
      fVar10 = *(float *)(lVar4 + 0x2c);
      fVar13 = *(float *)(lVar4 + 0x30);
      fVar16 = *(float *)(lVar4 + 0x34);
      fVar19 = *(float *)(lVar4 + 0x38);
      if (cRam0000000004f4bbb4 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf30);
        cRam0000000004f4bbb4 = '\x01';
      }
      fVar19 = fVar19 - fVar10;
      fVar15 = fVar15 - fVar13;
      fVar18 = fVar18 - fVar16;
      if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar8) {
        fVar10 = fVar7 * fVar18 + fVar6 * fVar19 + param_5 * fVar15;
        fVar19 = fVar19 - (fVar6 * fVar10) / fVar8;
        fVar15 = fVar15 - (param_5 * fVar10) / fVar8;
        fVar18 = fVar18 - (fVar7 * fVar10) / fVar8;
      }
      if (cRam0000000004f4a55d == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a55d = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar10 = *(float *)(lVar4 + 0x48);
      fVar17 = *(float *)(lVar4 + 0x4c);
      fVar13 = *(float *)(lVar4 + 0x38);
      fVar16 = *(float *)(lVar4 + 0x3c);
      fVar14 = *(float *)(lVar4 + 0x40);
      fVar20 = *(float *)(lVar4 + 0x44);
      if (cRam0000000004f4bbb4 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf30);
        cRam0000000004f4bbb4 = '\x01';
      }
      fVar20 = fVar20 - fVar13;
      fVar10 = fVar10 - fVar16;
      fVar17 = fVar17 - fVar14;
      if (**(float **)(*(long *)puVar2 + 0xb8) <= fVar8) {
        fVar13 = fVar7 * fVar17 + fVar6 * fVar20 + param_5 * fVar10;
        fVar20 = fVar20 - (fVar6 * fVar13) / fVar8;
        fVar10 = fVar10 - (param_5 * fVar13) / fVar8;
        fVar17 = fVar17 - (fVar7 * fVar13) / fVar8;
      }
      if (cRam0000000004f4a55d == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a55d = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      puVar3 = PTR_DAT_049c6dc8;
      puVar1 = PTR_DAT_049c20a8;
      puVar2 = PTR_DAT_049c2058;
      if (*(long *)(param_7 + 0x40) != 0) {
        auStack_90 = LitMotion_LMotion__Create_2ea9f9c
                               (0,0x3f800000,
                                (SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12) +
                                 SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar18 * fVar18) +
                                SQRT(fVar20 * fVar20 + fVar10 * fVar10 + fVar17 * fVar17)) /
                                *(float *)(*(long *)(param_7 + 0x40) + 0x34),0);
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
        System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                  (uVar5,lVar4,*(undefined8 *)puVar3,0);
        FUN_024f6d0c(auStack_90,uVar5,*(undefined8 *)puVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

