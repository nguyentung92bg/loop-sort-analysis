/* IL2CPP: VoodooPurchasingProvider$$InitializeSdk
Cysharp_Threading_Tasks_UniTask_o VoodooPurchasingProvider__InitializeSdk (VoodooPurchasingProvider_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: VoodooPurchasingProvider$$InitializeSdk
   Cysharp_Threading_Tasks_UniTask_o VoodooPurchasingProvider__InitializeSdk
   (VoodooPurchasingProvider_o* __this, const MethodInfo* method); */

undefined1  [16] VoodooPurchasingProvider__InitializeSdk_2252cec(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_049b5670;
  if ((bRam0000000004f49ba5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5670);
    bRam0000000004f49ba5 = 1;
  }
                    /* catch() { ... } // from try @ 02352bec with catch @ 02352d28 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02352b08 with catch @ 02352d2c */
    FUN_021f0574();
  }
  VoodooSauce__RegisterIAPListener_4378cd0(param_1,0);
  return ZEXT816(0);
}

