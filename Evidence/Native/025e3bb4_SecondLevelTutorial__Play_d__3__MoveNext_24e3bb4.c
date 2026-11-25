/* IL2CPP: SecondLevelTutorial.<Play>d__3$$MoveNext
void SecondLevelTutorial__Play_d__3__MoveNext (SecondLevelTutorial__Play_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SecondLevelTutorial.<Play>d__3$$MoveNext
   void SecondLevelTutorial__Play_d__3__MoveNext (SecondLevelTutorial__Play_d__3_o __this, const
   MethodInfo* method); */

void SecondLevelTutorial__Play_d__3__MoveNext_24e3bb4
               (undefined1 param_1 [16],float param_2,float param_3,int *param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined1 auStack_c0 [16];
  long *aplStack_b0 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000004f4bc78 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7a98);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c7a88);
    FUN_021f03f8(PTR_DAT_049c1590);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c1418);
    bRam0000000004f4bc78 = 1;
  }
  puVar3 = PTR_DAT_049b54e0;
  puVar2 = PTR_DAT_049b5138;
  uStack_e0 = 0;
  uStack_d8 = 0;
  iVar4 = *param_4;
  plStack_d0 = (long *)0x0;
  auStack_f0._0_8_ = 0;
  auStack_f0._8_8_ = 0;
  lVar10 = *(long *)(param_4 + 8);
  if (iVar4 < 2) {
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        auStack_f0 = *(undefined1 (*) [16])(param_4 + 0x12);
        param_4[0x12] = 0;
        param_4[0x13] = 0;
        param_4[0x14] = 0;
        param_4[0x15] = 0;
        *param_4 = -1;
        goto LAB_025e43e4;
      }
      goto LAB_025e3cf4;
    }
    auStack_f0 = *(undefined1 (*) [16])(param_4 + 0x12);
    param_4[0x12] = 0;
    param_4[0x13] = 0;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    *param_4 = -1;
  }
  else {
    if (iVar4 == 2) {
      auStack_f0 = *(undefined1 (*) [16])(param_4 + 0x12);
      param_4[0x12] = 0;
      param_4[0x13] = 0;
      param_4[0x14] = 0;
      param_4[0x15] = 0;
      *param_4 = -1;
      goto LAB_025e4760;
    }
    if (iVar4 == 3) {
      auStack_f0 = *(undefined1 (*) [16])(param_4 + 0x12);
      param_4[0x12] = 0;
      param_4[0x13] = 0;
      param_4[0x14] = 0;
      param_4[0x15] = 0;
      *param_4 = -1;
      goto LAB_025e4a04;
    }
LAB_025e3cf4:
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar10 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    InteractionModule__EnableRestriction_2535cc8(*(long *)(lVar10 + 0xa8),lVar10,0);
    if (*(long *)(lVar10 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *(long *)(*(long *)(lVar10 + 0xb0) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    FUN_0235c744(*(undefined8 *)(lVar7 + 0x50),auStack_c0,*(undefined8 *)PTR_DAT_049c7a88);
    lVar7 = FUN_024f5544(auStack_c0._0_8_,*(undefined8 *)PTR_DAT_049c1418);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar12 = *(long *)(lVar7 + 0x38);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    if (*(int *)(lVar12 + 0x18) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    lVar1 = *(long *)(lVar12 + 0x20);
    *(undefined8 *)(param_4 + 0xc) = *(undefined8 *)(lVar12 + 0x28);
    thunk_FUN_021f190c();
    lVar12 = *(long *)(lVar7 + 0x38);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(uint *)(lVar12 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(param_4 + 0xe) = *(undefined8 *)(lVar12 + 0x30);
    thunk_FUN_021f190c();
    lVar12 = *(long *)(lVar7 + 0x38);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar12 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(param_4 + 0x10) = *(undefined8 *)(lVar12 + 0x20);
    thunk_FUN_021f190c();
    if (*(long *)(lVar10 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar12 = UnityEngine_Component__get_transform_3c18724(*(long *)(lVar10 + 0xc0),0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar14 = *(long *)(lVar1 + 0x110);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar16 = UnityEngine_Transform__get_position_3c2d540(lVar14,0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar17 = UnityEngine_Transform__get_position_3c2d540(lVar12,0);
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar18 = (float)Extensions__WithX_3f0d5e4(uVar16,param_2,param_3,uVar17,0);
    if (cRam0000000004f4a68e == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a68e = '\x01';
    }
    lVar15 = *(long *)(lVar10 + 0x98);
    lVar12 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    fVar19 = *(float *)(lVar12 + 0x54);
    fVar20 = *(float *)(lVar12 + 0x58);
    fVar21 = *(float *)(lVar12 + 0x5c);
    uVar11 = Phrase__get_SecondLevelTutorial_252e7d8(0);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar11,uVar11);
    }
    fVar18 = fVar18 + fVar19 * 3.25;
    param_2 = param_2 + fVar20 * 3.25;
    TutorialMonitor__SetText_2468a70(0,fVar18,param_2,param_3 + fVar21 * 3.25,lVar15,uVar11,0);
    lVar12 = *(long *)(lVar10 + 0x98);
    fVar19 = (float)UnityEngine_Transform__get_position_3c2d540(lVar14,0);
    if (cRam0000000004f4a55a == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a55a = '\x01';
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar14 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    param_3 = param_2 + *(float *)(lVar14 + 0x50) + *(float *)(lVar14 + 0x50);
    param_2 = fVar18 + *(float *)(lVar14 + 0x4c) + *(float *)(lVar14 + 0x4c);
    TutorialMonitor__SetHand_24687f0
              (fVar19 + *(float *)(lVar14 + 0x48) + *(float *)(lVar14 + 0x48),param_2,param_3,0,0,
               lVar12,0);
    if (*(long *)(lVar10 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar5 = (long *)(*(long *)(lVar10 + 0xa8) + 0x28);
    *plVar5 = lVar1;
    thunk_FUN_021f190c(plVar5,lVar1);
    auStack_c0._0_8_ = 0;
    auStack_c0._8_8_ = 0;
    aplStack_b0[0] = (long *)0x0;
    lVar12 = *(long *)PTR_DAT_049c1590;
    puVar6 = (undefined8 *)
             thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x80)
                                      + 0x60);
    uStack_a0 = *puVar6;
    uStack_98 = 0;
    thunk_FUN_021f190c(&uStack_a0);
    uStack_98 = 0;
    auStack_c0._8_8_ = 0;
    auStack_c0._0_8_ = uStack_a0;
    thunk_FUN_021f190c(auStack_c0,0);
    puVar6 = (undefined8 *)
             thunk_FUN_0224e54c(lVar7,*(long *)(**(long **)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x80)
                                      + 0x80);
    aplStack_b0[0] = (long *)*puVar6;
    thunk_FUN_021f190c(aplStack_b0);
    uStack_d8 = auStack_c0._8_8_;
    uStack_e0 = auStack_c0._0_8_;
    plStack_d0 = aplStack_b0[0];
    while (uVar8 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_e0,0),
          (uVar8 & 1) != 0) {
      lVar7 = *(long *)((long)plStack_d0 +
                       (ulong)*(uint *)(*plStack_d0 + 0x104) * (long)uStack_d8._4_4_ + 0x20);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = *(long *)(lVar7 + 0xf0);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar7,1,0);
    }
    if (*(long *)(lVar10 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HighlightMonitor__ShowMask_2443fe8(0x3f400000,*(long *)(lVar10 + 0xa0),0);
    if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Monitors__DisableRaycaster_256ea20(*(long *)(lVar10 + 0x30),lVar10,0);
    if (*(long *)(lVar10 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar22 = InteractionModule__OnInteractAsync_2535dc4
                        (*(long *)(lVar10 + 0xa8),*(undefined8 *)(param_4 + 10),0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_c0 = auVar22;
    thunk_FUN_021f190c(auStack_c0,0);
    auStack_f0 = auStack_c0;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar11 = auStack_f0._0_8_;
    if ((long *)auStack_f0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_f0._0_8_;
      uVar13 = auStack_f0._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_025e4170;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)puVar3,0);
LAB_025e4170:
      iVar4 = (*(code *)*puVar6)(uVar11,uVar13,puVar6[1]);
      if (iVar4 == 0) {
        *param_4 = 0;
        *(undefined1 (*) [16])(param_4 + 0x12) = auStack_f0;
        thunk_FUN_021f190c(param_4 + 0x12,0);
        FUN_0235bb44(param_4 + 2,auStack_f0,param_4,*(undefined8 *)PTR_DAT_049c7a98);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar11 = auStack_f0._0_8_;
  if ((long *)auStack_f0._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_f0._0_8_;
    uVar13 = auStack_f0._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025e41fc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)puVar3,2);
LAB_025e41fc:
    (*(code *)*puVar6)(uVar11,uVar13,puVar6[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Monitors__RestoreRaycaster_256eafc(*(long *)(lVar10 + 0x30),lVar10,0);
  if (*(long *)(lVar10 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  TutorialMonitor__ClearText_2468da0(*(long *)(lVar10 + 0x98),0);
  if (*(long *)(lVar10 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  TutorialMonitor__HideHand_2468a44(*(long *)(lVar10 + 0x98),0);
  if (*(long *)(lVar10 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  puVar6 = (undefined8 *)(*(long *)(lVar10 + 0xa8) + 0x28);
  *puVar6 = 0;
  thunk_FUN_021f190c(puVar6,0);
  if (*(long *)(lVar10 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  HighlightMonitor__ClearMask_2444234(*(long *)(lVar10 + 0xa0),0);
  while( true ) {
    if (*(long *)(param_4 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar8 = Carrier__IsFull_2409500(*(long *)(param_4 + 0xc),0);
    if ((uVar8 & 1) != 0) break;
    uVar11 = *(undefined8 *)(param_4 + 10);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar22 = Cysharp_Threading_Tasks_UniTask__Yield_37c8000(uVar11,0,0);
    auStack_c0 = auVar22;
    thunk_FUN_021f190c(auStack_c0,0);
    auStack_f0 = auStack_c0;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar11 = auStack_f0._0_8_;
    if ((long *)auStack_f0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_f0._0_8_;
      uVar13 = auStack_f0._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_025e455c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)puVar3,0);
LAB_025e455c:
      iVar4 = (*(code *)*puVar6)(uVar11,uVar13,puVar6[1]);
      if (iVar4 == 0) {
        *param_4 = 1;
        *(undefined1 (*) [16])(param_4 + 0x12) = auStack_f0;
        thunk_FUN_021f190c(param_4 + 0x12,0);
        FUN_0235bb44(param_4 + 2,auStack_f0,param_4,*(undefined8 *)PTR_DAT_049c7a98);
        return;
      }
    }
LAB_025e43e4:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar11 = auStack_f0._0_8_;
    if ((long *)auStack_f0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_f0._0_8_;
      uVar13 = auStack_f0._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_025e445c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)puVar3,2);
LAB_025e445c:
      (*(code *)*puVar6)(uVar11,uVar13,puVar6[1]);
    }
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(param_4 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(*(long *)(param_4 + 0xe) + 0x110);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar12 = *(long *)(lVar10 + 0x98);
  fVar18 = (float)UnityEngine_Transform__get_position_3c2d540(lVar7,0);
  if (cRam0000000004f4a55a == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a55a = '\x01';
  }
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar7 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  TutorialMonitor__SetHand_24687f0
            (fVar18 + *(float *)(lVar7 + 0x48) + *(float *)(lVar7 + 0x48),
             param_2 + *(float *)(lVar7 + 0x4c) + *(float *)(lVar7 + 0x4c),
             param_3 + *(float *)(lVar7 + 0x50) + *(float *)(lVar7 + 0x50),0,0,lVar12,0);
  if (*(long *)(lVar10 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(undefined8 *)(*(long *)(lVar10 + 0xa8) + 0x28) = *(undefined8 *)(param_4 + 0xe);
  thunk_FUN_021f190c();
  if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Monitors__DisableRaycaster_256ea20(*(long *)(lVar10 + 0x30),lVar10,0);
  if (*(long *)(lVar10 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar22 = InteractionModule__OnInteractAsync_2535dc4
                      (*(long *)(lVar10 + 0xa8),*(undefined8 *)(param_4 + 10),0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_c0 = auVar22;
  thunk_FUN_021f190c(auStack_c0,0);
  auStack_f0 = auStack_c0;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar11 = auStack_f0._0_8_;
  if ((long *)auStack_f0._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_f0._0_8_;
    uVar13 = auStack_f0._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025e474c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)puVar3,0);
LAB_025e474c:
    iVar4 = (*(code *)*puVar6)(uVar11,uVar13,puVar6[1]);
    if (iVar4 == 0) {
      *param_4 = 2;
      *(undefined1 (*) [16])(param_4 + 0x12) = auStack_f0;
      thunk_FUN_021f190c(param_4 + 0x12,0);
      FUN_0235bb44(param_4 + 2,auStack_f0,param_4,*(undefined8 *)PTR_DAT_049c7a98);
      return;
    }
  }
LAB_025e4760:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar11 = auStack_f0._0_8_;
  if ((long *)auStack_f0._0_8_ != (long *)0x0) {
    lVar7 = *(long *)auStack_f0._0_8_;
    uVar13 = auStack_f0._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025e47d8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)puVar3,2);
LAB_025e47d8:
    (*(code *)*puVar6)(uVar11,uVar13,puVar6[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar10 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Monitors__RestoreRaycaster_256eafc(*(long *)(lVar10 + 0x30),lVar10,0);
  if (*(long *)(lVar10 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  TutorialMonitor__HideHand_2468a44(*(long *)(lVar10 + 0x98),0);
  do {
    do {
      lVar10 = *(long *)(param_4 + 0x10);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar8 = Carrier__IsFull_2409500(lVar10,0);
      if ((uVar8 & 1) != 0) {
        *param_4 = -2;
        piVar9 = param_4 + 0xc;
        piVar9[0] = 0;
        piVar9[1] = 0;
        thunk_FUN_021f190c(piVar9,0);
        piVar9 = param_4 + 0xe;
        piVar9[0] = 0;
        piVar9[1] = 0;
        thunk_FUN_021f190c(piVar9,0);
        param_4[0x10] = 0;
        param_4[0x11] = 0;
        thunk_FUN_021f190c(param_4 + 0x10,0);
        auStack_c0._0_8_ = auStack_c0._0_8_ & 0xffffffffffffff00;
        FUN_0235bed4(param_4 + 2,auStack_c0,*(undefined8 *)PTR_DAT_049b5570);
        return;
      }
      uVar11 = *(undefined8 *)(param_4 + 10);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar22 = Cysharp_Threading_Tasks_UniTask__Yield_37c8000(uVar11,0,0);
      auStack_c0 = auVar22;
      thunk_FUN_021f190c(auStack_c0,0);
      auStack_f0 = auStack_c0;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar11 = auStack_f0._0_8_;
      if ((long *)auStack_f0._0_8_ != (long *)0x0) {
        lVar10 = *(long *)auStack_f0._0_8_;
        uVar13 = auStack_f0._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar10 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_025e49f0;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)puVar3,0);
LAB_025e49f0:
        iVar4 = (*(code *)*puVar6)(uVar11,uVar13,puVar6[1]);
        if (iVar4 == 0) {
          *param_4 = 3;
          *(undefined1 (*) [16])(param_4 + 0x12) = auStack_f0;
          thunk_FUN_021f190c(param_4 + 0x12,0);
          FUN_0235bb44(param_4 + 2,auStack_f0,param_4,*(undefined8 *)PTR_DAT_049c7a98);
          return;
        }
      }
LAB_025e4a04:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar11 = auStack_f0._0_8_;
    } while ((long *)auStack_f0._0_8_ == (long *)0x0);
    lVar10 = *(long *)auStack_f0._0_8_;
    uVar13 = auStack_f0._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025e4a7c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_f0._0_8_,*(long *)puVar3,2);
LAB_025e4a7c:
    (*(code *)*puVar6)(uVar11,uVar13,puVar6[1]);
  } while( true );
}

