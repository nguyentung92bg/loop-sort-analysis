/* IL2CPP: SandFlowRenderer.DepositJob$$ApplyFlow
void SandFlowRenderer_DepositJob__ApplyFlow (SandFlowRenderer_DepositJob_o __this, float* distance, float* lateral, float wall, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer.DepositJob$$ApplyFlow
   void SandFlowRenderer_DepositJob__ApplyFlow (SandFlowRenderer_DepositJob_o __this, float*
   distance, float* lateral, float wall, const MethodInfo* method); */

void SandFlowRenderer_DepositJob__ApplyFlow_24c5674
               (float param_1,float param_2,long param_3,float *param_4,float *param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_44;
  
  fStack_44 = 0.0;
  fVar5 = (float)SandFlowRenderer_DepositJob__SampleFlow_24c5994(*param_4,param_3,&fStack_44);
  fVar7 = *param_5;
  if (fVar7 * param_2 < 0.0) {
    param_1 = ABS(param_2) * param_1;
    bVar1 = true;
    if (((uint)ABS(param_1) < 0x7f800001) && (bVar1 = false, !NAN(param_1) && !NAN(_UNK_013aa8d8)))
    {
      bVar1 = param_1 < _UNK_013aa8d8;
    }
    fVar6 = _UNK_013aa8d8;
    if (!bVar1) {
      fVar6 = param_1;
    }
    fVar6 = *(float *)(param_3 + 0x74) / fVar6;
    bVar1 = false;
    bVar2 = false;
    bVar3 = false;
    if ((uint)ABS(fVar6) < 0x7f800001) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar6)) {
        bVar1 = fVar6 < 1.0;
        bVar2 = fVar6 == 1.0;
        bVar3 = false;
      }
    }
    fVar9 = 1.0;
    if (bVar2 || bVar1 != bVar3) {
      fVar9 = fVar6;
    }
    bVar1 = true;
    if (((uint)ABS(fVar9) < 0x7f800001) && (bVar1 = false, !NAN(fVar9))) {
      bVar1 = fVar9 < 0.0;
    }
    fVar6 = 0.0;
    if (!bVar1) {
      fVar6 = fVar9;
    }
    fVar7 = fVar7 * fVar6;
    *param_5 = fVar7;
  }
  fVar6 = _UNK_013aa5f0;
  fVar9 = *param_4;
  iVar4 = 3;
  *param_4 = fVar9 - fVar5 * fVar7;
  do {
    fVar5 = (float)SandFlowRenderer_DepositJob__SampleFlow_24c5994(param_3,&fStack_44);
    fVar7 = *param_5 * fStack_44 + 1.0;
    bVar1 = true;
    if (((uint)ABS(fVar7) < 0x7f800001) && (bVar1 = false, !NAN(fVar7) && !NAN(fVar6))) {
      bVar1 = fVar7 < fVar6;
    }
    fVar8 = fVar6;
    if (!bVar1) {
      fVar8 = fVar7;
    }
    iVar4 = iVar4 + -1;
    *param_4 = *param_4 - ((*param_4 + fVar5 * *param_5) - fVar9) / fVar8;
  } while (iVar4 != 0);
  return;
}

