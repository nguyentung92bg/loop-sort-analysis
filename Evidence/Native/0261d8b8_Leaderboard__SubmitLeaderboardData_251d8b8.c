/* IL2CPP: Leaderboard$$SubmitLeaderboardData
Cysharp_Threading_Tasks_UniTask_bool__o Leaderboard__SubmitLeaderboardData (Leaderboard_o* __this, System_String_o* leaderboardId, int32_t value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$SubmitLeaderboardData
   Cysharp_Threading_Tasks_UniTask_bool__o Leaderboard__SubmitLeaderboardData (Leaderboard_o*
   __this, System_String_o* leaderboardId, int32_t value, const MethodInfo* method); */

undefined1  [16]
Leaderboard__SubmitLeaderboardData_251d8b8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 auStack_d8 [2];
  undefined1 auStack_d0 [24];
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_a8;
  undefined1 auStack_50 [16];
  
  puVar1 = PTR_DAT_049b5508;
  if ((bRam0000000004f4be59 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5508);
    FUN_021f03f8(PTR_DAT_049c9668);
    FUN_021f03f8(PTR_DAT_049b5518);
    bRam0000000004f4be59 = 1;
  }
  puVar3 = PTR_DAT_049c9668;
  puVar2 = PTR_DAT_049b5518;
  func_0x04608670(auStack_d8,0,0x88);
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670(auStack_d0,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c(auStack_d0,0);
  uStack_b8 = param_1;
  thunk_FUN_021f190c(&uStack_b8,param_1);
  uStack_b0 = param_2;
  thunk_FUN_021f190c(&uStack_b0,param_2);
  auStack_d8[0] = 0xffffffff;
  uStack_a8 = param_3;
  FUN_0235b6cc(auStack_d0,auStack_d8,*(undefined8 *)puVar3);
  FUN_0235b7ac(auStack_d0,auStack_50,*(undefined8 *)puVar2);
  return auStack_50;
}

