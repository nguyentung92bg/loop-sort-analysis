/* IL2CPP: SandFlowRenderer.DepositJob$$Execute
void SandFlowRenderer_DepositJob__Execute (SandFlowRenderer_DepositJob_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer.DepositJob$$Execute
   void SandFlowRenderer_DepositJob__Execute (SandFlowRenderer_DepositJob_o __this, const
   MethodInfo* method); */

void SandFlowRenderer_DepositJob__Execute_24c51ec(long *param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined *puVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  float *pfVar19;
  long lVar20;
  long lVar21;
  char cVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined8 uStack_a8;
  
  uStack_a8 = 0;
  if (0 < (int)*(uint *)(param_1 + 0x10)) {
    func_0x04608670(param_1[0xf],0,(ulong)*(uint *)(param_1 + 0x10) << 2);
  }
  puVar12 = PTR_DAT_049b8758;
  fVar11 = _UNK_013aa964;
  fVar10 = _UNK_013aa960;
  fVar9 = _UNK_013aa94c;
  fVar8 = _UNK_013aa8c0;
  fVar7 = _UNK_013aa7b0;
  fVar6 = _UNK_013aa7ac;
  fVar5 = _UNK_013aa534;
  fVar4 = _UNK_013aa4bc;
  iVar17 = (int)param_1[2];
  if (0 < iVar17) {
    iVar16 = (int)param_1[5];
    lVar20 = 0;
    do {
      if (0 < iVar16) {
        piVar18 = (int *)(*param_1 + lVar20 * 0x28);
        lVar21 = 0;
        fVar29 = (float)piVar18[7];
        fVar36 = (float)piVar18[8];
        uVar2 = piVar18[9];
        fVar33 = (float)piVar18[5];
        fVar30 = (float)piVar18[6];
        bVar3 = *(byte *)(piVar18 + 2);
        bVar13 = true;
        if (((uint)ABS(fVar29) < 0x7f800001) && (bVar13 = false, !NAN(fVar29) && !NAN(fVar9))) {
          bVar13 = fVar29 < fVar9;
        }
        iVar17 = *piVar18;
        iVar1 = piVar18[1];
        fVar23 = fVar9;
        if (!bVar13) {
          fVar23 = fVar29;
        }
        fVar34 = fVar30 * fVar10;
        fVar24 = fVar30 * fVar8;
        fVar31 = (float)piVar18[3];
        fVar25 = (float)piVar18[4];
        do {
          pfVar19 = (float *)(param_1[3] + (long)(iVar17 + (int)lVar21) * 0x24);
          fVar44 = *pfVar19;
          fVar35 = pfVar19[1];
          fVar41 = pfVar19[8];
          fVar32 = pfVar19[2];
          fVar26 = pfVar19[3];
          fVar38 = pfVar19[4];
          fVar40 = pfVar19[5];
          fVar39 = pfVar19[6];
          fVar37 = pfVar19[7];
          if (((uVar2 & 1) == 0) || (fVar26 <= fVar29)) {
            if ((uVar2 & 1) == 0) {
              fVar26 = fVar36 - fVar25 * fVar26;
              bVar13 = true;
              if (((uint)ABS(fVar26) < 0x7f800001) && (bVar13 = false, !NAN(fVar26))) {
                bVar13 = fVar26 < 0.0;
              }
              fVar43 = 0.0;
              if (!bVar13) {
                fVar43 = fVar26;
              }
            }
            else {
              fVar43 = (fVar36 * (fVar29 - fVar26)) / fVar23;
            }
            fVar26 = *(float *)((long)param_1 + 0x2c);
            if (cRam0000000004f4bc12 == '\0') {
              FUN_021f03f8(puVar12);
              cRam0000000004f4bc12 = '\x01';
            }
            if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
              FUN_021f0574();
            }
            dVar27 = (double)FUN_04608720((double)(fVar38 * 25.0 + (fVar40 + fVar6) * fVar26));
            fVar42 = *(float *)((long)param_1 + 0x34);
            fVar26 = (fVar39 + -1.0) * fVar43;
            if (0.0 < fVar42) {
              fVar26 = fVar26 / fVar42;
              bVar13 = false;
              bVar14 = false;
              bVar15 = false;
              if ((uint)ABS(fVar26) < 0x7f800001) {
                bVar13 = false;
                bVar14 = false;
                bVar15 = true;
                if (!NAN(fVar26)) {
                  bVar13 = fVar26 < 8.0;
                  bVar14 = fVar26 == 8.0;
                  bVar15 = false;
                }
              }
              fVar39 = 8.0;
              if (bVar14 || bVar13 != bVar15) {
                fVar39 = fVar26;
              }
              if (cRam0000000004f4bc10 == '\0') {
                FUN_021f03f8(puVar12);
                cRam0000000004f4bc10 = '\x01';
              }
              if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
                FUN_021f0574();
              }
              dVar28 = -8.0;
              if (-8.0 <= fVar39 && (uint)ABS(fVar39) < 0x7f800001) {
                dVar28 = (double)fVar39;
              }
              dVar28 = (double)FUN_04608780(dVar28);
              fVar26 = fVar42 * (float)dVar28;
            }
            fVar26 = fVar31 + fVar33 * fVar44 + (float)dVar27 * fVar11 + fVar43 + fVar26;
            if ((bVar3 & 1) != 0) {
              fVar26 = fVar26 + *(float *)(param_1[0xc] + (long)(iVar1 + (int)lVar21) * 4);
            }
            uStack_a8 = CONCAT44(fVar26,(float)uStack_a8);
            if (cRam0000000004f4bc12 == '\0') {
              FUN_021f03f8(puVar12);
              cRam0000000004f4bc12 = '\x01';
            }
            if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
              FUN_021f0574();
              cVar22 = cRam0000000004f4bc12;
            }
            else {
              cVar22 = '\x01';
            }
            dVar27 = (double)FUN_04608720((double)(fVar37 + fVar41 * fVar43));
            fVar37 = *(float *)((long)param_1 + 0x2c);
            if (cVar22 == '\0') {
              FUN_021f03f8(puVar12);
              cRam0000000004f4bc12 = '\x01';
            }
            if (*(int *)(*(long *)puVar12 + 0xe4) == 0) {
              FUN_021f0574();
            }
            dVar28 = (double)FUN_04608720((double)(fVar40 * 19.0 + (fVar38 + fVar5) * fVar37));
            fVar35 = fVar35 + fVar30 * (float)dVar27 * fVar7 + (float)dVar28 * fVar4;
            uStack_a8._0_4_ = fVar35;
            if (1 < (int)param_1[0xe]) {
              SandFlowRenderer_DepositJob__ApplyFlow_24c5674
                        (fVar30,param_1,(long)&uStack_a8 + 4,&uStack_a8);
              fVar26 = uStack_a8._4_4_;
            }
            bVar13 = true;
            if (((uint)ABS((float)uStack_a8) < 0x7f800001) &&
               (bVar13 = false, !NAN(fVar24) && !NAN((float)uStack_a8))) {
              bVar13 = fVar24 < (float)uStack_a8;
            }
            fVar35 = fVar24;
            if (!bVar13) {
              fVar35 = (float)uStack_a8;
            }
            bVar13 = true;
            if (((uint)ABS(fVar35) < 0x7f800001) && (bVar13 = false, !NAN(fVar35) && !NAN(fVar34)))
            {
              bVar13 = fVar35 < fVar34;
            }
            fVar37 = fVar34;
            if (!bVar13) {
              fVar37 = fVar35;
            }
            uStack_a8 = CONCAT44(uStack_a8._4_4_,fVar37);
            SandFlowRenderer_DepositJob__Add_24c57b0
                      (fVar26 - *(float *)(param_1 + 6),fVar37,
                       fVar32 * fVar32 * fVar32 * *(float *)(param_1 + 7),param_1);
            iVar16 = (int)param_1[5];
          }
          lVar21 = lVar21 + 1;
        } while (lVar21 < iVar16);
        iVar17 = (int)param_1[2];
      }
      lVar20 = lVar20 + 1;
    } while (lVar20 < iVar17);
  }
  return;
}

