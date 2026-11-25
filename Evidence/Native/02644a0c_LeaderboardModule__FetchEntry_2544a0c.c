/* IL2CPP: LeaderboardModule$$FetchEntry
Cysharp_Threading_Tasks_UniTask_LeaderboardPage__o LeaderboardModule__FetchEntry (LeaderboardModule_o* __this, System_String_o* leaderboardId, System_String_o* ownerId, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LeaderboardModule$$FetchEntry
   Cysharp_Threading_Tasks_UniTask_LeaderboardPage__o LeaderboardModule__FetchEntry
   (LeaderboardModule_o* __this, System_String_o* leaderboardId, System_String_o* ownerId,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void LeaderboardModule__FetchEntry_2544a0c
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  puVar1 = PTR_DAT_049b5440;
  if ((bRam0000000004f4bff9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5440);
    FUN_021f03f8(PTR_DAT_049ca740);
    FUN_021f03f8(PTR_DAT_049b5450);
                    /* try { // try from 02644a70 to 02744b83 has its CatchHandler @ 02644a70
                       catch() { ... } // from try @ 02644a70 with catch @ 02644a70
                       catch() { ... } // from try @ 02644bf0 with catch @ 02644a70
                       catch() { ... } // from try @ 02644c94 with catch @ 02644a70
                       catch() { ... } // from try @ 02644ccc with catch @ 02644a70
                       catch() { ... } // from try @ 02644d0c with catch @ 02644a70
                       catch() { ... } // from try @ 02644d30 with catch @ 02644a70 */
    bRam0000000004f4bff9 = 1;
  }
  puVar3 = PTR_DAT_049ca740;
  puVar2 = PTR_DAT_049b5450;
  uStack_60 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670((ulong)&uStack_c0 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c((ulong)&uStack_c0 | 8,0);
  uStack_98 = param_2;
  thunk_FUN_021f190c(&uStack_98,param_2);
  uStack_90 = param_3;
  thunk_FUN_021f190c(&uStack_90,param_3);
  uStack_88 = param_4;
  thunk_FUN_021f190c(&uStack_88,param_4);
  uStack_80 = param_5;
  thunk_FUN_021f190c(&uStack_80,0);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_c0 | 8,&uStack_c0,*(undefined8 *)puVar3);
  FUN_0235b7ac((ulong)&uStack_c0 | 8,&uStack_e0,*(undefined8 *)puVar2);
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  return;
}

