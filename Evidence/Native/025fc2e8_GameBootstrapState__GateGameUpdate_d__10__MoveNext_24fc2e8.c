/* IL2CPP: GameBootstrapState.<GateGameUpdate>d__10$$MoveNext
void GameBootstrapState__GateGameUpdate_d__10__MoveNext (GameBootstrapState__GateGameUpdate_d__10_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025fc940) */
/* IL2CPP: GameBootstrapState.<GateGameUpdate>d__10$$MoveNext
   void GameBootstrapState__GateGameUpdate_d__10__MoveNext
   (GameBootstrapState__GateGameUpdate_d__10_o __this, const MethodInfo* method); */

void GameBootstrapState__GateGameUpdate_d__10__MoveNext_24fc2e8(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  uint uVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_d0 [16];
  int **ppiStack_c0;
  undefined4 uStack_a8;
  undefined1 auStack_a0 [16];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  int iStack_6c;
  int *piStack_68;
  undefined1 auStack_60 [16];
  int iStack_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined1 auStack_34 [4];
  
  piStack_68 = param_1;
  if ((bRam0000000004f4bd57 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8a58);
    FUN_021f03f8(PTR_DAT_049c8a60);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049c8a68);
    FUN_021f03f8(PTR_DAT_049c8a70);
    FUN_021f03f8(PTR_DAT_049b5680);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c8a78);
    FUN_021f03f8(PTR_DAT_049c8a80);
    FUN_021f03f8(PTR_DAT_049c8a88);
    FUN_021f03f8(PTR_DAT_049c8a90);
                    /* try { // try from 025fc390 to 026fc393 has its CatchHandler @ 025fc9f0 */
    FUN_021f03f8(PTR_DAT_049c8a98);
                    /* try { // try from 025fc3a0 to 026fc3a7 has its CatchHandler @ 025fca14 */
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bd57 = 1;
  }
                    /* try { // try from 025fc3b0 to 026fc3bb has its CatchHandler @ 025fca10 */
  iStack_6c = *param_1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  auStack_a0._0_8_ = 0;
  auStack_a0._8_8_ = 0;
  uStack_a8 = 0;
  if (iStack_6c == 1) {
LAB_025fc6c0:
    auStack_a0 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    iStack_6c = -1;
    *param_1 = -1;
LAB_025fc6d8:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
                    /* try { // try from 025fc6f8 to 026fc6ff has its CatchHandler @ 025fca18 */
    uVar3 = auStack_a0._0_8_;
    if ((long *)auStack_a0._0_8_ != (long *)0x0) {
                    /* try { // try from 025fc700 to 026fc733 has its CatchHandler @ 025fc248 */
      lVar11 = *(long *)auStack_a0._0_8_;
      uVar9 = auStack_a0._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar11 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_025fc7b4;
          }
          uVar6 = uVar6 - 1;
                    /* try { // try from 025fc734 to 026fc73b has its CatchHandler @ 025fcaac */
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025fc7b4:
      (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
    }
  }
  else {
    lVar11 = *(long *)(param_1 + 8);
    if (iStack_6c == 0) {
LAB_025fc4a4:
      ppiStack_c0 = &piStack_68;
      auStack_d0._8_8_ = &iStack_6c;
      auStack_d0._0_8_ = 0;
      iStack_6c = -1;
      uStack_78 = *(undefined8 *)(piStack_68 + 0xe);
      uStack_80 = *(undefined8 *)(piStack_68 + 0xc);
      piStack_68[0xc] = 0;
      piStack_68[0xd] = 0;
      piStack_68[0xe] = 0;
      piStack_68[0xf] = 0;
                    /* try { // try from 025fc4b8 to 026fc4bf has its CatchHandler @ 025fca3c */
      *piStack_68 = -1;
LAB_025fc5a0:
                    /* try { // try from 025fc5a4 to 026fc5a7 has its CatchHandler @ 025fc9ec */
                    /* try { // try from 025fc5a8 to 026fc5c3 has its CatchHandler @ 025fc9f8 */
      FUN_0235b3fc(&uStack_80,&iStack_50,*(undefined8 *)PTR_DAT_049c8a68);
      uVar12 = 8;
      iVar2 = iStack_50;
    }
    else {
      uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5680);
      System_Threading_CancellationTokenSource___ctor_3165850(uVar3,5000,0);
      *(undefined8 *)(piStack_68 + 10) = uVar3;
      thunk_FUN_021f190c(piStack_68 + 10,uVar3);
      auStack_d0._8_8_ = &iStack_6c;
      auStack_d0._0_8_ = 0;
      ppiStack_c0 = &piStack_68;
                    /* try { // try from 025fc430 to 026fc437 has its CatchHandler @ 025fca60 */
      if (iStack_6c == 0) goto LAB_025fc4a4;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(piStack_68 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar10 = *(long **)(lVar11 + 0x90);
                    /* try { // try from 025fc450 to 026fc49b has its CatchHandler @ 025fca64 */
      uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(piStack_68 + 10),0);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar5 = *plVar10;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049c8a78) {
                    /* try { // try from 025fc4cc to 026fc4db has its CatchHandler @ 025fca54 */
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025fc4d0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
                    /* try { // try from 025fc49c to 026fc4b7 has its CatchHandler @ 025fc248 */
      puVar4 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049c8a78,0);
LAB_025fc4d0:
      auVar13 = (*(code *)*puVar4)(plVar10,uVar3,puVar4[1]);
                    /* try { // try from 025fc4e0 to 026fc50f has its CatchHandler @ 025fca40 */
      if (*(long *)(piStack_68 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4
                        (*(long *)(piStack_68 + 10),0);
                    /* try { // try from 025fc510 to 026fc53f has its CatchHandler @ 025fc248 */
      auStack_60 = auVar13;
      Cysharp_Threading_Tasks_UniTaskExtensions__AttachExternalCancellation___Il2CppFullySharedGenericType__2718d90
                (auStack_60,uVar3,&iStack_50,*(undefined8 *)PTR_DAT_049c8a90);
      uStack_90 = CONCAT44(uStack_4c,iStack_50);
      uStack_88 = uStack_48;
      FUN_0235b0c0(&uStack_90,&iStack_50,*(undefined8 *)PTR_DAT_049c8a98);
                    /* try { // try from 025fc540 to 026fc54b has its CatchHandler @ 025fca44 */
      uStack_80 = CONCAT44(uStack_4c,iStack_50);
      lVar8 = *(long *)PTR_DAT_049c8a70;
      uStack_78 = uStack_48;
      lVar5 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      uVar3 = thunk_FUN_0224e54c(&uStack_80,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
                    /* try { // try from 025fc574 to 026fc577 has its CatchHandler @ 025fca08 */
      lVar5 = *(long *)(lVar8 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      iVar2 = FUN_0235b2a0(uVar3,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
      if (iVar2 != 0) goto LAB_025fc5a0;
      iStack_6c = 0;
      *piStack_68 = 0;
      *(undefined8 *)(piStack_68 + 0xe) = uStack_78;
      *(undefined8 *)(piStack_68 + 0xc) = uStack_80;
      thunk_FUN_021f190c(piStack_68 + 0xc,0);
                    /* try { // try from 025fc658 to 026fc6df has its CatchHandler @ 025fca24 */
      FUN_0235bb44(piStack_68 + 2,&uStack_80,piStack_68,*(undefined8 *)PTR_DAT_049c8a58);
      iVar2 = 0;
      uVar12 = 7;
    }
                    /* try { // try from 025fc5c8 to 026fc5d3 has its CatchHandler @ 025fc9f4 */
    if ((iStack_6c < 0) && (plVar10 = *(long **)(*ppiStack_c0 + 10), plVar10 != (long *)0x0)) {
      lVar5 = *plVar10;
                    /* try { // try from 025fc5e8 to 026fc60b has its CatchHandler @ 025fca0c */
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b3cc8) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025fc680;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b3cc8,0);
LAB_025fc680:
      (*(code *)*puVar4)(plVar10,puVar4[1]);
    }
    if ((uVar12 | 8) != 8) {
      return;
    }
    piVar7 = piStack_68 + 10;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_021f190c(piVar7,0);
    if (iVar2 != 0) {
      param_1 = piStack_68;
      if (iStack_6c == 1) goto LAB_025fc6c0;
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 025fc754 to 026fc79f has its CatchHandler @ 025fcab0 */
      if (*(long *)(lVar11 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Monitors__Activate_object__268887c(*(long *)(lVar11 + 0xa0),0,*(undefined8 *)PTR_DAT_049c8a80)
      ;
      if (*(long *)(lVar11 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar11 = Monitors__Get_object__26889d0
                         (*(long *)(lVar11 + 0xa0),*(undefined8 *)PTR_DAT_049c8a88);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar13 = GameUpdateMonitor__Show_244375c(lVar11,iVar2,0);
      puVar1 = PTR_DAT_049b5138;
      if (iVar2 == 2) {
        auStack_34[0] = 1;
                    /* try { // try from 025fc7a0 to 026fc7c7 has its CatchHandler @ 025fc248 */
        goto LAB_025fc7c8;
      }
                    /* try { // try from 025fc800 to 026fc803 has its CatchHandler @ 025fca20 */
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_d0 = auVar13;
      thunk_FUN_021f190c(auStack_d0,0);
                    /* try { // try from 025fc838 to 026fc83f has its CatchHandler @ 025fca30 */
                    /* try { // try from 025fc840 to 026fc8e3 has its CatchHandler @ 025fc248 */
      auStack_a0 = auStack_d0;
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
      uVar3 = auStack_a0._0_8_;
      if ((long *)auStack_a0._0_8_ != (long *)0x0) {
        lVar11 = *(long *)auStack_a0._0_8_;
        uVar9 = auStack_a0._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar11 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 025fc8e4 to 026fc95f has its CatchHandler @ 025fca0c */
              puVar4 = (undefined8 *)(lVar11 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_025fc8e8;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025fc8e8:
        iVar2 = (*(code *)*puVar4)(uVar3,uVar9,puVar4[1]);
        if (iVar2 == 0) {
          iStack_6c = 1;
          *piStack_68 = 1;
          *(undefined1 (*) [16])(piStack_68 + 0x10) = auStack_a0;
          thunk_FUN_021f190c(piStack_68 + 0x10,0);
          FUN_0235bb44(piStack_68 + 2,auStack_a0,piStack_68,*(undefined8 *)PTR_DAT_049c8a60);
          return;
        }
      }
      goto LAB_025fc6d8;
    }
  }
  auStack_34[0] = 0;
LAB_025fc7c8:
                    /* try { // try from 025fc7c8 to 026fc7d7 has its CatchHandler @ 025fcaa8 */
  puVar1 = PTR_DAT_049b5570;
  *piStack_68 = -2;
  FUN_0235bed4(piStack_68 + 2,auStack_34,*(undefined8 *)puVar1);
  return;
}

