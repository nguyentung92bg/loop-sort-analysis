/* IL2CPP: TimeModule.<AdjustTimeScale>d__3$$MoveNext
void TimeModule__AdjustTimeScale_d__3__MoveNext (TimeModule__AdjustTimeScale_d__3_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0263af78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: TimeModule.<AdjustTimeScale>d__3$$MoveNext
   void TimeModule__AdjustTimeScale_d__3__MoveNext (TimeModule__AdjustTimeScale_d__3_o __this, const
   MethodInfo* method); */

void TimeModule__AdjustTimeScale_d__3__MoveNext_253a58c(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auStack_d0 [16];
  long *plStack_c0;
  int **ppiStack_b8;
  long lStack_a8;
  int *piStack_a0;
  int **ppiStack_98;
  undefined8 uStack_90;
  int iStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_60;
  int iStack_54;
  undefined1 auStack_50 [16];
  int *piStack_28;
  
                    /* try { // try from 0263a590 to 0273a5a7 has its CatchHandler @ 0263a688 */
  piStack_28 = param_1;
  if ((bRam0000000004f4bf81 & 1) == 0) {
                    /* try { // try from 0263a5b0 to 0273a5bb has its CatchHandler @ 0263a680 */
    FUN_021f03f8(PTR_DAT_049ca3a0);
                    /* try { // try from 0263a5bc to 0273a5cf has its CatchHandler @ 0263a67c */
    FUN_021f03f8(PTR_DAT_049b5680);
    FUN_021f03f8(PTR_DAT_049bd298);
                    /* try { // try from 0263a5d4 to 0273a5df has its CatchHandler @ 0263a678 */
    FUN_021f03f8(PTR_DAT_049ca3a8);
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* try { // try from 0263a5f0 to 0273a5fb has its CatchHandler @ 0263a670 */
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c2bf0);
                    /* try { // try from 0263a604 to 0273a60f has its CatchHandler @ 0263a674 */
    FUN_021f03f8(PTR_DAT_049c2288);
                    /* try { // try from 0263a610 to 0273a627 has its CatchHandler @ 0263a66c */
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bf81 = 1;
  }
  iStack_54 = *param_1;
                    /* try { // try from 0263a638 to 0273a63b has its CatchHandler @ 0263a668 */
  auStack_70._8_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auStack_80._0_8_ = 0;
  iStack_88 = 0;
  lStack_60 = *(long *)(param_1 + 6);
  if (iStack_54 != 0) {
    if (iStack_54 != 1) {
                    /* catch() { ... } // from try @ 0263a6b8 with catch @ 0263a7a0 */
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* catch() { ... } // from try @ 0263a6c8 with catch @ 0263a7a4 */
      TimeModule__CancelCurrentTransition_253a548();
                    /* catch() { ... } // from try @ 0263a6e8 with catch @ 0263a7a8 */
                    /* catch() { ... } // from try @ 0263a68c with catch @ 0263a7ac */
      fVar14 = (float)piStack_28[8];
                    /* catch() { ... } // from try @ 0263a6a8 with catch @ 0263a7b0
                       catch() { ... } // from try @ 0263a6d8 with catch @ 0263a7b0 */
      if (0.0 < fVar14) {
                    /* try { // try from 0263a7c8 to 0273a7df has its CatchHandler @ 0263a840 */
        if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar8 = System_TimeSpan__FromSeconds_311711c((double)fVar14,0);
        puVar1 = PTR_DAT_049b5138;
                    /* try { // try from 0263a7e0 to 0273a82f has its CatchHandler @ 0263a4f4 */
        uVar10 = *(undefined8 *)(piStack_28 + 10);
        if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_d0 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar8,0,8,uVar10,0,0);
        thunk_FUN_021f190c(auStack_d0,0);
                    /* try { // try from 0263a830 to 0273a83f has its CatchHandler @ 0263a840 */
        auStack_70 = auStack_d0;
        if (cRam0000000004f49bf4 == '\0') {
                    /* catch() { ... } // from try @ 0263a7c8 with catch @ 0263a840
                       catch() { ... } // from try @ 0263a830 with catch @ 0263a840 */
                    /* try { // try from 0263a844 to 0273a847 has its CatchHandler @ 0263a850 */
                    /* try { // try from 0263a848 to 0273a853 has its CatchHandler @ 0263a4f4 */
          FUN_021f03f8(PTR_DAT_049b5138);
                    /* catch() { ... } // from try @ 0263a844 with catch @ 0263a850 */
          cRam0000000004f49bf4 = '\x01';
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (cRam0000000004f49bf5 == '\0') {
          FUN_021f03f8(PTR_DAT_049b54e0);
          cRam0000000004f49bf5 = '\x01';
        }
        uVar8 = auStack_70._0_8_;
        if ((long *)auStack_70._0_8_ != (long *)0x0) {
          lVar5 = *(long *)auStack_70._0_8_;
          uVar9 = auStack_70._8_8_ & 0xffff;
          uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0263ae78;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0263ae78:
          iVar2 = (*(code *)*puVar3)(uVar8,uVar9,puVar3[1]);
          if (iVar2 == 0) {
            iStack_54 = 0;
            *piStack_28 = 0;
            *(undefined1 (*) [16])(piStack_28 + 0x10) = auStack_70;
            thunk_FUN_021f190c(piStack_28 + 0x10,0);
            FUN_0235c25c(piStack_28 + 2,auStack_70,piStack_28,*(undefined8 *)PTR_DAT_049ca3a0);
            return;
          }
        }
        goto LAB_0263a72c;
      }
      goto LAB_0263a9d4;
    }
LAB_0263a670:
                    /* catch() { ... } // from try @ 0263a5f0 with catch @ 0263a670 */
    lStack_a8 = 0;
    piStack_a0 = &iStack_54;
                    /* catch() { ... } // from try @ 0263a604 with catch @ 0263a674
                       catch() { ... } // from try @ 0263a664 with catch @ 0263a674 */
                    /* catch() { ... } // from try @ 0263a5d4 with catch @ 0263a678 */
                    /* catch() { ... } // from try @ 0263a5bc with catch @ 0263a67c */
    ppiStack_98 = &piStack_28;
                    /* catch() { ... } // from try @ 0263a5b0 with catch @ 0263a680 */
LAB_0263a684:
                    /* catch() { ... } // from try @ 0263a660 with catch @ 0263a684 */
    ppiStack_b8 = &piStack_28;
    plStack_c0 = &lStack_60;
    auStack_d0._8_8_ = &iStack_54;
    auStack_d0._0_8_ = 0;
                    /* catch() { ... } // from try @ 0263a590 with catch @ 0263a688 */
                    /* try { // try from 0263a68c to 0273a697 has its CatchHandler @ 0263a7ac */
    iStack_54 = -1;
    auStack_70._8_8_ = *(undefined8 *)(piStack_28 + 0x12);
    auStack_70._0_8_ = *(undefined8 *)*(undefined1 (*) [16])(piStack_28 + 0x10);
    auVar16 = *(undefined1 (*) [16])(piStack_28 + 0x10);
    piStack_28[0x10] = 0;
    piStack_28[0x11] = 0;
    piStack_28[0x12] = 0;
    piStack_28[0x13] = 0;
    *piStack_28 = -1;
    auStack_70 = auVar16;
    goto LAB_0263a6a0;
  }
  auStack_70 = *(undefined1 (*) [16])(param_1 + 0x10);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  iStack_54 = -1;
                    /* try { // try from 0263a728 to 0273a72b has its CatchHandler @ 0263a790 */
  *param_1 = -1;
LAB_0263a72c:
                    /* try { // try from 0263a72c to 0273a763 has its CatchHandler @ 0263a4f4 */
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar8 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_70._0_8_;
    uVar9 = auStack_70._8_8_ & 0xffff;
                    /* try { // try from 0263a764 to 0273a773 has its CatchHandler @ 0263a78c */
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0263a9c4;
        }
        uVar6 = uVar6 - 1;
                    /* try { // try from 0263a788 to 0273a78b has its CatchHandler @ 0263a798 */
        piVar7 = piVar7 + 4;
                    /* catch() { ... } // from try @ 0263a764 with catch @ 0263a78c
                       try { // try from 0263a78c to 0273a7c7 has its CatchHandler @ 0263a4f4 */
      } while (uVar6 != 0);
    }
                    /* catch() { ... } // from try @ 0263a728 with catch @ 0263a790 */
                    /* catch() { ... } // from try @ 0263a700 with catch @ 0263a794 */
                    /* catch() { ... } // from try @ 0263a6f4 with catch @ 0263a798
                       catch() { ... } // from try @ 0263a788 with catch @ 0263a798 */
    puVar3 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
                    /* catch() { ... } // from try @ 0263a6ac with catch @ 0263a79c */
LAB_0263a9c4:
    (*(code *)*puVar3)(uVar8,uVar9,puVar3[1]);
  }
LAB_0263a9d4:
  fVar14 = (float)UnityEngine_Time__get_timeScale_3c29870(0);
  fVar15 = (float)piStack_28[0xc];
  if (cRam0000000004f4a18f == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf30);
    cRam0000000004f4a18f = '\x01';
  }
  fVar12 = ABS(fVar15);
  fVar11 = ABS(fVar14);
  if (ABS(fVar14) <= fVar12) {
    fVar11 = fVar12;
  }
  fVar13 = **(float **)(*(long *)PTR_DAT_049bbf30 + 0xb8) * 8.0;
  fVar12 = fVar11 * _UNK_013aa8a0;
  if (fVar11 * _UNK_013aa8a0 <= fVar13) {
    fVar12 = fVar13;
  }
  if (ABS(fVar15 - fVar14) < fVar12) {
    UnityEngine_Time__set_timeScale_3c29898(piStack_28[0xc],0);
    goto LAB_0263adac;
  }
  if ((float)piStack_28[0xd] <= 0.0) {
    UnityEngine_Time__set_timeScale_3c29898(piStack_28[0xc],0);
    goto LAB_0263adac;
  }
  lVar5 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049bd298,1);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
  *(undefined8 *)(lVar5 + 0x20) = *(undefined8 *)(piStack_28 + 10);
  thunk_FUN_021f190c((undefined8 *)(lVar5 + 0x20),0);
  if (*(int *)(*(long *)PTR_DAT_049b5680 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar8 = System_Threading_CancellationTokenSource__CreateLinkedTokenSource_3166b40(lVar5,0);
  *(undefined8 *)(piStack_28 + 0xe) = uVar8;
  thunk_FUN_021f190c();
  piStack_a0 = &iStack_54;
  lStack_a8 = 0;
  ppiStack_98 = &piStack_28;
  if (iStack_54 == 1) goto LAB_0263a670;
  if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(undefined8 *)(lStack_60 + 0x10) = *(undefined8 *)(piStack_28 + 0xe);
  thunk_FUN_021f190c();
  auStack_d0._8_8_ = &iStack_54;
  ppiStack_b8 = &piStack_28;
  auStack_d0._0_8_ = 0;
  plStack_c0 = &lStack_60;
  if (iStack_54 == 1) goto LAB_0263a684;
  uVar8 = UnityEngine_Time__get_timeScale_3c29870(0);
  auStack_80 = LitMotion_LMotion__Create_2ea9f9c(uVar8,piStack_28[0xc],piStack_28[0xd],0);
  puVar1 = PTR_DAT_049c2288;
  lVar5 = *(long *)PTR_DAT_049c2288;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar1;
  }
  auVar16 = FUN_02526574(auStack_80,*(undefined8 *)(*(long *)(lVar5 + 0xb8) + 0x60),
                         *(undefined8 *)PTR_DAT_049c2bf0);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar16 = Extensions__BindToTimeScale___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25eef5c
                      (auVar16._0_8_,auVar16._8_8_,*(undefined8 *)PTR_DAT_049ca3a8);
  if (*(long *)(piStack_28 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar8 = System_Threading_CancellationTokenSource__get_Token_31655c4(*(long *)(piStack_28 + 0xe),0)
  ;
  auStack_50 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                         (auVar16._0_8_,auVar16._8_8_ & 0xffffffff,uVar8,0);
  puVar1 = PTR_DAT_049b5138;
  if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
    FUN_021f0574();
  }
  thunk_FUN_021f190c(auStack_50,0);
  auStack_70 = auStack_50;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar8 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ == (long *)0x0) {
LAB_0263a6a0:
                    /* try { // try from 0263a6a8 to 0273a6ab has its CatchHandler @ 0263a7b0 */
    if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 0263a6ac to 0273a6b3 has its CatchHandler @ 0263a79c */
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 0263a6b8 to 0273a6c3 has its CatchHandler @ 0263a7a0 */
      cRam0000000004f49bf6 = '\x01';
    }
    uVar8 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
                    /* try { // try from 0263a6c8 to 0273a6d3 has its CatchHandler @ 0263a7a4 */
      lVar5 = *(long *)auStack_70._0_8_;
      uVar9 = auStack_70._8_8_ & 0xffff;
                    /* try { // try from 0263a6d8 to 0273a6e3 has its CatchHandler @ 0263a7b0 */
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
                    /* try { // try from 0263a6e8 to 0273a6eb has its CatchHandler @ 0263a7a8 */
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* try { // try from 0263a6f4 to 0273a6ff has its CatchHandler @ 0263a798 */
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_0263a8e8;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
                    /* try { // try from 0263a700 to 0273a717 has its CatchHandler @ 0263a794 */
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0263a8e8:
      (*(code *)*puVar3)(uVar8,uVar9,puVar3[1]);
    }
    iVar2 = 0xd;
  }
  else {
    lVar5 = *(long *)auStack_70._0_8_;
    uVar9 = auStack_70._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0263af14;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_0263af14:
    iVar2 = (*(code *)*puVar3)(uVar8,uVar9,puVar3[1]);
    if (iVar2 != 0) goto LAB_0263a6a0;
    iStack_54 = 1;
    *piStack_28 = 1;
    *(undefined1 (*) [16])(piStack_28 + 0x10) = auStack_70;
    thunk_FUN_021f190c(piStack_28 + 0x10,0);
    FUN_0235c25c(piStack_28 + 2,auStack_70,piStack_28,*(undefined8 *)PTR_DAT_049ca3a0);
    iVar2 = 6;
  }
  if (iStack_54 < 0) {
    if (*plStack_c0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar4 = (long *)(*plStack_c0 + 0x10);
    if (*plVar4 == *(long *)(*ppiStack_b8 + 0xe)) {
      *plVar4 = 0;
      thunk_FUN_021f190c(plVar4,0);
    }
  }
  if ((iVar2 == 0xd) || (iVar2 == 0)) {
    iVar2 = 8;
  }
  if ((*piStack_a0 < 0) && (plVar4 = *(long **)(*ppiStack_98 + 0xe), plVar4 != (long *)0x0)) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0263acf0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar4,*(long *)PTR_DAT_049b3cc8,0);
LAB_0263acf0:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  if (lStack_a8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if (iVar2 != 8) {
    if (iVar2 != 0) {
      return;
    }
    uVar8 = (&uStack_90)[iStack_88 + -1];
    *piStack_28 = -2;
    piVar7 = piStack_28 + 0xe;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_021f190c(piVar7,0);
    piVar7 = piStack_28;
    if (cRam0000000004f49bf9 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bf9 = '\x01';
    }
    plVar4 = *(long **)(piVar7 + 2);
    if (plVar4 == (long *)0x0) {
      piVar7 = piVar7 + 4;
      *(undefined8 *)piVar7 = uVar8;
      thunk_FUN_021f190c(piVar7,uVar8);
      return;
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
          goto LAB_0263aedc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar4,*(long *)PTR_DAT_049b56d0,3);
LAB_0263aedc:
    (*(code *)*puVar3)(plVar4,uVar8,puVar3[1]);
    return;
  }
LAB_0263adac:
  *piStack_28 = -2;
  piVar7 = piStack_28 + 0xe;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_021f190c(piVar7,0);
  piVar7 = piStack_28;
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar4 = *(long **)(piVar7 + 2);
  if (plVar4 != (long *)0x0) {
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0263ae48;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar4,*(long *)PTR_DAT_049b56d0,2);
LAB_0263ae48:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  return;
}

