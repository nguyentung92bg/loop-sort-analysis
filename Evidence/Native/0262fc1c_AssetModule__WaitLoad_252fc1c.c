/* IL2CPP: AssetModule$$WaitLoad
Cysharp_Threading_Tasks_UniTaskVoid_o AssetModule__WaitLoad (AssetModule_o* __this, UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o handle, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AssetModule$$WaitLoad
   Cysharp_Threading_Tasks_UniTaskVoid_o AssetModule__WaitLoad (AssetModule_o* __this,
   UnityEngine_ResourceManagement_AsyncOperations_AsyncOperationHandle_o handle, const MethodInfo*
   method); */

undefined8 AssetModule__WaitLoad_252fc1c(undefined8 param_1,undefined8 *param_2)

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
  
  puVar1 = PTR_DAT_049c9e80;
  if ((bRam0000000004f4bf12 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9e80);
    bRam0000000004f4bf12 = 1;
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
  uStack_48 = param_1;
  thunk_FUN_021f190c(&uStack_48,param_1);
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_50 = param_2[2];
  thunk_FUN_021f190c(&uStack_60,0);
  uStack_70 = CONCAT44(uStack_70._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_70 | 8,&uStack_70,*(undefined8 *)puVar1);
  return 0;
}

