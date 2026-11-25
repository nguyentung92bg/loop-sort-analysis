/* IL2CPP: NakamaPeriodicLeaderboardProvider$$CreateTournamentInstance
Cysharp_Threading_Tasks_UniTask_TournamentInstance__o NakamaPeriodicLeaderboardProvider__CreateTournamentInstance (System_String_o* instanceId, int32_t featureState, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaPeriodicLeaderboardProvider$$CreateTournamentInstance
   Cysharp_Threading_Tasks_UniTask_TournamentInstance__o
   NakamaPeriodicLeaderboardProvider__CreateTournamentInstance (System_String_o* instanceId, int32_t
   featureState, System_Threading_CancellationToken_o cancellationToken, const MethodInfo* method);
    */

void NakamaPeriodicLeaderboardProvider__CreateTournamentInstance_224d08c
               (undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_228 [144];
  undefined4 auStack_198 [2];
  undefined1 auStack_190 [144];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  
  puVar1 = PTR_DAT_049b5bc0;
  if ((bRam0000000004f49b75 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5bc0);
    FUN_021f03f8(PTR_DAT_049b5bf8);
    FUN_021f03f8(PTR_DAT_049b5bd0);
    bRam0000000004f49b75 = 1;
  }
  puVar3 = PTR_DAT_049b5bf8;
  puVar2 = PTR_DAT_049b5bd0;
  func_0x04608670(auStack_198,0,0x148);
  lVar4 = *(long *)(*(long *)puVar1 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718();
  }
  func_0x04608670(auStack_190,0,*(undefined4 *)(**(long **)(lVar4 + 0xc0) + 0xfc));
  thunk_FUN_021f190c(auStack_190,0);
  uStack_100 = param_2;
  thunk_FUN_021f190c(&uStack_100,param_2);
  uStack_f8 = param_4;
  uStack_f0 = param_3;
  thunk_FUN_021f190c(&uStack_f8,0);
                    /* try { // try from 0234d178 to 0244d17b has its CatchHandler @ 0234d184 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0234d178 with catch @ 0234d184
                        */
  auStack_198[0] = 0xffffffff;
  FUN_0235b6cc(auStack_190,auStack_198,*(undefined8 *)puVar3);
  FUN_0235b7ac(auStack_190,auStack_228,*(undefined8 *)puVar2);
  func_0x04608620(param_1,auStack_228,0x90);
  return;
}

