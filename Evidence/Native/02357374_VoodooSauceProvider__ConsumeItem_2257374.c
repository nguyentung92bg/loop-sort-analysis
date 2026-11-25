/* IL2CPP: VoodooSauceProvider$$ConsumeItem
void VoodooSauceProvider__ConsumeItem (VoodooSauceProvider_o* __this, EconomyConsumeMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$ConsumeItem
   void VoodooSauceProvider__ConsumeItem (VoodooSauceProvider_o* __this, EconomyConsumeMessage_o m,
   const MethodInfo* method); */

void VoodooSauceProvider__ConsumeItem_2257374(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_80 [80];
  
  puVar2 = PTR_DAT_049b5670;
                    /* try { // try from 0235737c to 024573cb has its CatchHandler @ 02357278 */
  if ((bRam0000000004f49bc0 & 1) == 0) {
                    /* catch() { ... } // from try @ 02357370 with catch @ 023573a0 */
                    /* catch() { ... } // from try @ 02357350 with catch @ 023573a8 */
    FUN_021f03f8(PTR_DAT_049b5f70);
    FUN_021f03f8(PTR_DAT_049b5670);
                    /* catch() { ... } // from try @ 02357308 with catch @ 023573bc */
    bRam0000000004f49bc0 = 1;
  }
  func_0x04608620(auStack_80,param_2,0x50);
  uVar3 = VoodooSauceProvider__CreateItemTransactionParameters_2256f40
                    (auStack_80,*(undefined4 *)(param_2 + 0x54),1);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  VoodooSauce__OnItemTransaction_4377f70(uVar3,0);
  if (*(int *)(param_2 + 0x10) == 1) {
    lVar4 = *(long *)PTR_DAT_049b5f70;
    *(int *)(param_1 + 0x38) = *(int *)(param_2 + 0x24) + *(int *)(param_1 + 0x38);
    uVar1 = *(undefined4 *)(param_2 + 0x24);
    if (*(int *)(lVar4 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 0235748c with catch @ 02357438 */
      FUN_021f0574();
    }
    VoodooAdjustProvider__SpentCoins_2251adc(uVar1);
  }
  return;
}

