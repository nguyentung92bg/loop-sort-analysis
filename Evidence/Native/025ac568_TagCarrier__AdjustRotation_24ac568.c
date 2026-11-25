/* IL2CPP: TagCarrier$$AdjustRotation
void TagCarrier__AdjustRotation (TagCarrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TagCarrier$$AdjustRotation
   void TagCarrier__AdjustRotation (TagCarrier_o* __this, const MethodInfo* method); */

void TagCarrier__AdjustRotation_24ac568(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  undefined1 auVar13 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar34 [16];
  undefined1 auVar31 [16];
  undefined1 auVar35 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  
  if ((bRam0000000004f4bb3a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b6110);
    bRam0000000004f4bb3a = 1;
  }
  if (cRam0000000004f4a55a == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a55a = '\x01';
  }
  uVar38 = *(uint *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x50);
  lVar3 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (lVar3 == 0) goto LAB_025ac868;
  uVar7 = UnityEngine_Transform__get_forward_3c2db78(lVar3,0);
  if (cRam0000000004f4a55e == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a55e = '\x01';
  }
  auVar14 = ZEXT416(uVar7);
  fVar8 = (float)FUN_025bb780(0);
  puVar1 = PTR_DAT_049b6110;
  if (fVar8 <= 45.0) {
    auVar23 = ZEXT416(0xc2340000);
    if ((fVar8 <= -45.0) || (auVar23 = ZEXT416(0x42340000), 45.0 <= fVar8)) goto LAB_025ac6a4;
LAB_025ac69c:
    uVar9 = 1;
  }
  else {
    auVar23 = ZEXT416(0x43070000);
    if (fVar8 <= 135.0) goto LAB_025ac69c;
LAB_025ac6a4:
    uVar9 = 0;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    lVar3 = UnityEngine_GameObject__get_transform_3c1ca74(*(long *)(param_1 + 0xa0),0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    Extensions__ToLookRotation_24e6420(uVar9,0);
    if (lVar3 != 0) {
      UnityEngine_Transform__set_rotation_3c2d86c(lVar3,0);
      uVar9 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar3,0);
      *(undefined4 *)(param_1 + 0x100) = uVar9;
      *(int *)(param_1 + 0x104) = auVar23._0_4_;
      *(uint *)(param_1 + 0x108) = uVar38;
      *(int *)(param_1 + 0x10c) = auVar14._0_4_;
      uVar7 = UnityEngine_Transform__get_forward_3c2db78(lVar3,0);
      fVar16 = auVar23._0_4_;
      auVar13 = ZEXT416(uVar7);
      auVar15 = ZEXT416(uVar38);
      auVar10 = UnityEngine_Quaternion__AngleAxis_3c0a0a8(0);
      auVar14 = auVar13;
      auVar23 = auVar15;
      fVar8 = fVar16;
      auVar11 = UnityEngine_Transform__get_rotation_3c2d7a8(lVar3,0);
      auVar12._0_8_ = auVar11._0_8_;
      fVar24 = auVar11._0_4_;
      fVar28 = auVar13._0_4_;
      fVar17 = auVar14._0_4_;
      fVar22 = auVar23._0_4_;
      auVar14._4_4_ = fVar28;
      auVar14._0_4_ = fVar22;
      fVar25 = auVar15._0_4_;
      fVar29 = auVar10._0_4_;
      auVar37._4_12_ = auVar10._4_12_;
      auVar37._0_4_ = fVar22;
      auVar31._12_4_ = auVar10._12_4_;
      auVar31._0_8_ = auVar37._0_8_;
      auVar31._8_4_ = fVar28;
      auVar30._8_8_ = auVar31._8_8_;
      auVar30._4_4_ = fVar24;
      auVar30._0_4_ = fVar22;
      uVar9 = auVar11._4_4_;
      auVar32._0_12_ = auVar30._0_12_;
      auVar32._12_4_ = uVar9;
      auVar33._4_12_ = auVar32._4_12_;
      auVar33._0_4_ = fVar22;
      auVar35._0_8_ = auVar33._0_8_;
      auVar35._8_4_ = fVar24;
      auVar35._12_4_ = uVar9;
      auVar34._8_8_ = auVar35._8_8_;
      auVar34._4_4_ = fVar22;
      auVar34._0_4_ = fVar22;
      auVar36._0_12_ = auVar34._0_12_;
      auVar36._12_4_ = fVar28;
      auVar18._4_4_ = fVar8;
      auVar18._0_4_ = fVar16;
      auVar18._8_4_ = fVar28;
      auVar18._12_4_ = fVar29;
      auVar14._8_4_ = fVar16;
      auVar14._12_4_ = fVar29;
      auVar37 = NEON_ext(auVar14,auVar36,0xc,1);
      auVar18 = NEON_rev64(auVar18,4);
      fVar26 = fVar22 * auVar37._0_4_;
      fVar27 = fVar28 * auVar37._4_4_;
      auVar12._8_4_ = uVar9;
      auVar12._12_4_ = auVar11._12_4_;
      fVar5 = auVar18._0_4_;
      auVar11._8_8_ = auVar12._8_8_;
      auVar11._4_4_ = fVar5;
      auVar11._0_4_ = fVar24;
      fVar6 = auVar18._4_4_;
      auVar13._0_12_ = auVar11._0_12_;
      auVar13._12_4_ = fVar6;
      auVar20._12_4_ = auVar18._12_4_;
      auVar20._0_8_ = auVar18._0_8_;
      auVar20._8_4_ = fVar6;
      auVar19._8_8_ = auVar20._8_8_;
      auVar19._4_4_ = fVar24;
      auVar19._0_4_ = fVar5;
      auVar21._0_12_ = auVar19._0_12_;
      auVar21._12_4_ = fVar5;
      auVar23._4_4_ = fVar16;
      auVar23._0_4_ = fVar28;
      auVar23._8_4_ = fVar17;
      auVar23._12_4_ = fVar29;
      auVar10._4_4_ = fVar16;
      auVar10._0_4_ = fVar28;
      auVar10._8_4_ = fVar17;
      auVar10._12_4_ = fVar29;
      auVar23 = NEON_ext(auVar23,auVar10,8,1);
      auVar14 = NEON_ext(auVar21,auVar13,8,1);
      auVar15._0_8_ =
           CONCAT44((fVar17 * fVar25 + fVar27 + fVar6 * fVar24) - auVar23._4_4_ * auVar14._4_4_,
                    (fVar24 * fVar25 + fVar26 + fVar5 * fVar28) - auVar23._0_4_ * auVar14._0_4_);
      auVar15._8_4_ =
           (fVar8 * fVar25 + fVar16 * auVar37._8_4_ + auVar18._8_4_ * fVar17) -
           auVar23._8_4_ * auVar14._8_4_;
      auVar15._12_4_ =
           ((fVar22 * fVar25 - fVar29 * auVar37._12_4_) - auVar20._12_4_ * fVar17) -
           auVar23._12_4_ * auVar14._12_4_;
      *(long *)(param_1 + 0x118) = auVar15._8_8_;
      *(undefined8 *)(param_1 + 0x110) = auVar15._0_8_;
      if (*(long *)(param_1 + 0xf0) != 0) {
        bVar2 = Carrier__CanInteract_2408994
                          (auVar15,auVar21,
                           CONCAT44((fVar17 * fVar25 - fVar27) - fVar6 * fVar24,
                                    (fVar24 * fVar25 - fVar26) - fVar5 * fVar28),
                           *(long *)(param_1 + 0xf0),0);
        *(byte *)(param_1 + 0x120) = bVar2 & 1;
        if ((bRam0000000004f58a0d & 1) == 0) {
          FUN_021f03f8(PTR_DAT_04a26ad0,0);
          bRam0000000004f58a0d = 1;
        }
        if (lVar3 != 0) {
          lVar4 = *(long *)(lVar3 + 0x10);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar3,0);
          }
          if (pcRam0000000004f58a58 == (code *)0x0) {
            pcRam0000000004f58a58 = (code *)FUN_021f03bc(&UNK_013b3a78);
          }
          (*pcRam0000000004f58a58)(lVar4,&stack0xffffffffffffffd0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
LAB_025ac868:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

