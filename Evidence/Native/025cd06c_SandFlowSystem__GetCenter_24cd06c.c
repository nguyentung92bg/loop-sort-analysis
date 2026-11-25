/* IL2CPP: SandFlowSystem$$GetCenter
float SandFlowSystem__GetCenter (SandFlowSystem_o* __this, SandFlowPacket_o* packet, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$GetCenter
   float SandFlowSystem__GetCenter (SandFlowSystem_o* __this, SandFlowPacket_o* packet, const
   MethodInfo* method); */

float SandFlowSystem__GetCenter_24cd06c(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if ((*(long *)(param_1 + 0x160) != 0) && (*(long *)(param_1 + 0x168) != 0)) {
    fVar3 = *(float *)(*(long *)(param_1 + 0x160) + 0xa4);
    fVar2 = 1.0;
    if (fVar3 <= 1.0) {
      fVar2 = fVar3;
    }
    fVar1 = 1.0;
    if (0.0 <= fVar3) {
      fVar1 = fVar2 * -0.5 + 1.0;
    }
    fVar3 = (*(float *)(*(long *)(param_1 + 0x168) + 800) - *(float *)(param_2 + 0x8c)) -
            *(float *)(param_2 + 0x14) * fVar1;
    fVar2 = 0.0;
    if (0.0 <= fVar3) {
      fVar2 = fVar3;
    }
    return *(float *)(param_2 + 0x88) + fVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

