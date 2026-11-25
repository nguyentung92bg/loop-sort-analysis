/* IL2CPP: GameReviveState.<OnEnterAsync>d__13$$MoveNext
void GameReviveState__OnEnterAsync_d__13__MoveNext (GameReviveState__OnEnterAsync_d__13_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: GameReviveState.<OnEnterAsync>d__13$$MoveNext
   void GameReviveState__OnEnterAsync_d__13__MoveNext (GameReviveState__OnEnterAsync_d__13_o __this,
   const MethodInfo* method); */

void GameReviveState__OnEnterAsync_d__13__MoveNext_2501f70(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4bd6d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8c50);
    FUN_021f03f8(PTR_DAT_049c8c58);
    FUN_021f03f8(PTR_DAT_049c1b50);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049c4658);
    FUN_021f03f8(PTR_DAT_049c5f88);
    FUN_021f03f8(PTR_DAT_049c8c60);
    FUN_021f03f8(PTR_DAT_049c2308);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049c4778);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bd6d = 1;
  }
  iVar2 = *param_1;
                    /* try { // try from 02602030 to 02702033 has its CatchHandler @ 0260240c */
  lVar9 = *(long *)(param_1 + 4);
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_60._8_8_ = 0;
  auStack_60._0_8_ = 0;
  auVar12 = ZEXT816(0);
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_88 = 0;
  if (iVar2 == 0) {
                    /* try { // try from 0260208c to 02702093 has its CatchHandler @ 02602480 */
    auStack_40 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
LAB_02602208:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar3 = auStack_40._0_8_;
    if ((long *)auStack_40._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_40._0_8_;
      uVar10 = auStack_40._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar6 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
                    /* try { // try from 02602258 to 027022eb has its CatchHandler @ 02601564 */
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0260228c;
          }
          uVar6 = uVar6 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_40._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0260228c:
      (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar9 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    AudioModule__GetPlayer_2530858(auStack_b0,*(long *)(lVar9 + 0x88),0);
    uStack_48 = uStack_98;
    uStack_50 = uStack_a0;
    auStack_60 = auStack_b0;
    if (*(long *)(lVar9 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *(long *)(*(long *)(lVar9 + 0x88) + 0x10);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = *(undefined8 *)(lVar7 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049c1b50 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 026022ec to 027022f7 has its CatchHandler @ 02602400 */
    AudioPlayer__Play_2530c98(auStack_60,uVar3,0);
    if (*(long *)(lVar9 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HapticModule__PlayWarning_25355b0(*(long *)(lVar9 + 0x80),0);
    if (*(long *)(lVar9 + 0xc0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02602310 to 0270231b has its CatchHandler @ 026023dc */
    if (*(char *)(*(long *)(lVar9 + 0xc0) + 0x1f) == '\0') {
      if (*(long *)(lVar9 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 0260232c to 02702337 has its CatchHandler @ 026023d8 */
      auVar12 = TimeModule__AdjustTimeScale_253a454
                          (0,_UNK_013aa4b8,_UNK_013aa62c,*(long *)(lVar9 + 0x98),0,0);
      puVar1 = PTR_DAT_049b5138;
                    /* try { // try from 02602344 to 0270235b has its CatchHandler @ 02602628 */
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02602360 to 02702363 has its CatchHandler @ 02602524 */
      auStack_b0 = auVar12;
                    /* try { // try from 02602364 to 02702367 has its CatchHandler @ 02602520 */
                    /* try { // try from 02602368 to 0270236f has its CatchHandler @ 02602514 */
      thunk_FUN_021f190c(auStack_b0,0);
                    /* try { // try from 02602370 to 02702373 has its CatchHandler @ 0260250c */
                    /* try { // try from 02602374 to 02702377 has its CatchHandler @ 02602504 */
                    /* try { // try from 02602378 to 0270237b has its CatchHandler @ 0260247c */
                    /* try { // try from 0260237c to 02702383 has its CatchHandler @ 02602474 */
      auStack_40 = auStack_b0;
      if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 02602384 to 02702387 has its CatchHandler @ 02602448 */
                    /* try { // try from 02602388 to 0270238b has its CatchHandler @ 0260243c */
                    /* try { // try from 0260238c to 0270238f has its CatchHandler @ 02602430 */
        FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 02602390 to 02702393 has its CatchHandler @ 0260245c */
                    /* try { // try from 02602394 to 02702397 has its CatchHandler @ 02602454 */
        cRam0000000004f49bf4 = '\x01';
      }
                    /* try { // try from 02602398 to 0270239b has its CatchHandler @ 02602460 */
                    /* try { // try from 0260239c to 0270239f has its CatchHandler @ 02602428 */
                    /* try { // try from 026023a0 to 027023a3 has its CatchHandler @ 02602424 */
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 026023a4 to 027023a7 has its CatchHandler @ 02602438 */
        FUN_021f0574();
      }
                    /* try { // try from 026023a8 to 027023ab has its CatchHandler @ 02602408 */
                    /* try { // try from 026023ac to 027023af has its CatchHandler @ 0260240c */
                    /* try { // try from 026023b0 to 027023b3 has its CatchHandler @ 026023f0 */
      if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 026023b4 to 027023bb has its CatchHandler @ 026023f8 */
                    /* try { // try from 026023bc to 027023bf has its CatchHandler @ 026023f4 */
        FUN_021f03f8(PTR_DAT_049b54e0);
                    /* catch() { ... } // from try @ 0260192c with catch @ 026023c0
                       try { // try from 026023c0 to 027024a7 has its CatchHandler @ 02601564 */
        cRam0000000004f49bf5 = '\x01';
      }
      uVar3 = auStack_40._0_8_;
                    /* catch() { ... } // from try @ 02601ce8 with catch @ 026023cc */
      auVar12 = auStack_60;
      if ((long *)auStack_40._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_40._0_8_;
                    /* catch() { ... } // from try @ 0260232c with catch @ 026023d8 */
                    /* catch() { ... } // from try @ 02602310 with catch @ 026023dc */
        uVar10 = auStack_40._8_8_ & 0xffff;
                    /* catch() { ... } // from try @ 02602190 with catch @ 026023e0 */
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* catch() { ... } // from try @ 026021a4 with catch @ 026023e4 */
                    /* catch() { ... } // from try @ 02602194 with catch @ 026023e8 */
        if (uVar6 != 0) {
                    /* catch() { ... } // from try @ 02602054 with catch @ 026023ec */
                    /* catch() { ... } // from try @ 026023b0 with catch @ 026023f0 */
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* catch() { ... } // from try @ 02602174 with catch @ 026023f4
                       catch() { ... } // from try @ 026023bc with catch @ 026023f4 */
                    /* catch() { ... } // from try @ 02602154 with catch @ 026023f8
                       catch() { ... } // from try @ 026023b4 with catch @ 026023f8 */
                    /* catch() { ... } // from try @ 02601724 with catch @ 026023fc */
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* catch() { ... } // from try @ 02601e58 with catch @ 02602454
                       catch() { ... } // from try @ 02602394 with catch @ 02602454 */
                    /* catch() { ... } // from try @ 02601c5c with catch @ 02602458 */
                    /* catch() { ... } // from try @ 02601e20 with catch @ 0260245c
                       catch() { ... } // from try @ 02602390 with catch @ 0260245c */
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02602460;
            }
                    /* catch() { ... } // from try @ 026021c4 with catch @ 02602400
                       catch() { ... } // from try @ 026022ec with catch @ 02602400 */
            uVar6 = uVar6 - 1;
                    /* catch() { ... } // from try @ 02601a20 with catch @ 02602404 */
            piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 026023a8 with catch @ 02602408 */
          } while (uVar6 != 0);
        }
                    /* catch() { ... } // from try @ 02602030 with catch @ 0260240c
                       catch() { ... } // from try @ 026023ac with catch @ 0260240c */
                    /* catch() { ... } // from try @ 026019e8 with catch @ 02602410 */
                    /* catch() { ... } // from try @ 026019d8 with catch @ 02602414 */
        puVar4 = (undefined8 *)FUN_02229a4c(auStack_40._0_8_,*(long *)PTR_DAT_049b54e0,0);
                    /* catch() { ... } // from try @ 02601968 with catch @ 02602418 */
LAB_02602460:
                    /* catch() { ... } // from try @ 02601e68 with catch @ 02602460
                       catch() { ... } // from try @ 02602398 with catch @ 02602460 */
                    /* catch() { ... } // from try @ 026017c4 with catch @ 0260246c */
        iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
                    /* catch() { ... } // from try @ 026018d0 with catch @ 02602470 */
        auVar12 = auStack_60;
        if (iVar2 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 6) = auStack_40;
          thunk_FUN_021f190c(param_1 + 6,0);
          FUN_0235c420(param_1 + 2,auStack_40,param_1,*(undefined8 *)PTR_DAT_049c8c58);
          return;
        }
      }
LAB_02602474:
                    /* catch() { ... } // from try @ 0260237c with catch @ 02602474 */
                    /* catch() { ... } // from try @ 02601aec with catch @ 02602478 */
                    /* catch() { ... } // from try @ 02602378 with catch @ 0260247c */
      auStack_60 = auVar12;
      if (cRam0000000004f49bf6 == '\0') {
                    /* catch() { ... } // from try @ 0260208c with catch @ 02602480 */
                    /* catch() { ... } // from try @ 02601a68 with catch @ 02602484 */
                    /* catch() { ... } // from try @ 02601a88 with catch @ 02602488 */
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar3 = auStack_40._0_8_;
      if ((long *)auStack_40._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_40._0_8_;
                    /* try { // try from 026024a8 to 027024ab has its CatchHandler @ 026024b4 */
        uVar10 = auStack_40._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
                    /* catch() { ... } // from try @ 026024a8 with catch @ 026024b4 */
        if (uVar6 != 0) {
                    /* try { // try from 026024bc to 027024c3 has its CatchHandler @ 02602628 */
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* try { // try from 026024c4 to 027024db has its CatchHandler @ 02601564 */
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* catch() { ... } // from try @ 026024dc with catch @ 026024e8 */
                    /* try { // try from 026024f0 to 027024f7 has its CatchHandler @ 02602628 */
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_026024f8;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
                    /* try { // try from 026024dc to 027024df has its CatchHandler @ 026024e8 */
        puVar4 = (undefined8 *)FUN_02229a4c(auStack_40._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_026024f8:
                    /* try { // try from 026024f8 to 02702547 has its CatchHandler @ 02601564 */
                    /* catch() { ... } // from try @ 026017cc with catch @ 02602500 */
                    /* catch() { ... } // from try @ 02602374 with catch @ 02602504 */
        (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
      }
                    /* catch() { ... } // from try @ 026017e0 with catch @ 02602508 */
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
                    /* catch() { ... } // from try @ 02602370 with catch @ 0260250c */
                    /* catch() { ... } // from try @ 026017f4 with catch @ 02602510 */
    if (*(long *)(lVar9 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch() { ... } // from try @ 02602368 with catch @ 02602514 */
                    /* catch() { ... } // from try @ 026018dc with catch @ 02602518 */
                    /* catch() { ... } // from try @ 026018f0 with catch @ 0260251c */
    Monitors__RestoreRaycaster_256eafc(*(long *)(lVar9 + 0x70),lVar9,0);
                    /* catch() { ... } // from try @ 02602364 with catch @ 02602520 */
                    /* catch() { ... } // from try @ 02602360 with catch @ 02602524 */
    if (*(long *)(lVar9 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch() { ... } // from try @ 026017a8 with catch @ 02602528 */
    if (*(char *)(*(long *)(lVar9 + 0xb8) + 0x10) != '\0') {
      if (*(long *)(lVar9 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = Monitors__Get_object__26889d0(*(long *)(lVar9 + 0x70),*(undefined8 *)PTR_DAT_049c2308)
      ;
                    /* try { // try from 02602548 to 0270254b has its CatchHandler @ 02602554 */
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auStack_80 = PlayingMonitor__StartGiveUpFlow_2450b28(lVar7,0);
                    /* catch() { ... } // from try @ 02602548 with catch @ 02602554 */
                    /* try { // try from 0260255c to 02702563 has its CatchHandler @ 02602628 */
                    /* try { // try from 02602564 to 02702577 has its CatchHandler @ 02601564 */
      FUN_0235b0c0(auStack_80,auStack_b0,*(undefined8 *)PTR_DAT_049c4778);
                    /* try { // try from 02602578 to 0270258f has its CatchHandler @ 026025d4 */
      lVar11 = *(long *)PTR_DAT_049c4770;
      lVar7 = *(long *)(lVar11 + 0x20);
      auStack_70 = auStack_b0;
      if ((*(byte *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 02602590 to 027025c3 has its CatchHandler @ 02601564 */
        lVar7 = FUN_02229718();
      }
      uVar3 = thunk_FUN_0224e54c(auStack_70,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
      lVar7 = *(long *)(lVar11 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
                    /* try { // try from 026025c4 to 027025d3 has its CatchHandler @ 026025d4 */
      iVar2 = FUN_0235b2a0(uVar3,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
      if (iVar2 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_70;
                    /* try { // try from 026026fc to 02702863 has its CatchHandler @ 026026fc
                       catch() { ... } // from try @ 026026fc with catch @ 026026fc
                       catch() { ... } // from try @ 026028d0 with catch @ 026026fc
                       catch() { ... } // from try @ 02602928 with catch @ 026026fc
                       catch() { ... } // from try @ 02602940 with catch @ 026026fc
                       catch() { ... } // from try @ 02602970 with catch @ 026026fc
                       catch() { ... } // from try @ 0260298c with catch @ 026026fc */
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c8c50);
        return;
      }
      goto LAB_026025d4;
    }
  }
  else {
    if (iVar2 == 1) {
      auStack_40 = *(undefined1 (*) [16])(param_1 + 6);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = -1;
      goto LAB_02602474;
    }
                    /* try { // try from 02602054 to 0270205b has its CatchHandler @ 026023ec */
    if (iVar2 != 2) {
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 026020ac to 027020f7 has its CatchHandler @ 026025e4 */
      if (*(long *)(lVar9 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Monitors__DisableRaycaster_256ea20(*(long *)(lVar9 + 0x70),lVar9,0);
      if (*(long *)(lVar9 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      InteractionModule__EnableRestriction_2535cc8(*(long *)(lVar9 + 0x90),0,0);
      if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = System_TimeSpan__FromSeconds_311711c(0x3ff0000000000000,0);
      puVar1 = PTR_DAT_049b5138;
                    /* try { // try from 026020f8 to 0270211b has its CatchHandler @ 02601564 */
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 0260211c to 0270212b has its CatchHandler @ 026025e4 */
      auStack_b0 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar3,0,8,0,0,0);
      thunk_FUN_021f190c(auStack_b0,0);
      auStack_40 = auStack_b0;
      if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 02602154 to 02702157 has its CatchHandler @ 026023f8 */
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02602174 to 02702177 has its CatchHandler @ 026023f4 */
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 02602190 to 02702193 has its CatchHandler @ 026023e0 */
        cRam0000000004f49bf5 = '\x01';
      }
                    /* try { // try from 02602194 to 0270219f has its CatchHandler @ 026023e8 */
      uVar3 = auStack_40._0_8_;
      if ((long *)auStack_40._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_40._0_8_;
                    /* try { // try from 026021a4 to 027021af has its CatchHandler @ 026023e4 */
        uVar10 = auStack_40._8_8_ & 0xffff;
        uVar6 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar6 != 0) {
          piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
                    /* try { // try from 026021c4 to 02702257 has its CatchHandler @ 02602400 */
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_026021f4;
            }
            uVar6 = uVar6 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar6 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(auStack_40._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_026021f4:
        iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
        if (iVar2 == 0) {
                    /* catch() { ... } // from try @ 02601744 with catch @ 0260241c */
                    /* catch() { ... } // from try @ 02601734 with catch @ 02602420 */
          *param_1 = 0;
                    /* catch() { ... } // from try @ 0260198c with catch @ 02602424
                       catch() { ... } // from try @ 026023a0 with catch @ 02602424 */
          *(undefined1 (*) [16])(param_1 + 6) = auStack_40;
                    /* catch() { ... } // from try @ 0260194c with catch @ 02602428
                       catch() { ... } // from try @ 0260239c with catch @ 02602428 */
                    /* catch() { ... } // from try @ 02601dd8 with catch @ 0260242c */
                    /* catch() { ... } // from try @ 0260238c with catch @ 02602430 */
          thunk_FUN_021f190c(param_1 + 6,0);
                    /* catch() { ... } // from try @ 02601d3c with catch @ 02602434 */
                    /* catch() { ... } // from try @ 0260199c with catch @ 02602438
                       catch() { ... } // from try @ 026023a4 with catch @ 02602438 */
                    /* catch() { ... } // from try @ 02601ea4 with catch @ 0260243c
                       catch() { ... } // from try @ 02602388 with catch @ 0260243c */
                    /* catch() { ... } // from try @ 02601ed4 with catch @ 02602448
                       catch() { ... } // from try @ 02602384 with catch @ 02602448 */
          FUN_0235c420(param_1 + 2,auStack_40,param_1,*(undefined8 *)PTR_DAT_049c8c58);
          return;
        }
      }
      goto LAB_02602208;
    }
    auStack_70 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
    auStack_80 = ZEXT816(0);
    auStack_40 = ZEXT816(0);
    auStack_60 = ZEXT816(0);
LAB_026025d4:
                    /* catch() { ... } // from try @ 02602578 with catch @ 026025d4
                       catch() { ... } // from try @ 026025c4 with catch @ 026025d4 */
                    /* try { // try from 026025d8 to 027025db has its CatchHandler @ 02602628 */
                    /* try { // try from 026025dc to 02702603 has its CatchHandler @ 02601564 */
                    /* catch() { ... } // from try @ 026020ac with catch @ 026025e4
                       catch() { ... } // from try @ 0260211c with catch @ 026025e4 */
    FUN_0235b3fc(auStack_70,auStack_b0,*(undefined8 *)PTR_DAT_049c4768);
    if (auStack_b0[0] == '\0') goto LAB_026026bc;
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  if (*(long *)(lVar9 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 02602604 to 02702607 has its CatchHandler @ 02602614 */
  plVar5 = (long *)PlaySessionModule__get_Current_2536d5c(*(long *)(lVar9 + 0xb0),0);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* catch() { ... } // from try @ 02602604 with catch @ 02602614 */
  uVar6 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
  if ((uVar6 & 1) == 0) {
    if (*(long *)(lVar9 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    GameMachine__RequestStateChange_object__261a650
              (*(long *)(lVar9 + 0x58),*(undefined8 *)PTR_DAT_049c4658);
  }
  else {
                    /* try { // try from 0260261c to 02702623 has its CatchHandler @ 02602628 */
    if (*(long *)(lVar9 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* catch() { ... } // from try @ 02602344 with catch @ 02602628
                       catch() { ... } // from try @ 026024bc with catch @ 02602628
                       catch() { ... } // from try @ 026024f0 with catch @ 02602628
                       catch() { ... } // from try @ 0260255c with catch @ 02602628
                       catch() { ... } // from try @ 026025d8 with catch @ 02602628
                       catch() { ... } // from try @ 0260261c with catch @ 02602628 */
    FUN_0235c744(*(undefined8 *)(*(long *)(lVar9 + 0x78) + 0x18),auStack_b0,
                 *(undefined8 *)PTR_DAT_049c5f88);
    uVar3 = auStack_b0._0_8_;
    if (*(long *)(lVar9 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar6 = LifeModule__IsEnabled_25460d4(*(long *)(lVar9 + 0xa0),0);
    if ((uVar6 & 1) != 0) {
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar6 = ReviveSystem__CanRevive_24e0f48(uVar3,0);
      if ((uVar6 & 1) != 0) {
        if (*(long *)(lVar9 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        Monitors__Activate_object__268887c
                  (*(long *)(lVar9 + 0x70),0,*(undefined8 *)PTR_DAT_049c8c60);
        goto LAB_026026bc;
      }
    }
    if (*(long *)(lVar9 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    GameMachine__RequestStateChange_object__261a650
              (*(long *)(lVar9 + 0x58),*(undefined8 *)PTR_DAT_049c4658);
  }
LAB_026026bc:
  *param_1 = -2;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

