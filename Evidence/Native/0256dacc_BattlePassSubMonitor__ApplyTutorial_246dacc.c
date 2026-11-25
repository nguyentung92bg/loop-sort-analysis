/* IL2CPP: BattlePassSubMonitor$$ApplyTutorial
Cysharp_Threading_Tasks_UniTaskVoid_o BattlePassSubMonitor__ApplyTutorial (BattlePassSubMonitor_o* __this, UnityEngine_UI_LoopVerticalScrollRect_o* scrollRect, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BattlePassSubMonitor$$ApplyTutorial
   Cysharp_Threading_Tasks_UniTaskVoid_o BattlePassSubMonitor__ApplyTutorial
   (BattlePassSubMonitor_o* __this, UnityEngine_UI_LoopVerticalScrollRect_o* scrollRect, const
   MethodInfo* method); */

undefined8 BattlePassSubMonitor__ApplyTutorial_246dacc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = PTR_DAT_049c54d8;
  if ((bRam0000000004f4b99a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c54d8);
    bRam0000000004f4b99a = 1;
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
  uStack_48 = param_2;
  thunk_FUN_021f190c(&uStack_48,param_2);
  uStack_60 = CONCAT44(uStack_60._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_60 | 8,&uStack_60,*(undefined8 *)puVar1);
  return 0;
}

