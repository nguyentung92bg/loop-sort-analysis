/* IL2CPP: SandFlowRenderer$$CompleteDeposit
void SandFlowRenderer__CompleteDeposit (SandFlowRenderer_o* __this, bool apply, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$CompleteDeposit
   void SandFlowRenderer__CompleteDeposit (SandFlowRenderer_o* __this, bool apply, const MethodInfo*
   method); */

void SandFlowRenderer__CompleteDeposit_24bef9c(long param_1,ulong param_2)

{
  if (-1 < *(int *)(param_1 + 0x230)) {
    Unity_Jobs_JobHandle__Complete_3bbf1cc(param_1 + 0x220,0);
    if ((param_2 & 1) != 0) {
      if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      SandPileField__SetSlice_24d4290
                (*(long *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0x230),
                 *(undefined8 *)(param_1 + 0x1e0),*(undefined8 *)(param_1 + 0x1e8),0);
    }
    *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
  }
  return;
}

