/* IL2CPP: LevelAnimationSystem$$HandleLevelEnterAnimation
Cysharp_Threading_Tasks_UniTaskVoid_o LevelAnimationSystem__HandleLevelEnterAnimation (LevelAnimationSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LevelAnimationSystem$$HandleLevelEnterAnimation
   Cysharp_Threading_Tasks_UniTaskVoid_o LevelAnimationSystem__HandleLevelEnterAnimation
   (LevelAnimationSystem_o* __this, const MethodInfo* method); */

undefined8 LevelAnimationSystem__HandleLevelEnterAnimation_24d7d4c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c77d0;
  if ((bRam0000000004f4bc43 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c77d0);
    bRam0000000004f4bc43 = 1;
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

