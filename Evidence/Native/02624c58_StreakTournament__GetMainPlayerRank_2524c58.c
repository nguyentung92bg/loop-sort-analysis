/* IL2CPP: StreakTournament$$GetMainPlayerRank
int32_t StreakTournament__GetMainPlayerRank (StreakTournament_o* __this, System_Collections_Generic_List_StreakTournamentPlayer__o* leaderboard, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$GetMainPlayerRank
   int32_t StreakTournament__GetMainPlayerRank (StreakTournament_o* __this,
   System_Collections_Generic_List_StreakTournamentPlayer__o* leaderboard, const MethodInfo*
   method); */

int StreakTournament__GetMainPlayerRank_2524c58(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  byte abStack_60 [64];
  
  if ((bRam0000000004f4bea4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5bc8);
    FUN_021f03f8(PTR_DAT_049c5b20);
    bRam0000000004f4bea4 = 1;
  }
  puVar2 = PTR_DAT_049c5b20;
  if (param_2 != 0) {
    if (0 < *(int *)(param_2 + 0x18)) {
      iVar3 = 1;
      do {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                  (param_2,iVar3 + -1,abStack_60,*(undefined8 *)puVar2);
        if ((abStack_60[0] & 1) != 0) {
          return iVar3;
        }
        bVar1 = iVar3 < *(int *)(param_2 + 0x18);
        iVar3 = iVar3 + 1;
      } while (bVar1);
    }
    return -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

