/* IL2CPP: VoodooSauceProvider$$CanShowInterstitial
bool VoodooSauceProvider__CanShowInterstitial (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$CanShowInterstitial
   bool VoodooSauceProvider__CanShowInterstitial (VoodooSauceProvider_o* __this, const MethodInfo*
   method); */

bool VoodooSauceProvider__CanShowInterstitial_2258a94(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bd6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
                    /* catch() { ... } // from try @ 02358b14 with catch @ 02358ac0 */
    bRam0000000004f49bd6 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_04a61e80;
  if ((bRam0000000004f5f4b8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80);
    bRam0000000004f5f4b8 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_04a61e80;
  if ((bRam0000000004f6040b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a61e80);
    bRam0000000004f6040b = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  if (*(char *)(*(long *)(lVar3 + 0xb8) + 0x7a) != '\0') {
    if (*(int *)(lVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar3 = Voodoo_Sauce_Internal_Ads_AdsManager__get_SecondInterstitial_44d344c();
    if (lVar3 == 0) goto LAB_045d49f4;
    uVar4 = Voodoo_Sauce_Internal_Ads_Interstitial__ReadyToShow_43c6b30(lVar3,0);
    if ((uVar4 & 1) != 0) {
      return true;
    }
    lVar3 = *(long *)puVar1;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = Voodoo_Sauce_Internal_Ads_AdsManager__get_Interstitial_44d1bc8();
  if (lVar3 != 0) {
    iVar2 = Voodoo_Sauce_Internal_Ads_Interstitial__GetShowStatus_43c6b4c(lVar3,0);
    return iVar2 == 1;
  }
LAB_045d49f4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

