/* IL2CPP: LockCarrierGroup$$Unlock
Cysharp_Threading_Tasks_UniTaskVoid_o LockCarrierGroup__Unlock (LockCarrierGroup_o* __this, KeyBlockGroup_o* keyBlockGroup, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LockCarrierGroup$$Unlock
   Cysharp_Threading_Tasks_UniTaskVoid_o LockCarrierGroup__Unlock (LockCarrierGroup_o* __this,
   KeyBlockGroup_o* keyBlockGroup, const MethodInfo* method); */

undefined8 LockCarrierGroup__Unlock_24a7078(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c6790;
  if ((bRam0000000004f4bb1c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6790);
    bRam0000000004f4bb1c = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
  uStack_68 = param_1;
  thunk_FUN_021f190c(&uStack_68,param_1);
  uStack_70 = param_2;
  thunk_FUN_021f190c(&uStack_70,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
  return 0;
}

