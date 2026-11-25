/* IL2CPP: DailyRewards$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o DailyRewards__ApplyHomeAction (DailyRewards_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyRewards$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o DailyRewards__ApplyHomeAction (DailyRewards_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16] DailyRewards__ApplyHomeAction_2517740(long param_1)

{
  ulong uVar1;
  undefined1 auStack_28 [24];
  
  if (*(long *)(param_1 + 0x40) != 0) {
    if (((*(char *)(*(long *)(param_1 + 0x40) + 0x10) != '\0') &&
        (uVar1 = DailyRewards__IsRewardAvailable_25177a8(), (uVar1 & 1) != 0)) &&
       (*(char *)(param_1 + 0x48) == '\0')) {
      *(undefined1 *)(param_1 + 0x48) = 1;
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_026177a4;
      LiveOpsModule__Show_253e230(auStack_28,*(long *)(param_1 + 0x38),0xd,1,0);
    }
    return ZEXT816(0);
  }
LAB_026177a4:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

