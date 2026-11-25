/* IL2CPP: ElevatorHole.<Swap>d__33$$MoveNext
void ElevatorHole__Swap_d__33__MoveNext (ElevatorHole__Swap_d__33_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole.<Swap>d__33$$MoveNext
   void ElevatorHole__Swap_d__33__MoveNext (ElevatorHole__Swap_d__33_o __this, const MethodInfo*
   method); */

void ElevatorHole__Swap_d__33__MoveNext_24a1e5c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  if ((bRam0000000004f4baf1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6588);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4baf1 = 1;
  }
  puVar2 = PTR_DAT_049b54e0;
  puVar1 = PTR_DAT_049b5138;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  iVar3 = *param_1;
  lVar10 = *(long *)(param_1 + 6);
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_025a27e8;
    }
    if (iVar3 == 1) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
    }
    else {
LAB_025a1f84:
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar4 = ElevatorHole__get_Current_2410518(lVar10,0);
      piVar8 = param_1 + 8;
      *(undefined8 *)piVar8 = uVar4;
      thunk_FUN_021f190c(piVar8);
      ElevatorHole__Lock_2410b50(lVar10,*(undefined8 *)piVar8,0);
      while( true ) {
                    /* try { // try from 025a2870 to 026a2883 has its CatchHandler @ 025a2624 */
        if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025a2a40 to 026a2a43 has its CatchHandler @ 025a2ab8 */
          FUN_021f06a0();
        }
        uVar7 = Carrier__IsTransferringOrAddingBlocks_23fad2c(*(long *)(param_1 + 8),0);
        if ((uVar7 & 1) == 0) break;
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025a2a44 to 026a2a47 has its CatchHandler @ 025a2ab4 */
          FUN_021f06a0();
        }
        uVar4 = *(undefined8 *)(lVar10 + 0x98);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
                    /* try { // try from 025a270c to 026a270f has its CatchHandler @ 025a2aec */
        auVar14 = Cysharp_Threading_Tasks_UniTask__Yield_37c8000(uVar4,0,0);
                    /* try { // try from 025a271c to 026a271f has its CatchHandler @ 025a2ad0 */
        auStack_70 = auVar14;
        thunk_FUN_021f190c(auStack_70,0);
        auStack_80 = auStack_70;
        if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 025a273c to 026a2783 has its CatchHandler @ 025a2af8 */
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
        uVar4 = auStack_80._0_8_;
        if ((long *)auStack_80._0_8_ != (long *)0x0) {
                    /* try { // try from 025a2784 to 026a2797 has its CatchHandler @ 025a2624 */
          lVar6 = *(long *)auStack_80._0_8_;
          uVar11 = auStack_80._8_8_ & 0xffff;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
                    /* try { // try from 025a2798 to 026a279b has its CatchHandler @ 025a2ae4 */
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
                goto LAB_025a27d4;
              }
              uVar7 = uVar7 - 1;
              piVar8 = piVar8 + 4;
                    /* try { // try from 025a27b4 to 026a27b7 has its CatchHandler @ 025a2adc */
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar2,0);
LAB_025a27d4:
                    /* try { // try from 025a27dc to 026a27df has its CatchHandler @ 025a2ae8 */
          iVar3 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
          if (iVar3 == 0) {
                    /* try { // try from 025a2990 to 026a299b has its CatchHandler @ 025a2ac4 */
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
                    /* try { // try from 025a299c to 026a2a2b has its CatchHandler @ 025a2624 */
            thunk_FUN_021f190c(param_1 + 10,0);
            FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c6588);
            return;
          }
        }
LAB_025a27e8:
        if (cRam0000000004f49bf6 == '\0') {
          FUN_021f03f8(PTR_DAT_049b54e0);
          cRam0000000004f49bf6 = '\x01';
        }
        uVar4 = auStack_80._0_8_;
                    /* try { // try from 025a2808 to 026a2823 has its CatchHandler @ 025a2adc */
        if ((long *)auStack_80._0_8_ != (long *)0x0) {
          lVar6 = *(long *)auStack_80._0_8_;
          uVar11 = auStack_80._8_8_ & 0xffff;
          uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar7 != 0) {
                    /* try { // try from 025a2824 to 026a2837 has its CatchHandler @ 025a2624 */
            piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
                    /* try { // try from 025a2854 to 026a286f has its CatchHandler @ 025a2ae8 */
                puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
                goto LAB_025a2860;
              }
              uVar7 = uVar7 - 1;
                    /* try { // try from 025a2838 to 026a283b has its CatchHandler @ 025a2ac0 */
              piVar8 = piVar8 + 4;
            } while (uVar7 != 0);
          }
          puVar5 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar2,2);
LAB_025a2860:
          (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
        }
      }
                    /* try { // try from 025a2884 to 026a2887 has its CatchHandler @ 025a2aa0 */
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025a2a48 to 026a2a4b has its CatchHandler @ 025a2ab0 */
        FUN_021f06a0();
      }
      fVar13 = *(float *)(lVar10 + 0xc0);
      if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
                    /* try { // try from 025a28a0 to 026a28e7 has its CatchHandler @ 025a2ad4 */
        FUN_021f0574();
      }
      uVar4 = System_TimeSpan__FromSeconds_311711c((double)fVar13,0);
      uVar12 = *(undefined8 *)(lVar10 + 0x98);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar14 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar4,0,8,uVar12,0,0);
                    /* try { // try from 025a28e8 to 026a28fb has its CatchHandler @ 025a2624 */
      auStack_70 = auVar14;
      thunk_FUN_021f190c(auStack_70,0);
                    /* try { // try from 025a28fc to 026a28ff has its CatchHandler @ 025a2aa8 */
      auStack_80 = auStack_70;
      if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 025a2904 to 026a2907 has its CatchHandler @ 025a2aac */
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
                    /* try { // try from 025a2920 to 026a296b has its CatchHandler @ 025a2af4 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar4 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar6 = *(long *)auStack_80._0_8_;
        uVar11 = auStack_80._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
                    /* try { // try from 025a296c to 026a297b has its CatchHandler @ 025a2624 */
            if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
              puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_025a29d4;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
                    /* try { // try from 025a297c to 026a2983 has its CatchHandler @ 025a2acc */
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar2,0);
LAB_025a29d4:
        iVar3 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
        if (iVar3 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
          thunk_FUN_021f190c(param_1 + 10,0);
          FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c6588);
          return;
        }
      }
    }
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar4 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_80._0_8_;
      uVar11 = auStack_80._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_025a2044;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar2,2);
LAB_025a2044:
      (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar14 = ElevatorHole__Lower_2411270(lVar10,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_70 = auVar14;
    thunk_FUN_021f190c(auStack_70,0);
    auStack_80 = auStack_70;
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
    uVar4 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_80._0_8_;
      uVar11 = auStack_80._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_025a2134;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar2,0);
LAB_025a2134:
      iVar3 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c6588);
        return;
      }
    }
LAB_025a2148:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar4 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_80._0_8_;
      uVar11 = auStack_80._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_025a21c0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar2,2);
LAB_025a21c0:
      (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    ElevatorHole__Park_2410bac(lVar10,*(undefined8 *)(param_1 + 8),0);
    fVar13 = *(float *)(lVar10 + 0xd0);
    if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = System_TimeSpan__FromSeconds_311711c((double)fVar13,0);
    uVar12 = *(undefined8 *)(lVar10 + 0x98);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar14 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar4,0,8,uVar12,0,0);
    auStack_70 = auVar14;
    thunk_FUN_021f190c(auStack_70,0);
    auStack_80 = auStack_70;
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
    uVar4 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_80._0_8_;
      uVar11 = auStack_80._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_025a22f8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar2,0);
LAB_025a22f8:
      iVar3 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
      if (iVar3 == 0) {
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c6588);
        return;
      }
    }
  }
  else {
    if (iVar3 == 2) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_025a2148;
    }
    if (iVar3 != 3) {
      if (iVar3 == 4) {
        auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
        param_1[10] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        *param_1 = -1;
        goto LAB_025a24e0;
      }
      goto LAB_025a1f84;
    }
    auStack_80 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar4 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar6 = *(long *)auStack_80._0_8_;
    uVar11 = auStack_80._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_025a23c0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar2,2);
LAB_025a23c0:
    (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(int *)(lVar10 + 0xf8) = *(int *)(lVar10 + 0xf8) + 1;
  ElevatorHole__UpdateCount_2410c8c(lVar10,1,0);
  auVar14 = ElevatorHole__Rise_24111d4(lVar10,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_70 = auVar14;
  thunk_FUN_021f190c(auStack_70,0);
  auStack_80 = auStack_70;
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
  uVar4 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_80._0_8_;
    uVar11 = auStack_80._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar10 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_025a24cc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar2,0);
LAB_025a24cc:
    iVar3 = (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
    if (iVar3 == 0) {
      *param_1 = 4;
      *(undefined1 (*) [16])(param_1 + 10) = auStack_80;
      thunk_FUN_021f190c(param_1 + 10,0);
      FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c6588);
      return;
    }
  }
LAB_025a24e0:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar4 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar10 = *(long *)auStack_80._0_8_;
    uVar11 = auStack_80._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)puVar2) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_025a2594;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)puVar2,2);
LAB_025a2594:
    (*(code *)*puVar5)(uVar4,uVar11,puVar5[1]);
  }
  *param_1 = -2;
  piVar8 = param_1 + 8;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_021f190c(piVar8,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar10 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_025a263c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
                    /* try { // try from 025a2624 to 026a270b has its CatchHandler @ 025a2624
                       catch() { ... } // from try @ 025a2624 with catch @ 025a2624
                       catch() { ... } // from try @ 025a2784 with catch @ 025a2624
                       catch() { ... } // from try @ 025a2824 with catch @ 025a2624
                       catch() { ... } // from try @ 025a2870 with catch @ 025a2624
                       catch() { ... } // from try @ 025a28e8 with catch @ 025a2624
                       catch() { ... } // from try @ 025a296c with catch @ 025a2624
                       catch() { ... } // from try @ 025a299c with catch @ 025a2624
                       catch() { ... } // from try @ 025a2a94 with catch @ 025a2624
                       catch() { ... } // from try @ 025a2b2c with catch @ 025a2624 */
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b56d0,2);
LAB_025a263c:
    (*(code *)*puVar5)(plVar9,puVar5[1]);
  }
                    /* try { // try from 025a2a2c to 026a2a2f has its CatchHandler @ 025a2af0 */
                    /* try { // try from 025a2a30 to 026a2a33 has its CatchHandler @ 025a2ae0 */
                    /* try { // try from 025a2a34 to 026a2a37 has its CatchHandler @ 025a2ad8 */
                    /* try { // try from 025a2a38 to 026a2a3b has its CatchHandler @ 025a2ac8 */
                    /* try { // try from 025a2a3c to 026a2a3f has its CatchHandler @ 025a2abc */
  return;
}

