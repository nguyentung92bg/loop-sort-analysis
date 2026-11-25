/* IL2CPP: Carrier$$SetCompleteTransferDelay
Cysharp_Threading_Tasks_UniTaskVoid_o Carrier__SetCompleteTransferDelay (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$SetCompleteTransferDelay
   Cysharp_Threading_Tasks_UniTaskVoid_o Carrier__SetCompleteTransferDelay (Carrier_o* __this, const
   MethodInfo* method); */

undefined8 Carrier__SetCompleteTransferDelay_2408904(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c2898;
                    /* try { // try from 02508904 to 02608907 has its CatchHandler @ 02508bf0 */
  if ((bRam0000000004f4b6ce & 1) == 0) {
                    /* try { // try from 02508928 to 02608933 has its CatchHandler @ 02508bfc */
    FUN_021f03f8(PTR_DAT_049c2898);
    bRam0000000004f4b6ce = 1;
  }
                    /* try { // try from 02508948 to 02608953 has its CatchHandler @ 02508be4 */
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
  uStack_40 = param_1;
  thunk_FUN_021f190c(&uStack_40,param_1);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
  return 0;
}

