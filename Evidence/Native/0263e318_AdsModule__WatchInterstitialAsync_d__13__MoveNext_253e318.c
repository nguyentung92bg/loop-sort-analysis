/* IL2CPP: AdsModule.<WatchInterstitialAsync>d__13$$MoveNext
void AdsModule__WatchInterstitialAsync_d__13__MoveNext (AdsModule__WatchInterstitialAsync_d__13_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AdsModule.<WatchInterstitialAsync>d__13$$MoveNext
   void AdsModule__WatchInterstitialAsync_d__13__MoveNext (AdsModule__WatchInterstitialAsync_d__13_o
   __this, const MethodInfo* method); */

void AdsModule__WatchInterstitialAsync_d__13__MoveNext_253e318(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_48;
  
  if ((bRam0000000004f4bfa0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049ca468);
    FUN_021f03f8(PTR_DAT_049c8070);
    FUN_021f03f8(PTR_DAT_049ca470);
    FUN_021f03f8(PTR_DAT_049ca478);
    FUN_021f03f8(PTR_DAT_049ca480);
                    /* try { // try from 0263e390 to 0273e397 has its CatchHandler @ 0263e624 */
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bfa0 = 1;
  }
  lVar12 = *(long *)(param_1 + 4);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_48 = 0;
                    /* try { // try from 0263e3ac to 0273e3af has its CatchHandler @ 0263e5f4 */
  if (*param_1 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
                    /* try { // try from 0263e3bc to 0273e3bf has its CatchHandler @ 0263e618 */
    lVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049ca480);
                    /* try { // try from 0263e3cc to 0273e3d3 has its CatchHandler @ 0263e614 */
    System_Object___ctor_3142338(lVar3,0);
    plVar9 = (long *)(param_1 + 0xc);
    *plVar9 = lVar3;
                    /* try { // try from 0263e3dc to 0273e3e7 has its CatchHandler @ 0263e610 */
    thunk_FUN_021f190c(plVar9,lVar3);
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(*plVar9 + 0x10) = *(undefined8 *)(param_1 + 4);
    thunk_FUN_021f190c();
                    /* try { // try from 0263e3fc to 0273e423 has its CatchHandler @ 0263e62c */
    if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(*plVar9 + 0x18) = *(undefined8 *)(param_1 + 6);
    thunk_FUN_021f190c();
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_48 = *(undefined8 *)(param_1 + 8);
    plVar9 = *(long **)(lVar12 + 0x38);
    thunk_FUN_021f190c(&uStack_48);
    uVar5 = uStack_48;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar3 = *plVar9;
                    /* try { // try from 0263e438 to 0273e43f has its CatchHandler @ 0263e608 */
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049ca470) {
                    /* try { // try from 0263e494 to 0273e4d3 has its CatchHandler @ 0263e628 */
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 1) * 0x10 + 0x138);
          goto LAB_0263e49c;
        }
        uVar7 = uVar7 - 1;
                    /* try { // try from 0263e45c to 0273e467 has its CatchHandler @ 0263e604 */
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049ca470,1);
LAB_0263e49c:
    auStack_60 = (*(code *)*puVar4)(plVar9,uVar5,0,puVar4[1]);
    puVar1 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_60,0);
    uVar11 = auStack_60._8_8_;
    uVar5 = auStack_60._0_8_;
                    /* try { // try from 0263e4ec to 0273e4f7 has its CatchHandler @ 0263e5f0 */
    auStack_70 = auStack_60;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 0263e504 to 0273e513 has its CatchHandler @ 0263e5ec */
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar5 != (long *)0x0) {
                    /* try { // try from 0263e544 to 0273e54f has its CatchHandler @ 0263e620 */
      lVar3 = *(long *)uVar5;
      uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 0263e594 to 0273e5d7 has its CatchHandler @ 0263e2cc */
            puVar4 = (undefined8 *)(lVar3 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_0263e598;
          }
          uVar7 = uVar7 - 1;
                    /* try { // try from 0263e574 to 0273e57b has its CatchHandler @ 0263e600 */
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
                    /* try { // try from 0263e584 to 0273e593 has its CatchHandler @ 0263e5f8 */
      puVar4 = (undefined8 *)FUN_02229a4c(uVar5,*(long *)PTR_DAT_049b54e0,0);
LAB_0263e598:
      iVar2 = (*(code *)*puVar4)(uVar5,uVar11 & 0xffffffff,puVar4[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xe) = auStack_70;
        thunk_FUN_021f190c(param_1 + 0xe,0);
        FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049ca468);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar5 = auStack_70._0_8_;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
                    /* try { // try from 0263e5d8 to 0273e5db has its CatchHandler @ 0263e61c */
    lVar3 = *(long *)auStack_70._0_8_;
                    /* try { // try from 0263e5dc to 0273e5df has its CatchHandler @ 0263e624 */
                    /* try { // try from 0263e5e0 to 0273e5e3 has its CatchHandler @ 0263e62c */
    uVar10 = auStack_70._8_8_ & 0xffff;
                    /* try { // try from 0263e5e4 to 0273e5e7 has its CatchHandler @ 0263e60c */
    uVar7 = (ulong)*(ushort *)(lVar3 + 0x12e);
                    /* try { // try from 0263e5e8 to 0273e5eb has its CatchHandler @ 0263e5fc */
                    /* catch() { ... } // from try @ 0263e504 with catch @ 0263e5ec
                       try { // try from 0263e5ec to 0273e643 has its CatchHandler @ 0263e2cc */
    if (uVar7 != 0) {
                    /* catch() { ... } // from try @ 0263e4ec with catch @ 0263e5f0 */
                    /* catch() { ... } // from try @ 0263e3ac with catch @ 0263e5f4 */
      piVar8 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 0263e584 with catch @ 0263e5f8 */
                    /* catch() { ... } // from try @ 0263e5e8 with catch @ 0263e5fc */
                    /* catch() { ... } // from try @ 0263e574 with catch @ 0263e600 */
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* catch() { ... } // from try @ 0263e544 with catch @ 0263e620 */
                    /* catch() { ... } // from try @ 0263e390 with catch @ 0263e624
                       catch() { ... } // from try @ 0263e5dc with catch @ 0263e624 */
                    /* catch() { ... } // from try @ 0263e494 with catch @ 0263e628 */
                    /* catch() { ... } // from try @ 0263e3fc with catch @ 0263e62c
                       catch() { ... } // from try @ 0263e5e0 with catch @ 0263e62c */
          puVar4 = (undefined8 *)(lVar3 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_0263e630;
        }
                    /* catch() { ... } // from try @ 0263e45c with catch @ 0263e604 */
        uVar7 = uVar7 - 1;
                    /* catch() { ... } // from try @ 0263e438 with catch @ 0263e608 */
        piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 0263e5e4 with catch @ 0263e60c */
      } while (uVar7 != 0);
    }
                    /* catch() { ... } // from try @ 0263e3dc with catch @ 0263e610 */
                    /* catch() { ... } // from try @ 0263e3cc with catch @ 0263e614 */
                    /* catch() { ... } // from try @ 0263e3bc with catch @ 0263e618 */
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
                    /* catch() { ... } // from try @ 0263e5d8 with catch @ 0263e61c */
LAB_0263e630:
    (*(code *)*puVar4)(uVar5,uVar10,puVar4[1]);
  }
  puVar1 = PTR_DAT_049b5230;
  plVar9 = (long *)(param_1 + 10);
                    /* try { // try from 0263e644 to 0273e65b has its CatchHandler @ 0263e6d8 */
  lVar3 = *plVar9;
  uVar11 = *(undefined8 *)(param_1 + 0xc);
                    /* try { // try from 0263e65c to 0273e6c7 has its CatchHandler @ 0263e2cc */
  uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5230);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar5,uVar11,*(undefined8 *)PTR_DAT_049ca478,0);
  lVar3 = System_Delegate__Combine_3145640(lVar3,uVar5,0);
  if (lVar3 != 0) {
    uVar5 = *(undefined8 *)puVar1;
    lVar6 = thunk_FUN_0222c938(lVar3,uVar5);
    if (lVar6 != 0) {
      uVar5 = *(undefined8 *)puVar1;
      *plVar9 = lVar6;
      lVar6 = thunk_FUN_0222c938(lVar3,uVar5);
      if (lVar6 != 0) goto LAB_0263e6d8;
    }
                    /* try { // try from 0263e6c8 to 0273e6d7 has its CatchHandler @ 0263e6d8 */
                    /* WARNING: Subroutine does not return */
    FUN_021f0a20(lVar3,uVar5);
  }
  lVar6 = 0;
  *plVar9 = 0;
LAB_0263e6d8:
                    /* catch() { ... } // from try @ 0263e644 with catch @ 0263e6d8
                       catch() { ... } // from try @ 0263e6c8 with catch @ 0263e6d8 */
                    /* try { // try from 0263e6dc to 0273e6df has its CatchHandler @ 0263e6e8 */
  thunk_FUN_021f190c(plVar9,lVar6);
                    /* try { // try from 0263e6e0 to 0273e6eb has its CatchHandler @ 0263e2cc */
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar9 = *(long **)(lVar12 + 0x10);
                    /* catch() { ... } // from try @ 0263e6dc with catch @ 0263e6e8 */
  if (plVar9 != (long *)0x0) {
    lVar12 = *plVar9;
    uVar5 = *(undefined8 *)(param_1 + 8);
    uVar11 = *(undefined8 *)(param_1 + 10);
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c8070) {
          puVar4 = (undefined8 *)(lVar12 + (long)(*piVar8 + 3) * 0x10 + 0x138);
          goto LAB_0263e748;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c8070,3);
LAB_0263e748:
    (*(code *)*puVar4)(plVar9,uVar5,uVar11,puVar4[1]);
  }
  *param_1 = -2;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  thunk_FUN_021f190c(param_1 + 0xc,0);
  FUN_0235afc8(param_1 + 2,0);
  return;
}

