/* IL2CPP: Extensions$$ToGameType
int32_t Extensions__ToGameType (Nakama_Custom_PeriodicLeaderboard_PeriodicLeaderboardEndResult_o* result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToGameType
   int32_t Extensions__ToGameType (Nakama_Custom_PeriodicLeaderboard_PeriodicLeaderboardEndResult_o*
   result, const MethodInfo* method); */

undefined4 Extensions__ToGameType_223d960(long param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(char *)(param_1 + 0x10) != '\0') {
    return 2;
  }
  if (*(uint *)(param_1 + 0x14) < 3) {
    return *(undefined4 *)(&UNK_013aa9c0 + (ulong)*(uint *)(param_1 + 0x14) * 4);
  }
  return 0;
}

