/* IL2CPP: PlayingMonitor$$HandleTheme
Cysharp_Threading_Tasks_UniTaskVoid_o PlayingMonitor__HandleTheme (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$HandleTheme
   Cysharp_Threading_Tasks_UniTaskVoid_o PlayingMonitor__HandleTheme (PlayingMonitor_o* __this,
   const MethodInfo* method); */

undefined8 PlayingMonitor__HandleTheme_2450a08(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c4888;
  if ((bRam0000000004f4b8ca & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4888);
    bRam0000000004f4b8ca = 1;
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

