/* IL2CPP: NakamaPeriodicLeaderboardProvider$$Submit
Cysharp_Threading_Tasks_UniTask_TournamentOperationResult__o NakamaPeriodicLeaderboardProvider__Submit (NakamaPeriodicLeaderboardProvider_o* __this, int64_t score, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPeriodicLeaderboardProvider$$Submit
   Cysharp_Threading_Tasks_UniTask_TournamentOperationResult__o
   NakamaPeriodicLeaderboardProvider__Submit (NakamaPeriodicLeaderboardProvider_o* __this, int64_t
   score, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

undefined1  [16]
NakamaPeriodicLeaderboardProvider__Submit_224ce40
          (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 auStack_138 [2];
  undefined1 auStack_130 [24];
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_60 [16];
  
  puVar1 = PTR_DAT_049b5bd8;
  if ((bRam0000000004f49b73 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5bd8);
    FUN_021f03f8(PTR_DAT_049b5be0);
    FUN_021f03f8(PTR_DAT_049b5be8);
    bRam0000000004f49b73 = 1;
  }
  puVar3 = PTR_DAT_049b5be8;
  puVar2 = PTR_DAT_049b5be0;
  func_0x04608670(auStack_138,0,0xd8);
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670(auStack_130,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c(auStack_130,0);
  uStack_118 = param_1;
  thunk_FUN_021f190c(&uStack_118,param_1);
  uStack_110 = param_3;
  uStack_108 = param_2;
  thunk_FUN_021f190c(&uStack_110,0);
  auStack_138[0] = 0xffffffff;
  FUN_0235b6cc(auStack_130,auStack_138,*(undefined8 *)puVar2);
  FUN_0235b7ac(auStack_130,auStack_60,*(undefined8 *)puVar3);
  return auStack_60;
}

