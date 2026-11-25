/* IL2CPP: VoodooSauceProvider$$AddItem
void VoodooSauceProvider__AddItem (VoodooSauceProvider_o* __this, EconomyAddMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooSauceProvider$$AddItem
   void VoodooSauceProvider__AddItem (VoodooSauceProvider_o* __this, EconomyAddMessage_o m, const
   MethodInfo* method); */

void VoodooSauceProvider__AddItem_2256eb4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [80];
  
  puVar1 = PTR_DAT_049b5670;
  if ((bRam0000000004f49bbf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49bbf = 1;
  }
  func_0x04608620(auStack_70,param_2,0x50);
  uVar2 = VoodooSauceProvider__CreateItemTransactionParameters_2256f40
                    (auStack_70,*(undefined4 *)(param_2 + 0x54),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  VoodooSauce__OnItemTransaction_4377f70(uVar2,0);
  return;
}

