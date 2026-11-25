/* IL2CPP: VoodooSauceProvider$$EnableNoAds
void VoodooSauceProvider__EnableNoAds (VoodooSauceProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$EnableNoAds
   void VoodooSauceProvider__EnableNoAds (VoodooSauceProvider_o* __this, const MethodInfo* method);
    */

void VoodooSauceProvider__EnableNoAds_2258788(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_049b5670;
                    /* try { // try from 0235879c to 024587a7 has its CatchHandler @ 023587c8 */
  if ((bRam0000000004f49bd1 & 1) == 0) {
                    /* try { // try from 023587a8 to 024587f3 has its CatchHandler @ 02358760 */
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bd1 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
                    /* catch() { ... } // from try @ 0235879c with catch @ 023587c8 */
  uVar3 = 0;
  if ((bRam0000000004f5f8bb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5898);
    FUN_021f03f8(PTR_DAT_04a3bd80);
    FUN_021f03f8(PTR_DAT_04a3bd88);
    FUN_021f03f8(PTR_DAT_04a64af0);
    uVar3 = FUN_021f03f8(PTR_DAT_04a64af8);
    bRam0000000004f5f8bb = 1;
  }
  uVar4 = Voodoo_Sauce_Internal_Ads_VoodooPremium__IsNoAdsPremium_43d2df0(uVar3);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar5 = Voodoo_Sauce_IAP_Diagnostics_IAPLogger__get_Main_43b17f8(0);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Voodoo_Sauce_Core_Diagnostics_LogCategory__InfoTag_43473c0
            (lVar5,*(undefined8 *)PTR_DAT_04a64af0,*(undefined8 *)PTR_DAT_04a64af8,0);
  if (*(int *)(*(long *)PTR_DAT_049b5898 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Voodoo_Sauce_Common_Blackboard__SetPersistent_22f16b8(*(undefined8 *)PTR_DAT_04a3bd80,1,0);
  puVar1 = PTR_DAT_049b5898;
  uVar3 = *(undefined8 *)PTR_DAT_04a3bd88;
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
  lVar5 = Voodoo_Sauce_Common_Blackboard__GetOrCreateReactiveValue___Il2CppFullySharedGenericType__25b8710
                    (uVar3,*(undefined8 *)puVar2);
  if (lVar5 != 0) {
    auStack_24[0] = 1;
    Voodoo_Sauce_Common_Blackboard_ReactiveValue___Il2CppFullySharedGenericType___set_Value_29281ac
              (lVar5,auStack_24,*(undefined8 *)PTR_DAT_049bbc20);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

