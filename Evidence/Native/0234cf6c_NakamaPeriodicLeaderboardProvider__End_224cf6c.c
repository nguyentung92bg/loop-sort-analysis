/* IL2CPP: NakamaPeriodicLeaderboardProvider$$End
Cysharp_Threading_Tasks_UniTask_TournamentOperationResult__o NakamaPeriodicLeaderboardProvider__End (NakamaPeriodicLeaderboardProvider_o* __this, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPeriodicLeaderboardProvider$$End
   Cysharp_Threading_Tasks_UniTask_TournamentOperationResult__o
   NakamaPeriodicLeaderboardProvider__End (NakamaPeriodicLeaderboardProvider_o* __this,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16]
NakamaPeriodicLeaderboardProvider__End_224cf6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 auStack_120 [2];
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 auStack_f8 [21];
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_049b5bd8;
  if ((bRam0000000004f49b74 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5bd8);
    FUN_021f03f8(PTR_DAT_049b5bf0);
    FUN_021f03f8(PTR_DAT_049b5be8);
    bRam0000000004f49b74 = 1;
  }
  puVar3 = PTR_DAT_049b5bf0;
  puVar2 = PTR_DAT_049b5be8;
  func_0x04608670(auStack_120,0,0xd0);
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670(auStack_118,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c(auStack_118,0);
  uStack_100 = param_1;
  thunk_FUN_021f190c(&uStack_100,param_1);
  auStack_f8[0] = param_2;
  thunk_FUN_021f190c(auStack_f8,0);
  auStack_120[0] = 0xffffffff;
  FUN_0235b6cc(auStack_118,auStack_120,*(undefined8 *)puVar3);
  FUN_0235b7ac(auStack_118,auStack_50,*(undefined8 *)puVar2);
  return auStack_50;
}

