/* IL2CPP: Leaderboard$$EndTournament
Cysharp_Threading_Tasks_UniTask_TournamentEndOutcome__o Leaderboard__EndTournament (Leaderboard_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$EndTournament
   Cysharp_Threading_Tasks_UniTask_TournamentEndOutcome__o Leaderboard__EndTournament
   (Leaderboard_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo*
   method); */

undefined1  [16] Leaderboard__EndTournament_251db24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 auStack_130 [2];
  undefined1 auStack_128 [24];
  undefined8 uStack_110;
  undefined8 auStack_108 [23];
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_049c9678;
  if ((bRam0000000004f4be5b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9678);
    FUN_021f03f8(PTR_DAT_049c9680);
    FUN_021f03f8(PTR_DAT_049c9688);
    bRam0000000004f4be5b = 1;
  }
  puVar3 = PTR_DAT_049c9688;
  puVar2 = PTR_DAT_049c9680;
  func_0x04608670(auStack_130,0,0xe0);
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670(auStack_128,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c(auStack_128,0);
  uStack_110 = param_1;
  thunk_FUN_021f190c(&uStack_110,param_1);
  auStack_108[0] = param_2;
  thunk_FUN_021f190c(auStack_108,0);
  auStack_130[0] = 0xffffffff;
  FUN_0235b6cc(auStack_128,auStack_130,*(undefined8 *)puVar2);
  FUN_0235b7ac(auStack_128,auStack_50,*(undefined8 *)puVar3);
  return auStack_50;
}

