/* IL2CPP: SandFlowRenderer$$SetSwing
void SandFlowRenderer__SetSwing (SandFlowRenderer_o* __this, float amount, float length, float overshoot, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$SetSwing
   void SandFlowRenderer__SetSwing (SandFlowRenderer_o* __this, float amount, float length, float
   overshoot, const MethodInfo* method); */

void SandFlowRenderer__SetSwing_24bbfc0(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = 0.25;
  if (0.25 <= param_2) {
    fVar1 = param_2;
  }
  fVar3 = 1.0;
  if (param_3 <= 1.0) {
    fVar3 = param_3;
  }
  fVar2 = 0.0;
  if (0.0 <= param_3) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)(param_4 + 0x158) - param_1;
  fVar4 = *(float *)(param_4 + 0x15c) - fVar1;
  fVar5 = *(float *)(param_4 + 0x160) - fVar2;
  if (_UNK_013aa3dc <= fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) {
    *(float *)(param_4 + 0x158) = param_1;
    *(float *)(param_4 + 0x15c) = fVar1;
    *(float *)(param_4 + 0x160) = fVar2;
    *(undefined1 *)(param_4 + 0x1a0) = 1;
  }
  return;
}

