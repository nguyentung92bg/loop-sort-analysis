/* IL2CPP: PurchasingModule$$OnFulfillPurchase
void PurchasingModule__OnFulfillPurchase (PurchasingModule_o* __this, FulfillPurchaseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PurchasingModule$$OnFulfillPurchase
   void PurchasingModule__OnFulfillPurchase (PurchasingModule_o* __this, FulfillPurchaseMessage_o m,
   const MethodInfo* method); */

void PurchasingModule__OnFulfillPurchase_254a228(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lStack_f0;
  long lStack_e8;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [80];
  undefined1 auStack_88 [80];
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4c02a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca908);
    FUN_021f03f8(PTR_DAT_049ca910);
    bRam0000000004f4c02a = 1;
  }
  lStack_f0 = 0;
  lStack_e8 = 0;
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x50),*param_2,&lStack_e8,*(undefined8 *)PTR_DAT_049ca908
                      );
    lVar2 = lStack_e8;
    if (((uVar3 & 1) != 0) && (lStack_e8 != 0)) {
      func_0x04608620(auStack_88,param_2,0x50);
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),auStack_88,*(undefined8 *)(lVar2 + 0x28));
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      uStack_dc = *(undefined4 *)(param_2 + 1);
      uVar3 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                        (*(long *)(param_1 + 0x58),&uStack_dc,&lStack_f0,
                         *(undefined8 *)PTR_DAT_049ca910);
      lVar2 = lStack_f0;
      if (((uVar3 & 1) != 0) && (lStack_f0 != 0)) {
        func_0x04608620(auStack_d8,param_2,0x50);
        (**(code **)(lVar2 + 0x18))
                  (*(undefined8 *)(lVar2 + 0x40),auStack_d8,*(undefined8 *)(lVar2 + 0x28));
      }
      if (*(long *)(lVar1 + 0x28) == lStack_38) {
        return;
      }
      goto LAB_0264a35c;
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
LAB_0264a35c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

