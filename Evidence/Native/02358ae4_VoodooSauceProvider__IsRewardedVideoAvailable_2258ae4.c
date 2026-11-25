/* IL2CPP: VoodooSauceProvider$$IsRewardedVideoAvailable
bool VoodooSauceProvider__IsRewardedVideoAvailable (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$IsRewardedVideoAvailable
   bool VoodooSauceProvider__IsRewardedVideoAvailable (VoodooSauceProvider_o* __this, const
   MethodInfo* method); */

bool VoodooSauceProvider__IsRewardedVideoAvailable_2258ae4(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bd7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
                    /* try { // try from 02358b0c to 02458b13 has its CatchHandler @ 02358b60 */
    bRam0000000004f49bd7 = 1;
  }
                    /* try { // try from 02358b14 to 02458b73 has its CatchHandler @ 02358ac0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_04a61e80;
  if ((bRam0000000004f5f4b0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80,0);
    bRam0000000004f5f4b0 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_04a61e80;
  if ((bRam0000000004f6040e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80,0);
    bRam0000000004f6040e = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar4 + 0xb8) + 0x7a) != '\0') {
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar4 = Voodoo_Sauce_Internal_Ads_AdsManager__get_SecondRewardedVideo_44d3504();
    if (lVar4 == 0) goto LAB_045d4eb8;
    uVar5 = Voodoo_Sauce_Internal_Ads_RewardedVideo__IsAvailable_43cdc18(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      return true;
    }
    lVar4 = *(long *)puVar1;
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = Voodoo_Sauce_Internal_Ads_AdsManager__get_RewardedVideo_44d2774();
  if (lVar4 != 0) {
    uVar5 = Voodoo_Sauce_Internal_Ads_VoodooPremium__IsSuperPremium_43cdc40(lVar4,0,0);
    if ((uVar5 & 1) != 0) {
      return true;
    }
    if ((bRam0000000004f5f880 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_04a61e80);
      bRam0000000004f5f880 = 1;
    }
    uVar5 = Voodoo_Sauce_Internal_Ads_BaseAd__IsLoaded_43c3784(lVar4,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(*(long *)PTR_DAT_04a61e80 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar4 = Voodoo_Sauce_Internal_Ads_AdsManager__get_RewardedInterstitialVideo_44d1d14(0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar3 = Voodoo_Sauce_Internal_Ads_RewardedInterstitialVideo__GetRewardedReplaceState_43cc648()
      ;
      bVar2 = iVar3 != 0;
    }
    else {
      bVar2 = true;
    }
    return bVar2;
  }
LAB_045d4eb8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

