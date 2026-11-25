/* IL2CPP: StreakTournamentPersonalRewardSheet.Row$$set_Rewards
void StreakTournamentPersonalRewardSheet_Row__set_Rewards (StreakTournamentPersonalRewardSheet_Row_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentPersonalRewardSheet.Row$$set_Rewards
   void StreakTournamentPersonalRewardSheet_Row__set_Rewards
   (StreakTournamentPersonalRewardSheet_Row_o* __this, System_String_o* value, const MethodInfo*
   method); */

void StreakTournamentPersonalRewardSheet_Row__set_Rewards_2568378(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 02667f38 with catch @ 02668378 */
  puVar1 = (undefined8 *)(param_1 + 0x20);
  *puVar1 = param_2;
                    /* catch() { ... } // from try @ 026682e8 with catch @ 0266837c */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

