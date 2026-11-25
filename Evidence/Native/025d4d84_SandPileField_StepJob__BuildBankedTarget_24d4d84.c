/* IL2CPP: SandPileField.StepJob$$BuildBankedTarget
void SandPileField_StepJob__BuildBankedTarget (SandPileField_StepJob_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandPileField.StepJob$$BuildBankedTarget
   void SandPileField_StepJob__BuildBankedTarget (SandPileField_StepJob_o __this, const MethodInfo*
   method); */

void SandPileField_StepJob__BuildBankedTarget_24d4d84(long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
                    /* try { // try from 025d4da4 to 026d4ddf has its CatchHandler @ 025d4e20 */
  if (0 < (int)*(uint *)(param_1 + 0x38)) {
    func_0x04608670(*(undefined8 *)(param_1 + 0x30),0,(ulong)*(uint *)(param_1 + 0x38) << 2);
  }
  uVar2 = *(uint *)(param_1 + 0x84);
  if (0 < (int)uVar2) {
                    /* try { // try from 025d4de0 to 026d4e3b has its CatchHandler @ 025d4cd0 */
    lVar11 = *(long *)(param_1 + 0x20);
    iVar9 = 0;
    uVar10 = 0;
    do {
      lVar8 = 0;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d4d68 with catch @ 025d4e1c
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d4da4 with catch @ 025d4e20
                        */
      do {
        fVar14 = *(float *)(lVar11 + (long)(iVar9 + (int)lVar8) * 4);
        if (0.0 < fVar14) {
          fVar15 = *(float *)(param_1 + 0x9c);
                    /* try { // try from 025d4e3c to 026d4e3f has its CatchHandler @ 025d4e48 */
          fVar13 = *(float *)(param_1 + 0x94);
                    /* catch() { ... } // from try @ 025d4e3c with catch @ 025d4e48 */
                    /* try { // try from 025d4e4c to 026d4e53 has its CatchHandler @ 025d4e5c */
                    /* try { // try from 025d4e54 to 026d4e5f has its CatchHandler @ 025d4cd0 */
          fVar12 = (float)SandPileField_StepJob__BendLateral_24d4fd4
                                    (((float)(int)lVar8 + 0.5) * fVar15 - fVar13,
                                     *(undefined4 *)(*(long *)(param_1 + 0x50) + uVar10 * 4),fVar13)
          ;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d4e4c with catch @ 025d4e5c
                        */
          lVar7 = *(long *)(param_1 + 0x30);
          fVar12 = (fVar13 + fVar12) / fVar15 + -0.5;
          bVar3 = false;
          bVar4 = false;
          bVar5 = false;
          if ((uint)ABS(fVar12) < 0x7f800001) {
            bVar3 = false;
            bVar4 = false;
            bVar5 = true;
            if (!NAN(fVar12)) {
              bVar3 = fVar12 < 11.0;
              bVar4 = fVar12 == 11.0;
              bVar5 = false;
            }
          }
          fVar13 = 11.0;
          if (bVar4 || bVar3 != bVar5) {
            fVar13 = fVar12;
          }
          bVar3 = true;
          if (((uint)ABS(fVar13) < 0x7f800001) && (bVar3 = false, !NAN(fVar13))) {
            bVar3 = fVar13 < 0.0;
          }
          fVar12 = 0.0;
          if (!bVar3) {
            fVar12 = fVar13;
          }
          iVar6 = (int)fVar12;
          if (10 < iVar6) {
            iVar6 = 0xb;
          }
          iVar1 = -0x80000000;
          if (fVar12 != INFINITY) {
            iVar1 = iVar6;
          }
          fVar13 = (float)iVar1;
          iVar6 = iVar1 + (int)uVar10 * 0xc;
          if (9 < iVar1) {
            iVar1 = 10;
          }
          iVar1 = ((int)uVar10 * 0xc | 1U) + iVar1;
          *(float *)(lVar7 + (long)iVar6 * 4) =
               *(float *)(lVar7 + (long)iVar6 * 4) + fVar14 * (1.0 - (fVar12 - fVar13));
          *(float *)(lVar7 + (long)iVar1 * 4) =
               *(float *)(lVar7 + (long)iVar1 * 4) + fVar14 * (fVar12 - fVar13);
        }
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0xc);
      uVar10 = uVar10 + 1;
      iVar9 = iVar9 + 0xc;
    } while (uVar10 != uVar2);
  }
  return;
}

