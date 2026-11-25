/* IL2CPP: HomeMonitor$$LoadHomeScene
Cysharp_Threading_Tasks_UniTaskVoid_o HomeMonitor__LoadHomeScene (HomeMonitor_o* __this, int32_t sceneIdx, int32_t type, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeMonitor$$LoadHomeScene
   Cysharp_Threading_Tasks_UniTaskVoid_o HomeMonitor__LoadHomeScene (HomeMonitor_o* __this, int32_t
   sceneIdx, int32_t type, const MethodInfo* method); */

undefined8
HomeMonitor__LoadHomeScene_2447da8(undefined8 param_1,undefined4 param_2,undefined4 param_3)

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
  
  puVar1 = PTR_DAT_049c43c0;
  if ((bRam0000000004f4b875 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c43c0);
    bRam0000000004f4b875 = 1;
  }
  uStack_40 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  thunk_FUN_021f190c((ulong)&uStack_80 | 8,0);
  uStack_70 = param_1;
  thunk_FUN_021f190c(&uStack_70,param_1);
  uStack_68 = CONCAT44(param_3,param_2);
  uStack_80 = CONCAT44(uStack_80._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_80 | 8,&uStack_80,*(undefined8 *)puVar1);
  return 0;
}

