/* IL2CPP: ShopMonitor$$OnPurchaseComplete
void ShopMonitor__OnPurchaseComplete (ShopMonitor_o* __this, PurchaseCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ShopMonitor$$OnPurchaseComplete
   void ShopMonitor__OnPurchaseComplete (ShopMonitor_o* __this, PurchaseCompleteMessage_o m, const
   MethodInfo* method); */

ulong ShopMonitor__OnPurchaseComplete_24626c0(ulong param_1,int *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uStack_40;
  undefined8 uStack_38;
  ulong auStack_30 [2];
  
  uVar2 = param_1;
  if ((bRam0000000004f4b94c & 1) == 0) {
    uVar2 = FUN_021f03f8(PTR_DAT_049c50a0);
    bRam0000000004f4b94c = 1;
  }
  puVar1 = PTR_DAT_049c50a0;
  if (*param_2 == 1) {
    ShopMonitor__RefreshView_24607f0(param_1);
    uVar2 = System_String__op_Inequality_2f7b800
                      (*(undefined8 *)(param_2 + 8),*(undefined8 *)puVar1,0);
    puVar1 = PTR_DAT_049c5098;
    if ((uVar2 & 1) == 0) {
      if ((bRam0000000004f4b94b & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c5098);
        bRam0000000004f4b94b = 1;
      }
      uStack_38 = 0;
      uStack_40 = 0;
      auStack_30[1] = 0;
      auStack_30[0] = 0;
      thunk_FUN_021f190c((ulong)&uStack_40 | 8,0);
      auStack_30[0] = param_1;
      thunk_FUN_021f190c(auStack_30,param_1);
      uStack_40 = CONCAT44(uStack_40._4_4_,0xffffffff);
      Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
                ((ulong)&uStack_40 | 8,&uStack_40,*(undefined8 *)puVar1);
      return 0;
    }
  }
  return uVar2;
}

