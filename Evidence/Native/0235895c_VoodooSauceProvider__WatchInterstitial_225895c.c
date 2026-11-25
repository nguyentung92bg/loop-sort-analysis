/* IL2CPP: VoodooSauceProvider$$WatchInterstitial
void VoodooSauceProvider__WatchInterstitial (VoodooSauceProvider_o* __this, System_String_o* placement, System_Action_bool__o* watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$WatchInterstitial
   void VoodooSauceProvider__WatchInterstitial (VoodooSauceProvider_o* __this, System_String_o*
   placement, System_Action_bool__o* watched, const MethodInfo* method); */

void VoodooSauceProvider__WatchInterstitial_225895c
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  int *piVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined1 auStack_2d8 [160];
  undefined1 auStack_238 [160];
  undefined1 auStack_198 [168];
  undefined4 uStack_f0;
  undefined1 auStack_e8 [152];
  char acStack_44 [4];
  
  puVar1 = PTR_DAT_049b64d8;
                    /* try { // try from 02358970 to 0245897b has its CatchHandler @ 023589a0 */
                    /* try { // try from 0235897c to 024589cb has its CatchHandler @ 02358878 */
  if ((bRam0000000004f49bd5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
                    /* catch() { ... } // from try @ 02358970 with catch @ 023589a0 */
    FUN_021f03f8(PTR_DAT_049b64e0);
                    /* catch() { ... } // from try @ 02358950 with catch @ 023589a8 */
    FUN_021f03f8(PTR_DAT_049b64d8);
    FUN_021f03f8(PTR_DAT_049b5670);
                    /* catch() { ... } // from try @ 02358908 with catch @ 023589bc */
    FUN_021f03f8(PTR_DAT_049b64d0);
    bRam0000000004f49bd5 = 1;
  }
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar7,0);
  puVar4 = PTR_DAT_049b64e0;
  puVar3 = PTR_DAT_049b64d0;
  puVar2 = PTR_DAT_049b5670;
  puVar1 = PTR_DAT_049b5230;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(undefined8 *)(lVar7 + 0x10) = param_3;
  thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x10),param_3);
  uVar8 = System_String__IsNullOrEmpty_2f7c924(param_2,0);
  uVar14 = *(undefined8 *)puVar3;
  lVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38(lVar9,lVar7,*(undefined8 *)puVar4,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_04a61e80;
  if ((uVar8 & 1) == 0) {
    uVar14 = param_2;
  }
  if ((bRam0000000004f5f4af & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80,0,uVar14,0);
    bRam0000000004f5f4af = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_04a61e80;
  if ((bRam0000000004f60408 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80,0,uVar14,0);
    bRam0000000004f60408 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar8 = Voodoo_Sauce_Internal_Ads_AdsManager__ShouldShowSecondInterstitial_44d4514(0);
  iVar5 = *(int *)(*(long *)puVar1 + 0xe4);
  if ((uVar8 & 1) == 0) {
    if (iVar5 == 0) {
      FUN_021f0574();
    }
    lVar7 = Voodoo_Sauce_Internal_Ads_AdsManager__get_Interstitial_44d1bc8();
    puVar11 = (undefined8 *)PTR_DAT_04a647c0;
  }
  else {
    if (iVar5 == 0) {
      FUN_021f0574();
    }
    lVar7 = Voodoo_Sauce_Internal_Ads_AdsManager__get_SecondInterstitial_44d344c();
    puVar11 = (undefined8 *)PTR_DAT_04a647c0;
  }
  PTR_DAT_04a647c0 = (undefined *)puVar11;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5f836 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_04a64630);
    FUN_021f03f8(PTR_DAT_04a647c8);
    FUN_021f03f8(PTR_DAT_04a647c0);
    FUN_021f03f8(PTR_DAT_04a647d0);
    bRam0000000004f5f836 = 1;
  }
  func_0x04608670(auStack_e8,0,0xa0);
  uStack_f0 = 0;
  lVar10 = thunk_FUN_0222ca34(*puVar11);
  System_Object___ctor_3142338(lVar10,0);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  *(long *)(lVar10 + 0x10) = lVar7;
  thunk_FUN_021f190c((long *)(lVar10 + 0x10),lVar7);
  plVar13 = (long *)(lVar10 + 0x18);
  *plVar13 = lVar9;
  thunk_FUN_021f190c(plVar13,lVar9);
  iVar5 = Voodoo_Sauce_Internal_Ads_Interstitial__GetShowStatus_43c6b4c(lVar7,0);
  lVar9 = *(long *)(lVar7 + 0x80);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  (**(code **)(lVar9 + 0x18))
            (*(undefined8 *)(lVar9 + 0x40),auStack_198,*(undefined8 *)(lVar9 + 0x28));
  func_0x04608620(auStack_e8,auStack_198,0xa0);
  if (iVar5 == 1) {
    lVar9 = Voodoo_Sauce_Internal_Ads_AdsLogger__get_Main_43b4028();
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Voodoo_Sauce_Core_Diagnostics_LogCategory__InfoTag_43473c0
              (lVar9,*(undefined8 *)(lVar7 + 0x68),*(undefined8 *)PTR_DAT_04a647d0,0);
    plVar13 = *(long **)(lVar7 + 0x10);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *plVar13;
    uVar8 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar8 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_04a64630) {
          puVar11 = (undefined8 *)(lVar9 + (long)(*piVar12 + 0x23) * 0x10 + 0x138);
          goto LAB_044c6f30;
        }
        uVar8 = uVar8 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar8 != 0);
    }
    puVar11 = (undefined8 *)FUN_02229a4c(plVar13,*(long *)PTR_DAT_04a64630,0x23);
LAB_044c6f30:
    uVar6 = (*(code *)*puVar11)(plVar13,puVar11[1]);
    func_0x04608620(auStack_238,auStack_e8,0xa0);
    Voodoo_Sauce_Internal_Ads_Interstitial__SendTriggerAnalytics_43c713c
              (lVar7,uVar14,auStack_238,uVar6 & 1);
    *(undefined8 *)(lVar7 + 0x50) = uVar14;
    thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x50),uVar14);
    uVar14 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5230);
    System_Action___Il2CppFullySharedGenericType____ctor_27aed38
              (uVar14,lVar10,*(undefined8 *)PTR_DAT_04a647c8,0);
    *(undefined8 *)(lVar7 + 0x78) = uVar14;
    thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x78),uVar14);
    lVar9 = *(long *)(lVar7 + 0x70);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    (**(code **)(lVar9 + 0x18))
              (*(undefined8 *)(lVar9 + 0x40),acStack_44,*(undefined8 *)(lVar9 + 0x28));
    if (acStack_44[0] == '\0') {
      Voodoo_Sauce_Internal_Ads_Interstitial__TriggerCallback_43c7488(lVar7,0);
    }
    else {
      Voodoo_Sauce_Internal_Ads_Interstitial__OnShowSuccess_43c7334(lVar7);
    }
  }
  else if (iVar5 == 2) {
    func_0x04608620(auStack_2d8,auStack_e8,0xa0);
    Voodoo_Sauce_Internal_Ads_Interstitial__SendTriggerAnalytics_43c713c(lVar7,uVar14,auStack_2d8,0)
    ;
    lVar7 = *plVar13;
    if (lVar7 != 0) {
      acStack_44[0] = '\0';
      (**(code **)(lVar7 + 0x18))
                (*(undefined8 *)(lVar7 + 0x40),acStack_44,*(undefined8 *)(lVar7 + 0x28));
    }
  }
  else {
    lVar7 = *plVar13;
    if (lVar7 != 0) {
      acStack_44[0] = '\0';
      (**(code **)(lVar7 + 0x18))
                (*(undefined8 *)(lVar7 + 0x40),acStack_44,*(undefined8 *)(lVar7 + 0x28));
    }
  }
  return;
}

