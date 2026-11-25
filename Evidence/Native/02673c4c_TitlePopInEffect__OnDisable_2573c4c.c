/* IL2CPP: TitlePopInEffect$$OnDisable
void TitlePopInEffect__OnDisable (TitlePopInEffect_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TitlePopInEffect$$OnDisable
   void TitlePopInEffect__OnDisable (TitlePopInEffect_o* __this, const MethodInfo* method); */

void TitlePopInEffect__OnDisable_2573c4c(long param_1)

{
  long *plVar1;
  
                    /* try { // try from 02673c50 to 02773c57 has its CatchHandler @ 02673f88 */
  plVar1 = (long *)(param_1 + 0x30);
  if (*plVar1 != 0) {
    System_Threading_CancellationTokenSource__Cancel_31658dc(*plVar1,0);
    if (*plVar1 != 0) {
      System_Threading_CancellationTokenSource__Dispose_3165db0(*plVar1,0);
                    /* try { // try from 02673c74 to 02773cbf has its CatchHandler @ 02673f8c */
      *plVar1 = 0;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                     ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

