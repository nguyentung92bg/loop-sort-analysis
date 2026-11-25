/* IL2CPP: SandFlowRenderer.DepositJob$$Add
void SandFlowRenderer_DepositJob__Add (SandFlowRenderer_DepositJob_o __this, float distance, float lateral, float volume, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer.DepositJob$$Add
   void SandFlowRenderer_DepositJob__Add (SandFlowRenderer_DepositJob_o __this, float distance,
   float lateral, float volume, const MethodInfo* method); */

void SandFlowRenderer_DepositJob__Add_24c57b0
               (float param_1,float param_2,float param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (0.0 < param_3) {
    fVar12 = *(float *)(param_4 + 0x40);
    if (cRam0000000004f4bc11 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4bc11 = '\x01';
    }
    param_1 = param_1 / fVar12;
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar12 = *(float *)(param_4 + 0x44);
    lVar9 = *(long *)(param_4 + 0x78);
    param_1 = param_1 - (float)(int)param_1;
    param_3 = *(float *)(param_4 + 0x48) * param_3;
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    if ((uint)ABS(param_1) < 0x7f800001) {
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      if (!NAN(param_1)) {
        bVar5 = param_1 < 1.0;
        bVar6 = param_1 == 1.0;
        bVar7 = false;
      }
    }
    fVar11 = 1.0;
    if (bVar6 || bVar5 != bVar7) {
      fVar11 = param_1;
    }
    iVar4 = *(int *)(param_4 + 0x3c);
    bVar5 = true;
    if (((uint)ABS(fVar11) < 0x7f800001) && (bVar5 = false, !NAN(fVar11))) {
      bVar5 = fVar11 < 0.0;
    }
    fVar10 = 0.0;
    if (!bVar5) {
      fVar10 = fVar11;
    }
    fVar10 = fVar10 * (float)iVar4;
    fVar12 = ((fVar12 + param_2) / (fVar12 + fVar12)) * 12.0 + -0.5;
    iVar2 = -0x80000000;
    if (fVar10 != INFINITY) {
      iVar2 = (int)fVar10;
    }
    if (iVar4 + -1 <= iVar2) {
      iVar2 = iVar4 + -1;
    }
    bVar5 = false;
    bVar6 = false;
    bVar7 = false;
    if ((uint)ABS(fVar12) < 0x7f800001) {
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar12)) {
        bVar5 = fVar12 < 11.0;
        bVar6 = fVar12 == 11.0;
        bVar7 = false;
      }
    }
    fVar11 = 11.0;
    if (bVar6 || bVar5 != bVar7) {
      fVar11 = fVar12;
    }
    bVar5 = true;
    if (((uint)ABS(fVar11) < 0x7f800001) && (bVar5 = false, !NAN(fVar11))) {
      bVar5 = fVar11 < 0.0;
    }
    fVar12 = 0.0;
    if (!bVar5) {
      fVar12 = fVar11;
    }
    iVar8 = (int)fVar12;
    if (10 < iVar8) {
      iVar8 = 0xb;
    }
    iVar3 = -0x80000000;
    if (fVar12 != INFINITY) {
      iVar3 = iVar8;
    }
    iVar8 = 0;
    if (iVar4 != 0) {
      iVar8 = (iVar2 + 1) / iVar4;
    }
    iVar1 = iVar3 + iVar2 * 0xc;
    fVar12 = fVar12 - (float)iVar3;
    fVar11 = param_3 * (fVar10 - (float)iVar2);
    param_3 = param_3 * (1.0 - (fVar10 - (float)iVar2));
    iVar8 = (iVar2 + 1) - iVar8 * iVar4;
    iVar4 = iVar3 + iVar8 * 0xc;
    if (9 < iVar3) {
      iVar3 = 10;
    }
    iVar2 = iVar3 + 1 + iVar2 * 0xc;
    iVar8 = iVar3 + 1 + iVar8 * 0xc;
    *(float *)(lVar9 + (long)iVar1 * 4) =
         *(float *)(lVar9 + (long)iVar1 * 4) + param_3 * (1.0 - fVar12);
    *(float *)(lVar9 + (long)iVar4 * 4) =
         *(float *)(lVar9 + (long)iVar4 * 4) + fVar11 * (1.0 - fVar12);
    *(float *)(lVar9 + (long)iVar2 * 4) = *(float *)(lVar9 + (long)iVar2 * 4) + param_3 * fVar12;
    *(float *)(lVar9 + (long)iVar8 * 4) = *(float *)(lVar9 + (long)iVar8 * 4) + fVar11 * fVar12;
  }
  return;
}

