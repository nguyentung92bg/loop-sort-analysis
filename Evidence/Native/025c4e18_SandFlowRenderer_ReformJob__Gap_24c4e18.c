/* IL2CPP: SandFlowRenderer.ReformJob$$Gap
float SandFlowRenderer_ReformJob__Gap (SandFlowRenderer_ReformJob_o __this, int32_t index, float elapsed, float* portal, float* nominal, float* offset, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer.ReformJob$$Gap
   float SandFlowRenderer_ReformJob__Gap (SandFlowRenderer_ReformJob_o __this, int32_t index, float
   elapsed, float* portal, float* nominal, float* offset, const MethodInfo* method); */

float SandFlowRenderer_ReformJob__Gap_24c4e18
                (float param_1,long *param_2,int param_3,float *param_4,float *param_5,
                float *param_6)

{
  undefined *puVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  double dStack_88;
  
  lVar6 = *param_2 + (long)param_3 * 0x24;
  iVar12 = *(int *)((long)param_2 + 0x6c);
  fVar9 = *(float *)(lVar6 + 0xc);
  fVar14 = *(float *)(lVar6 + 0x18);
  fVar7 = (float)SandFlowRenderer_ReformJob__Hash_24c5128((int)param_2[0xe] * 0x511);
  fVar7 = (float)SandFlowRenderer_ReformJob__Repeat_24c5158
                           (((float)param_3 + 0.5) / (float)iVar12 + fVar7,0x3f800000);
  puVar1 = PTR_DAT_049b8758;
  fVar16 = *(float *)((long)param_2 + 0xac);
  fVar10 = 0.0;
  fVar13 = fVar7 + fVar7 + -1.0;
  fVar7 = (*(float *)(param_2 + 0x12) - *(float *)(param_2 + 0x13)) -
          fVar9 * *(float *)((long)param_2 + 0x9c);
  bVar3 = true;
  if (((uint)ABS(fVar7) < 0x7f800001) && (bVar3 = false, !NAN(fVar7))) {
    bVar3 = fVar7 < 0.0;
  }
  fVar9 = 0.0;
  if (!bVar3) {
    fVar9 = fVar7;
  }
  fVar15 = ABS(fVar13) * _UNK_013aa62c + _UNK_013aa4f4;
  fVar7 = (fVar14 + -1.0) * fVar9;
  if (0.0 < fVar16) {
    fVar7 = fVar7 / fVar16;
    bVar3 = false;
    bVar4 = false;
    bVar5 = false;
    if ((uint)ABS(fVar7) < 0x7f800001) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar7)) {
        bVar3 = fVar7 < 8.0;
        bVar4 = fVar7 == 8.0;
        bVar5 = false;
      }
    }
    fVar14 = 8.0;
    if (bVar4 || bVar3 != bVar5) {
      fVar14 = fVar7;
    }
    if (cRam0000000004f4bc10 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4bc10 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    dVar8 = -8.0;
    if (-8.0 <= fVar14 && (uint)ABS(fVar14) < 0x7f800001) {
      dVar8 = (double)fVar14;
    }
    dVar8 = (double)FUN_04608780(dVar8);
    fVar7 = fVar16 * (float)dVar8;
  }
  if ((char)param_2[8] != '\0') {
    fVar10 = *(float *)(param_2[2] + (long)param_3 * 4);
  }
  *param_6 = fVar10;
  cVar2 = cRam0000000004f4bc0f;
  fVar10 = fVar10 + fVar7 + fVar9 + *(float *)((long)param_2 + 0x94) +
                                    fVar13 * fVar15 * *(float *)(param_2 + 0x15);
  *param_5 = fVar10;
  fVar7 = *(float *)(param_2 + 0x16);
  fVar10 = *(float *)(param_2 + 0x14) - fVar10;
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4bc0f = '\x01';
  }
  fVar7 = fVar10 / fVar7;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  dVar11 = (double)fVar7;
  dVar8 = (double)FUN_04608690(dVar11,&dStack_88);
  if (0.0 <= fVar7) {
    if (dVar8 != 0.5) {
      dStack_88 = (double)(long)(dVar11 + 0.5);
      goto LAB_025c507c;
    }
    dVar8 = 1.0;
  }
  else {
    if (dVar8 != -0.5) {
      dStack_88 = (double)(long)(dVar11 + -0.5);
      goto LAB_025c507c;
    }
    dVar8 = -1.0;
  }
  if (((long)dStack_88 & 1U) != 0) {
    dStack_88 = dStack_88 + dVar8;
  }
LAB_025c507c:
  param_1 = *(float *)((long)param_2 + 0xa4) * param_1;
  fVar9 = (fVar10 - *(float *)(param_2 + 0x16) * (float)dStack_88) + param_1;
  fVar7 = (float)SandFlowRenderer_ReformJob__Repeat_24c5158(*param_5 - param_1);
  fVar10 = 0.0;
  if ((((char)param_2[0x17] == '\0') && (0.0 <= fVar9)) && (*(float *)(param_2 + 0x14) < fVar7)) {
    fVar10 = (*(float *)(param_2 + 0x16) - fVar7) / *(float *)((long)param_2 + 0xa4);
  }
  lVar6 = param_2[0xe];
  *param_4 = fVar10;
  fVar7 = (float)SandFlowRenderer_ReformJob__Hash_24c5128(param_3 + (int)lVar6 * 0x407 + 0x1613);
  return fVar9 + fVar7 * *(float *)((long)param_2 + 0xb4);
}

