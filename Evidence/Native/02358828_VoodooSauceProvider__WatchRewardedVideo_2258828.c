/* IL2CPP: VoodooSauceProvider$$WatchRewardedVideo
void VoodooSauceProvider__WatchRewardedVideo (VoodooSauceProvider_o* __this, System_String_o* placement, System_Action_bool__o* watched, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$WatchRewardedVideo
   void VoodooSauceProvider__WatchRewardedVideo (VoodooSauceProvider_o* __this, System_String_o*
   placement, System_Action_bool__o* watched, const MethodInfo* method); */

void VoodooSauceProvider__WatchRewardedVideo_2258828
               (undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  double dVar14;
  undefined8 auStack_100 [2];
  undefined8 uStack_f0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_58;
  int iStack_44;
  
  puVar1 = PTR_DAT_049b64c0;
  if ((bRam0000000004f49bd4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230);
    FUN_021f03f8(PTR_DAT_049b64c8);
                    /* catch() { ... } // from try @ 0235897c with catch @ 02358878 */
    FUN_021f03f8(PTR_DAT_049b64c0);
    FUN_021f03f8(PTR_DAT_049b5670);
    FUN_021f03f8(PTR_DAT_049b64d0);
    bRam0000000004f49bd4 = 1;
  }
  lVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
  System_Object___ctor_3142338(lVar7,0);
  puVar4 = PTR_DAT_049b64d0;
  puVar3 = PTR_DAT_049b64c8;
  puVar2 = PTR_DAT_049b5670;
  puVar1 = PTR_DAT_049b5230;
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02358950 to 0245895b has its CatchHandler @ 023589a8 */
    FUN_021f06a0();
  }
  *(undefined8 *)(lVar7 + 0x10) = param_3;
  thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x10),param_3);
  uVar8 = System_String__IsNullOrEmpty_2f7c924(param_2,0);
  lVar13 = *(long *)puVar4;
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 02358908 to 02458913 has its CatchHandler @ 023589bc */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38(uVar9,lVar7,*(undefined8 *)puVar3,0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_04a61e80;
  if ((uVar8 & 1) == 0) {
    lVar13 = param_2;
  }
  if ((bRam0000000004f5f4ba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80,lVar13,0);
    bRam0000000004f5f4ba = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_04a61e80;
  if ((bRam0000000004f6040c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80,lVar13,0);
    bRam0000000004f6040c = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar8 = Voodoo_Sauce_Internal_Ads_AdsManager__ShouldShowSecondRewardedVideo_44d4a98();
  iVar5 = *(int *)(*(long *)puVar1 + 0xe4);
  if ((uVar8 & 1) == 0) {
    if (iVar5 == 0) {
      FUN_021f0574();
    }
    plVar11 = (long *)Voodoo_Sauce_Internal_Ads_AdsManager__get_RewardedVideo_44d2774();
    puVar12 = (undefined8 *)PTR_DAT_04a64968;
  }
  else {
    if (iVar5 == 0) {
      FUN_021f0574();
    }
    plVar11 = (long *)Voodoo_Sauce_Internal_Ads_AdsManager__get_SecondRewardedVideo_44d3504();
    puVar12 = (undefined8 *)PTR_DAT_04a64968;
  }
  PTR_DAT_04a64968 = (undefined *)puVar12;
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f5f882 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5230,uVar9,lVar13,0);
    FUN_021f03f8(PTR_DAT_04a64670);
    FUN_021f03f8(PTR_DAT_04a61e80);
    FUN_021f03f8(PTR_DAT_049b3c20);
    FUN_021f03f8(PTR_DAT_04a63508);
    FUN_021f03f8(PTR_DAT_04a64970);
    FUN_021f03f8(PTR_DAT_04a64968);
    FUN_021f03f8(PTR_DAT_049cec48);
    bRam0000000004f5f882 = 1;
  }
  uStack_58 = 0;
  lVar7 = thunk_FUN_0222ca34(*puVar12);
  System_Object___ctor_3142338(lVar7,0);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  puVar12 = (undefined8 *)(lVar7 + 0x10);
  *puVar12 = uVar9;
  thunk_FUN_021f190c(puVar12,uVar9);
  *(long *)(lVar7 + 0x18) = (long)plVar11;
  thunk_FUN_021f190c((long *)(lVar7 + 0x18),plVar11);
  plVar11[10] = lVar13;
  thunk_FUN_021f190c(plVar11 + 10,lVar13);
  lVar10 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5230);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (lVar10,lVar7,*(undefined8 *)PTR_DAT_04a64970,0);
  plVar11[0x10] = lVar10;
  thunk_FUN_021f190c(plVar11 + 0x10,lVar10);
  iVar5 = Voodoo_Sauce_Internal_Ads_RewardedVideo__CanShow_43cdd54(plVar11);
  if (iVar5 == 0) {
    uVar9 = 1;
  }
  else {
    if (iVar5 == 1) {
      if (*(int *)(*(long *)PTR_DAT_04a61e80 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar7 = Voodoo_Sauce_Internal_Ads_AdsManager__get_RewardedInterstitialVideo_44d1d14(0);
      if (lVar7 != 0) {
        uVar6 = Voodoo_Sauce_Internal_Ads_RewardedInterstitialVideo__GetRewardedReplaceState_43cc648
                          ();
        lVar7 = Voodoo_Sauce_Internal_Ads_AdsManager__get_RewardedInterstitialVideo_44d1d14(0);
        if (lVar7 != 0) {
          Voodoo_Sauce_Internal_Ads_RewardedInterstitialVideo__Show_43cbda8
                    (lVar7,*puVar12,uVar6,lVar13);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (iVar5 == 3) {
      lVar7 = plVar11[0x11];
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      (**(code **)(lVar7 + 0x18))
                (*(undefined8 *)(lVar7 + 0x40),auStack_100,*(undefined8 *)(lVar7 + 0x28));
      (**(code **)(*plVar11 + 0x1b8))(plVar11,*(undefined8 *)(*plVar11 + 0x1c0));
      lVar7 = plVar11[0xe];
      if (lVar7 != 0) {
        (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(lVar7 + 0x28));
      }
      lVar7 = plVar11[0xf];
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      (**(code **)(lVar7 + 0x18))
                (*(undefined8 *)(lVar7 + 0x40),auStack_100,*(undefined8 *)(lVar7 + 0x28));
      if ((char)auStack_100[0] != '\0') {
        lVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_04a64670);
        Voodoo_Sauce_Internal_Analytics_AdShownEventAnalyticsInfo___ctor_436857c(lVar7,0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        *(long *)(lVar7 + 0x20) = lVar13;
        thunk_FUN_021f190c((long *)(lVar7 + 0x20),lVar13);
        *(undefined8 *)(lVar7 + 0x30) = uStack_f0;
        thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x30),uStack_f0);
        *(undefined8 *)(lVar7 + 0x10) = uStack_c8;
        thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x10),uStack_c8);
        *(undefined8 *)(lVar7 + 0x18) = uStack_c0;
        thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x18),uStack_c0);
        if (plVar11[8] == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        dVar14 = (double)Voodoo_Sauce_Internal_Ads_AdTimer__get_TotalMilliseconds_43c1be8
                                   (plVar11[8],0);
        auStack_100[0] = 0;
        iStack_44 = -0x80000000;
        if (dVar14 != INFINITY) {
          iStack_44 = (int)dVar14;
        }
        System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
                  (auStack_100,&iStack_44,*(undefined8 *)PTR_DAT_049b3c20);
        *(undefined8 *)(lVar7 + 0x28) = auStack_100[0];
        uVar6 = Voodoo_Sauce_Internal_Ads_RewardedVideo__IncrementAdCount_43ce548();
        *(undefined8 *)(lVar7 + 0x38) = uStack_b8;
        *(undefined4 *)(lVar7 + 0x90) = uVar6;
        thunk_FUN_021f190c((undefined8 *)(lVar7 + 0x38),uStack_b8);
        *(long *)(lVar7 + 0x50) = plVar11[5];
        thunk_FUN_021f190c();
        Voodoo_Sauce_Internal_Analytics_AnalyticsManager_RewardedVideo__Shown_449b428(lVar7,0);
        puVar1 = PTR_DAT_049cec48;
        lVar7 = plVar11[0x12];
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(char *)(lVar7 + 0x11) == '\0') {
          return;
        }
        if (*(char *)((long)plVar11 + 0x9c) != '\0') {
          return;
        }
        if ((int)plVar11[0x13] + 1 < *(int *)(lVar7 + 0x18)) {
          return;
        }
        if (*(int *)(*(long *)PTR_DAT_049cec48 + 0xe4) == 0) {
          FUN_021f0574();
        }
        Voodoo_Sauce_Core_VoodooSauceBehaviour__ShowLoadingAdScreen_44235fc(0);
        if (*(int *)(*(long *)PTR_DAT_04a63508 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar8 = Voodoo_Sauce_Common_Utils_PlatformUtils__get_UNITY_EDITOR_442d440(0);
        if ((uVar8 & 1) != 0) {
          return;
        }
        uVar9 = Voodoo_Sauce_Internal_Ads_RewardedVideo__MeasureRVDismissDelay_43ce5e8(plVar11);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          FUN_021f0574();
        }
        Voodoo_Sauce_Core_VoodooSauceBehaviour__InvokeCoroutine_442306c(uVar9,0);
        return;
      }
      (**(code **)(*plVar11 + 0x1c8))(plVar11,*(undefined8 *)(*plVar11 + 0x1d0));
    }
    uVar9 = 0;
  }
  Voodoo_Sauce_Internal_Ads_RewardedVideo__TriggerCallback_43ce654(plVar11,uVar9);
  return;
}

