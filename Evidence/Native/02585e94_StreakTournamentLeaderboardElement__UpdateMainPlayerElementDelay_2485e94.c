/* IL2CPP: StreakTournamentLeaderboardElement$$UpdateMainPlayerElementDelay
Cysharp_Threading_Tasks_UniTaskVoid_o StreakTournamentLeaderboardElement__UpdateMainPlayerElementDelay (StreakTournamentLeaderboardElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboardElement$$UpdateMainPlayerElementDelay
   Cysharp_Threading_Tasks_UniTaskVoid_o
   StreakTournamentLeaderboardElement__UpdateMainPlayerElementDelay
   (StreakTournamentLeaderboardElement_o* __this, const MethodInfo* method); */

undefined8
StreakTournamentLeaderboardElement__UpdateMainPlayerElementDelay_2485e94(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c5bc0;
  if ((bRam0000000004f4ba25 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5bc0);
    bRam0000000004f4ba25 = 1;
  }
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_28 = 0;
  uStack_30 = 0;
  thunk_FUN_021f190c((ulong)&uStack_40 | 8,0);
  uStack_30 = param_1;
  thunk_FUN_021f190c(&uStack_30,param_1);
  uStack_40 = CONCAT44(uStack_40._4_4_,0xffffffff);
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskVoidMethodBuilder__Start___Il2CppFullySharedGenericType__25b2be0
            ((ulong)&uStack_40 | 8,&uStack_40,*(undefined8 *)puVar1);
  return 0;
}

