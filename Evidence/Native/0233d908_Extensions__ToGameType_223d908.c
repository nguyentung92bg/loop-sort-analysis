/* IL2CPP: Extensions$$ToGameType
int32_t Extensions__ToGameType (Voodoo_Nakama_Services_AccountMergeResult_o* mergeResult, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$ToGameType
   int32_t Extensions__ToGameType (Voodoo_Nakama_Services_AccountMergeResult_o* mergeResult, const
   MethodInfo* method); */

byte Extensions__ToGameType_223d908(long param_1)

{
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(int *)(param_1 + 0x14) == 2) {
                    /* catch() { ... } // from try @ 0233d8e0 with catch @ 0233d91c */
    return 2;
  }
  return *(byte *)(param_1 + 0x10) ^ 1;
}

