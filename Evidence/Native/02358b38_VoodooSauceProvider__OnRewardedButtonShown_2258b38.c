/* IL2CPP: VoodooSauceProvider$$OnRewardedButtonShown
void VoodooSauceProvider__OnRewardedButtonShown (VoodooSauceProvider_o* __this, System_String_o* placement, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$OnRewardedButtonShown
   void VoodooSauceProvider__OnRewardedButtonShown (VoodooSauceProvider_o* __this, System_String_o*
   placement, const MethodInfo* method); */

void VoodooSauceProvider__OnRewardedButtonShown_2258b38(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  char *pcVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  int *piVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  long lVar23;
  long *plVar24;
  double dVar25;
  undefined8 auStack_350 [4];
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [128];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [128];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  double dStack_78;
  
  puVar5 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bd8 & 1) == 0) {
                    /* catch() { ... } // from try @ 02358b0c with catch @ 02358b60 */
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bd8 = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_04a61e80;
                    /* try { // try from 02358b80 to 02458b83 has its CatchHandler @ 02358b8c */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 02358b80 with catch @ 02358b8c
                        */
  if ((bRam0000000004f5f4bb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80,0);
    bRam0000000004f5f4bb = 1;
  }
  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar5 = PTR_DAT_04a61e80;
  if ((bRam0000000004f60425 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80,0);
    FUN_021f03f8(PTR_DAT_049b4138);
    bRam0000000004f60425 = 1;
  }
  lVar13 = *(long *)puVar5;
  if (*(int *)(lVar13 + 0xe4) == 0) {
    FUN_021f0574();
    lVar13 = *(long *)puVar5;
  }
  lVar16 = *(long *)(lVar13 + 0xb8);
  if (*(char *)(lVar16 + 0x98) == '\0') {
    if (*(int *)(lVar13 + 0xe4) == 0) {
      FUN_021f0574();
      lVar16 = *(long *)(*(long *)puVar5 + 0xb8);
    }
    lVar13 = *(long *)(lVar16 + 0x90);
    if (lVar13 != 0) {
      lVar15 = *(long *)PTR_DAT_049b4138;
      lVar16 = tpidr_el0;
      lVar23 = *(long *)(lVar16 + 0x28);
      lVar21 = *(long *)(*(long *)(lVar15 + 0x20) + 0xc0);
      uVar19 = (ulong)*(uint *)(*(long *)(lVar21 + 0x48) + 0xfc);
      uVar17 = uVar19 + 0xf & 0x1fffffff0;
      plVar22 = (long *)(&stack0xffffffffffffff90 + -uVar17);
      lVar20 = (long)plVar22 - uVar17;
      plVar24 = *(long **)(lVar13 + 0x10);
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      if (plVar24 == (long *)0x0) {
        if (*(long *)(lVar16 + 0x28) == lVar23) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      else {
        uVar4 = *(uint *)(lVar13 + 0x18);
        if (uVar4 < *(uint *)(plVar24 + 3)) {
          *(uint *)(lVar13 + 0x18) = uVar4 + 1;
          if (-1 < *(int *)(*(long *)(lVar21 + 0x48) + 0x28)) {
            param_2 = &stack0xffffffffffffff90;
          }
          func_0x04608620(plVar22,param_2,uVar19);
          func_0x04608650((long)plVar24 +
                          (ulong)*(uint *)(*plVar24 + 0x104) * (long)(int)uVar4 + 0x20,param_2,
                          uVar19);
          lVar13 = *(long *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x48);
          if ((*(ushort *)(lVar13 + 0x135) & 1) == 0) {
            lVar13 = FUN_02229718();
          }
          if (*(uint *)(plVar24 + 3) <= uVar4) {
            if (*(long *)(lVar16 + 0x28) == lVar23) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            goto LAB_0233365c;
          }
          FUN_021f03a8(lVar13,(long)plVar24 +
                              (ulong)*(uint *)(*plVar24 + 0x104) * (long)(int)uVar4 + 0x20,plVar22);
        }
        else {
          iVar1 = *(int *)(*(long *)(lVar21 + 0x48) + 0x28);
          if (-1 < iVar1) {
            param_2 = &stack0xffffffffffffff90;
          }
          func_0x04608620(plVar22,param_2,uVar19);
          if (iVar1 < 0) {
            func_0x04608620(lVar20,param_2,uVar19);
          }
          else {
            lVar20 = *plVar22;
          }
          System_Collections_Generic_List___Il2CppFullySharedGenericType___AddWithResize_28cde3c
                    (lVar13,lVar20,*(undefined8 *)(lVar21 + 0x70));
        }
        if (*(long *)(lVar16 + 0x28) == lVar23) {
          return;
        }
      }
LAB_0233365c:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
LAB_045d70c4:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(lVar13 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar13 = Voodoo_Sauce_Internal_Ads_AdsManager__get_RewardedVideo_44d2774();
  if (lVar13 == 0) goto LAB_045d70c4;
  if ((bRam0000000004f5f88e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a64630,param_2,0);
    FUN_021f03f8(PTR_DAT_049b9558);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_049b3e60);
    FUN_021f03f8(PTR_DAT_04a64998);
    bRam0000000004f5f88e = 1;
  }
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  func_0x04608670(auStack_140,0,0xa0);
  func_0x04608670(auStack_1e0,0,0xa0);
  lVar16 = *(long *)(lVar13 + 0x88);
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_200 = 0;
  uStack_1f8 = 0;
  uStack_210 = 0;
  uStack_208 = 0;
  if (lVar16 == 0) goto LAB_044cfc5c;
  (**(code **)(lVar16 + 0x18))
            (*(undefined8 *)(lVar16 + 0x40),&uStack_2b0,*(undefined8 *)(lVar16 + 0x28));
  puVar5 = PTR_DAT_04a64630;
  plVar22 = *(long **)(lVar13 + 0x10);
  uStack_98 = uStack_290;
  uStack_a0 = uStack_298;
  uStack_88 = uStack_280;
  uStack_90 = uStack_288;
  if (plVar22 == (long *)0x0) goto LAB_044cfc5c;
  lVar16 = *plVar22;
  uVar17 = (ulong)*(ushort *)(lVar16 + 0x12e);
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == *(long *)PTR_DAT_04a64630) {
        puVar10 = (undefined8 *)(lVar16 + (long)(*piVar18 + 8) * 0x10 + 0x138);
        goto LAB_044cf7e8;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_02229a4c(plVar22,*(long *)PTR_DAT_04a64630,8);
LAB_044cf7e8:
  (*(code *)*puVar10)(&uStack_2b0,plVar22,puVar10[1]);
  func_0x04608620(auStack_140,&uStack_2b0,0xa0);
  puVar6 = PTR_DAT_049b3e60;
  plVar22 = *(long **)(lVar13 + 0x10);
  if (plVar22 == (long *)0x0) goto LAB_044cfc5c;
  lVar15 = *plVar22;
  uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
  lVar16 = *(long *)puVar5;
  if (uVar17 != 0) {
    piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
    do {
      if (*(long *)(piVar18 + -2) == lVar16) {
        puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0x14) * 0x10 + 0x138);
        goto LAB_044cf868;
      }
      uVar17 = uVar17 - 1;
      piVar18 = piVar18 + 4;
    } while (uVar17 != 0);
  }
  puVar10 = (undefined8 *)FUN_02229a4c(plVar22,lVar16,0x14);
LAB_044cf868:
  (*(code *)*puVar10)(auStack_350,plVar22,puVar10[1]);
  func_0x04608620(auStack_1e0,auStack_350,0xa0);
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  lVar16 = *(long *)(*(long *)puVar6 + 0x20);
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    lVar16 = FUN_02229718();
  }
  pcVar11 = (char *)thunk_FUN_0224e54c(auStack_120,
                                       *(undefined8 *)
                                        (*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80));
  if (*pcVar11 == '\0') {
LAB_044cfa94:
    puVar14 = auStack_1e0;
  }
  else {
    lVar16 = *(long *)(*(long *)puVar6 + 0x20);
    if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
      lVar16 = FUN_02229718();
    }
    pcVar11 = (char *)thunk_FUN_0224e54c(auStack_1c0,
                                         *(undefined8 *)
                                          (*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80));
    if (*pcVar11 != '\0') {
      func_0x04608620(&uStack_2b0,auStack_1e0,0xa0);
      uStack_1f8 = uStack_288;
      uStack_200 = uStack_290;
      func_0x04608620(auStack_350,auStack_140,0xa0);
      puVar7 = PTR_DAT_049b9558;
      lVar23 = *(long *)PTR_DAT_049b9558;
      uStack_208 = uStack_328;
      uStack_210 = uStack_330;
      lVar15 = *(long *)(lVar23 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
      lVar16 = lVar15;
      if ((uVar3 & 1) == 0) {
        lVar15 = FUN_02229718(lVar15);
        lVar16 = *(long *)(lVar23 + 0x20);
        uVar3 = *(ushort *)(lVar16 + 0x135);
      }
      uVar9 = *(undefined4 *)(**(long **)(lVar15 + 0xc0) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar16 = FUN_02229718(lVar16);
      }
      uVar12 = thunk_FUN_0224e54c(&uStack_200,
                                  *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80) + 0x20);
      func_0x04608620(&dStack_78,uVar12,uVar9);
      dVar25 = dStack_78;
      lVar23 = *(long *)puVar7;
      lVar15 = *(long *)(lVar23 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
      lVar16 = lVar15;
      if ((uVar3 & 1) == 0) {
        lVar15 = FUN_02229718(lVar15);
        lVar16 = *(long *)(lVar23 + 0x20);
        uVar3 = *(ushort *)(lVar16 + 0x135);
      }
      uVar9 = *(undefined4 *)(**(long **)(lVar15 + 0xc0) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar16 = FUN_02229718(lVar16);
      }
      uVar12 = thunk_FUN_0224e54c(&uStack_210,
                                  *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80) + 0x20);
      func_0x04608620(&dStack_78,uVar12,uVar9);
      lVar16 = *(long *)(*(long *)puVar6 + 0x20);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_02229718();
      }
      pcVar11 = (char *)thunk_FUN_0224e54c(&uStack_200,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80));
      cVar2 = *pcVar11;
      lVar16 = *(long *)(*(long *)puVar6 + 0x20);
      if ((*(ushort *)(lVar16 + 0x135) & 1) == 0) {
        lVar16 = FUN_02229718();
      }
      pcVar11 = (char *)thunk_FUN_0224e54c(&uStack_210,
                                           *(undefined8 *)
                                            (*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80));
      if (((dStack_78 < dVar25) && (cVar2 != '\0')) && (*pcVar11 != '\0')) goto LAB_044cfa94;
    }
    puVar14 = auStack_140;
  }
  func_0x04608620(&uStack_2b0,puVar14,0xa0);
  uStack_1e8 = uStack_288;
  uStack_1f0 = uStack_290;
  uVar17 = Voodoo_Sauce_Internal_Ads_RewardedVideo__IsAdAvailable_43cdcd0(lVar13);
  if ((uVar17 & 1) == 0) {
    bVar8 = 0;
  }
  else {
    plVar22 = *(long **)(lVar13 + 0x10);
    if (plVar22 == (long *)0x0) goto LAB_044cfc5c;
    lVar15 = *plVar22;
    lVar16 = *(long *)puVar5;
    uVar17 = (ulong)*(ushort *)(lVar15 + 0x12e);
    if (uVar17 != 0) {
      piVar18 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
        if (*(long *)(piVar18 + -2) == lVar16) {
          puVar10 = (undefined8 *)(lVar15 + (long)(*piVar18 + 0x29) * 0x10 + 0x138);
          goto LAB_044cfb24;
        }
        uVar17 = uVar17 - 1;
        piVar18 = piVar18 + 4;
      } while (uVar17 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(plVar22,lVar16,0x29);
LAB_044cfb24:
    bVar8 = (*(code *)*puVar10)(plVar22,puVar10[1]);
  }
  lVar16 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_04a64998);
  Voodoo_Sauce_Internal_Analytics_RewardButtonShownEventAnalyticsInfo___ctor_4368594(lVar16,0);
  if (lVar16 != 0) {
    *(undefined8 *)(lVar16 + 0x20) = param_2;
    thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x20),param_2);
    puVar5 = PTR_DAT_049b3c20;
    if (*(long *)(lVar13 + 0x40) != 0) {
      dVar25 = (double)Voodoo_Sauce_Internal_Ads_AdTimer__get_TotalMilliseconds_43c1be8
                                 (*(long *)(lVar13 + 0x40),0);
      auStack_350[0] = 0;
      iVar1 = -0x80000000;
      if (dVar25 != INFINITY) {
        iVar1 = (int)dVar25;
      }
      uStack_2b0 = CONCAT44(uStack_2b0._4_4_,iVar1);
      System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                (auStack_350,&uStack_2b0,*(undefined8 *)puVar5);
      *(byte *)(lVar16 + 0x94) = bVar8 & 1;
      *(undefined8 *)(lVar16 + 0x28) = auStack_350[0];
      *(undefined8 *)(lVar16 + 0x30) = uStack_2a0;
      thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x30),uStack_2a0);
      *(undefined8 *)(lVar16 + 0x10) = uStack_278;
      thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x10),uStack_278);
      *(undefined8 *)(lVar16 + 0x18) = uStack_270;
      thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x18),uStack_270);
      uVar9 = Voodoo_Sauce_Internal_Ads_RewardedVideo__AdCount_43ce6b8();
      *(undefined4 *)(lVar16 + 0x90) = uVar9;
      *(undefined8 *)(lVar16 + 0x38) = uStack_268;
      thunk_FUN_021f190c((undefined8 *)(lVar16 + 0x38),uStack_268);
      *(undefined8 *)(lVar16 + 0x50) = *(undefined8 *)(lVar13 + 0x28);
      thunk_FUN_021f190c();
      uStack_2a8 = uStack_98;
      uStack_2b0 = uStack_a0;
      uStack_298 = uStack_88;
      uStack_2a0 = uStack_90;
      *(undefined8 *)(lVar16 + 0x78) = uStack_1e8;
      *(undefined8 *)(lVar16 + 0x70) = uStack_1f0;
      *(undefined8 *)(lVar16 + 0x88) = uStack_90;
      *(undefined8 *)(lVar16 + 0x80) = uStack_98;
      Voodoo_Sauce_Internal_Analytics_AnalyticsManager_RewardedVideo__ButtonShown_449b0d8(lVar16,0);
      return;
    }
  }
LAB_044cfc5c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

