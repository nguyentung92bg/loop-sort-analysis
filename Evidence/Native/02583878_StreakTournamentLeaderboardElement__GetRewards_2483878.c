/* IL2CPP: StreakTournamentLeaderboardElement$$GetRewards
System_Collections_Generic_List_RewardInfo__o* StreakTournamentLeaderboardElement__GetRewards (StreakTournamentLeaderboardElement_o* __this, int32_t rank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboardElement$$GetRewards
   System_Collections_Generic_List_RewardInfo__o* StreakTournamentLeaderboardElement__GetRewards
   (StreakTournamentLeaderboardElement_o* __this, int32_t rank, const MethodInfo* method); */

void StreakTournamentLeaderboardElement__GetRewards_2483878(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4ba2c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b40);
    bRam0000000004f4ba2c = 1;
  }
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x118), lVar1 != 0)) {
    uStack_24 = param_2;
    lVar1 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar1,&uStack_24,*(undefined8 *)PTR_DAT_049c5b40);
    if (lVar1 != 0) {
      StreakTournamentLeaderboardRewardSheet_Row__GetRewards_25680d4(lVar1,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

