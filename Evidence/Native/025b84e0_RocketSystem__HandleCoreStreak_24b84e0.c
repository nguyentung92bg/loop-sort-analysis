/* IL2CPP: RocketSystem$$HandleCoreStreak
Cysharp_Threading_Tasks_UniTaskVoid_o RocketSystem__HandleCoreStreak (RocketSystem_o* __this, CoreStreakRocketFireMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RocketSystem$$HandleCoreStreak
   Cysharp_Threading_Tasks_UniTaskVoid_o RocketSystem__HandleCoreStreak (RocketSystem_o* __this,
   CoreStreakRocketFireMessage_o m, const MethodInfo* method); */

undefined8 RocketSystem__HandleCoreStreak_24b84e0(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c6d98;
  if ((bRam0000000004f4bba6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6d98);
    bRam0000000004f4bba6 = 1;
  }
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  thunk_FUN_021f190c((ulong)&uStack_60 | 8,0);
  uStack_50 = param_1;
  thunk_FUN_021f190c(&uStack_50,param_1);
  uStack_48 = CONCAT44(uStack_48._4_4_,param_2);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  return 0;
}

