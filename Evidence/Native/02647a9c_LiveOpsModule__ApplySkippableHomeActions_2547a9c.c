/* IL2CPP: LiveOpsModule$$ApplySkippableHomeActions
Cysharp_Threading_Tasks_UniTask_o LiveOpsModule__ApplySkippableHomeActions (LiveOpsModule_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule$$ApplySkippableHomeActions
   Cysharp_Threading_Tasks_UniTask_o LiveOpsModule__ApplySkippableHomeActions (LiveOpsModule_o*
   __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void LiveOpsModule__ApplySkippableHomeActions_2547a9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049ca7d8;
  if ((bRam0000000004f4c013 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca7d8);
    bRam0000000004f4c013 = 1;
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
  uStack_88 = 0;
  uStack_90 = 0;
  thunk_FUN_021f190c((ulong)&uStack_90 | 8,0);
  uStack_78 = param_1;
  thunk_FUN_021f190c(&uStack_78,param_1);
  uStack_68 = CONCAT71(uStack_68._1_7_,1);
  uStack_70 = param_2;
  thunk_FUN_021f190c(&uStack_70,0);
  uStack_90 = CONCAT44(uStack_90._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_90 | 8,&uStack_90,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_90 | 8,0);
  return;
}

