/* IL2CPP: FulfillModule.SuppressionScope$$Dispose
void FulfillModule_SuppressionScope__Dispose (FulfillModule_SuppressionScope_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillModule.SuppressionScope$$Dispose
   void FulfillModule_SuppressionScope__Dispose (FulfillModule_SuppressionScope_o* __this, const
   MethodInfo* method); */

void FulfillModule_SuppressionScope__Dispose_2543e80(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x10);
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    if (0 < *(int *)(lVar2 + 100)) {
      *(int *)(lVar2 + 100) = *(int *)(lVar2 + 100) + -1;
    }
    *plVar1 = 0;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)plVar1 >> 0xc & 0x3f),
                   ((ulong)plVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
  return;
}

