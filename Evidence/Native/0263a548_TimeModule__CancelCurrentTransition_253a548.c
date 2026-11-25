/* IL2CPP: TimeModule$$CancelCurrentTransition
void TimeModule__CancelCurrentTransition (TimeModule_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TimeModule$$CancelCurrentTransition
   void TimeModule__CancelCurrentTransition (TimeModule_o* __this, const MethodInfo* method); */

void TimeModule__CancelCurrentTransition_253a548(long param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(param_1 + 0x10);
  if (*plVar1 != 0) {
    System_Threading_CancellationTokenSource__Cancel_31658dc(*plVar1,0);
    if (*plVar1 != 0) {
      System_Threading_CancellationTokenSource__Dispose_3165db0(*plVar1,0);
    }
  }
  *plVar1 = 0;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                 ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

