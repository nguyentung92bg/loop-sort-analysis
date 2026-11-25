/* IL2CPP: SandFlowSystem$$UpdateTravelSpeed
void SandFlowSystem__UpdateTravelSpeed (SandFlowSystem_o* __this, float deltaTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$UpdateTravelSpeed
   void SandFlowSystem__UpdateTravelSpeed (SandFlowSystem_o* __this, float deltaTime, const
   MethodInfo* method); */

void SandFlowSystem__UpdateTravelSpeed_24cbc08(float param_1,long param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if ((*(long *)(param_2 + 0x40) != 0) && (*(long *)(param_2 + 0x160) != 0)) {
    fVar1 = *(float *)(*(long *)(param_2 + 0x160) + 0x88);
    fVar4 = *(float *)(param_2 + 0x1a0);
    fVar2 = 0.0;
    if (0.0 <= fVar1) {
      fVar2 = fVar1;
    }
    fVar1 = 0.0;
    if (0.0 <= param_1) {
      fVar1 = param_1;
    }
    fVar3 = *(float *)(*(long *)(param_2 + 0x40) + 0x140);
    fVar1 = (float)FUN_04608770(fVar1 / _UNK_013aa880);
    *(float *)(param_2 + 0x1a0) = fVar4 + (1.0 - fVar1) * (fVar3 * fVar2 - fVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

