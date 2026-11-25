/* IL2CPP: CollectItems$$ApplyCollectItemMotions
Cysharp_Threading_Tasks_UniTaskVoid_o CollectItems__ApplyCollectItemMotions (CollectItems_o* __this, HomeLiveOpsSlot_o slot, int32_t count, int32_t item, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CollectItems$$ApplyCollectItemMotions
   Cysharp_Threading_Tasks_UniTaskVoid_o CollectItems__ApplyCollectItemMotions (CollectItems_o*
   __this, HomeLiveOpsSlot_o slot, int32_t count, int32_t item, const MethodInfo* method); */

undefined8
CollectItems__ApplyCollectItemMotions_250ea4c
          (undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 auStack_f8 [2];
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  
  puVar1 = PTR_DAT_049c91b8;
  if ((bRam0000000004f4bdeb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c91b8);
    bRam0000000004f4bdeb = 1;
  }
  func_0x04608670(auStack_f8,0,0xb8);
  thunk_FUN_021f190c(auStack_f0,0);
  uStack_e8 = param_1;
  thunk_FUN_021f190c(&uStack_e8,param_1);
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_d0 = param_2[2];
  thunk_FUN_021f190c(&uStack_d8,0);
  auStack_f8[0] = 0xffffffff;
  uStack_c8 = param_3;
  uStack_c4 = param_4;
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            (auStack_f0,auStack_f8,*(undefined8 *)puVar1);
  return 0;
}

