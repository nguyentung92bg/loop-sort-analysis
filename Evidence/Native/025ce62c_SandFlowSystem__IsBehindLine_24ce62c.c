/* IL2CPP: SandFlowSystem$$IsBehindLine
bool SandFlowSystem__IsBehindLine (SandFlowSystem_o* __this, SandFlowPacket_o* packet, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$IsBehindLine
   bool SandFlowSystem__IsBehindLine (SandFlowSystem_o* __this, SandFlowPacket_o* packet, const
   MethodInfo* method); */

bool SandFlowSystem__IsBehindLine_24ce62c(long param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(long *)(param_1 + 0x168);
  if (lVar1 != 0) {
    fVar2 = (*(float *)(lVar1 + 800) - *(float *)(param_2 + 0x8c)) - *(float *)(param_2 + 0x14);
    fVar5 = _UNK_013aa94c;
    if (_UNK_013aa94c <= *(float *)(lVar1 + 0x318)) {
      fVar5 = *(float *)(lVar1 + 0x318);
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar2;
    }
    fVar3 = fVar5 * 0.5 + ((*(float *)(param_2 + 0x88) + fVar3) - *(float *)(param_2 + 0x10));
    fVar3 = fVar3 - fVar5 * (float)(int)(fVar3 / fVar5);
    fVar2 = fVar5;
    if (fVar3 <= fVar5) {
      fVar2 = fVar3;
    }
    fVar4 = 0.0;
    if (0.0 <= fVar3) {
      fVar4 = fVar2;
    }
    return fVar4 - fVar5 * 0.5 < 0.0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

