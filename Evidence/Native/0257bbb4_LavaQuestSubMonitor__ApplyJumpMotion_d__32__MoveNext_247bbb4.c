/* IL2CPP: LavaQuestSubMonitor.<ApplyJumpMotion>d__32$$MoveNext
void LavaQuestSubMonitor__ApplyJumpMotion_d__32__MoveNext (LavaQuestSubMonitor__ApplyJumpMotion_d__32_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LavaQuestSubMonitor.<ApplyJumpMotion>d__32$$MoveNext
   void LavaQuestSubMonitor__ApplyJumpMotion_d__32__MoveNext
   (LavaQuestSubMonitor__ApplyJumpMotion_d__32_o __this, const MethodInfo* method); */

void LavaQuestSubMonitor__ApplyJumpMotion_d__32__MoveNext_247bbb4
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],
               float param_4,int *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  float fVar17;
  undefined4 uVar18;
  float extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  float fStack_b0;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4b9ef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2058);
    FUN_021f03f8(PTR_DAT_049c5978);
    FUN_021f03f8(PTR_DAT_049c20a8);
    FUN_021f03f8(PTR_DAT_049c20d8);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049c2240);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049c5980);
    FUN_021f03f8(PTR_DAT_049c5988);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c5990);
    FUN_021f03f8(PTR_DAT_049c5998);
    bRam0000000004f4b9ef = 1;
  }
  puVar4 = PTR_DAT_049b5138;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  iVar6 = *param_5;
  lVar15 = *(long *)(param_5 + 0xe);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auVar21 = ZEXT816(0);
  auVar28 = ZEXT816(0);
  if (iVar6 < 2) {
    if (iVar6 == 0) {
      auStack_60 = *(undefined1 (*) [16])(param_5 + 0x1e);
      param_5[0x1e] = 0;
      param_5[0x1f] = 0;
      param_5[0x20] = 0;
      param_5[0x21] = 0;
      *param_5 = -1;
LAB_0257bec4:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar9 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar11 = *(long *)auStack_60._0_8_;
        uVar16 = auStack_60._8_8_ & 0xffff;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
              goto LAB_0257bf44;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0257bf44:
        (*(code *)*puVar8)(uVar9,uVar16,puVar8[1]);
      }
      lVar11 = *(long *)(param_5 + 0x10);
      lVar7 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetImage_3350e64
                        (*(undefined8 *)(param_5 + 0x12),0xbd13b84d,0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = UnityEngine_Component__get_transform_3c18724(lVar7,0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      puVar8 = (undefined8 *)(lVar11 + 0x50);
      *puVar8 = uVar9;
      thunk_FUN_021f190c(puVar8);
      lVar11 = *(long *)(param_5 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar11 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar18 = UnityEngine_Transform__get_rotation_3c2d7a8(*(long *)(lVar11 + 0x50),0);
      *(undefined4 *)(lVar11 + 0x30) = uVar18;
      *(int *)(lVar11 + 0x34) = param_2._0_4_;
      *(int *)(lVar11 + 0x38) = param_3._0_4_;
      *(float *)(lVar11 + 0x3c) = param_4;
      lVar11 = *(long *)(param_5 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar11 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar26 = (float)UnityEngine_Transform__get_rotation_3c2d7a8(*(long *)(lVar11 + 0x50),0);
      iVar6 = param_5[0x14];
      if (cRam0000000004f4a55a == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55a = '\x01';
      }
      lVar7 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      auVar21 = ZEXT416(*(uint *)(lVar7 + 0x48));
      auVar23 = ZEXT416(*(uint *)(lVar7 + 0x4c));
      fVar24 = *(float *)(lVar7 + 0x50);
      UnityEngine_Quaternion__AngleAxis_3c0a0a8(iVar6,0);
      auVar25._4_4_ = fVar24;
      auVar25._0_4_ = fVar24;
      auVar25._8_4_ = fVar24;
      auVar25._12_4_ = fVar24;
      auVar28._4_4_ = fVar24;
      auVar28._0_4_ = extraout_s0;
      auVar28._8_4_ = extraout_var;
      auVar28._12_4_ = extraout_var_00;
      auVar25 = NEON_ext(auVar25,auVar28,4,1);
      fVar20 = auVar23._0_4_;
      fStack_b0 = param_3._0_4_;
      fVar19 = auVar21._0_4_;
      auVar21._4_4_ = fVar24;
      auVar21._0_4_ = extraout_s0;
      auVar21._8_4_ = fVar20;
      auVar21._12_4_ = extraout_var_00;
      auVar23._4_4_ = fVar24;
      auVar23._0_4_ = extraout_s0;
      auVar23._8_4_ = fVar20;
      auVar23._12_4_ = extraout_var_00;
      auVar21 = NEON_ext(auVar21,auVar23,4,1);
      fVar27 = param_2._0_4_;
      fVar17 = auVar21._4_4_;
      auVar1._4_4_ = fStack_b0;
      auVar1._0_4_ = fVar27;
      auVar1._8_4_ = fVar26;
      auVar1._12_4_ = fVar27;
      auVar2._4_4_ = fStack_b0;
      auVar2._0_4_ = fVar27;
      auVar2._8_4_ = fVar26;
      auVar2._12_4_ = fVar27;
      auVar28 = NEON_ext(auVar1,auVar2,0xc,1);
      auVar22._4_4_ = fVar19;
      auVar22._0_4_ = fVar17;
      auVar22._8_4_ = fVar17;
      auVar22._12_4_ = auVar21._12_4_;
      auVar3._4_4_ = fStack_b0;
      auVar3._0_4_ = fVar27;
      auVar3._8_4_ = fVar26;
      auVar3._12_4_ = fVar27;
      auVar28 = NEON_ext(auVar28,auVar3,8,1);
      auVar23 = NEON_rev64(auVar22,4);
      *(ulong *)(lVar11 + 0x48) =
           CONCAT44(((param_4 * fVar24 - fVar26 * auVar25._12_4_) - fVar27 * fVar19) -
                    auVar28._12_4_ * auVar23._12_4_,
                    (param_4 * fVar20 + fStack_b0 * auVar25._8_4_ + fVar26 * fVar19) -
                    auVar28._8_4_ * auVar23._8_4_);
      *(ulong *)(lVar11 + 0x40) =
           CONCAT44((fVar27 * fVar24 + param_4 * fVar19 + fStack_b0 * auVar21._12_4_) -
                    auVar28._4_4_ * auVar23._4_4_,
                    (param_4 * extraout_s0 + fVar26 * auVar25._0_4_ + fVar27 * fVar17) -
                    auVar28._0_4_ * auVar23._0_4_);
      if (*(long *)(param_5 + 0x12) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar11 = *(long *)(param_5 + 0x10);
      uVar9 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_5 + 0x12),0);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      puVar8 = (undefined8 *)(lVar11 + 0x28);
      *puVar8 = uVar9;
      thunk_FUN_021f190c(puVar8);
      lVar11 = StatefulUISupport_Scripts_Components_StatefulComponentExtensions__GetAnimator_3350cf8
                         (*(undefined8 *)(param_5 + 0x12),0x6fcf623b,0);
      plVar14 = (long *)(param_5 + 0x18);
      *plVar14 = lVar11;
      thunk_FUN_021f190c(plVar14);
      if (*plVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      StatefulUI_Runtime_References_AnimatorReference__SetTrigger_3345b68
                (*plVar14,*(undefined8 *)PTR_DAT_049c5990,0);
      auStack_70 = LitMotion_LMotion__Create_2ea9f9c(0,0);
      auVar28 = FUN_024f6e90(_UNK_013aa810,auStack_70,0,1,*(undefined8 *)PTR_DAT_049c20d8);
      auStack_70 = auVar28;
      auVar28 = FUN_024f4e50(auStack_70,5,*(undefined8 *)PTR_DAT_049c1358);
      auStack_70 = auVar28;
      auVar28 = FUN_024f6b84(auStack_70,*(undefined8 *)(param_5 + 0x16),
                             *(undefined8 *)PTR_DAT_049c2240);
      uVar10 = *(undefined8 *)(param_5 + 0x10);
      auStack_70 = auVar28;
      uVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2058);
      System_Action___Il2CppFullySharedGenericType____ctor_27aed38
                (uVar9,uVar10,*(undefined8 *)PTR_DAT_049c5980,0);
      auVar28 = FUN_024f6d0c(auStack_70,uVar9,*(undefined8 *)PTR_DAT_049c20a8);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar15 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(lVar15 + 0x98),0);
      auVar28 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                          (auVar28._0_8_,auVar28._8_8_ & 0xffffffff,uVar9,0);
      *(undefined1 (*) [16])(param_5 + 0x1a) = auVar28;
      thunk_FUN_021f190c((undefined1 (*) [16])(param_5 + 0x1a),0);
      if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar9 = System_TimeSpan__FromSeconds_311711c(0,0);
      if (*(long *)(lVar15 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar10 = System_Threading_CancellationTokenSource__get_Token_31655c4
                         (*(long *)(lVar15 + 0x98),0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar28 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar9,0,8,uVar10,0,0);
      auStack_50 = auVar28;
      thunk_FUN_021f190c(auStack_50,0);
      auStack_60 = auStack_50;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar9 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar11 = *(long *)auStack_60._0_8_;
        uVar16 = auStack_60._8_8_ & 0xffff;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0257c35c;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0257c35c:
        iVar6 = (*(code *)*puVar8)(uVar9,uVar16,puVar8[1]);
        if (iVar6 == 0) {
          *param_5 = 1;
          *(undefined1 (*) [16])(param_5 + 0x1e) = auStack_60;
          thunk_FUN_021f190c(param_5 + 0x1e,0);
          FUN_0235c25c(param_5 + 2,auStack_60,param_5,*(undefined8 *)PTR_DAT_049c5978);
          return;
        }
      }
    }
    else {
      if (iVar6 != 1) goto LAB_0257bce8;
      auStack_60 = *(undefined1 (*) [16])(param_5 + 0x1e);
      param_5[0x1e] = 0;
      param_5[0x1f] = 0;
      param_5[0x20] = 0;
      param_5[0x21] = 0;
      *param_5 = -1;
      auStack_70 = ZEXT816(0);
    }
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar9 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar11 = *(long *)auStack_60._0_8_;
      uVar16 = auStack_60._8_8_ & 0xffff;
      uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar13 + 2) * 0x10 + 0x138);
            goto LAB_0257c3f0;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0257c3f0:
      (*(code *)*puVar8)(uVar9,uVar16,puVar8[1]);
    }
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LavaQuestSubMonitor__UpdatePlayerRenderOrder_247a640(lVar15);
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar9 = System_TimeSpan__FromSeconds_311711c((int)_UNK_013a82c8,0);
    if (*(long *)(lVar15 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = System_Threading_CancellationTokenSource__get_Token_31655c4(*(long *)(lVar15 + 0x98),0)
    ;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar28 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar9,0,8,uVar10,0,0);
    auStack_50 = auVar28;
    thunk_FUN_021f190c(auStack_50,0);
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar9 = auStack_60._0_8_;
    auVar28 = auStack_70;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar15 = *(long *)auStack_60._0_8_;
      uVar16 = auStack_60._8_8_ & 0xffff;
      uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
      if (uVar12 != 0) {
        piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_0257c540;
          }
          uVar12 = uVar12 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar12 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0257c540:
      iVar6 = (*(code *)*puVar8)(uVar9,uVar16,puVar8[1]);
      auVar28 = auStack_70;
      if (iVar6 == 0) {
        *param_5 = 2;
        *(undefined1 (*) [16])(param_5 + 0x1e) = auStack_60;
        thunk_FUN_021f190c(param_5 + 0x1e,0);
        FUN_0235c25c(param_5 + 2,auStack_60,param_5,*(undefined8 *)PTR_DAT_049c5978);
        return;
      }
    }
  }
  else {
    if (iVar6 != 2) {
      if (iVar6 == 3) {
        auStack_60._8_8_ = *(undefined8 *)(param_5 + 0x20);
        auStack_60._0_8_ = *(undefined8 *)(param_5 + 0x1e);
        param_5[0x1e] = 0;
        param_5[0x1f] = 0;
        param_5[0x20] = 0;
        param_5[0x21] = 0;
        *param_5 = -1;
        goto LAB_0257c6f0;
      }
LAB_0257bce8:
      lVar11 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c5988);
      System_Object___ctor_3142338(lVar11,0);
      plVar14 = (long *)(param_5 + 0x10);
      *plVar14 = lVar11;
      thunk_FUN_021f190c(plVar14,lVar11);
      lVar11 = *plVar14;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = *(undefined8 *)(param_5 + 6);
      *(int *)(lVar11 + 0x18) = param_5[8];
      *(undefined8 *)(lVar11 + 0x10) = uVar9;
      puVar5 = PTR_DAT_049b6128;
      lVar11 = *(long *)(param_5 + 0x10);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = *(undefined8 *)(param_5 + 9);
      *(int *)(lVar11 + 0x24) = param_5[0xb];
      lVar7 = *(long *)puVar5;
      *(undefined8 *)(lVar11 + 0x1c) = uVar9;
      fVar26 = (float)param_5[0xc];
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar9 = System_TimeSpan__FromSeconds_311711c(SUB84((double)fVar26,0),0);
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar15 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar10 = System_Threading_CancellationTokenSource__get_Token_31655c4
                         (*(long *)(lVar15 + 0x98),0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_50 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar9,0,8,uVar10,0,0);
      thunk_FUN_021f190c(auStack_50,0);
      auStack_60 = auStack_50;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar9 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar11 = *(long *)auStack_60._0_8_;
        uVar16 = auStack_60._8_8_ & 0xffff;
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar12 != 0) {
          piVar13 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar8 = (undefined8 *)(lVar11 + (long)*piVar13 * 0x10 + 0x138);
              goto LAB_0257beb0;
            }
            uVar12 = uVar12 - 1;
            piVar13 = piVar13 + 4;
          } while (uVar12 != 0);
        }
        puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0257beb0:
        iVar6 = (*(code *)*puVar8)(uVar9,uVar16,puVar8[1]);
        if (iVar6 == 0) {
          *param_5 = 0;
          *(undefined1 (*) [16])(param_5 + 0x1e) = auStack_60;
          thunk_FUN_021f190c(param_5 + 0x1e,0);
          FUN_0235c25c(param_5 + 2,auStack_60,param_5,*(undefined8 *)PTR_DAT_049c5978);
          return;
        }
      }
      goto LAB_0257bec4;
    }
    auStack_60 = *(undefined1 (*) [16])(param_5 + 0x1e);
    param_5[0x1e] = 0;
    param_5[0x1f] = 0;
    param_5[0x20] = 0;
    param_5[0x21] = 0;
    *param_5 = -1;
  }
  auStack_70 = auVar28;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar15 = *(long *)auStack_60._0_8_;
    uVar16 = auStack_60._8_8_ & 0xffff;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_0257c5d4;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0257c5d4:
    (*(code *)*puVar8)(uVar9,uVar16,puVar8[1]);
  }
  if (*(long *)(param_5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  StatefulUI_Runtime_References_AnimatorReference__SetTrigger_3345b68
            (*(long *)(param_5 + 0x18),*(undefined8 *)PTR_DAT_049c5998,0);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_50._8_8_ = *(undefined8 *)(param_5 + 0x1c);
  auStack_50._0_8_ = *(undefined8 *)(param_5 + 0x1a);
  thunk_FUN_021f190c(auStack_50,0);
  auStack_60._8_8_ = auStack_50._8_8_;
  auStack_60._0_8_ = auStack_50._0_8_;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar9 = auStack_60._0_8_;
  auVar21 = auStack_70;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar15 = *(long *)auStack_60._0_8_;
    uVar16 = auStack_60._8_8_ & 0xffff;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar15 + (long)*piVar13 * 0x10 + 0x138);
          goto LAB_0257c6dc;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0257c6dc:
    iVar6 = (*(code *)*puVar8)(uVar9,uVar16,puVar8[1]);
    auVar21 = auStack_70;
    if (iVar6 == 0) {
      *param_5 = 3;
      *(undefined8 *)(param_5 + 0x20) = auStack_60._8_8_;
      *(undefined8 *)(param_5 + 0x1e) = auStack_60._0_8_;
      thunk_FUN_021f190c(param_5 + 0x1e,0);
      FUN_0235c25c(param_5 + 2,auStack_60,param_5,*(undefined8 *)PTR_DAT_049c5978);
      return;
    }
  }
LAB_0257c6f0:
  auStack_70 = auVar21;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar9 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar15 = *(long *)auStack_60._0_8_;
    uVar16 = auStack_60._8_8_ & 0xffff;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_0257c7ac;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0257c7ac:
    (*(code *)*puVar8)(uVar9,uVar16,puVar8[1]);
  }
  *param_5 = -2;
  piVar13 = param_5 + 0x10;
  piVar13[0] = 0;
  piVar13[1] = 0;
  thunk_FUN_021f190c(piVar13,0);
  piVar13 = param_5 + 0x18;
  piVar13[0] = 0;
  piVar13[1] = 0;
  thunk_FUN_021f190c(piVar13,0);
  param_5[0x1a] = 0;
  param_5[0x1b] = 0;
  param_5[0x1c] = 0;
  param_5[0x1d] = 0;
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar14 = *(long **)(param_5 + 2);
  if (plVar14 != (long *)0x0) {
    lVar15 = *plVar14;
    uVar12 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar12 != 0) {
      piVar13 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar13 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar8 = (undefined8 *)(lVar15 + (long)(*piVar13 + 2) * 0x10 + 0x138);
          goto LAB_0257c86c;
        }
        uVar12 = uVar12 - 1;
        piVar13 = piVar13 + 4;
      } while (uVar12 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar14,*(long *)PTR_DAT_049b56d0,2);
LAB_0257c86c:
    (*(code *)*puVar8)(plVar14,puVar8[1]);
  }
  return;
}

