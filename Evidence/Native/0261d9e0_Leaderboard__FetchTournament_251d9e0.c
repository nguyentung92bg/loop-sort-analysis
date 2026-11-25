/* IL2CPP: Leaderboard$$FetchTournament
Cysharp_Threading_Tasks_UniTask_TournamentInstance__o Leaderboard__FetchTournament (Leaderboard_o* __this, bool cached, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$FetchTournament
   Cysharp_Threading_Tasks_UniTask_TournamentInstance__o Leaderboard__FetchTournament
   (Leaderboard_o* __this, bool cached, System_Threading_CancellationToken_o cancellationToken,
   const MethodInfo* method); */

void Leaderboard__FetchTournament_251d9e0
               (undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_220 [144];
  undefined4 auStack_190 [2];
  undefined1 auStack_188 [144];
  undefined8 uStack_f8;
  byte bStack_f0;
  undefined8 auStack_e8 [19];
  
  puVar1 = PTR_DAT_049b5bc0;
  if ((bRam0000000004f4be5a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5bc0);
    FUN_021f03f8(PTR_DAT_049c9670);
    FUN_021f03f8(PTR_DAT_049b5bd0);
    bRam0000000004f4be5a = 1;
  }
  puVar3 = PTR_DAT_049c9670;
  puVar2 = PTR_DAT_049b5bd0;
  func_0x04608670(auStack_190,0,0x140);
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670(auStack_188,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c(auStack_188,0);
  uStack_f8 = param_2;
  thunk_FUN_021f190c(&uStack_f8,param_2);
  bStack_f0 = param_3 & 1;
  auStack_e8[0] = param_4;
  thunk_FUN_021f190c(auStack_e8,0);
  auStack_190[0] = 0xffffffff;
  FUN_0235b6cc(auStack_188,auStack_190,*(undefined8 *)puVar3);
  FUN_0235b7ac(auStack_188,auStack_220,*(undefined8 *)puVar2);
  func_0x04608620(param_1,auStack_220,0x90);
  return;
}

