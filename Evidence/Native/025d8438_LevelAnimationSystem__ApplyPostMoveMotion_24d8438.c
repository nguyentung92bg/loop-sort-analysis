/* IL2CPP: LevelAnimationSystem$$ApplyPostMoveMotion
void LevelAnimationSystem__ApplyPostMoveMotion (LevelAnimationSystem_o* __this, Carrier_o* carrier, UnityEngine_Vector3_o originalDirection, UnityEngine_Vector3_o carrierDirection, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LevelAnimationSystem$$ApplyPostMoveMotion
   void LevelAnimationSystem__ApplyPostMoveMotion (LevelAnimationSystem_o* __this, Carrier_o*
   carrier, UnityEngine_Vector3_o originalDirection, UnityEngine_Vector3_o carrierDirection, const
   MethodInfo* method); */

void LevelAnimationSystem__ApplyPostMoveMotion_24d8438
               (undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
               float param_6,undefined8 param_7,long param_8)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  if ((bRam0000000004f4bc45 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c20a0);
    FUN_021f03f8(PTR_DAT_049c67c0);
    FUN_021f03f8(PTR_DAT_049c2808);
    FUN_021f03f8(PTR_DAT_049c67c8);
    FUN_021f03f8(PTR_DAT_049c1680);
    bRam0000000004f4bc45 = 1;
  }
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  auStack_c0._0_8_ = 0;
  auStack_c0._8_8_ = 0;
  if (param_8 != 0) {
    lVar8 = UnityEngine_Component__get_transform_3c18724(param_8,0);
    lVar10 = *(long *)(param_8 + 0xf8);
    if (cRam0000000004f4a55e == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55e = '\x01';
    }
    puVar2 = PTR_DAT_049bbf90;
    lVar9 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    UnityEngine_Quaternion__AngleAxis_3c0a0a8
              (0,*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
               *(undefined4 *)(lVar9 + 0x20),0);
    if (lVar10 != 0) {
      UnityEngine_Transform__set_localRotation_3c2d9f0(lVar10,0);
      lVar10 = *(long *)(param_8 + 0x100);
      if (cRam0000000004f4a55e == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55e = '\x01';
      }
      lVar9 = *(long *)(*(long *)puVar2 + 0xb8);
      UnityEngine_Quaternion__AngleAxis_3c0a0a8
                (0x43340000,*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
                 *(undefined4 *)(lVar9 + 0x20),0);
      if (lVar10 != 0) {
        UnityEngine_Transform__set_localRotation_3c2d9f0(lVar10,0);
        if (cRam0000000004f4a55e == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a55e = '\x01';
        }
        fVar17 = *(float *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
        fVar11 = (float)UnityEngine_Quaternion__LookRotation_3c0a160(param_1,0);
        puVar7 = PTR_DAT_049c67c8;
        puVar6 = PTR_DAT_049c67c0;
        puVar5 = PTR_DAT_049c2808;
        puVar4 = PTR_DAT_049c20a0;
        puVar3 = PTR_DAT_049c1680;
        puVar2 = PTR_DAT_049b6110;
        if (lVar8 != 0) {
          fVar22 = param_2;
          fVar23 = param_3;
          fVar12 = (float)UnityEngine_Transform__get_up_3c2dafc(lVar8,0);
          fVar15 = param_6 * fVar22 - param_5 * fVar23;
          fVar16 = param_4 * fVar23 - param_6 * fVar12;
          fVar18 = param_5 * fVar12 - param_4 * fVar22;
          fVar22 = fVar15;
          fVar23 = fVar16;
          fVar12 = fVar18;
          fVar13 = (float)UnityEngine_Quaternion__AngleAxis_3c0a0a8(0x40000000,0);
          UnityEngine_Transform__get_rotation_3c2d7a8(lVar8,0);
          auVar24 = LitMotion_LMotion__Create_2eaa2a0(0);
          auVar24 = LitMotion_Extensions_LitMotionTransformExtensions__BindToRotation___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26735e8
                              (auVar24._0_8_,auVar24._8_8_,lVar8,*(undefined8 *)puVar6);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          Extensions__AddTo_24d83f4(auVar24._0_8_,auVar24._8_8_ & 0xffffffff,param_8);
          fVar14 = (float)UnityEngine_Quaternion__AngleAxis_3c0a0a8
                                    (0xc0000000,fVar15,fVar16,fVar18,0);
          fVar19 = (param_3 * fVar15 + fVar11 * fVar18 + fVar17 * fVar14) - param_2 * fVar16;
          fVar20 = (fVar11 * fVar16 + param_2 * fVar18 + fVar17 * fVar15) - param_3 * fVar14;
          fVar21 = (param_2 * fVar14 + param_3 * fVar18 + fVar17 * fVar16) - fVar11 * fVar15;
          fVar15 = ((fVar17 * fVar18 - fVar11 * fVar14) - param_2 * fVar15) - param_3 * fVar16;
          auStack_b0 = LitMotion_LMotion__Create_2eaa2a0
                                 ((param_3 * fVar22 + fVar11 * fVar12 + fVar17 * fVar13) -
                                  param_2 * fVar23,
                                  (fVar11 * fVar23 + param_2 * fVar12 + fVar17 * fVar22) -
                                  param_3 * fVar13,
                                  (param_2 * fVar13 + param_3 * fVar12 + fVar17 * fVar23) -
                                  fVar11 * fVar22,
                                  ((fVar17 * fVar12 - fVar11 * fVar13) - param_2 * fVar22) -
                                  param_3 * fVar23,fVar19,fVar20,fVar21,fVar15,0);
          uVar1 = _UNK_013aa62c;
          auVar24 = FUN_024f6e90(auStack_b0,0,1,*(undefined8 *)puVar7);
          auVar24 = LitMotion_Extensions_LitMotionTransformExtensions__BindToRotation___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26735e8
                              (auVar24._0_8_,auVar24._8_8_,lVar8,*(undefined8 *)puVar6);
          Extensions__AddTo_24d83f4(auVar24._0_8_,auVar24._8_8_ & 0xffffffff,param_8);
          auVar24 = LitMotion_LMotion__Create_2eaa2a0
                              (fVar19,fVar20,fVar21,fVar15,fVar11,param_2,param_3,fVar17,0);
          auStack_b0 = auVar24;
          auVar24 = FUN_024f6e90(_UNK_013aa8fc,auStack_b0,0,1,*(undefined8 *)puVar7);
          auVar24 = LitMotion_Extensions_LitMotionTransformExtensions__BindToRotation___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26735e8
                              (auVar24._0_8_,auVar24._8_8_,lVar8,*(undefined8 *)puVar6);
          Extensions__AddTo_24d83f4(auVar24._0_8_,auVar24._8_8_ & 0xffffffff,param_8);
          fVar11 = (float)UnityEngine_Transform__get_position_3c2d540(lVar8,0);
          fVar17 = param_4 * _UNK_013aa838 + fVar11;
          fVar22 = param_5 * _UNK_013aa838 + fVar20;
          fVar23 = param_6 * _UNK_013aa838 + fVar21;
          auStack_c0 = LitMotion_LMotion__Create_2eaa1b4
                                 (fVar11,fVar20,fVar21,fVar17,fVar22,fVar23,uVar1,0);
          auVar24 = FUN_024f4e50(auStack_c0,5,*(undefined8 *)puVar3);
          auVar24 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                              (auVar24._0_8_,auVar24._8_8_,lVar8,*(undefined8 *)puVar4);
          Extensions__AddTo_24d83f4(auVar24._0_8_,auVar24._8_8_ & 0xffffffff,param_8);
          auVar24 = LitMotion_LMotion__Create_2eaa1b4
                              (fVar17,fVar22,fVar23,fVar11,fVar20,fVar21,uVar1,0);
          auStack_c0 = auVar24;
          auVar24 = FUN_024f4e50(auStack_c0,5,*(undefined8 *)puVar3);
          auStack_c0 = auVar24;
          auVar24 = FUN_024f6e90(uVar1,auStack_c0,0,1,*(undefined8 *)puVar5);
          auVar24 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                              (auVar24._0_8_,auVar24._8_8_,lVar8,*(undefined8 *)puVar4);
          Extensions__AddTo_24d83f4(auVar24._0_8_,auVar24._8_8_ & 0xffffffff,param_8);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

