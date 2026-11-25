/* IL2CPP: ProfileEditMonitor$$SaveProfileAsync
Cysharp_Threading_Tasks_UniTaskVoid_o ProfileEditMonitor__SaveProfileAsync (ProfileEditMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor$$SaveProfileAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o ProfileEditMonitor__SaveProfileAsync (ProfileEditMonitor_o*
   __this, const MethodInfo* method); */

undefined8 ProfileEditMonitor__SaveProfileAsync_2454ad8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c4990;
  if ((bRam0000000004f4b8e8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4990);
    bRam0000000004f4b8e8 = 1;
  }
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

