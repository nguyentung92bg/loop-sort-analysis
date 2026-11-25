/* IL2CPP: NakamaLeaderboardProvider$$FetchPage
Cysharp_Threading_Tasks_UniTask_LeaderboardPage__o NakamaLeaderboardProvider__FetchPage (NakamaLeaderboardProvider_o* __this, System_String_o* leaderboardId, int32_t limit, int32_t offset, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaLeaderboardProvider$$FetchPage
   Cysharp_Threading_Tasks_UniTask_LeaderboardPage__o NakamaLeaderboardProvider__FetchPage
   (NakamaLeaderboardProvider_o* __this, System_String_o* leaderboardId, int32_t limit, int32_t
   offset, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void NakamaLeaderboardProvider__FetchPage_224b678
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
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
  
  puVar1 = PTR_DAT_049b5440;
  if ((bRam0000000004f49b6b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5440);
    FUN_021f03f8(PTR_DAT_049b5b10);
    FUN_021f03f8(PTR_DAT_049b5450);
    bRam0000000004f49b6b = 1;
  }
  puVar3 = PTR_DAT_049b5b10;
  puVar2 = PTR_DAT_049b5450;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_a0 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_a0 | 8,0);
  uStack_78 = param_3;
  thunk_FUN_021f190c(&uStack_78,param_3);
  uStack_70 = CONCAT44(param_5,param_4);
  uStack_68 = param_6;
  thunk_FUN_021f190c(&uStack_68,0);
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_a0 | 8,&uStack_a0,*(undefined8 *)puVar3);
  FUN_0235b7ac((ulong)&uStack_a0 | 8,&uStack_c0,*(undefined8 *)puVar2);
  param_1[1] = uStack_b8;
  *param_1 = uStack_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return;
}

