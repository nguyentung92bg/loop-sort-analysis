/* IL2CPP: Leaderboard$$FetchLeaderboard
Cysharp_Threading_Tasks_UniTask_o Leaderboard__FetchLeaderboard (Leaderboard_o* __this, System_String_o* leaderboardId, int32_t limit, int32_t offset, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$FetchLeaderboard
   Cysharp_Threading_Tasks_UniTask_o Leaderboard__FetchLeaderboard (Leaderboard_o* __this,
   System_String_o* leaderboardId, int32_t limit, int32_t offset,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void Leaderboard__FetchLeaderboard_251d7d0
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  puVar1 = PTR_DAT_049c9660;
  if ((bRam0000000004f4be57 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9660);
    bRam0000000004f4be57 = 1;
  }
  uStack_50 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  thunk_FUN_021f190c((ulong)&uStack_c0 | 8,0);
  uStack_a0 = param_1;
  thunk_FUN_021f190c(&uStack_a0,param_1);
  uStack_a8 = param_2;
  thunk_FUN_021f190c(&uStack_a8,param_2);
  uStack_90 = CONCAT44(param_3,param_4);
  uStack_98 = param_5;
  thunk_FUN_021f190c(&uStack_98,0);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
  FUN_0235c17c((ulong)&uStack_c0 | 8,&uStack_c0,*(undefined8 *)puVar1);
  FUN_0235acf0((ulong)&uStack_c0 | 8,0);
  return;
}

