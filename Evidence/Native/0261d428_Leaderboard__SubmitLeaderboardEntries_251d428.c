/* IL2CPP: Leaderboard$$SubmitLeaderboardEntries
Cysharp_Threading_Tasks_UniTaskVoid_o Leaderboard__SubmitLeaderboardEntries (Leaderboard_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$SubmitLeaderboardEntries
   Cysharp_Threading_Tasks_UniTaskVoid_o Leaderboard__SubmitLeaderboardEntries (Leaderboard_o*
   __this, const MethodInfo* method); */

undefined8 Leaderboard__SubmitLeaderboardEntries_251d428(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c9618;
                    /* try { // try from 0261d448 to 0271d4af has its CatchHandler @ 0261d448
                       catch() { ... } // from try @ 0261d448 with catch @ 0261d448
                       catch() { ... } // from try @ 0261d600 with catch @ 0261d448
                       catch() { ... } // from try @ 0261d660 with catch @ 0261d448
                       catch() { ... } // from try @ 0261d6ac with catch @ 0261d448
                       catch() { ... } // from try @ 0261d718 with catch @ 0261d448 */
  if ((bRam0000000004f4be58 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9618);
    bRam0000000004f4be58 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  thunk_FUN_021f190c((ulong)&uStack_50 | 8,0);
  uStack_40 = param_1;
  thunk_FUN_021f190c(&uStack_40,param_1);
  uStack_50 = CONCAT44(uStack_50._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_50 | 8,&uStack_50,*(undefined8 *)puVar1);
                    /* try { // try from 0261d4b0 to 0271d4b7 has its CatchHandler @ 0261d4f8 */
  return 0;
}

