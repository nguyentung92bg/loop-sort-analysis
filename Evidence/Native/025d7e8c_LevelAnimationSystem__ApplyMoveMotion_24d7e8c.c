/* IL2CPP: LevelAnimationSystem$$ApplyMoveMotion
void LevelAnimationSystem__ApplyMoveMotion (LevelAnimationSystem_o* __this, Carrier_o* carrier, UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LevelAnimationSystem$$ApplyMoveMotion
   void LevelAnimationSystem__ApplyMoveMotion (LevelAnimationSystem_o* __this, Carrier_o* carrier,
   UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, const MethodInfo* method); */

void LevelAnimationSystem__ApplyMoveMotion_24d7e8c
               (undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,long param_7,long param_8)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long *plVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  
  puVar2 = PTR_DAT_049c77e0;
  uVar21 = param_2;
  fVar20 = param_3;
  if ((bRam0000000004f4bc44 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c77e8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c77f0);
    FUN_021f03f8(PTR_DAT_049c1b88);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c2240);
    FUN_021f03f8(PTR_DAT_049c2bf0);
    FUN_021f03f8(PTR_DAT_049c2288);
    FUN_021f03f8(PTR_DAT_049c77f8);
    FUN_021f03f8(PTR_DAT_049c7800);
    FUN_021f03f8(PTR_DAT_049c77e0);
    bRam0000000004f4bc44 = 1;
  }
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  lVar12 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Object___ctor_3142338(lVar12,0);
  if (lVar12 != 0) {
    *(undefined4 *)(lVar12 + 0x20) = param_4;
    *(undefined4 *)(lVar12 + 0x24) = param_5;
    plVar18 = (long *)(lVar12 + 0x30);
    *plVar18 = param_8;
    *(undefined4 *)(lVar12 + 0x28) = param_6;
    thunk_FUN_021f190c(plVar18,param_8);
    *(long *)(lVar12 + 0x38) = param_7;
    thunk_FUN_021f190c((long *)(lVar12 + 0x38),param_7);
    *(undefined4 *)(lVar12 + 0x58) = param_1;
    *(undefined4 *)(lVar12 + 0x5c) = param_2;
    *(float *)(lVar12 + 0x60) = param_3;
    if (*plVar18 != 0) {
      UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                (*plVar18,lVar12 + 0x10,*(undefined8 *)PTR_DAT_049c77e8);
      plVar17 = *(long **)(lVar12 + 0x10);
      if (plVar17 != (long *)0x0) {
        lVar14 = *plVar17;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049c77f0) {
              puVar13 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_025d8058;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar13 = (undefined8 *)FUN_02229a4c(plVar17,*(long *)PTR_DAT_049c77f0,0);
LAB_025d8058:
        (*(code *)*puVar13)(plVar17,puVar13[1]);
      }
      if (*plVar18 != 0) {
        lVar14 = UnityEngine_Component__get_transform_3c18724(*plVar18,0);
        plVar18 = (long *)(lVar12 + 0x18);
        *plVar18 = lVar14;
        thunk_FUN_021f190c(plVar18,lVar14);
        if (*plVar18 != 0) {
          uVar19 = UnityEngine_Transform__get_right_3c2da80(*plVar18,0);
          cVar11 = cRam0000000004f4a55c;
          fVar27 = *(float *)(lVar12 + 0x28);
          uVar25 = *(undefined8 *)(lVar12 + 0x20);
          uVar28 = *(undefined8 *)(lVar12 + 0x58);
          fVar29 = *(float *)(lVar12 + 0x60);
          *(undefined4 *)(lVar12 + 100) = uVar19;
          *(undefined4 *)(lVar12 + 0x68) = uVar21;
          *(float *)(lVar12 + 0x6c) = fVar20;
          if (cVar11 == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4a55c = '\x01';
          }
          puVar2 = PTR_DAT_049b8758;
          fVar23 = (float)uVar25 - (float)uVar28;
          fVar26 = (float)((ulong)uVar25 >> 0x20) - (float)((ulong)uVar28 >> 0x20);
          fVar27 = fVar27 - fVar29;
          if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar29 = SQRT(fVar27 * fVar27 + fVar23 * fVar23 + fVar26 * fVar26);
          if (fVar29 <= _UNK_013aa920) {
            fVar23 = _UNK_013aa920;
            if (cRam0000000004f4a233 == '\0') {
              FUN_021f03f8(PTR_DAT_049bbf90);
              cRam0000000004f4a233 = '\x01';
            }
            uStack_c0 = **(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
            fVar27 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 1);
          }
          else {
            fVar23 = fVar23 / fVar29;
            fVar27 = fVar27 / fVar29;
            uStack_c0 = CONCAT44(fVar26 / fVar29,fVar23);
          }
          if (*plVar18 != 0) {
            fVar26 = (float)UnityEngine_Transform__get_right_3c2da80(*plVar18,0);
            fVar29 = (float)((ulong)uStack_c0 >> 0x20);
            fVar22 = fVar27 * fVar20;
            *(float *)(lVar12 + 0x70) = fVar22 + fVar26 * (float)uStack_c0 + fVar23 * fVar29;
            if (*(long *)(lVar12 + 0x18) != 0) {
              fVar23 = (float)UnityEngine_Transform__get_forward_3c2db78(*(long *)(lVar12 + 0x18),0)
              ;
              if (*plVar18 != 0) {
                fVar27 = fVar27 * fVar20;
                fVar29 = fVar29 * fVar22;
                fVar24 = fVar27 + (float)uStack_c0 * fVar23 + fVar29;
                fVar20 = (float)UnityEngine_Transform__get_forward_3c2db78(*plVar18,0);
                *(float *)(lVar12 + 0x40) = fVar20;
                *(float *)(lVar12 + 0x44) = fVar29;
                cVar11 = cRam0000000004f4a234;
                fVar26 = *(float *)(lVar12 + 0x58);
                fVar23 = *(float *)(lVar12 + 0x5c);
                fVar22 = *(float *)(lVar12 + 0x60);
                fVar30 = *(float *)(lVar12 + 0x20);
                fVar31 = *(float *)(lVar12 + 0x24);
                if (fVar24 <= 0.0) {
                  fVar29 = -fVar29;
                  fVar20 = -fVar20;
                }
                fVar32 = *(float *)(lVar12 + 0x28);
                fVar1 = fVar27;
                if (fVar24 <= 0.0) {
                  fVar1 = -fVar27;
                }
                *(bool *)(lVar12 + 0x74) = 0.0 < fVar24;
                *(float *)(lVar12 + 0x48) = fVar27;
                *(float *)(lVar12 + 0x4c) = fVar20;
                *(float *)(lVar12 + 0x50) = fVar29;
                *(float *)(lVar12 + 0x54) = fVar1;
                if (cVar11 == '\0') {
                  FUN_021f03f8(PTR_DAT_049b8758);
                  cRam0000000004f4a234 = '\x01';
                }
                puVar7 = PTR_DAT_049c2288;
                if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                puVar10 = PTR_DAT_049c7800;
                puVar9 = PTR_DAT_049c77f8;
                puVar8 = PTR_DAT_049c2bf0;
                puVar6 = PTR_DAT_049c2240;
                puVar5 = PTR_DAT_049c20a8;
                puVar4 = PTR_DAT_049c2058;
                puVar3 = PTR_DAT_049b6110;
                puVar2 = PTR_DAT_049b4308;
                fVar23 = fVar23 - fVar31;
                fVar26 = fVar26 - fVar30;
                fVar22 = fVar22 - fVar32;
                auStack_b0 = LitMotion_LMotion__Create_2ea9f9c
                                       (0,0x3f800000,
                                        SQRT(fVar22 * fVar22 + fVar26 * fVar26 + fVar23 * fVar23) *
                                        _UNK_013aa978,0);
                lVar14 = *(long *)puVar7;
                if (*(int *)(lVar14 + 0xe4) == 0) {
                  FUN_021f0574();
                  lVar14 = *(long *)puVar7;
                }
                auVar33 = FUN_02526574(auStack_b0,*(undefined8 *)(*(long *)(lVar14 + 0xb8) + 0x60),
                                       *(undefined8 *)puVar8);
                auStack_b0 = auVar33;
                uVar25 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
                System_Action___ctor_306b98c(uVar25,lVar12,*(undefined8 *)puVar9,0);
                auVar33 = FUN_024f6b84(auStack_b0,uVar25,*(undefined8 *)puVar6);
                auStack_b0 = auVar33;
                uVar25 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
                System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                          (uVar25,lVar12,*(undefined8 *)puVar10,0);
                auVar33 = FUN_024f6d0c(auStack_b0,uVar25,*(undefined8 *)puVar5);
                uVar25 = *(undefined8 *)(lVar12 + 0x30);
                if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                auVar33 = Extensions__AddTo_24d83f4(auVar33._0_8_,auVar33._8_8_ & 0xffffffff,uVar25)
                ;
                auStack_a0 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                                       (auVar33._0_8_,auVar33._8_8_ & 0xffffffff,0,0);
                if (*(long *)(param_7 + 0x118) != 0) {
                  FUN_02333498(*(long *)(param_7 + 0x118),auStack_a0,*(undefined8 *)PTR_DAT_049c1b88
                              );
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

