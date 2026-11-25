/* IL2CPP: WelcomeBackOffer$$Initialize
void WelcomeBackOffer__Initialize (WelcomeBackOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WelcomeBackOffer$$Initialize
   void WelcomeBackOffer__Initialize (WelcomeBackOffer_o* __this, const MethodInfo* method); */

void WelcomeBackOffer__Initialize_252d6a4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bedd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4228);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bedd = 1;
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  iVar2 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar4 + 0xb8) + 0x60,0);
  if (*(long *)(param_1 + 0x10) != 0) {
    lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x30);
    if (lVar4 != 0) {
      iVar3 = ConstantSheetBase_object___GetInt_281c070(lVar4,2,*(undefined8 *)PTR_DAT_049c4228);
      *(bool *)(param_1 + 0x38) = iVar2 < iVar3;
                    /* try { // try from 0262d740 to 0272d8b7 has its CatchHandler @ 0262d740
                       catch() { ... } // from try @ 0262d740 with catch @ 0262d740
                       catch() { ... } // from try @ 0262d924 with catch @ 0262d740
                       catch() { ... } // from try @ 0262d944 with catch @ 0262d740
                       catch() { ... } // from try @ 0262d9f0 with catch @ 0262d740
                       catch() { ... } // from try @ 0262da0c with catch @ 0262d740
                       catch() { ... } // from try @ 0262dac0 with catch @ 0262d740
                       catch() { ... } // from try @ 0262dae4 with catch @ 0262d740
                       catch() { ... } // from try @ 0262dc18 with catch @ 0262d740
                       catch() { ... } // from try @ 0262dc58 with catch @ 0262d740
                       catch() { ... } // from try @ 0262dc80 with catch @ 0262d740
                       catch() { ... } // from try @ 0262dc9c with catch @ 0262d740
                       catch() { ... } // from try @ 0262dcbc with catch @ 0262d740
                       catch() { ... } // from try @ 0262dcd8 with catch @ 0262d740
                       catch() { ... } // from try @ 0262dcfc with catch @ 0262d740 */
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

