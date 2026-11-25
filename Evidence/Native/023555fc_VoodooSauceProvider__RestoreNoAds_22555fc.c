/* IL2CPP: VoodooSauceProvider$$RestoreNoAds
void VoodooSauceProvider__RestoreNoAds (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$RestoreNoAds
   void VoodooSauceProvider__RestoreNoAds (VoodooSauceProvider_o* __this, const MethodInfo* method);
    */

void VoodooSauceProvider__RestoreNoAds_22555fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f49bd3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bd3 = 1;
  }
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  uVar4 = CloudPrefsBool__get_Value_24eb0d0(*(long *)(lVar3 + 0xb8) + 400,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(*(long *)PTR_DAT_049b5670 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = VoodooSauce__IsPremium_4379d30(0);
    puVar1 = PTR_DAT_049b5670;
    if ((uVar4 & 1) == 0) {
                    /* try { // try from 02355698 to 0245569b has its CatchHandler @ 02355758 */
      if ((bRam0000000004f49bd1 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b5670);
        bRam0000000004f49bd1 = 1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar5 = 0;
      if ((bRam0000000004f5f8bb & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b5898);
        FUN_021f03f8(PTR_DAT_04a3bd80);
        FUN_021f03f8(PTR_DAT_04a3bd88);
        FUN_021f03f8(PTR_DAT_04a64af0);
        uVar5 = FUN_021f03f8(PTR_DAT_04a64af8);
        bRam0000000004f5f8bb = 1;
      }
      uVar4 = Voodoo_Sauce_Internal_Ads_VoodooPremium__IsNoAdsPremium_43d2df0(uVar5);
      if ((uVar4 & 1) != 0) {
        return;
      }
      lVar3 = Voodoo_Sauce_IAP_Diagnostics_IAPLogger__get_Main_43b17f8(0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      Voodoo_Sauce_Core_Diagnostics_LogCategory__InfoTag_43473c0
                (lVar3,*(undefined8 *)PTR_DAT_04a64af0,*(undefined8 *)PTR_DAT_04a64af8,0);
      if (*(int *)(*(long *)PTR_DAT_049b5898 + 0xe4) == 0) {
        FUN_021f0574();
      }
      Voodoo_Sauce_Common_Blackboard__SetPersistent_22f16b8(*(undefined8 *)PTR_DAT_04a3bd80,1,0);
      puVar1 = PTR_DAT_049b5898;
      uVar5 = *(undefined8 *)PTR_DAT_04a3bd88;
      if ((bRam0000000004f4a0bf & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049bbbc8,1,0);
        FUN_021f03f8(PTR_DAT_049b5898);
        FUN_021f03f8(PTR_DAT_049bbc20);
        bRam0000000004f4a0bf = 1;
      }
      puVar2 = PTR_DAT_049bbbc8;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar3 = Voodoo_Sauce_Common_Blackboard__GetOrCreateReactiveValue___Il2CppFullySharedGenericType__25b8710
                        (uVar5,*(undefined8 *)puVar2);
      if (lVar3 != 0) {
        auStack_24[0] = 1;
        Voodoo_Sauce_Common_Blackboard_ReactiveValue___Il2CppFullySharedGenericType___set_Value_29281ac
                  (lVar3,auStack_24,*(undefined8 *)PTR_DAT_049bbc20);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return;
}

