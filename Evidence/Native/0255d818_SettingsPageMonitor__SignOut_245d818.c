/* IL2CPP: SettingsPageMonitor$$SignOut
Cysharp_Threading_Tasks_UniTaskVoid_o SettingsPageMonitor__SignOut (SettingsPageMonitor_o* __this, int32_t authType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$SignOut
   Cysharp_Threading_Tasks_UniTaskVoid_o SettingsPageMonitor__SignOut (SettingsPageMonitor_o*
   __this, int32_t authType, const MethodInfo* method); */

undefined8 SettingsPageMonitor__SignOut_245d818(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049c4e70;
  if ((bRam0000000004f4b92c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4e70);
    bRam0000000004f4b92c = 1;
  }
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  thunk_FUN_021f190c((ulong)&uStack_70 | 8,0);
  uStack_58 = param_1;
  thunk_FUN_021f190c(&uStack_58,param_1);
  uStack_60 = CONCAT44(uStack_60._4_4_,param_2);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  return 0;
}

