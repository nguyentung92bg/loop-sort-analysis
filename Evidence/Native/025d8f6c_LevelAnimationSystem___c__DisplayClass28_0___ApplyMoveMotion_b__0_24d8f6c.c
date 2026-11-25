/* IL2CPP: LevelAnimationSystem.<>c__DisplayClass28_0$$<ApplyMoveMotion>b__0
void LevelAnimationSystem___c__DisplayClass28_0___ApplyMoveMotion_b__0 (LevelAnimationSystem___c__DisplayClass28_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LevelAnimationSystem.<>c__DisplayClass28_0$$<ApplyMoveMotion>b__0
   void LevelAnimationSystem___c__DisplayClass28_0___ApplyMoveMotion_b__0
   (LevelAnimationSystem___c__DisplayClass28_0_o* __this, const MethodInfo* method); */

void LevelAnimationSystem___c__DisplayClass28_0___ApplyMoveMotion_b__0_24d8f6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  
  if ((bRam0000000004f4bc49 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c77f0);
    bRam0000000004f4bc49 = 1;
  }
  plVar13 = *(long **)(param_1 + 0x10);
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049c77f0) {
          puVar8 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
          goto LAB_025d8ff8;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_049c77f0,1);
LAB_025d8ff8:
    (*(code *)*puVar8)(plVar13,puVar8[1]);
  }
  if (*(long *)(param_1 + 0x18) != 0) {
    UnityEngine_Transform__set_position_3c2d61c
              (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
               *(undefined4 *)(param_1 + 0x28),*(long *)(param_1 + 0x18),0);
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (Carrier__ApplyOpenBackMotion_24076b0(*(long *)(param_1 + 0x30),0,0),
       *(long *)(param_1 + 0x38) != 0)) {
      lVar10 = *(long *)(param_1 + 0x30);
      fVar25 = *(float *)(param_1 + 0x48);
      fVar28 = *(float *)(param_1 + 0x4c);
      uVar19 = *(undefined4 *)(param_1 + 0x40);
      fVar22 = *(float *)(param_1 + 0x44);
      fVar29 = *(float *)(param_1 + 0x50);
      fVar30 = *(float *)(param_1 + 0x54);
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
      if (lVar10 != 0) {
        lVar7 = UnityEngine_Component__get_transform_3c18724(lVar10,0);
        lVar14 = *(long *)(lVar10 + 0xf8);
        if (cRam0000000004f4a55e == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a55e = '\x01';
        }
        puVar1 = PTR_DAT_049bbf90;
        lVar9 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        UnityEngine_Quaternion__AngleAxis_3c0a0a8
                  (0,*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
                   *(undefined4 *)(lVar9 + 0x20),0);
        if (lVar14 != 0) {
          UnityEngine_Transform__set_localRotation_3c2d9f0(lVar14,0);
          lVar14 = *(long *)(lVar10 + 0x100);
          if (cRam0000000004f4a55e == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a55e = '\x01';
          }
          lVar9 = *(long *)(*(long *)puVar1 + 0xb8);
          UnityEngine_Quaternion__AngleAxis_3c0a0a8
                    (0x43340000,*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
                     *(undefined4 *)(lVar9 + 0x20),0);
          if (lVar14 != 0) {
            UnityEngine_Transform__set_localRotation_3c2d9f0(lVar14,0);
            if (cRam0000000004f4a55e == '\0') {
              FUN_021f03f8(PTR_DAT_049bbf90);
              cRam0000000004f4a55e = '\x01';
            }
            fVar26 = *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x18);
            fVar15 = (float)UnityEngine_Quaternion__LookRotation_3c0a160(uVar19,0);
            puVar6 = PTR_DAT_049c67c8;
            puVar5 = PTR_DAT_049c67c0;
            puVar4 = PTR_DAT_049c2808;
            puVar3 = PTR_DAT_049c20a0;
            puVar2 = PTR_DAT_049c1680;
            puVar1 = PTR_DAT_049b6110;
            if (lVar7 != 0) {
              fVar20 = fVar22;
              fVar23 = fVar25;
              fVar16 = (float)UnityEngine_Transform__get_up_3c2dafc(lVar7,0);
              fVar21 = fVar30 * fVar20 - fVar29 * fVar23;
              fVar24 = fVar28 * fVar23 - fVar30 * fVar16;
              fVar27 = fVar29 * fVar16 - fVar28 * fVar20;
              fVar20 = fVar21;
              fVar23 = fVar24;
              fVar16 = fVar27;
              fVar17 = (float)UnityEngine_Quaternion__AngleAxis_3c0a0a8(0x40000000,0);
              UnityEngine_Transform__get_rotation_3c2d7a8(lVar7,0);
              auVar34 = LitMotion_LMotion__Create_2eaa2a0(0);
              auVar34 = LitMotion_Extensions_LitMotionTransformExtensions__BindToRotation___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26735e8
                                  (auVar34._0_8_,auVar34._8_8_,lVar7,*(undefined8 *)puVar5);
              if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                FUN_021f0574();
              }
              Extensions__AddTo_24d83f4(auVar34._0_8_,auVar34._8_8_ & 0xffffffff,lVar10);
              fVar18 = (float)UnityEngine_Quaternion__AngleAxis_3c0a0a8
                                        (0xc0000000,fVar21,fVar24,fVar27,0);
              fVar31 = (fVar25 * fVar21 + fVar15 * fVar27 + fVar26 * fVar18) - fVar22 * fVar24;
              fVar32 = (fVar15 * fVar24 + fVar22 * fVar27 + fVar26 * fVar21) - fVar25 * fVar18;
              fVar33 = (fVar22 * fVar18 + fVar25 * fVar27 + fVar26 * fVar24) - fVar15 * fVar21;
              fVar21 = ((fVar26 * fVar27 - fVar15 * fVar18) - fVar22 * fVar21) - fVar25 * fVar24;
              auStack_b0 = LitMotion_LMotion__Create_2eaa2a0
                                     ((fVar25 * fVar20 + fVar15 * fVar16 + fVar26 * fVar17) -
                                      fVar22 * fVar23,
                                      (fVar15 * fVar23 + fVar22 * fVar16 + fVar26 * fVar20) -
                                      fVar25 * fVar17,
                                      (fVar22 * fVar17 + fVar25 * fVar16 + fVar26 * fVar23) -
                                      fVar15 * fVar20,
                                      ((fVar26 * fVar16 - fVar15 * fVar17) - fVar22 * fVar20) -
                                      fVar25 * fVar23,fVar31,fVar32,fVar33,fVar21,0);
              uVar19 = _UNK_013aa62c;
              auVar34 = FUN_024f6e90(auStack_b0,0,1,*(undefined8 *)puVar6);
              auVar34 = LitMotion_Extensions_LitMotionTransformExtensions__BindToRotation___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26735e8
                                  (auVar34._0_8_,auVar34._8_8_,lVar7,*(undefined8 *)puVar5);
              Extensions__AddTo_24d83f4(auVar34._0_8_,auVar34._8_8_ & 0xffffffff,lVar10);
              auVar34 = LitMotion_LMotion__Create_2eaa2a0
                                  (fVar31,fVar32,fVar33,fVar21,fVar15,fVar22,fVar25,fVar26,0);
              auStack_b0 = auVar34;
              auVar34 = FUN_024f6e90(_UNK_013aa8fc,auStack_b0,0,1,*(undefined8 *)puVar6);
              auVar34 = LitMotion_Extensions_LitMotionTransformExtensions__BindToRotation___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__26735e8
                                  (auVar34._0_8_,auVar34._8_8_,lVar7,*(undefined8 *)puVar5);
              Extensions__AddTo_24d83f4(auVar34._0_8_,auVar34._8_8_ & 0xffffffff,lVar10);
              fVar22 = (float)UnityEngine_Transform__get_position_3c2d540(lVar7,0);
              fVar25 = fVar28 * _UNK_013aa838 + fVar22;
              fVar28 = fVar29 * _UNK_013aa838 + fVar32;
              fVar29 = fVar30 * _UNK_013aa838 + fVar33;
              auStack_c0 = LitMotion_LMotion__Create_2eaa1b4
                                     (fVar22,fVar32,fVar33,fVar25,fVar28,fVar29,uVar19,0);
              auVar34 = FUN_024f4e50(auStack_c0,5,*(undefined8 *)puVar2);
              auVar34 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                                  (auVar34._0_8_,auVar34._8_8_,lVar7,*(undefined8 *)puVar3);
              Extensions__AddTo_24d83f4(auVar34._0_8_,auVar34._8_8_ & 0xffffffff,lVar10);
              auVar34 = LitMotion_LMotion__Create_2eaa1b4
                                  (fVar25,fVar28,fVar29,fVar22,fVar32,fVar33,uVar19,0);
              auStack_c0 = auVar34;
              auVar34 = FUN_024f4e50(auStack_c0,5,*(undefined8 *)puVar2);
              auStack_c0 = auVar34;
              auVar34 = FUN_024f6e90(uVar19,auStack_c0,0,1,*(undefined8 *)puVar4);
              auVar34 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPosition___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__2672b14
                                  (auVar34._0_8_,auVar34._8_8_,lVar7,*(undefined8 *)puVar3);
              Extensions__AddTo_24d83f4(auVar34._0_8_,auVar34._8_8_ & 0xffffffff,lVar10);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

