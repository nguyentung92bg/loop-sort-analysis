/* IL2CPP: HomeSceneMover$$Sample
HomeScenePathKey_o HomeSceneMover__Sample (HomeSceneMover_o* __this, float u, float* distance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneMover$$Sample
   HomeScenePathKey_o HomeSceneMover__Sample (HomeSceneMover_o* __this, float u, float* distance,
   const MethodInfo* method); */

void HomeSceneMover__Sample_2425dbc(float *param_1,float param_2,long param_3,float *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  uint uVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar2 = *(long *)(param_3 + 0x90);
  *param_4 = 0.0;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar1 = *(uint *)(lVar2 + 0x18);
  uVar5 = (ulong)uVar1;
  if (uVar5 != 1) {
    if (uVar1 == 0) {
LAB_02525f4c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    if (param_2 <= *(float *)(lVar2 + 0x20)) {
      if (uVar5 == 0) goto LAB_02525f4c;
    }
    else {
      if (1 < (int)uVar1) {
                    /* catch() { ... } // from try @ 02525db0 with catch @ 02525df4 */
        pfVar6 = (float *)(lVar2 + 0x3c);
                    /* try { // try from 02525df8 to 02625dff has its CatchHandler @ 02525e08 */
        lVar4 = 9;
        do {
                    /* try { // try from 02525e00 to 02625e0b has its CatchHandler @ 02525b30 */
          fVar12 = *pfVar6;
                    /* catch() { ... } // from try @ 02525d78 with catch @ 02525e08
                       catch() { ... } // from try @ 02525df8 with catch @ 02525e08 */
          if (param_2 <= fVar12) {
            uVar7 = (int)lVar4 - 9;
            if (uVar1 <= uVar7) goto LAB_02525f4c;
            fVar9 = 1.0;
            lVar2 = lVar2 + (long)(int)uVar7 * 0x1c;
            fVar16 = *(float *)(lVar2 + 0x20);
            if (fVar16 < fVar12) {
              fVar9 = (param_2 - fVar16) / (fVar12 - fVar16);
            }
            uVar21 = *(undefined8 *)(pfVar6 + 3);
            uVar20 = *(undefined8 *)(pfVar6 + 1);
            lVar3 = *(long *)(param_3 + 0x98);
            uVar22 = *(undefined8 *)(pfVar6 + 5);
            uVar11 = *(undefined8 *)(lVar2 + 0x2c);
            uVar8 = *(undefined8 *)(lVar2 + 0x24);
            uVar18 = *(undefined8 *)(lVar2 + 0x34);
            if (lVar3 != 0) {
                    /* try { // try from 02525ec4 to 02625ecf has its CatchHandler @ 02525f84 */
              if ((*(uint *)(lVar3 + 0x18) <= uVar7) || (*(uint *)(lVar3 + 0x18) <= (int)lVar4 - 8U)
                 ) goto LAB_02525f4c;
                    /* try { // try from 02525ee4 to 02625eeb has its CatchHandler @ 02525f7c */
              fVar16 = *(float *)(lVar3 + (long)(int)uVar7 * 4 + 0x20);
              fVar12 = 1.0;
              if (fVar9 <= 1.0) {
                fVar12 = fVar9;
              }
              fVar13 = 0.0;
              if (0.0 <= fVar9) {
                fVar13 = fVar12;
              }
                    /* try { // try from 02525f04 to 02625f0b has its CatchHandler @ 02525f80 */
              *param_4 = fVar16 + fVar13 * (*(float *)(lVar3 + lVar4 * 4) - fVar16);
            }
                    /* try { // try from 02525f0c to 02625f6f has its CatchHandler @ 02525e0c */
            *param_1 = param_2;
            fVar16 = (float)uVar8;
            fVar13 = (float)((ulong)uVar8 >> 0x20);
            fVar14 = (float)uVar11;
            fVar15 = (float)((ulong)uVar11 >> 0x20);
            fVar17 = (float)uVar18;
            fVar19 = (float)((ulong)uVar18 >> 0x20);
            fVar12 = 1.0;
            if (fVar9 <= 1.0) {
              fVar12 = fVar9;
            }
            fVar10 = 0.0;
            if (0.0 <= fVar9) {
              fVar10 = fVar12;
            }
            *(ulong *)(param_1 + 3) =
                 CONCAT44(fVar15 + ((float)((ulong)uVar21 >> 0x20) - fVar15) * fVar10,
                          fVar14 + ((float)uVar21 - fVar14) * fVar10);
            *(ulong *)(param_1 + 1) =
                 CONCAT44(fVar13 + ((float)((ulong)uVar20 >> 0x20) - fVar13) * fVar10,
                          fVar16 + ((float)uVar20 - fVar16) * fVar10);
            *(ulong *)(param_1 + 5) =
                 CONCAT44(fVar19 + ((float)((ulong)uVar22 >> 0x20) - fVar19) * fVar10,
                          fVar17 + ((float)uVar22 - fVar17) * fVar10);
            return;
          }
                    /* try { // try from 02525e0c to 02625ec3 has its CatchHandler @ 02525e0c
                       catch() { ... } // from try @ 02525e0c with catch @ 02525e0c
                       catch() { ... } // from try @ 02525f0c with catch @ 02525e0c
                       catch() { ... } // from try @ 02525f78 with catch @ 02525e0c
                       catch() { ... } // from try @ 02525fbc with catch @ 02525e0c */
          lVar4 = lVar4 + 1;
          pfVar6 = pfVar6 + 7;
        } while ((1 - uVar5) + lVar4 != 9);
      }
      lVar4 = *(long *)(param_3 + 0x98);
      if (lVar4 != 0) {
        if (*(uint *)(lVar4 + 0x18) == 0) goto LAB_02525f4c;
        *param_4 = *(float *)(lVar4 + ((long)(((ulong)*(uint *)(lVar4 + 0x18) << 0x20) +
                                             -0x100000000) >> 0x1e) + 0x20);
      }
      lVar2 = lVar2 + (long)(int)(uVar1 - 1) * 0x1c;
    }
  }
  uVar8 = *(undefined8 *)(lVar2 + 0x20);
  uVar18 = *(undefined8 *)(lVar2 + 0x34);
  uVar11 = *(undefined8 *)(lVar2 + 0x2c);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)param_1 = uVar8;
  *(undefined8 *)(param_1 + 5) = uVar18;
  *(undefined8 *)(param_1 + 3) = uVar11;
  return;
}

