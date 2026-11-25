/* IL2CPP: VoodooSauceProvider$$DisableNoAds
void VoodooSauceProvider__DisableNoAds (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$DisableNoAds
   void VoodooSauceProvider__DisableNoAds (VoodooSauceProvider_o* __this, const MethodInfo* method);
    */

void VoodooSauceProvider__DisableNoAds_22587d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bd2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bd2 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar4 = 0;
  if ((bRam0000000004f5f8bc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5898);
    FUN_021f03f8(PTR_DAT_04a64b00);
    FUN_021f03f8(PTR_DAT_04a3bd80);
    FUN_021f03f8(PTR_DAT_04a3bd88);
    uVar4 = FUN_021f03f8(PTR_DAT_04a64af0);
    bRam0000000004f5f8bc = 1;
  }
  uVar5 = Voodoo_Sauce_Internal_Ads_VoodooPremium__IsNoAdsPremium_43d2df0(uVar4);
  if (((uVar5 & 1) == 0) &&
     (uVar5 = Voodoo_Sauce_Internal_Ads_VoodooPremium__HasPremiumPeriod_43d2ed8(), (uVar5 & 1) == 0)
     ) {
    return;
  }
  lVar6 = Voodoo_Sauce_IAP_Diagnostics_IAPLogger__get_Main_43b17f8(0);
  puVar3 = PTR_DAT_04a3bd88;
  puVar2 = PTR_DAT_04a3bd80;
  puVar1 = PTR_DAT_049b5898;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Voodoo_Sauce_Core_Diagnostics_LogCategory__InfoTag_43473c0
            (lVar6,*(undefined8 *)PTR_DAT_04a64af0,*(undefined8 *)PTR_DAT_04a64b00,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Voodoo_Sauce_Common_Blackboard__SetPersistent_22f16b8(*(undefined8 *)puVar2,0,0);
  puVar1 = PTR_DAT_049b5898;
  uVar4 = *(undefined8 *)puVar3;
  if ((bRam0000000004f4a0bf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bbbc8,0,0);
    FUN_021f03f8(PTR_DAT_049b5898);
    FUN_021f03f8(PTR_DAT_049bbc20);
    bRam0000000004f4a0bf = 1;
  }
  puVar2 = PTR_DAT_049bbbc8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar6 = Voodoo_Sauce_Common_Blackboard__GetOrCreateReactiveValue___Il2CppFullySharedGenericType__25b8710
                    (uVar4,*(undefined8 *)puVar2);
  if (lVar6 != 0) {
    auStack_24[0] = 0;
    Voodoo_Sauce_Common_Blackboard_ReactiveValue___Il2CppFullySharedGenericType___set_Value_29281ac
              (lVar6,auStack_24,*(undefined8 *)PTR_DAT_049bbc20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

