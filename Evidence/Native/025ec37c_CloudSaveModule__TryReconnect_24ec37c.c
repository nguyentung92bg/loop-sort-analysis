/* IL2CPP: CloudSaveModule$$TryReconnect
Cysharp_Threading_Tasks_UniTaskVoid_o CloudSaveModule__TryReconnect (CloudSaveModule_o* __this, bool force, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule$$TryReconnect
   Cysharp_Threading_Tasks_UniTaskVoid_o CloudSaveModule__TryReconnect (CloudSaveModule_o* __this,
   bool force, const MethodInfo* method); */

undefined8 CloudSaveModule__TryReconnect_24ec37c(undefined8 param_1,undefined1 param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c8010;
  if ((bRam0000000004f4bcdd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8010);
    bRam0000000004f4bcdd = 1;
  }
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
  uStack_60 = param_1;
  thunk_FUN_021f190c(&uStack_60,param_1);
  uStack_58 = CONCAT71(uStack_58._1_7_,param_2) & 0xffffffffffffff01;
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  return 0;
}

