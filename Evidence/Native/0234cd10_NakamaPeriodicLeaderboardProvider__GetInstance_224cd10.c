/* IL2CPP: NakamaPeriodicLeaderboardProvider$$GetInstance
Cysharp_Threading_Tasks_UniTask_TournamentInstance__o NakamaPeriodicLeaderboardProvider__GetInstance (NakamaPeriodicLeaderboardProvider_o* __this, bool cached, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPeriodicLeaderboardProvider$$GetInstance
   Cysharp_Threading_Tasks_UniTask_TournamentInstance__o
   NakamaPeriodicLeaderboardProvider__GetInstance (NakamaPeriodicLeaderboardProvider_o* __this, bool
   cached, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method); */

void NakamaPeriodicLeaderboardProvider__GetInstance_224cd10
               (undefined8 param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_220 [144];
  undefined4 auStack_190 [2];
  undefined1 auStack_188 [144];
  byte bStack_f8;
  undefined8 auStack_f0 [20];
  
  puVar1 = PTR_DAT_049b5bc0;
  if ((bRam0000000004f49b72 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5bc0);
    FUN_021f03f8(PTR_DAT_049b5bc8);
    FUN_021f03f8(PTR_DAT_049b5bd0);
    bRam0000000004f49b72 = 1;
  }
  puVar3 = PTR_DAT_049b5bd0;
  puVar2 = PTR_DAT_049b5bc8;
  func_0x04608670(auStack_190,0,0x140);
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
                    /* try { // try from 0234cdac to 0244cddb has its CatchHandler @ 0234cdac
                       catch() { ... } // from try @ 0234cdac with catch @ 0234cdac
                       catch() { ... } // from try @ 0234cde8 with catch @ 0234cdac */
    lVar4 = FUN_02229718();
  }
  func_0x04608670(auStack_188,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c(auStack_188,0);
  bStack_f8 = param_3 & 1;
  auStack_f0[0] = param_4;
                    /* try { // try from 0234cddc to 0244cde7 has its CatchHandler @ 0234ce08 */
                    /* try { // try from 0234cde8 to 0244ce23 has its CatchHandler @ 0234cdac */
  thunk_FUN_021f190c(auStack_f0,0);
  auStack_190[0] = 0xffffffff;
  FUN_0235b6cc(auStack_188,auStack_190,*(undefined8 *)puVar2);
                    /* catch() { ... } // from try @ 0234cddc with catch @ 0234ce08 */
  FUN_0235b7ac(auStack_188,auStack_220,*(undefined8 *)puVar3);
  func_0x04608620(param_1,auStack_220,0x90);
  return;
}

