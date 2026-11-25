/* IL2CPP: Leaderboard$$ApplyHomeAction
Cysharp_Threading_Tasks_UniTask_o Leaderboard__ApplyHomeAction (Leaderboard_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$ApplyHomeAction
   Cysharp_Threading_Tasks_UniTask_o Leaderboard__ApplyHomeAction (Leaderboard_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16] Leaderboard__ApplyHomeAction_251d224(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4be54 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be54 = 1;
  }
  uVar4 = Leaderboard__IsActive_251d2f4(param_1);
  puVar1 = PTR_DAT_049b5310;
  if ((uVar4 & 1) != 0) {
    Leaderboard__SubmitTournamentEntry_251d394(param_1);
    lVar5 = *(long *)puVar1;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_021f0574();
      lVar5 = *(long *)puVar1;
    }
    lVar5 = *(long *)(lVar5 + 0xb8);
    uStack_38 = *(undefined8 *)(lVar5 + 0x68);
    uStack_40 = *(undefined8 *)(lVar5 + 0x60);
    uStack_28 = *(undefined8 *)(lVar5 + 0x78);
    uStack_30 = *(undefined8 *)(lVar5 + 0x70);
    iVar2 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_40,0);
    lVar5 = *(long *)(*(long *)puVar1 + 0xb8);
    uStack_58 = *(undefined8 *)(lVar5 + 0x7f8);
    uStack_60 = *(undefined8 *)(lVar5 + 0x7f0);
    uStack_48 = *(undefined8 *)(lVar5 + 0x808);
    uStack_50 = *(undefined8 *)(lVar5 + 0x800);
    iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_60,0);
    if (iVar2 + 1 != iVar3) {
      Leaderboard__SubmitLeaderboardEntries_251d428(param_1);
      Leaderboard__ExpireSnapshots_251d4b8(param_1);
    }
  }
  return ZEXT816(0);
}

