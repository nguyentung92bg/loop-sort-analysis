/* IL2CPP: LeaderboardModule$$FetchPage
Cysharp_Threading_Tasks_UniTask_LeaderboardPage__o LeaderboardModule__FetchPage (LeaderboardModule_o* __this, System_String_o* leaderboardId, int32_t limit, int32_t offset, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LeaderboardModule$$FetchPage
   Cysharp_Threading_Tasks_UniTask_LeaderboardPage__o LeaderboardModule__FetchPage
   (LeaderboardModule_o* __this, System_String_o* leaderboardId, int32_t limit, int32_t offset,
   System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void LeaderboardModule__FetchPage_2544b64
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5,undefined8 param_6)

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
                    /* try { // try from 02644b84 to 02744b8b has its CatchHandler @ 02644ce4 */
                    /* try { // try from 02644ba4 to 02744bef has its CatchHandler @ 02644cec */
  if ((bRam0000000004f4bffa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5440);
    FUN_021f03f8(PTR_DAT_049ca748);
    FUN_021f03f8(PTR_DAT_049b5450);
    bRam0000000004f4bffa = 1;
  }
  puVar3 = PTR_DAT_049ca748;
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
                    /* try { // try from 02644bf0 to 02744c0b has its CatchHandler @ 02644a70 */
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
                    /* try { // try from 02644c0c to 02744c23 has its CatchHandler @ 02644ce8 */
  func_0x04608670((ulong)&uStack_c0 | 8,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
                    /* try { // try from 02644c28 to 02744c33 has its CatchHandler @ 02644ce0 */
  thunk_FUN_021f190c((ulong)&uStack_c0 | 8,0);
  uStack_98 = param_2;
  thunk_FUN_021f190c(&uStack_98,param_2);
  uStack_90 = param_3;
  thunk_FUN_021f190c(&uStack_90,param_3);
                    /* try { // try from 02644c54 to 02744c5f has its CatchHandler @ 02644cd8 */
  uStack_88 = CONCAT44(param_5,param_4);
  uStack_80 = param_6;
  thunk_FUN_021f190c(&uStack_80,0);
  uStack_c0 = CONCAT44(uStack_c0._4_4_,0xffffffff);
  FUN_0235b6cc((ulong)&uStack_c0 | 8,&uStack_c0,*(undefined8 *)puVar3);
                    /* try { // try from 02644c88 to 02744c93 has its CatchHandler @ 02644cdc */
  FUN_0235b7ac((ulong)&uStack_c0 | 8,&uStack_e0,*(undefined8 *)puVar2);
                    /* try { // try from 02644c94 to 02744cc3 has its CatchHandler @ 02644a70 */
  param_1[1] = uStack_d8;
  *param_1 = uStack_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  return;
}

