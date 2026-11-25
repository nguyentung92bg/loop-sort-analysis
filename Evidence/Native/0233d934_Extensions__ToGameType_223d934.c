/* IL2CPP: Extensions$$ToGameType
int32_t Extensions__ToGameType (Nakama_Custom_PeriodicLeaderboard_PeriodicLeaderboardSyncResult_o* result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToGameType
   int32_t Extensions__ToGameType
   (Nakama_Custom_PeriodicLeaderboard_PeriodicLeaderboardSyncResult_o* result, const MethodInfo*
   method); */

int Extensions__ToGameType_223d934(long param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 0233d938 to 0243d9ab has its CatchHandler @ 0233d938
                       catch() { ... } // from try @ 0233d938 with catch @ 0233d938
                       catch() { ... } // from try @ 0233d9b8 with catch @ 0233d938 */
  if (*(char *)(param_1 + 0x10) != '\0') {
    return 2;
  }
  iVar1 = 0;
  if (*(uint *)(param_1 + 0x14) < 3) {
    iVar1 = *(uint *)(param_1 + 0x14) + 1;
  }
  return iVar1;
}

