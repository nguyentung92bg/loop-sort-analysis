/* IL2CPP: SandPileField.StepJob$$Execute
void SandPileField_StepJob__Execute (SandPileField_StepJob_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField.StepJob$$Execute
   void SandPileField_StepJob__Execute (SandPileField_StepJob_o __this, const MethodInfo* method);
    */

void SandPileField_StepJob__Execute_24d4850(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  float *pfVar12;
  int iVar13;
  undefined8 uVar14;
  byte bVar15;
  long lVar16;
  long lVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int iVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  
                    /* try { // try from 025d4858 to 026d48db has its CatchHandler @ 025d47c4 */
  if (*(char *)(param_1 + 0x80) != '\0') {
    SandPileField_StepJob__RelaxDeposit_24d4b28(param_1);
  }
  uVar11 = (ulong)*(uint *)(param_1 + 0x84);
  if (0 < (int)*(uint *)(param_1 + 0x84)) {
    lVar16 = 0;
    do {
      uVar18 = SandPileField_StepJob__DriftAt_24d4c6c
                         ((((float)(int)lVar16 + 0.5) / (float)(int)uVar11) *
                          *(float *)(param_1 + 0x90) + *(float *)(param_1 + 0xa0),param_1);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d484c with catch @ 025d48c0
                        */
      uVar11 = (ulong)*(int *)(param_1 + 0x84);
      *(undefined4 *)(*(long *)(param_1 + 0x50) + lVar16 * 4) = uVar18;
      lVar16 = lVar16 + 1;
    } while (lVar16 < (long)uVar11);
  }
  SandPileField_StepJob__BuildBankedTarget_24d4d84(param_1);
                    /* try { // try from 025d48dc to 026d48df has its CatchHandler @ 025d48ec */
  if (*(int *)(param_1 + 0x68) < 1) {
    bVar15 = 0;
  }
  else {
    lVar17 = 0;
                    /* catch() { ... } // from try @ 025d48dc with catch @ 025d48ec */
    lVar16 = 0;
                    /* try { // try from 025d48f0 to 026d48f7 has its CatchHandler @ 025d4900 */
    bVar15 = 0;
    do {
                    /* try { // try from 025d48f8 to 026d4903 has its CatchHandler @ 025d47c4 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d48f0 with catch @ 025d4900
                        */
      pfVar12 = (float *)(*(long *)(param_1 + 0x60) + lVar17);
      uVar14 = *(undefined8 *)(pfVar12 + 1);
      fVar20 = pfVar12[3];
      fVar28 = *pfVar12;
      fVar19 = (float)SandPileField_StepJob__CapHeight_24d4f38
                                (*(undefined4 *)(*(long *)(param_1 + 0x30) + lVar16 * 4),
                                 *(undefined4 *)(param_1 + 0xc0));
      fVar21 = *(float *)(param_1 + 0xa4);
      lVar16 = lVar16 + 1;
      pfVar12 = (float *)(*(long *)(param_1 + 0x60) + lVar17);
      lVar17 = lVar17 + 0x10;
      *(undefined8 *)(pfVar12 + 1) = uVar14;
      pfVar12[3] = fVar20;
      fVar20 = fVar28 + (fVar19 - fVar28) * fVar21;
      *pfVar12 = fVar20;
      bVar15 = bVar15 | fVar20 != fVar28;
    } while (lVar16 < *(int *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x84) < 1) {
    fVar20 = 0.0;
  }
  else {
    iVar10 = 0;
    fVar20 = 0.0;
    iVar13 = 0;
    do {
      lVar16 = 0;
      iVar1 = iVar13 + 1;
      do {
        iVar23 = *(int *)(param_1 + 0x84);
        iVar27 = (int)lVar16;
        iVar22 = iVar13 + -1 + iVar23;
        iVar26 = 0;
        if (iVar23 != 0) {
          iVar26 = iVar1 / iVar23;
        }
        iVar6 = 0;
        if (iVar23 != 0) {
          iVar6 = iVar22 / iVar23;
        }
        uVar4 = iVar27 + (iVar22 - iVar6 * iVar23) * 0xc;
        iVar22 = iVar27;
        if (iVar27 < 2) {
          iVar22 = 1;
        }
        uVar5 = iVar27 + (iVar1 - iVar26 * iVar23) * 0xc;
        lVar16 = lVar16 + 1;
        iVar23 = (int)lVar16;
        uVar2 = iVar22 + -1 + iVar13 * 0xc;
        lVar17 = *(long *)(param_1 + 0x60);
        if (10 < iVar23) {
          iVar23 = 0xb;
        }
        uVar3 = iVar23 + iVar13 * 0xc;
        pfVar12 = (float *)(lVar17 + (long)(iVar10 + iVar27) * 0x10);
        fVar28 = *(float *)(param_1 + 0xbc);
        fVar25 = *(float *)(param_1 + 0xb4);
        fVar19 = (-(*(float *)(lVar17 + (-(ulong)(uVar5 >> 0x1f) & 0xfffffff000000000 |
                                        (ulong)uVar5 << 4)) -
                   *(float *)(lVar17 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff000000000 |
                                       (ulong)uVar4 << 4))) /
                 ((float)*(undefined8 *)(param_1 + 0x98) * 2.0)) * *(float *)(param_1 + 0xb8);
        fVar21 = (-(*(float *)(lVar17 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 |
                                        (ulong)uVar3 << 4)) -
                   *(float *)(lVar17 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff000000000 |
                                       (ulong)uVar2 << 4))) /
                 ((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) *
                 (float)(iVar23 - (iVar22 + -1)))) * *(float *)(param_1 + 0xb0);
        iVar26 = -(uint)(fVar28 < fVar19);
        iVar27 = -(uint)(fVar25 < fVar21);
        iVar22 = -(uint)(0x7f800000 < (uint)ABS(fVar19));
        iVar23 = -(uint)(0x7f800000 < (uint)ABS(fVar21));
        uVar11 = CONCAT44(fVar21,fVar19) ^
                 (CONCAT44(fVar21,fVar19) ^ CONCAT44(fVar25,fVar28)) &
                 CONCAT17((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar23 >> 0x18),
                          CONCAT16((byte)((uint)iVar27 >> 0x10) | (byte)((uint)iVar23 >> 0x10),
                                   CONCAT15((byte)((uint)iVar27 >> 8) | (byte)((uint)iVar23 >> 8),
                                            CONCAT14((byte)iVar27 | (byte)iVar23,
                                                     CONCAT13((byte)((uint)iVar26 >> 0x18) |
                                                              (byte)((uint)iVar22 >> 0x18),
                                                              CONCAT12((byte)((uint)iVar26 >> 0x10)
                                                                       | (byte)((uint)iVar22 >> 0x10
                                                                               ),
                                                                       CONCAT11((byte)((uint)iVar26
                                                                                      >> 8) |
                                                                                (byte)((uint)iVar22
                                                                                      >> 8),
                                                                                (byte)iVar26 |
                                                                                (byte)iVar22)))))));
        fVar19 = (float)(uVar11 >> 0x20);
        iVar26 = -(uint)((float)uVar11 < -fVar28);
        iVar27 = -(uint)(fVar19 < -fVar25);
        iVar22 = -(uint)(0x7f800000 < (uint)ABS((float)uVar11));
        iVar23 = -(uint)(0x7f800000 < (uint)ABS(fVar19));
        uVar11 = uVar11 ^ (uVar11 ^ CONCAT44(-fVar25,-fVar28)) &
                          CONCAT17((byte)((uint)iVar27 >> 0x18) | (byte)((uint)iVar23 >> 0x18),
                                   CONCAT16((byte)((uint)iVar27 >> 0x10) |
                                            (byte)((uint)iVar23 >> 0x10),
                                            CONCAT15((byte)((uint)iVar27 >> 8) |
                                                     (byte)((uint)iVar23 >> 8),
                                                     CONCAT14((byte)iVar27 | (byte)iVar23,
                                                              CONCAT13((byte)((uint)iVar26 >> 0x18)
                                                                       | (byte)((uint)iVar22 >> 0x18
                                                                               ),
                                                                       CONCAT12((byte)((uint)iVar26
                                                                                      >> 0x10) |
                                                                                (byte)((uint)iVar22
                                                                                      >> 0x10),
                                                                                CONCAT11((byte)((
                                                  uint)iVar26 >> 8) | (byte)((uint)iVar22 >> 8),
                                                  (byte)iVar26 | (byte)iVar22)))))));
        fVar28 = (float)*(undefined8 *)(pfVar12 + 1);
        fVar25 = (float)((ulong)*(undefined8 *)(pfVar12 + 1) >> 0x20);
        fVar24 = *pfVar12;
        fVar19 = fVar28 + ((float)uVar11 - fVar28) * *(float *)(param_1 + 0xa4);
        fVar21 = fVar25 + ((float)(uVar11 >> 0x20) - fVar25) * *(float *)(param_1 + 0xa4);
        bVar7 = false;
        bVar8 = false;
        bVar9 = false;
        if ((uint)ABS(fVar24) < 0x7f800001) {
          bVar7 = false;
          bVar8 = false;
          bVar9 = true;
          if (!NAN(fVar20) && !NAN(fVar24)) {
            bVar7 = fVar20 < fVar24;
            bVar8 = fVar20 == fVar24;
            bVar9 = false;
          }
        }
        *(ulong *)(pfVar12 + 1) = CONCAT44(fVar21,fVar19);
        if (bVar8 || bVar7 != bVar9) {
          fVar20 = fVar24;
        }
        bVar15 = bVar15 | ~(fVar21 == fVar25) | ~(fVar19 == fVar28);
      } while (lVar16 != 0xc);
      iVar10 = iVar10 + 0xc;
      iVar13 = iVar1;
    } while (iVar1 < *(int *)(param_1 + 0x84));
  }
  pfVar12 = *(float **)(param_1 + 0x70);
  fVar19 = 1.0;
  if (!(bool)(bVar15 & 1)) {
    fVar19 = 0.0;
  }
  *pfVar12 = fVar20;
  pfVar12[1] = fVar19;
  return;
}

