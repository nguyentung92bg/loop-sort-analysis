/* IL2CPP: DailyChallenge$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o DailyChallenge__ApplyHomeAction (DailyChallenge_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o DailyChallenge__ApplyHomeAction (DailyChallenge_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16] DailyChallenge__ApplyHomeAction_25150b8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4be0d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be0d = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  if (*(char *)(param_1 + 0x58) == '\0') {
    lVar2 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      FUN_021f0574();
      lVar2 = *(long *)puVar1;
    }
    lVar2 = *(long *)(lVar2 + 0xb8);
    uStack_38 = *(undefined8 *)(lVar2 + 0x940);
    uStack_40 = *(undefined8 *)(lVar2 + 0x938);
    uStack_28 = *(undefined8 *)(lVar2 + 0x950);
    uStack_30 = *(undefined8 *)(lVar2 + 0x948);
    uVar3 = CloudPrefsBool__op_Implicit_24eb73c(&uStack_40,0);
    if (((uVar3 & 1) != 0) &&
       (uVar3 = DailyChallenge__HasUnclaimedReward_2515180(param_1), (uVar3 & 1) == 0))
    goto LAB_02615164;
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
  uVar3 = DailyChallenge__IsActive_2515358(param_1);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LiveOpsModule__Show_253e230(auStack_58,*(long *)(param_1 + 0x38),0x1c,1,0);
  }
LAB_02615164:
  return ZEXT816(0);
}

