/* IL2CPP: LevelAnimationSystem$$GetPositionOutOfCameraBounds
UnityEngine_Vector3_o LevelAnimationSystem__GetPositionOutOfCameraBounds (LevelAnimationSystem_o* __this, UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelAnimationSystem$$GetPositionOutOfCameraBounds
   UnityEngine_Vector3_o LevelAnimationSystem__GetPositionOutOfCameraBounds (LevelAnimationSystem_o*
   __this, UnityEngine_Transform_o* t, const MethodInfo* method); */

float LevelAnimationSystem__GetPositionOutOfCameraBounds_24d89c4
                (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  if (param_5 != 0) {
    fVar3 = (float)UnityEngine_Transform__get_position_3c2d540(param_5,0);
    fVar4 = (float)UnityEngine_Transform__get_position_3c2d540(param_5,0);
    fVar15 = param_2;
    fVar19 = param_3;
    fVar5 = (float)UnityEngine_Transform__get_forward_3c2db78(param_5,0);
    fVar22 = fVar15;
    fVar20 = fVar19;
    fVar6 = (float)UnityEngine_Transform__get_right_3c2da80(param_5,0);
    fVar7 = *(float *)(param_4 + 0xec);
    uVar21 = *(undefined8 *)(param_4 + 0xe4);
    uVar12 = *(undefined8 *)(param_4 + 0xf0);
    fVar8 = *(float *)(param_4 + 0xf8);
    if (cRam0000000004f4a234 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a234 = '\x01';
    }
    puVar1 = PTR_DAT_049b8758;
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar2 = *(long *)(param_4 + 0x90);
    if (lVar2 != 0) {
      fVar16 = *(float *)(lVar2 + 0x24);
      fVar9 = *(float *)(lVar2 + 0x28);
      fVar26 = *(float *)(param_4 + 0x104);
      uVar17 = *(undefined8 *)(param_4 + 0xfc);
      uVar13 = *(undefined8 *)(param_4 + 0x108);
      fVar10 = *(float *)(param_4 + 0x110);
      if (cRam0000000004f4a234 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a234 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar2 = *(long *)(param_4 + 0x90);
      if (lVar2 != 0) {
        fVar23 = *(float *)(lVar2 + 0x2c);
        fVar25 = *(float *)(lVar2 + 0x30);
        if (cRam0000000004f4a55a == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a55a = '\x01';
        }
        puVar1 = PTR_DAT_049bbf90;
        lVar2 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        fVar28 = *(float *)(lVar2 + 0x48);
        fVar24 = *(float *)(lVar2 + 0x4c);
        fVar27 = *(float *)(lVar2 + 0x50);
        if (cRam0000000004f4a632 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
          cRam0000000004f4a632 = '\x01';
        }
        fVar11 = (float)uVar17 - (float)uVar13;
        fVar14 = (float)((ulong)uVar17 >> 0x20) - (float)((ulong)uVar13 >> 0x20);
        fVar26 = fVar26 - fVar10;
        fVar10 = (float)uVar21 - (float)uVar12;
        fVar18 = (float)((ulong)uVar21 >> 0x20) - (float)((ulong)uVar12 >> 0x20);
        fVar7 = fVar7 - fVar8;
        fVar4 = *(float *)(param_4 + 0xd8) - fVar4;
        fVar24 = ABS(fVar19 * fVar27 + fVar5 * fVar28 + fVar15 * fVar24);
        param_2 = *(float *)(param_4 + 0xdc) - param_2;
        fVar27 = ABS(fVar19 * *(float *)(lVar2 + 0x44) +
                     fVar5 * *(float *)(lVar2 + 0x3c) + fVar15 * *(float *)(lVar2 + 0x40));
        param_3 = *(float *)(param_4 + 0xe0) - param_3;
        fVar8 = SQRT(fVar26 * fVar26 + fVar11 * fVar11 + fVar14 * fVar14) * 0.5 +
                fVar23 + fVar25 + 5.0;
        if (fVar27 <= fVar24) {
          fVar8 = SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar18 * fVar18) * 0.5 +
                  fVar16 + fVar9 + 1.5;
        }
        fVar22 = fVar20 * param_3 + fVar6 * fVar4 + fVar22 * param_2;
        if (0.0 <= fVar19 * param_3 + fVar5 * fVar4 + fVar15 * param_2) {
          fVar8 = -fVar8;
        }
        fVar20 = 1.0;
        if (fVar27 <= fVar24 * fVar22) {
          fVar20 = 3.0;
        }
        return (fVar3 + fVar5 * fVar8) - fVar6 * fVar22 * fVar20;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

