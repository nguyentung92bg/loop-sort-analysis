/* IL2CPP: Leaderboard$$CreateLeaderboard
Cysharp_Threading_Tasks_UniTask_LeaderboardSnapshot__o Leaderboard__CreateLeaderboard (Leaderboard_o* __this, System_String_o* leaderboardId, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$CreateLeaderboard
   Cysharp_Threading_Tasks_UniTask_LeaderboardSnapshot__o Leaderboard__CreateLeaderboard
   (Leaderboard_o* __this, System_String_o* leaderboardId, System_Threading_CancellationToken_o
   cancellationToken, const MethodInfo* method); */

void Leaderboard__CreateLeaderboard_251d684
               (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined4 auStack_178 [2];
  undefined1 auStack_170 [24];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 auStack_148 [31];
  
  puVar1 = PTR_DAT_049c9648;
                    /* try { // try from 0261d694 to 0271d6ab has its CatchHandler @ 0261d710 */
                    /* try { // try from 0261d6ac to 0271d6ff has its CatchHandler @ 0261d448 */
  if ((bRam0000000004f4be56 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9648);
    FUN_021f03f8(PTR_DAT_049c9650);
    FUN_021f03f8(PTR_DAT_049c9658);
    bRam0000000004f4be56 = 1;
  }
  puVar3 = PTR_DAT_049c9658;
  puVar2 = PTR_DAT_049c9650;
                    /* try { // try from 0261d700 to 0271d70f has its CatchHandler @ 0261d710 */
  func_0x04608670(auStack_178,0,0x128);
                    /* catch() { ... } // from try @ 0261d694 with catch @ 0261d710
                       catch() { ... } // from try @ 0261d700 with catch @ 0261d710 */
                    /* try { // try from 0261d714 to 0271d717 has its CatchHandler @ 0261d720 */
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
                    /* try { // try from 0261d718 to 0271d723 has its CatchHandler @ 0261d448 */
                    /* catch() { ... } // from try @ 0261d714 with catch @ 0261d720 */
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670(auStack_170,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c(auStack_170,0);
  uStack_158 = param_2;
  thunk_FUN_021f190c(&uStack_158,param_2);
  uStack_150 = param_3;
  thunk_FUN_021f190c(&uStack_150,param_3);
  auStack_148[0] = param_4;
  thunk_FUN_021f190c(auStack_148,0);
  auStack_178[0] = 0xffffffff;
  FUN_0235b6cc(auStack_170,auStack_178,*(undefined8 *)puVar2);
  FUN_0235b7ac(auStack_170,&uStack_190,*(undefined8 *)puVar3);
  param_1[1] = uStack_188;
  *param_1 = uStack_190;
  param_1[2] = uStack_180;
  return;
}

