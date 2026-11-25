/* IL2CPP: GameMainMenuState.<HandleAreaProgress>d__14$$MoveNext
void GameMainMenuState__HandleAreaProgress_d__14__MoveNext (GameMainMenuState__HandleAreaProgress_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025ff950) */
/* WARNING: Removing unreachable block (ram,0x025ff954) */
/* WARNING: Removing unreachable block (ram,0x025ffe4c) */
/* WARNING: Removing unreachable block (ram,0x025ffa3c) */
/* IL2CPP: GameMainMenuState.<HandleAreaProgress>d__14$$MoveNext
   void GameMainMenuState__HandleAreaProgress_d__14__MoveNext
   (GameMainMenuState__HandleAreaProgress_d__14_o __this, const MethodInfo* method); */

void GameMainMenuState__HandleAreaProgress_d__14__MoveNext_24ff0f8(int *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  int iVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_134 [4];
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  undefined4 uStack_124;
  ulong auStack_120 [2];
  undefined4 uStack_110;
  long lStack_108;
  int *piStack_100;
  long *plStack_f8;
  undefined1 auStack_f0 [16];
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  undefined4 uStack_c8;
  long lStack_c0;
  int *piStack_b8;
  long *plStack_b0;
  undefined1 auStack_a0 [16];
  undefined1 *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  int iStack_64;
  
  if ((bRam0000000004f4bd66 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c39c0);
    FUN_021f03f8(PTR_DAT_049c8bb0);
    FUN_021f03f8(PTR_DAT_049b4358);
    FUN_021f03f8(PTR_DAT_049b4338);
    FUN_021f03f8(PTR_DAT_049b4340);
    FUN_021f03f8(PTR_DAT_049c8bb8);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049c8bc0);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049c8bc8);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c8bd0);
    FUN_021f03f8(PTR_DAT_049c8bd8);
    FUN_021f03f8(PTR_DAT_049c5e10);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c39c8);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c8be0);
    FUN_021f03f8(PTR_DAT_049c8be8);
    FUN_021f03f8(PTR_DAT_049c8bf0);
    FUN_021f03f8(PTR_DAT_049c8bf8);
    FUN_021f03f8(PTR_DAT_049c39d0);
    FUN_021f03f8(PTR_DAT_049c39d8);
    FUN_021f03f8(PTR_DAT_049bf580);
    FUN_021f03f8(PTR_DAT_049c8c00);
    FUN_021f03f8(PTR_DAT_049bf698);
    bRam0000000004f4bd66 = 1;
  }
  puVar3 = PTR_DAT_049b5310;
  lVar17 = *(long *)(param_1 + 6);
  auStack_80._8_8_ = 0;
  uStack_70 = 0;
  auStack_80._0_8_ = 0;
  plStack_b0 = (long *)0x0;
  auStack_a0._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  uStack_88 = 0;
  puStack_90 = (undefined1 *)0x0;
  iStack_64 = *param_1;
  lStack_c0 = 0;
  piStack_b8 = (int *)0x0;
  uStack_c8 = 0;
  if (iStack_64 == 0) {
    auStack_80 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    iStack_64 = -1;
    *param_1 = -1;
LAB_025ff368:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar8 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar19 = *(long *)auStack_80._0_8_;
      uVar18 = auStack_80._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar19 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_025ff4f8;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025ff4f8:
      (*(code *)*puVar6)(uVar8,uVar18,puVar6[1]);
    }
LAB_025ff508:
    puVar3 = PTR_DAT_049b5310;
    lVar19 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      FUN_021f0574();
      lVar19 = *(long *)puVar3;
    }
    CloudPrefsInt__Set_24e9aa8(*(long *)(lVar19 + 0xb8) + 0x80,param_1[0xc]);
    iVar5 = param_1[0xc];
    iVar10 = param_1[0xd];
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0xe),auStack_f0,*(undefined8 *)PTR_DAT_049c8bd0);
    auStack_a0 = auStack_f0;
    puVar4 = PTR_DAT_049b4358;
    puVar3 = PTR_DAT_049b3bd0;
                    /* try { // try from 025ff578 to 026ff57f has its CatchHandler @ 025ff67c */
    uStack_88 = uStack_d8;
    puStack_90 = puStack_e0;
    auStack_f0._8_8_ = &iStack_64;
    auStack_f0._0_8_ = 0;
    puStack_e0 = auStack_a0;
    while( true ) {
                    /* try { // try from 025ff598 to 026ff5e3 has its CatchHandler @ 025ff680 */
      uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (auStack_a0,*(undefined8 *)PTR_DAT_049c8bc0);
      if ((uVar11 & 1) == 0) break;
      lVar14 = *(long *)PTR_DAT_049c8bc8;
      lVar7 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar7 + 0x135);
      lVar19 = lVar7;
      if ((uVar2 & 1) == 0) {
        lVar19 = FUN_02229718();
        lVar7 = *(long *)(lVar14 + 0x20);
        uVar2 = *(ushort *)(lVar7 + 0x135);
      }
                    /* try { // try from 025ff5e4 to 026ff607 has its CatchHandler @ 025ff4ac */
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar19 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar7 = FUN_02229718();
      }
                    /* try { // try from 025ff608 to 026ff60b has its CatchHandler @ 025ff668 */
      uVar8 = thunk_FUN_0224e54c(auStack_a0,
                                 *(long *)(*(long *)(*(long *)(lVar7 + 0xc0) + 8) + 0x80) + 0x60);
                    /* try { // try from 025ff60c to 026ff61b has its CatchHandler @ 025ff678 */
      func_0x04608620(&lStack_108,uVar8,uVar1);
      piVar12 = piStack_100;
      lVar19 = lStack_108;
      if (piStack_100 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 025ff628 to 026ff633 has its CatchHandler @ 025ff670 */
      if (*(long *)(piStack_100 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* try { // try from 025ff634 to 026ff65b has its CatchHandler @ 025ff4ac */
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(piStack_100 + 8),&lStack_108,*(undefined8 *)PTR_DAT_049b6370);
      lStack_c0 = lStack_108;
      plStack_b0 = plStack_f8;
      lStack_108 = 0;
                    /* try { // try from 025ff65c to 026ff65f has its CatchHandler @ 025ff674 */
      plStack_f8 = &lStack_c0;
                    /* try { // try from 025ff660 to 026ff663 has its CatchHandler @ 025ff66c */
      piStack_b8 = piStack_100;
                    /* try { // try from 025ff664 to 026ff693 has its CatchHandler @ 025ff4ac */
      piStack_100 = &iStack_64;
      while( true ) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ff608 with catch @ 025ff668
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ff660 with catch @ 025ff66c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ff628 with catch @ 025ff670
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ff65c with catch @ 025ff674
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ff60c with catch @ 025ff678
                        */
        uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&lStack_c0,*(undefined8 *)PTR_DAT_049b6348);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ff578 with catch @ 025ff67c
                        */
        if ((uVar11 & 1) == 0) break;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025ff598 with catch @ 025ff680
                        */
        lVar15 = *(long *)PTR_DAT_049b6350;
        lVar14 = *(long *)(lVar15 + 0x20);
                    /* try { // try from 025ff694 to 026ff697 has its CatchHandler @ 025ff6b0 */
        uVar2 = *(ushort *)(lVar14 + 0x135);
                    /* try { // try from 025ff698 to 026ff6b3 has its CatchHandler @ 025ff4ac */
        lVar7 = lVar14;
        if ((uVar2 & 1) == 0) {
          lVar7 = FUN_02229718();
          lVar14 = *(long *)(lVar15 + 0x20);
          uVar2 = *(ushort *)(lVar14 + 0x135);
                    /* catch() { ... } // from try @ 025ff694 with catch @ 025ff6b0 */
        }
                    /* try { // try from 025ff6bc to 026ff6c7 has its CatchHandler @ 025ff4ac */
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0xfc);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025ff6b4 with catch @ 025ff6c4
                        */
        if ((uVar2 & 1) == 0) {
          lVar14 = FUN_02229718();
        }
        uVar8 = thunk_FUN_0224e54c(&lStack_c0,
                                   *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(auStack_120,uVar8,uVar1);
        uVar11 = auStack_120[0];
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lVar17 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        iVar13 = (int)(auStack_120[0] >> 0x20);
        FulfillModule__FulfillFreePayout_254358c
                  (*(long *)(lVar17 + 0xb0),auStack_120[0] & 0xffffffff,(double)iVar13,
                   *(undefined8 *)PTR_DAT_049c8be8,0);
        lVar14 = *(long *)(lVar17 + 0xb8);
        lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b4340);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_282a0e4
                  (lVar7,*(undefined8 *)PTR_DAT_049b4338);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_110 = *(undefined4 *)(lVar19 + 0x20);
        auStack_120[0] = *(ulong *)PTR_DAT_049c39c0;
        auStack_120[1] = 0xffffffffffffffff;
        lVar15 = System_Enum__ToString_3135e00(auStack_120,0);
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar8 = System_String__ToLowerInvariant_2f81e54(lVar15,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar7,*(undefined8 *)PTR_DAT_049c39d8,uVar8,*(undefined8 *)puVar4);
        puVar9 = (undefined4 *)
                 thunk_FUN_0224e54c(lVar19,*(long *)(**(long **)(*(long *)(*(long *)PTR_DAT_049c39c8
                                                                          + 0x20) + 0xc0) + 0x80) +
                                           0x20);
        uStack_124 = *puVar9;
        uVar8 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&uStack_124);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar7,*(undefined8 *)PTR_DAT_049c39d0,uVar8,*(undefined8 *)puVar4);
        iStack_128 = piVar12[5];
        uVar8 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&iStack_128);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar7,*(undefined8 *)PTR_DAT_049c8bf8,uVar8,*(undefined8 *)puVar4);
        iStack_12c = param_1[0xc];
        uVar8 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&iStack_12c);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar7,*(undefined8 *)PTR_DAT_049bf580,uVar8,*(undefined8 *)puVar4);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar8 = Extensions__ToAnalyticsName_24e74e4(uVar11 & 0xffffffff,0);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar7,*(undefined8 *)PTR_DAT_049c8be0,uVar8,*(undefined8 *)puVar4);
        iStack_130 = iVar13;
        uVar8 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x48),&iStack_130);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar7,*(undefined8 *)PTR_DAT_049bf698,uVar8,*(undefined8 *)puVar4);
        auStack_134[0] = iVar10 < iVar5 + -1;
        uVar8 = thunk_FUN_0222c66c(*(undefined8 *)(puVar3 + 0x28),auStack_134);
        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Add_282b714
                  (lVar7,*(undefined8 *)PTR_DAT_049c8c00,uVar8,*(undefined8 *)puVar4);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025ff980 to 026ffae3 has its CatchHandler @ 025ff980
                       catch() { ... } // from try @ 025ff980 with catch @ 025ff980
                       catch() { ... } // from try @ 026000e8 with catch @ 025ff980
                       catch() { ... } // from try @ 02600280 with catch @ 025ff980
                       catch() { ... } // from try @ 026002e8 with catch @ 025ff980
                       catch() { ... } // from try @ 02600408 with catch @ 025ff980
                       catch() { ... } // from try @ 02600480 with catch @ 025ff980 */
          FUN_021f06a0();
        }
        AnalyticsModule__CustomEvent_253ef80(lVar14,*(undefined8 *)PTR_DAT_049c8bf0,lVar7,0);
      }
      if (iStack_64 < 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (plStack_f8,*(undefined8 *)PTR_DAT_049b6330);
      }
    }
    if (*(int *)auStack_f0._8_8_ < 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (puStack_e0,*(undefined8 *)PTR_DAT_049c8bb8);
    }
    if (auStack_f0._0_8_ != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698();
    }
    if (*(long *)(param_1 + 0xe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(*(long *)(param_1 + 0xe) + 0x18) < 1) goto LAB_025ffcbc;
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar17 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar17 = Monitors__Get_object__26889d0(*(long *)(lVar17 + 0x70),*(undefined8 *)PTR_DAT_049c5e10)
    ;
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar20 = FulfillRewardMonitor__AwaitFulfillCompletion_244036c(lVar17,0);
    puVar3 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_f0 = auVar20;
    thunk_FUN_021f190c(auStack_f0,0);
    auStack_80 = auStack_f0;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 025ffae4 to 026ffaeb has its CatchHandler @ 0260033c */
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 025ffaf8 to 026ffb13 has its CatchHandler @ 026003d4 */
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar8 = auStack_80._0_8_;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
      lVar17 = *(long *)auStack_80._0_8_;
      uVar18 = auStack_80._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar11 != 0) {
                    /* try { // try from 025ffb30 to 026ffbb7 has its CatchHandler @ 0260030c */
        piVar12 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 025ffd80 to 026ffd8b has its CatchHandler @ 02600358 */
            puVar6 = (undefined8 *)(lVar17 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_025ffd8c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025ffd8c:
      iVar5 = (*(code *)*puVar6)(uVar8,uVar18,puVar6[1]);
                    /* try { // try from 025ffd9c to 026ffd9f has its CatchHandler @ 02600354 */
      if (iVar5 == 0) {
        iStack_64 = 1;
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0x10) = auStack_80;
                    /* try { // try from 025ffdc0 to 026ffdc3 has its CatchHandler @ 026002f0 */
        thunk_FUN_021f190c(param_1 + 0x10,0);
                    /* try { // try from 025ffdc4 to 026ffdd7 has its CatchHandler @ 02600350 */
                    /* try { // try from 025ffdd8 to 026ffde3 has its CatchHandler @ 0260034c */
        FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c8bb0);
        return;
      }
    }
  }
  else {
    if (iStack_64 != 1) {
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar17 + 0x90) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar19 = *(long *)(*(long *)(lVar17 + 0x90) + 0x50);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar7 = *(long *)PTR_DAT_049b5310;
      if (*(char *)(lVar19 + 0x48) == '\0') {
        if (*(int *)(lVar7 + 0xe4) == 0) {
                    /* try { // try from 025ff4ac to 026ff577 has its CatchHandler @ 025ff4ac
                       catch() { ... } // from try @ 025ff4ac with catch @ 025ff4ac
                       catch() { ... } // from try @ 025ff5e4 with catch @ 025ff4ac
                       catch() { ... } // from try @ 025ff634 with catch @ 025ff4ac
                       catch() { ... } // from try @ 025ff664 with catch @ 025ff4ac
                       catch() { ... } // from try @ 025ff698 with catch @ 025ff4ac
                       catch() { ... } // from try @ 025ff6bc with catch @ 025ff4ac */
          FUN_021f0574();
          lVar7 = *(long *)puVar3;
        }
        CloudPrefsInt__DeleteValue_24e9b94(*(long *)(lVar7 + 0xb8) + 0x80);
        goto LAB_025ffcbc;
      }
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
        lVar7 = *(long *)puVar3;
      }
      iVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar7 + 0xb8) + 0x60);
      lVar7 = *(long *)puVar3;
      param_1[0xc] = iVar5 + 1;
      uVar11 = CloudPrefsInt__HasValue_24e9b24(*(long *)(lVar7 + 0xb8) + 0x80);
      if ((uVar11 & 1) == 0) {
        lVar7 = *(long *)puVar3;
        if (*(int *)(lVar7 + 0xe4) == 0) {
          FUN_021f0574();
          lVar7 = *(long *)puVar3;
        }
        CloudPrefsInt__Set_24e9aa8(*(long *)(lVar7 + 0xb8) + 0x80,param_1[0xc]);
      }
      lVar7 = *(long *)puVar3;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
        lVar7 = *(long *)puVar3;
      }
      iVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar7 + 0xb8) + 0x80);
      lVar7 = AreaSheet__GetArea_25579c0(lVar19,param_1[0xc] + -1,0);
      if (lVar7 == 0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *(int *)(lVar7 + 0x24);
      }
      if (iVar5 <= iVar10) {
        iVar5 = iVar10;
      }
      param_1[0xd] = iVar5;
      if (param_1[0xc] <= iVar5) goto LAB_025ffcbc;
      lVar7 = AreaSheet__GetRewards_2557b18(lVar19,iVar5,param_1[0xc],0);
      plVar16 = (long *)(param_1 + 0xe);
      *plVar16 = lVar7;
      thunk_FUN_021f190c(plVar16);
      if (*plVar16 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (0 < *(int *)(*plVar16 + 0x18)) {
LAB_025ffbc8:
        auStack_f0 = GameMainMenuState__PlayAreaProgress_24fe678
                               (lVar17,*(undefined8 *)(param_1 + 8),param_1[0xd],param_1[0xc],
                                *(undefined8 *)(param_1 + 10));
        puVar3 = PTR_DAT_049b5138;
                    /* try { // try from 025ffbe4 to 026ffbef has its CatchHandler @ 02600330 */
        if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
          FUN_021f0574();
        }
        thunk_FUN_021f190c(auStack_f0,0);
        auStack_80 = auStack_f0;
        if (cRam0000000004f49bf4 == '\0') {
          FUN_021f03f8(PTR_DAT_049b5138);
          cRam0000000004f49bf4 = '\x01';
        }
                    /* try { // try from 025ffc38 to 026ffc43 has its CatchHandler @ 0260032c */
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (cRam0000000004f49bf5 == '\0') {
          FUN_021f03f8(PTR_DAT_049b54e0);
          cRam0000000004f49bf5 = '\x01';
        }
        uVar8 = auStack_80._0_8_;
                    /* try { // try from 025ffc6c to 026ffc7b has its CatchHandler @ 02600328 */
        if ((long *)auStack_80._0_8_ != (long *)0x0) {
          lVar19 = *(long *)auStack_80._0_8_;
          uVar18 = auStack_80._8_8_ & 0xffff;
          uVar11 = (ulong)*(ushort *)(lVar19 + 0x12e);
          if (uVar11 != 0) {
                    /* try { // try from 025ffc8c to 026ffc97 has its CatchHandler @ 02600324 */
            piVar12 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 025ffdec to 026ffdf7 has its CatchHandler @ 02600348 */
                puVar6 = (undefined8 *)(lVar19 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_025ffdf0;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
                    /* try { // try from 025ffca8 to 026ffcab has its CatchHandler @ 02600320 */
            } while (uVar11 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025ffdf0:
                    /* try { // try from 025ffdfc to 026ffe07 has its CatchHandler @ 026003d8 */
          iVar5 = (*(code *)*puVar6)(uVar8,uVar18,puVar6[1]);
          if (iVar5 == 0) {
            iStack_64 = 0;
                    /* try { // try from 025ffe10 to 026ffe33 has its CatchHandler @ 02600390 */
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 0x10) = auStack_80;
            thunk_FUN_021f190c(param_1 + 0x10,0);
            FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c8bb0);
            return;
          }
        }
        goto LAB_025ff368;
      }
      uVar11 = AreaSheet__TryGetCompletedArea_2558114(lVar19,param_1[0xc],&uStack_70,0);
      if ((uVar11 & 1) != 0) goto LAB_025ffbc8;
      goto LAB_025ff508;
    }
    auStack_80 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    iStack_64 = -1;
    *param_1 = -1;
    auStack_a0 = ZEXT816(0);
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar8 = auStack_80._0_8_;
  if ((long *)auStack_80._0_8_ != (long *)0x0) {
    lVar17 = *(long *)auStack_80._0_8_;
    uVar18 = auStack_80._8_8_ & 0xffff;
    uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar6 = (undefined8 *)(lVar17 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_025ff4d4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025ff4d4:
    (*(code *)*puVar6)(uVar8,uVar18,puVar6[1]);
  }
LAB_025ffcbc:
  *param_1 = -2;
  piVar12 = param_1 + 0xe;
                    /* try { // try from 025ffccc to 026ffccf has its CatchHandler @ 026002e8 */
  piVar12[0] = 0;
  piVar12[1] = 0;
                    /* try { // try from 025ffcd0 to 026ffce3 has its CatchHandler @ 0260031c */
  thunk_FUN_021f190c(piVar12,0);
  if (cRam0000000004f49bfa == '\0') {
                    /* try { // try from 025ffce4 to 026ffcef has its CatchHandler @ 02600318 */
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar16 = *(long **)(param_1 + 2);
                    /* try { // try from 025ffcf8 to 026ffd03 has its CatchHandler @ 02600314 */
  if (plVar16 != (long *)0x0) {
    lVar17 = *plVar16;
                    /* try { // try from 025ffd08 to 026ffd13 has its CatchHandler @ 026003d8 */
    uVar11 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
                    /* try { // try from 025ffd1c to 026ffd23 has its CatchHandler @ 02600368 */
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar17 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_025ffd54;
        }
        uVar11 = uVar11 - 1;
                    /* try { // try from 025ffd2c to 026ffd3f has its CatchHandler @ 02600360 */
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar16,*(long *)PTR_DAT_049b56d0,2);
LAB_025ffd54:
                    /* try { // try from 025ffd54 to 026ffd6f has its CatchHandler @ 0260035c */
    (*(code *)*puVar6)(plVar16,puVar6[1]);
  }
  return;
}

