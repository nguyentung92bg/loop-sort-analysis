/* IL2CPP: NakamaLeaderboardProvider$$Submit
Cysharp_Threading_Tasks_UniTask_LeaderboardEntry__o NakamaLeaderboardProvider__Submit (NakamaLeaderboardProvider_o* __this, System_String_o* leaderboardId, int64_t value, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaLeaderboardProvider$$Submit
   Cysharp_Threading_Tasks_UniTask_LeaderboardEntry__o NakamaLeaderboardProvider__Submit
   (NakamaLeaderboardProvider_o* __this, System_String_o* leaderboardId, int64_t value,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void NakamaLeaderboardProvider__Submit_224b400
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_120 [80];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
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
  
  puVar1 = PTR_DAT_049b5af0;
  if ((bRam0000000004f49b69 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5af0);
    FUN_021f03f8(PTR_DAT_049b5af8);
    FUN_021f03f8(PTR_DAT_049b5b00);
    bRam0000000004f49b69 = 1;
  }
  puVar3 = PTR_DAT_049b5b00;
  puVar2 = PTR_DAT_049b5af8;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_d0 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_d0 | 8,0);
  uStack_78 = param_3;
  thunk_FUN_021f190c(&uStack_78,param_3);
  uStack_70 = param_4;
  uStack_68 = param_5;
  thunk_FUN_021f190c(&uStack_68,0);
  uStack_d0 = CONCAT44(uStack_d0._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_d0 | 8,&uStack_d0,*(undefined8 *)puVar2);
  FUN_0235b7ac((ulong)&uStack_d0 | 8,auStack_120,*(undefined8 *)puVar3);
  func_0x04608620(param_1,auStack_120,0x50);
  return;
}

