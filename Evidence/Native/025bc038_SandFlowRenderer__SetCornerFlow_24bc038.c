/* IL2CPP: SandFlowRenderer$$SetCornerFlow
void SandFlowRenderer__SetCornerFlow (SandFlowRenderer_o* __this, float evenness, float smoothing, float reach, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$SetCornerFlow
   void SandFlowRenderer__SetCornerFlow (SandFlowRenderer_o* __this, float evenness, float
   smoothing, float reach, const MethodInfo* method); */

void SandFlowRenderer__SetCornerFlow_24bc038(float param_1,float param_2,float param_3,long param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar2 = 1.0;
  if (param_1 <= 1.0) {
    fVar2 = param_1;
  }
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = fVar2;
  }
  fVar2 = _UNK_013aa810;
  if (_UNK_013aa810 <= param_2) {
    fVar2 = param_2;
  }
  fVar4 = 1.0;
  if (param_3 <= 1.0) {
    fVar4 = param_3;
  }
  fVar3 = _UNK_013aa810;
  if (_UNK_013aa810 <= param_3) {
    fVar3 = fVar4;
  }
  fVar4 = *(float *)(param_4 + 0x164) - fVar1;
  fVar5 = *(float *)(param_4 + 0x168) - fVar2;
  fVar6 = *(float *)(param_4 + 0x16c) - fVar3;
  if (_UNK_013aa3dc <= fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5) {
    *(float *)(param_4 + 0x164) = fVar1;
    *(float *)(param_4 + 0x168) = fVar2;
    *(float *)(param_4 + 0x16c) = fVar3;
    *(undefined1 *)(param_4 + 0x1a0) = 1;
  }
  return;
}

