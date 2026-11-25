/* IL2CPP: SandFlowSystem$$JumpPace
float SandFlowSystem__JumpPace (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$JumpPace
   float SandFlowSystem__JumpPace (SandFlowSystem_o* __this, const MethodInfo* method); */

float SandFlowSystem__JumpPace_24c7240(long param_1)

{
  float fVar1;
  float fVar2;
  
  if (*(long *)(param_1 + 0x40) != 0) {
    fVar2 = *(float *)(*(long *)(param_1 + 0x40) + 0x144);
    fVar1 = 1.0;
    if (1.0 <= fVar2) {
      fVar1 = fVar2;
    }
    return *(float *)(param_1 + 0x1ac) / fVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

