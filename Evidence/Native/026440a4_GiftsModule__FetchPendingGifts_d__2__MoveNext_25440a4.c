/* IL2CPP: GiftsModule.<FetchPendingGifts>d__2$$MoveNext
void GiftsModule__FetchPendingGifts_d__2__MoveNext (GiftsModule__FetchPendingGifts_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GiftsModule.<FetchPendingGifts>d__2$$MoveNext
   void GiftsModule__FetchPendingGifts_d__2__MoveNext (GiftsModule__FetchPendingGifts_d__2_o __this,
   const MethodInfo* method); */

void GiftsModule__FetchPendingGifts_d__2__MoveNext_25440a4(int *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auVar11 [16];
  ulong uStack_110;
  ulong uStack_108;
  undefined8 uStack_100;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  long lStack_b0;
  int *piStack_a8;
  int **ppiStack_a0;
  undefined8 auStack_98 [2];
  int iStack_88;
  ulong uStack_80;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  int iStack_3c;
  int *piStack_38;
  
  piStack_38 = param_1;
  if ((bRam0000000004f4bff4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca700);
    FUN_021f03f8(PTR_DAT_049b5a40);
    FUN_021f03f8(PTR_DAT_049ca708);
    FUN_021f03f8(PTR_DAT_049ca710);
    FUN_021f03f8(PTR_DAT_049b5680);
    FUN_021f03f8(PTR_DAT_049bd298);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049ca6f8);
    FUN_021f03f8(PTR_DAT_049ca718);
    FUN_021f03f8(PTR_DAT_049ca720);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bff4 = 1;
  }
  iStack_3c = *param_1;
  iStack_88 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (iStack_3c == 0) {
LAB_0264427c:
    ppiStack_a0 = &piStack_38;
    piStack_a8 = &iStack_3c;
    lStack_b0 = 0;
    iStack_3c = -1;
    uStack_58 = *(ulong *)(piStack_38 + 0x10);
    uStack_60 = *(ulong *)(piStack_38 + 0xe);
    uStack_48 = *(undefined8 *)(piStack_38 + 0x14);
    uStack_50 = *(undefined8 *)(piStack_38 + 0x12);
    piStack_38[0x10] = 0;
    piStack_38[0x11] = 0;
    piStack_38[0xe] = 0;
    piStack_38[0xf] = 0;
    piStack_38[0x14] = 0;
    piStack_38[0x15] = 0;
    piStack_38[0x12] = 0;
    piStack_38[0x13] = 0;
    *piStack_38 = -1;
  }
  else {
    lVar10 = *(long *)(param_1 + 10);
    lVar2 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049bd298,1);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar2 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(piStack_38 + 8);
    thunk_FUN_021f190c((undefined8 *)(lVar2 + 0x20),0);
    if (*(int *)(*(long *)PTR_DAT_049b5680 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar3 = System_Threading_CancellationTokenSource__CreateLinkedTokenSource_3166b40(lVar2,0);
    *(undefined8 *)(piStack_38 + 0xc) = uVar3;
    thunk_FUN_021f190c();
    piStack_a8 = &iStack_3c;
    lStack_b0 = 0;
    ppiStack_a0 = &piStack_38;
    if (iStack_3c == 0) goto LAB_0264427c;
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(piStack_38 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar8 = *(long **)(lVar10 + 0x10);
    uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4
                      (*(long *)(piStack_38 + 0xc),0);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar2 = *plVar8;
    uVar5 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049ca6f8) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_026442b4;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049ca6f8,0);
LAB_026442b4:
    (*(code *)*puVar4)(&uStack_f0,plVar8,uVar3,puVar4[1]);
    uStack_c8 = uStack_e8;
    uStack_d0 = uStack_f0;
    uStack_c0 = uStack_e0;
    if (*(long *)(piStack_38 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = System_Threading_CancellationTokenSource__get_Token_31655c4
                      (*(long *)(piStack_38 + 0xc),0);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar11 = Cysharp_Threading_Tasks_UniTask__Delay_37c913c(3000,1,8,uVar3,0,0);
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    uStack_100 = uStack_c0;
    Cysharp_Threading_Tasks_UniTask__WhenAny___Il2CppFullySharedGenericType__26f9518
              (&uStack_110,auVar11._0_8_,auVar11._8_8_,&uStack_f0,*(undefined8 *)PTR_DAT_049ca720);
    uStack_78 = uStack_e8;
    uStack_80 = uStack_f0;
    uStack_68 = uStack_d8;
    uStack_70 = uStack_e0;
    FUN_0235b0c0(&uStack_80,&uStack_f0,*(undefined8 *)PTR_DAT_049ca718);
    lVar10 = *(long *)PTR_DAT_049ca710;
    uStack_58 = uStack_e8;
    uStack_60 = uStack_f0;
    uStack_48 = uStack_d8;
    uStack_50 = uStack_e0;
    lVar2 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    uVar3 = thunk_FUN_0224e54c(&uStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0xc0) + 0x10) + 0x80));
    lVar2 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_02229718();
    }
    iVar1 = FUN_0235b2a0(uVar3,*(undefined8 *)(*(long *)(lVar2 + 0xc0) + 0x18));
    if (iVar1 == 0) {
      iStack_3c = 0;
      *piStack_38 = 0;
      *(ulong *)(piStack_38 + 0x10) = uStack_58;
      *(ulong *)(piStack_38 + 0xe) = uStack_60;
      *(undefined8 *)(piStack_38 + 0x14) = uStack_48;
      *(undefined8 *)(piStack_38 + 0x12) = uStack_50;
      thunk_FUN_021f190c(piStack_38 + 0xe,0);
      FUN_0235bb44(piStack_38 + 2,&uStack_60,piStack_38,*(undefined8 *)PTR_DAT_049ca700);
      uVar5 = 0;
      iVar1 = 5;
      goto LAB_02644420;
    }
  }
  FUN_0235b3fc(&uStack_60,&uStack_f0,*(undefined8 *)PTR_DAT_049ca708);
  if (*(long *)(piStack_38 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Threading_CancellationTokenSource__Cancel_31658dc(*(long *)(piStack_38 + 0xc),0);
  iVar1 = 8;
  uVar5 = -(uStack_f0 & 1) & uStack_e8;
LAB_02644420:
                    /* try { // try from 02644434 to 02744677 has its CatchHandler @ 02644434
                       catch() { ... } // from try @ 02644434 with catch @ 02644434
                       catch() { ... } // from try @ 026448a4 with catch @ 02644434
                       catch() { ... } // from try @ 026448ec with catch @ 02644434
                       catch() { ... } // from try @ 02644910 with catch @ 02644434
                       catch() { ... } // from try @ 026449ac with catch @ 02644434
                       catch() { ... } // from try @ 026449d8 with catch @ 02644434 */
  if ((*piStack_a8 < 0) && (plVar8 = *(long **)(*ppiStack_a0 + 0xc), plVar8 != (long *)0x0)) {
    lVar2 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar4 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_026444dc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b3cc8,0);
LAB_026444dc:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  if (lStack_b0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if (iVar1 == 8) {
    *piStack_38 = -2;
    piVar7 = piStack_38 + 0xc;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_021f190c(piVar7,0);
    FUN_0235bed4(piStack_38 + 2,uVar5,*(undefined8 *)PTR_DAT_049b5a40);
  }
  else if (iVar1 == 0) {
    uVar9 = auStack_98[iStack_88 + -1];
    *piStack_38 = -2;
    piVar7 = piStack_38 + 0xc;
    piVar7[0] = 0;
    piVar7[1] = 0;
    thunk_FUN_021f190c(piVar7,0);
    piVar7 = piStack_38;
    uVar3 = thunk_FUN_02256840(PTR_DAT_049b5ae0);
    FUN_0235bd8c(piVar7 + 2,uVar9,uVar3);
  }
  return;
}

