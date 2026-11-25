/* IL2CPP: LavaQuestJoinOffer$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o LavaQuestJoinOffer__ApplyHomeAction (LavaQuestJoinOffer_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LavaQuestJoinOffer$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o LavaQuestJoinOffer__ApplyHomeAction (LavaQuestJoinOffer_o*
   __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16] LavaQuestJoinOffer__ApplyHomeAction_251cb74(long param_1)

{
  ulong uVar1;
  undefined1 auStack_28 [24];
  
  if (*(char *)(param_1 + 0x20) == '\0') {
    *(undefined1 *)(param_1 + 0x20) = 1;
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_0261cbd8:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar1 = LiveOpsModule__CanJoin_2547318(*(long *)(param_1 + 0x10),0xc,0);
    if ((uVar1 & 1) != 0) {
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_0261cbd8;
      LiveOpsModule__Show_253e230(auStack_28,*(long *)(param_1 + 0x10),0xc,1,0);
    }
  }
  return ZEXT816(0);
}

