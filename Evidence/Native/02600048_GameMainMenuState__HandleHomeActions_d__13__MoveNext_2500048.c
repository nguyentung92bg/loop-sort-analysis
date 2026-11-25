/* IL2CPP: GameMainMenuState.<HandleHomeActions>d__13$$MoveNext
void GameMainMenuState__HandleHomeActions_d__13__MoveNext (GameMainMenuState__HandleHomeActions_d__13_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02600cbc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: GameMainMenuState.<HandleHomeActions>d__13$$MoveNext
   void GameMainMenuState__HandleHomeActions_d__13__MoveNext
   (GameMainMenuState__HandleHomeActions_d__13_o __this, const MethodInfo* method); */

void GameMainMenuState__HandleHomeActions_d__13__MoveNext_2500048(uint *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined1 auStack_60 [16];
  long lStack_50;
  uint uStack_44;
  undefined1 auStack_40 [16];
  
                    /* try { // try from 0260004c to 02700053 has its CatchHandler @ 026003cc */
                    /* try { // try from 0260005c to 0270006b has its CatchHandler @ 026003c8 */
  if ((bRam0000000004f4bd67 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8c08);
                    /* try { // try from 0260007c to 0270007f has its CatchHandler @ 026003c4 */
    FUN_021f03f8(PTR_DAT_049c5e10);
    FUN_021f03f8(PTR_DAT_049c2dd0);
    FUN_021f03f8(PTR_DAT_049c8c10);
                    /* try { // try from 026000a0 to 027000a3 has its CatchHandler @ 026002fc */
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 026000a4 to 027000b7 has its CatchHandler @ 026003c0 */
    bRam0000000004f4bd67 = 1;
  }
  uStack_44 = *param_1;
  lStack_50 = *(long *)(param_1 + 4);
                    /* try { // try from 026000b8 to 027000c3 has its CatchHandler @ 026003bc */
  auStack_60._8_8_ = 0;
  auStack_60._0_8_ = 0;
                    /* try { // try from 026000cc to 027000d7 has its CatchHandler @ 026003b8 */
  if (uStack_44 < 5) {
    lVar4 = 0;
  }
  else {
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02600cd8 to 02700cdb has its CatchHandler @ 02600d7c */
      FUN_021f06a0();
    }
                    /* try { // try from 026000dc to 027000e7 has its CatchHandler @ 026003d8 */
    if (*(long *)(lStack_50 + 0x80) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02600cdc to 02700cdf has its CatchHandler @ 02600d74 */
      FUN_021f06a0();
    }
    uVar3 = SceneModule__get_SceneLoadToken_25389e0(*(long *)(lStack_50 + 0x80),0);
                    /* try { // try from 026000e8 to 02700193 has its CatchHandler @ 025ff980 */
    *(undefined8 *)(param_1 + 6) = uVar3;
    thunk_FUN_021f190c(param_1 + 6,0);
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02600ce0 to 02700ce3 has its CatchHandler @ 02600d6c */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_50 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02600ce4 to 02700ce7 has its CatchHandler @ 02600d60 */
      FUN_021f06a0();
    }
    uVar3 = Monitors__Get_object__26889d0
                      (*(long *)(lStack_50 + 0x70),*(undefined8 *)PTR_DAT_049c8c10);
    *(undefined8 *)(param_1 + 8) = uVar3;
    thunk_FUN_021f190c();
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02600ce8 to 02700ceb has its CatchHandler @ 02600d40 */
      FUN_021f06a0();
    }
    HomeNavigationMonitor__DisableNavigation_24435b4(*(long *)(param_1 + 8),lStack_50,0);
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02600cec to 02700cef has its CatchHandler @ 02600d3c */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_50 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02600cf0 to 02700cf3 has its CatchHandler @ 02600d38 */
      FUN_021f06a0();
    }
    uVar3 = Monitors__Get_object__26889d0
                      (*(long *)(lStack_50 + 0x70),*(undefined8 *)PTR_DAT_049c2dd0);
    *(undefined8 *)(param_1 + 10) = uVar3;
    thunk_FUN_021f190c();
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 026006d0 with catch @ 02600cf4
                       try { // try from 02600cf4 to 02700dff has its CatchHandler @ 02600498 */
      FUN_021f06a0();
    }
    HomeMonitor__UpdateArea_2447670(*(long *)(param_1 + 10),0);
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02600c7c with catch @ 02600cf8 */
      FUN_021f06a0();
    }
                    /* try { // try from 02600194 to 027001a3 has its CatchHandler @ 02600310 */
    if (*(long *)(lStack_50 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0260083c with catch @ 02600cfc */
      FUN_021f06a0();
    }
    lVar4 = Monitors__Get_object__26889d0
                      (*(long *)(lStack_50 + 0x70),*(undefined8 *)PTR_DAT_049c5e10);
  }
  puVar1 = PTR_DAT_049b5138;
                    /* try { // try from 026001cc to 027001db has its CatchHandler @ 02600308 */
  if (1 < (int)uStack_44) {
    if (uStack_44 == 2) {
      uStack_44 = 0xffffffff;
      auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = 0xffffffff;
      goto LAB_026006dc;
    }
    if (uStack_44 == 3) {
      uStack_44 = 0xffffffff;
      auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
                    /* try { // try from 02600270 to 0270027f has its CatchHandler @ 026002ec */
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = 0xffffffff;
      goto LAB_0260086c;
    }
    if (uStack_44 != 4) goto LAB_026002a0;
    uStack_44 = 0xffffffff;
    auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
                    /* try { // try from 02600204 to 02700213 has its CatchHandler @ 02600304 */
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0xffffffff;
    goto LAB_02600a88;
  }
  if (uStack_44 == 0) {
                    /* try { // try from 02600280 to 027002c3 has its CatchHandler @ 025ff980 */
    uStack_44 = 0xffffffff;
    auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0xffffffff;
    goto LAB_026003a0;
  }
  if (uStack_44 == 1) {
    uStack_44 = 0xffffffff;
    auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = 0xffffffff;
                    /* try { // try from 0260023c to 0270024b has its CatchHandler @ 02600300 */
LAB_02600544:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar3 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_026005c4;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_026005c4:
      (*(code *)*puVar5)(uVar3,uVar9,puVar5[1]);
    }
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 026009f8 with catch @ 02600d04 */
      FUN_021f06a0();
    }
    auVar10 = GameMainMenuState__HandleAreaProgress_24fe5ac
                        (lStack_50,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 6));
                    /* try { // try from 026005f8 to 02700613 has its CatchHandler @ 02600de4 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_40 = auVar10;
    thunk_FUN_021f190c(auStack_40,0);
                    /* try { // try from 0260061c to 02700637 has its CatchHandler @ 02600de0 */
    auStack_60 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
                    /* try { // try from 02600640 to 02700647 has its CatchHandler @ 02600d34 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar3 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
                    /* try { // try from 02600670 to 0270067f has its CatchHandler @ 02600d30 */
      lVar4 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
                    /* try { // try from 02600690 to 0270069b has its CatchHandler @ 02600d2c */
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_026006c8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
                    /* try { // try from 026006ac to 027006af has its CatchHandler @ 02600d28 */
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_026006c8:
                    /* try { // try from 026006d0 to 027006d3 has its CatchHandler @ 02600cf4 */
                    /* try { // try from 026006d4 to 027006e7 has its CatchHandler @ 02600d24 */
      iVar2 = (*(code *)*puVar5)(uVar3,uVar9,puVar5[1]);
      if (iVar2 == 0) {
        uStack_44 = 2;
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
        thunk_FUN_021f190c(param_1 + 0xc,0);
                    /* try { // try from 02600ba0 to 02700baf has its CatchHandler @ 02600d18 */
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c8c08);
        goto LAB_02600c28;
      }
    }
LAB_026006dc:
    if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 026006e8 to 027006f3 has its CatchHandler @ 02600d20 */
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar3 = auStack_60._0_8_;
                    /* try { // try from 026006fc to 02700707 has its CatchHandler @ 02600d1c */
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_60._0_8_;
                    /* try { // try from 0260070c to 02700717 has its CatchHandler @ 02600de8 */
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
                    /* try { // try from 02600720 to 02700727 has its CatchHandler @ 02600d78 */
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 0260074c to 0270075f has its CatchHandler @ 02600d68 */
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_0260075c;
          }
                    /* try { // try from 02600730 to 02700743 has its CatchHandler @ 02600d70 */
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0260075c:
      (*(code *)*puVar5)(uVar3,uVar9,puVar5[1]);
    }
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02600924 with catch @ 02600d00 */
      FUN_021f06a0();
    }
    auVar10 = GameMainMenuState__HandleAreaComplete_24fe758();
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_40 = auVar10;
    thunk_FUN_021f190c(auStack_40,0);
                    /* try { // try from 026007a4 to 027007ab has its CatchHandler @ 02600d64 */
    auStack_60 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 026007b4 to 027007c7 has its CatchHandler @ 02600d5c */
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 026007e0 to 027007eb has its CatchHandler @ 02600d58 */
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar3 = auStack_60._0_8_;
                    /* try { // try from 026007fc to 02700807 has its CatchHandler @ 02600d54 */
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_60._0_8_;
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 02600818 to 0270081b has its CatchHandler @ 02600d50 */
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 02600854 to 0270085f has its CatchHandler @ 02600d48 */
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02600858;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
                    /* try { // try from 0260083c to 0270083f has its CatchHandler @ 02600cfc */
                    /* try { // try from 02600840 to 02700853 has its CatchHandler @ 02600d4c */
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02600858:
      iVar2 = (*(code *)*puVar5)(uVar3,uVar9,puVar5[1]);
                    /* try { // try from 02600868 to 02700873 has its CatchHandler @ 02600d44 */
      if (iVar2 == 0) {
                    /* try { // try from 026008e4 to 027008ef has its CatchHandler @ 02600d90 */
        uStack_44 = 3;
        *param_1 = 3;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
        thunk_FUN_021f190c(param_1 + 0xc,0);
                    /* try { // try from 02600900 to 02700903 has its CatchHandler @ 02600d8c */
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c8c08);
        goto LAB_02600c28;
      }
    }
LAB_0260086c:
    if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 02600878 to 02700883 has its CatchHandler @ 02600de8 */
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar3 = auStack_60._0_8_;
                    /* try { // try from 0260088c to 02700893 has its CatchHandler @ 02600da0 */
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_60._0_8_;
                    /* try { // try from 0260089c to 027008af has its CatchHandler @ 02600d98 */
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 02600924 to 02700927 has its CatchHandler @ 02600d00 */
                    /* try { // try from 02600928 to 0270093b has its CatchHandler @ 02600d88 */
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_02600930;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
                    /* try { // try from 026008c8 to 027008d3 has its CatchHandler @ 02600d94 */
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02600930:
                    /* try { // try from 0260093c to 02700947 has its CatchHandler @ 02600d84 */
      (*(code *)*puVar5)(uVar3,uVar9,puVar5[1]);
    }
    if (*(long *)(param_1 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 02600950 to 0270095b has its CatchHandler @ 02600d80 */
    HomeMonitor__PlayAreaAnimation_2447fe0(*(long *)(param_1 + 10),0);
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    GameMainMenuState__ScheduleRefreshEventsNotification_24fe7f0();
                    /* try { // try from 02600960 to 0270096b has its CatchHandler @ 02600de8 */
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_50 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02600ccc to 02700ccf has its CatchHandler @ 02600ddc */
      FUN_021f06a0();
    }
    CloudSaveModule__FlushDirty_24ee1e8();
                    /* try { // try from 02600974 to 0270097b has its CatchHandler @ 02600dbc */
    if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02600cd0 to 02700cd3 has its CatchHandler @ 02600dc0 */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_50 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02600cd4 to 02700cd7 has its CatchHandler @ 02600d9c */
      FUN_021f06a0();
    }
    auVar10 = LiveOpsModule__ApplySkippableHomeActions_2547a9c
                        (*(long *)(lStack_50 + 0x98),*(undefined8 *)(param_1 + 6),0);
                    /* try { // try from 02600998 to 027009a7 has its CatchHandler @ 02600db8 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_40 = auVar10;
                    /* try { // try from 026009b8 to 027009c3 has its CatchHandler @ 02600db4 */
    thunk_FUN_021f190c(auStack_40,0);
    auStack_60 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 026009d4 to 027009d7 has its CatchHandler @ 02600db0 */
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 026009f8 to 027009fb has its CatchHandler @ 02600d04 */
                    /* try { // try from 026009fc to 02700a0f has its CatchHandler @ 02600dac */
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 02600a10 to 02700a1b has its CatchHandler @ 02600da8 */
      cRam0000000004f49bf5 = '\x01';
    }
    uVar3 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_60._0_8_;
                    /* try { // try from 02600a24 to 02700a2f has its CatchHandler @ 02600da4 */
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* try { // try from 02600a34 to 02700a3f has its CatchHandler @ 02600de8 */
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* try { // try from 02600a48 to 02700a4f has its CatchHandler @ 02600dd8 */
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02600a74;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
                    /* try { // try from 02600a58 to 02700a67 has its CatchHandler @ 02600dd4 */
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02600a74:
                    /* try { // try from 02600a78 to 02700a7b has its CatchHandler @ 02600dd0 */
      iVar2 = (*(code *)*puVar5)(uVar3,uVar9,puVar5[1]);
      if (iVar2 == 0) {
        uStack_44 = 4;
        *param_1 = 4;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c8c08);
        goto LAB_02600c28;
      }
    }
LAB_02600a88:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 02600a9c to 02700a9f has its CatchHandler @ 02600d08 */
                    /* try { // try from 02600aa0 to 02700ab3 has its CatchHandler @ 02600dcc */
      cRam0000000004f49bf6 = '\x01';
    }
    uVar3 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar4 = *(long *)auStack_60._0_8_;
                    /* try { // try from 02600ab4 to 02700abf has its CatchHandler @ 02600dc8 */
      uVar9 = auStack_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar7 != 0) {
                    /* try { // try from 02600ac8 to 02700ad3 has its CatchHandler @ 02600dc4 */
        piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
                    /* try { // try from 02600ad8 to 02700ae3 has its CatchHandler @ 02600de8 */
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_02600b4c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
                    /* try { // try from 02600ae4 to 02700b9f has its CatchHandler @ 02600498 */
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02600b4c:
      (*(code *)*puVar5)(uVar3,uVar9,puVar5[1]);
    }
    iVar2 = 0xf;
  }
  else {
LAB_026002a0:
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02600bd8 with catch @ 02600d14 */
      FUN_021f06a0();
    }
    auStack_40 = FulfillRewardMonitor__AwaitFulfillCompletion_244036c(lVar4,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 026002c4 to 027002c7 has its CatchHandler @ 026003d0 */
                    /* try { // try from 026002c8 to 027002cb has its CatchHandler @ 026003b4 */
                    /* try { // try from 026002cc to 027002cf has its CatchHandler @ 02600394 */
                    /* try { // try from 026002d0 to 027002d3 has its CatchHandler @ 0260038c */
    thunk_FUN_021f190c(auStack_40,0);
                    /* try { // try from 026002d4 to 027002d7 has its CatchHandler @ 0260036c */
                    /* try { // try from 026002d8 to 027002db has its CatchHandler @ 02600364 */
                    /* try { // try from 026002dc to 027002df has its CatchHandler @ 02600340 */
                    /* try { // try from 026002e0 to 027002e3 has its CatchHandler @ 02600338 */
                    /* try { // try from 026002e4 to 027002e7 has its CatchHandler @ 02600334 */
    auStack_60 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
                    /* catch() { ... } // from try @ 025ffccc with catch @ 026002e8
                       try { // try from 026002e8 to 027003ef has its CatchHandler @ 025ff980 */
                    /* catch() { ... } // from try @ 02600270 with catch @ 026002ec */
                    /* catch() { ... } // from try @ 025ffdc0 with catch @ 026002f0 */
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* catch() { ... } // from try @ 025fff28 with catch @ 026002f4 */
                    /* catch() { ... } // from try @ 025ffffc with catch @ 026002f8 */
      cRam0000000004f49bf4 = '\x01';
    }
                    /* catch() { ... } // from try @ 026000a0 with catch @ 026002fc */
                    /* catch() { ... } // from try @ 0260023c with catch @ 02600300 */
                    /* catch() { ... } // from try @ 02600204 with catch @ 02600304 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 026001cc with catch @ 02600308 */
      FUN_021f0574();
    }
                    /* catch() { ... } // from try @ 025ffb30 with catch @ 0260030c */
                    /* catch() { ... } // from try @ 02600194 with catch @ 02600310 */
                    /* catch() { ... } // from try @ 025ffcf8 with catch @ 02600314 */
    if (cRam0000000004f49bf5 == '\0') {
                    /* catch() { ... } // from try @ 025ffce4 with catch @ 02600318 */
                    /* catch() { ... } // from try @ 025ffcd0 with catch @ 0260031c */
                    /* catch() { ... } // from try @ 025ffca8 with catch @ 02600320 */
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* catch() { ... } // from try @ 025ffc8c with catch @ 02600324 */
                    /* catch() { ... } // from try @ 025ffc6c with catch @ 02600328 */
      cRam0000000004f49bf5 = '\x01';
    }
                    /* catch() { ... } // from try @ 025ffc38 with catch @ 0260032c */
    uVar3 = auStack_60._0_8_;
                    /* catch() { ... } // from try @ 025ffbe4 with catch @ 02600330 */
    if ((long *)auStack_60._0_8_ == (long *)0x0) {
LAB_026003a0:
                    /* catch() { ... } // from try @ 02600000 with catch @ 026003a0 */
                    /* catch() { ... } // from try @ 025fffd8 with catch @ 026003a4 */
      if (cRam0000000004f49bf6 == '\0') {
                    /* catch() { ... } // from try @ 025fffbc with catch @ 026003a8 */
                    /* catch() { ... } // from try @ 025fff9c with catch @ 026003ac */
                    /* catch() { ... } // from try @ 025fff78 with catch @ 026003b0 */
        FUN_021f03f8(PTR_DAT_049b54e0);
                    /* catch() { ... } // from try @ 026002c8 with catch @ 026003b4 */
                    /* catch() { ... } // from try @ 026000cc with catch @ 026003b8 */
        cRam0000000004f49bf6 = '\x01';
      }
                    /* catch() { ... } // from try @ 026000b8 with catch @ 026003bc */
      uVar3 = auStack_60._0_8_;
                    /* catch() { ... } // from try @ 026000a4 with catch @ 026003c0 */
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
                    /* catch() { ... } // from try @ 0260007c with catch @ 026003c4 */
                    /* catch() { ... } // from try @ 0260005c with catch @ 026003c8 */
        lVar4 = *(long *)auStack_60._0_8_;
                    /* catch() { ... } // from try @ 0260004c with catch @ 026003cc */
                    /* catch() { ... } // from try @ 026002c4 with catch @ 026003d0 */
        uVar9 = auStack_60._8_8_ & 0xffff;
                    /* catch() { ... } // from try @ 025ffaf8 with catch @ 026003d4 */
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 025ffd08 with catch @ 026003d8
                       catch() { ... } // from try @ 025ffdfc with catch @ 026003d8
                       catch() { ... } // from try @ 025fff64 with catch @ 026003d8
                       catch() { ... } // from try @ 02600038 with catch @ 026003d8
                       catch() { ... } // from try @ 026000dc with catch @ 026003d8 */
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
                    /* try { // try from 026003f0 to 02700407 has its CatchHandler @ 02600478 */
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar5 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_02600420;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
                    /* try { // try from 02600408 to 02700467 has its CatchHandler @ 025ff980 */
        puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02600420:
        (*(code *)*puVar5)(uVar3,uVar9,puVar5[1]);
      }
      if (lStack_50 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02600c48 with catch @ 02600d0c */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_50 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02600c10 with catch @ 02600d10 */
        FUN_021f06a0();
      }
      auVar10 = LiveOpsModule__ApplyHomeActions_25479c8
                          (*(long *)(lStack_50 + 0x98),*(undefined8 *)(param_1 + 6),0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
                    /* try { // try from 02600468 to 02700477 has its CatchHandler @ 02600478 */
      auStack_40 = auVar10;
      thunk_FUN_021f190c(auStack_40,0);
                    /* catch() { ... } // from try @ 026003f0 with catch @ 02600478
                       catch() { ... } // from try @ 02600468 with catch @ 02600478 */
                    /* try { // try from 0260047c to 0270047f has its CatchHandler @ 02600488 */
                    /* try { // try from 02600480 to 0270048b has its CatchHandler @ 025ff980 */
                    /* catch() { ... } // from try @ 0260047c with catch @ 02600488 */
      auStack_60 = auStack_40;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 02600498 to 027005f7 has its CatchHandler @ 02600498
                       catch() { ... } // from try @ 02600498 with catch @ 02600498
                       catch() { ... } // from try @ 02600ae4 with catch @ 02600498
                       catch() { ... } // from try @ 02600c8c with catch @ 02600498
                       catch() { ... } // from try @ 02600cf4 with catch @ 02600498
                       catch() { ... } // from try @ 02600e18 with catch @ 02600498
                       catch() { ... } // from try @ 02600ea0 with catch @ 02600498 */
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar3 = auStack_60._0_8_;
      if ((long *)auStack_60._0_8_ != (long *)0x0) {
        lVar4 = *(long *)auStack_60._0_8_;
        uVar9 = auStack_60._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
              goto LAB_02600530;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02600530:
        iVar2 = (*(code *)*puVar5)(uVar3,uVar9,puVar5[1]);
        if (iVar2 == 0) {
          uStack_44 = 1;
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
          thunk_FUN_021f190c(param_1 + 0xc,0);
                    /* try { // try from 02600bd8 to 02700be7 has its CatchHandler @ 02600d14 */
          FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c8c08);
          goto LAB_02600c28;
        }
      }
      goto LAB_02600544;
    }
                    /* catch() { ... } // from try @ 026002e4 with catch @ 02600334 */
                    /* catch() { ... } // from try @ 026002e0 with catch @ 02600338 */
    lVar4 = *(long *)auStack_60._0_8_;
                    /* catch() { ... } // from try @ 025ffae4 with catch @ 0260033c */
                    /* catch() { ... } // from try @ 026002dc with catch @ 02600340 */
    uVar9 = auStack_60._8_8_ & 0xffff;
                    /* catch() { ... } // from try @ 025ffe4c with catch @ 02600344 */
    uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
                    /* catch() { ... } // from try @ 025ffdec with catch @ 02600348 */
                    /* catch() { ... } // from try @ 025ffdd8 with catch @ 0260034c */
    if (uVar7 != 0) {
                    /* catch() { ... } // from try @ 025ffdc4 with catch @ 02600350 */
                    /* catch() { ... } // from try @ 025ffd9c with catch @ 02600354 */
      piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 025ffd80 with catch @ 02600358 */
                    /* catch() { ... } // from try @ 025ffd54 with catch @ 0260035c */
                    /* catch() { ... } // from try @ 025ffd2c with catch @ 02600360 */
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* catch() { ... } // from try @ 025ffee8 with catch @ 02600380 */
                    /* catch() { ... } // from try @ 025ffed0 with catch @ 02600384 */
                    /* catch() { ... } // from try @ 025ffe80 with catch @ 02600388 */
          puVar5 = (undefined8 *)(lVar4 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0260038c;
        }
                    /* catch() { ... } // from try @ 026002d8 with catch @ 02600364 */
        uVar7 = uVar7 - 1;
                    /* catch() { ... } // from try @ 025ffd1c with catch @ 02600368 */
        piVar8 = piVar8 + 4;
                    /* catch() { ... } // from try @ 026002d4 with catch @ 0260036c */
      } while (uVar7 != 0);
    }
                    /* catch() { ... } // from try @ 025fff54 with catch @ 02600370 */
                    /* catch() { ... } // from try @ 025fff40 with catch @ 02600374 */
                    /* catch() { ... } // from try @ 025fff2c with catch @ 02600378 */
    puVar5 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
                    /* catch() { ... } // from try @ 025fff04 with catch @ 0260037c */
LAB_0260038c:
                    /* catch() { ... } // from try @ 026002d0 with catch @ 0260038c */
                    /* catch() { ... } // from try @ 025ffe10 with catch @ 02600390 */
                    /* catch() { ... } // from try @ 026002cc with catch @ 02600394 */
                    /* catch() { ... } // from try @ 02600028 with catch @ 02600398 */
    iVar2 = (*(code *)*puVar5)(uVar3,uVar9,puVar5[1]);
                    /* catch() { ... } // from try @ 02600014 with catch @ 0260039c */
    if (iVar2 != 0) goto LAB_026003a0;
    uStack_44 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
    thunk_FUN_021f190c(param_1 + 0xc,0);
                    /* try { // try from 02600c10 to 02700c1f has its CatchHandler @ 02600d10 */
    FUN_0235c420(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c8c08);
LAB_02600c28:
    iVar2 = 10;
  }
  if ((int)uStack_44 < 0) {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 02600a9c with catch @ 02600d08 */
      FUN_021f06a0();
    }
                    /* try { // try from 02600c48 to 02700c57 has its CatchHandler @ 02600d0c */
    HomeNavigationMonitor__RestoreNavigation_244b800(*(long *)(param_1 + 8),lStack_50,0);
  }
  if ((iVar2 == 0) || (iVar2 == 0xf)) {
    *param_1 = 0xfffffffe;
                    /* try { // try from 02600c7c to 02700c8b has its CatchHandler @ 02600cf8 */
    param_1[6] = 0;
    param_1[7] = 0;
    puVar6 = param_1 + 8;
    puVar6[0] = 0;
    puVar6[1] = 0;
    thunk_FUN_021f190c(puVar6,0);
    puVar6 = param_1 + 10;
                    /* try { // try from 02600c8c to 02700ccb has its CatchHandler @ 02600498 */
    puVar6[0] = 0;
    puVar6[1] = 0;
    thunk_FUN_021f190c(puVar6,0);
    FUN_0235afc8(param_1 + 2,0);
  }
  return;
}

