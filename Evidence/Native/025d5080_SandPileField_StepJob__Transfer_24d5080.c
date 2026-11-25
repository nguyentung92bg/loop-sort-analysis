/* IL2CPP: SandPileField.StepJob$$Transfer
void SandPileField_StepJob__Transfer (SandPileField_StepJob_o __this, int32_t first, int32_t second, float spacing, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField.StepJob$$Transfer
   void SandPileField_StepJob__Transfer (SandPileField_StepJob_o __this, int32_t first, int32_t
   second, float spacing, const MethodInfo* method); */

void SandPileField_StepJob__Transfer_24d5080(float param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(*(long *)(param_2 + 0x20) + (long)param_3 * 4);
  fVar5 = *(float *)(*(long *)(param_2 + 0x20) + (long)param_4 * 4);
  fVar2 = ABS(fVar3 - fVar5) - *(float *)(param_2 + 0xa8) * param_1;
  if (0.0 < fVar2) {
    fVar3 = fVar3 - fVar5;
    lVar1 = *(long *)(param_2 + 0x40);
    fVar5 = 1.0;
    if (fVar3 == 0.0 || 0.0 > fVar3) {
      fVar5 = 0.0;
    }
    fVar4 = 1.0;
    if (0.0 <= fVar3) {
      fVar4 = 0.0;
    }
    fVar2 = fVar2 * (fVar5 - fVar4) * *(float *)(param_2 + 0xac);
    *(float *)(lVar1 + (long)param_3 * 4) = *(float *)(lVar1 + (long)param_3 * 4) - fVar2;
    *(float *)(lVar1 + (long)param_4 * 4) = fVar2 + *(float *)(lVar1 + (long)param_4 * 4);
  }
  return;
}

