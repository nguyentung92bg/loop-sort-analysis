/* IL2CPP: AreasMonitor$$PlayPop
Cysharp_Threading_Tasks_UniTaskVoid_o AreasMonitor__PlayPop (AreasMonitor_o* __this, UnityEngine_Transform_o* t, float scale, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor$$PlayPop
   Cysharp_Threading_Tasks_UniTaskVoid_o AreasMonitor__PlayPop (AreasMonitor_o* __this,
   UnityEngine_Transform_o* t, float scale, const MethodInfo* method); */

undefined8 AreasMonitor__PlayPop_2437934(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c3c00;
  if ((bRam0000000004f4b803 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3c00);
    bRam0000000004f4b803 = 1;
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
  uStack_60 = param_2;
  thunk_FUN_021f190c(&uStack_60,param_2);
  uStack_50 = param_3;
  thunk_FUN_021f190c(&uStack_50,param_3);
  uStack_58 = CONCAT44(uStack_58._4_4_,param_1);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  return 0;
}

