/* IL2CPP: LiveOpsDeepLink$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o LiveOpsDeepLink__ApplyHomeAction (LiveOpsDeepLink_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsDeepLink$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o LiveOpsDeepLink__ApplyHomeAction (LiveOpsDeepLink_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void LiveOpsDeepLink__ApplyHomeAction_2521e64(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  puVar1 = PTR_DAT_049c9810;
  if ((bRam0000000004f4be78 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9810);
    bRam0000000004f4be78 = 1;
  }
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
  uStack_38 = param_1;
  thunk_FUN_021f190c(&uStack_38,param_1);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_50 | 8,0);
  return;
}

