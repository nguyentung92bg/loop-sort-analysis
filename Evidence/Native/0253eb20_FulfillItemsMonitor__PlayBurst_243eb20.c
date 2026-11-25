/* IL2CPP: FulfillItemsMonitor$$PlayBurst
Cysharp_Threading_Tasks_UniTaskVoid_o FulfillItemsMonitor__PlayBurst (FulfillItemsMonitor_o* __this, UnityEngine_Vector3_o worldPosition, System_Collections_Generic_IReadOnlyList_FulfillPayout__o* payouts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillItemsMonitor$$PlayBurst
   Cysharp_Threading_Tasks_UniTaskVoid_o FulfillItemsMonitor__PlayBurst (FulfillItemsMonitor_o*
   __this, UnityEngine_Vector3_o worldPosition,
   System_Collections_Generic_IReadOnlyList_FulfillPayout__o* payouts, const MethodInfo* method); */

undefined8
FulfillItemsMonitor__PlayBurst_243eb20
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
          undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_049c3fe8;
  if ((bRam0000000004f4b83c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3fe8);
    bRam0000000004f4b83c = 1;
  }
  uStack_50 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  thunk_FUN_021f190c((ulong)&uStack_a0 | 8,0);
  uStack_90 = param_4;
  thunk_FUN_021f190c(&uStack_90,param_4);
  uStack_80 = CONCAT44(param_2,param_1);
  uStack_78 = CONCAT44(uStack_78._4_4_,param_3);
  uStack_88 = param_5;
  thunk_FUN_021f190c(&uStack_88,param_5);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_a0 | 8,&uStack_a0,*(undefined8 *)puVar1);
  return 0;
}

