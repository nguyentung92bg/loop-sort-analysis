/* IL2CPP: TitlePopInEffect$$ApplyFrame
void TitlePopInEffect__ApplyFrame (TitlePopInEffect_o* __this, TMPro_TMP_Text_o* text, UnityEngine_Vector3_array_array* original, float time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TitlePopInEffect$$ApplyFrame
   void TitlePopInEffect__ApplyFrame (TitlePopInEffect_o* __this, TMPro_TMP_Text_o* text,
   UnityEngine_Vector3_array_array* original, float time, const MethodInfo* method); */

void TitlePopInEffect__ApplyFrame_2573c8c(float param_1,long param_2,long *param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  float fVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  
                    /* try { // try from 02673cc0 to 02773cd7 has its CatchHandler @ 026734fc */
                    /* try { // try from 02673cd8 to 02773ce3 has its CatchHandler @ 02673f7c */
  if ((param_3 != (long *)0x0) &&
     (lVar4 = TMPro_TMP_Text__get_textInfo_3b0c91c(param_3,0), puVar3 = PTR_DAT_049bbf90, lVar4 != 0
     )) {
    if (0 < *(int *)(lVar4 + 0x18)) {
                    /* try { // try from 02673cec to 02773cff has its CatchHandler @ 02673f48 */
      uVar14 = 0;
                    /* try { // try from 02673d04 to 02773d17 has its CatchHandler @ 02673f6c */
      do {
        lVar5 = *(long *)(lVar4 + 0x38);
        if (lVar5 == 0) goto LAB_02673f10;
                    /* try { // try from 02673d1c to 02773d23 has its CatchHandler @ 02673f68 */
        if (*(uint *)(lVar5 + 0x18) <= uVar14) goto LAB_02673f0c;
        lVar5 = lVar5 + uVar14 * 0x178;
                    /* try { // try from 02673d28 to 02773d2f has its CatchHandler @ 02673f58 */
        if ((*(byte *)(lVar5 + 400) & 1) != 0) {
                    /* try { // try from 02673d34 to 02773d43 has its CatchHandler @ 02673f70 */
          uVar1 = *(uint *)(lVar5 + 0x50);
          uVar2 = *(uint *)(lVar5 + 100);
                    /* try { // try from 02673d44 to 02773d4f has its CatchHandler @ 02673f50 */
          fVar15 = (param_1 - *(float *)(param_2 + 0x24) * (float)(int)uVar14) /
                   *(float *)(param_2 + 0x28);
          fVar16 = 1.0;
          if (fVar15 <= 1.0) {
            fVar16 = fVar15;
          }
          fVar17 = 0.0;
                    /* try { // try from 02673d60 to 02773d63 has its CatchHandler @ 02673f44 */
          if (0.0 <= fVar15) {
            fVar17 = fVar16;
          }
                    /* try { // try from 02673d64 to 02773d7f has its CatchHandler @ 02673f54 */
          fVar16 = (float)LitMotion_EaseUtility__Evaluate_2e8b590(fVar17,0x1a,0);
          if (param_4 == 0) goto LAB_02673f10;
          if (*(uint *)(param_4 + 0x18) <= uVar1) {
LAB_02673f0c:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar5 = *(long *)(lVar4 + 0x60);
          if (lVar5 == 0) goto LAB_02673f10;
                    /* try { // try from 02673d84 to 02773d8f has its CatchHandler @ 02673f4c */
          if (*(uint *)(lVar5 + 0x18) <= uVar1) goto LAB_02673f0c;
          lVar13 = *(long *)(param_4 + (long)(int)uVar1 * 8 + 0x20);
          if (lVar13 == 0) goto LAB_02673f10;
                    /* try { // try from 02673da4 to 02773e2f has its CatchHandler @ 02673f74 */
          if ((*(uint *)(lVar13 + 0x18) <= uVar2) || (*(uint *)(lVar13 + 0x18) <= uVar2 + 2))
          goto LAB_02673f0c;
          puVar10 = (undefined8 *)(lVar13 + 0x20 + (long)(int)uVar2 * 0xc);
          puVar7 = (undefined8 *)(lVar13 + 0x20 + (long)(int)(uVar2 + 2) * 0xc);
          lVar5 = *(long *)(lVar5 + (long)(int)uVar1 * 0x50 + 0x30);
          fVar15 = *(float *)(puVar10 + 1);
          uVar22 = *puVar10;
          fVar24 = *(float *)(puVar7 + 1);
          uVar23 = *puVar7;
          if (cRam0000000004f4a68f == '\0') {
            FUN_021f03f8(puVar3);
            cRam0000000004f4a68f = '\x01';
          }
          lVar6 = 0;
          lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
          fVar18 = (1.0 - fVar17) * *(float *)(param_2 + 0x2c);
          uVar20 = *(undefined8 *)(lVar8 + 0x24);
          fVar21 = *(float *)(lVar8 + 0x2c);
          fVar24 = (fVar15 + fVar24) * 0.5;
          fVar15 = ((float)uVar22 + (float)uVar23) * 0.5;
          fVar17 = ((float)((ulong)uVar22 >> 0x20) + (float)((ulong)uVar23 >> 0x20)) * 0.5;
          lVar8 = (long)(int)uVar2 << 0x20;
          do {
            if ((ulong)*(uint *)(lVar13 + 0x18) <= (ulong)uVar2 + lVar6) goto LAB_02673f0c;
                    /* try { // try from 02673e5c to 02773e63 has its CatchHandler @ 02673f5c */
            if (lVar5 == 0) goto LAB_02673f10;
                    /* try { // try from 02673e64 to 02773ec3 has its CatchHandler @ 026734fc */
            if ((ulong)*(uint *)(lVar5 + 0x18) <= (ulong)uVar2 + lVar6) goto LAB_02673f0c;
            lVar6 = lVar6 + 1;
            iVar9 = (int)((ulong)lVar8 >> 0x20);
            lVar12 = lVar13 + (long)iVar9 * 0xc;
            lVar11 = lVar5 + (long)iVar9 * 0xc;
            uVar22 = *(undefined8 *)(lVar12 + 0x20);
            fVar19 = *(float *)(lVar12 + 0x28);
            *(ulong *)(lVar11 + 0x20) =
                 CONCAT44((float)((ulong)uVar20 >> 0x20) * fVar18 +
                          fVar17 + ((float)((ulong)uVar22 >> 0x20) - fVar17) * fVar16,
                          (float)uVar20 * fVar18 + fVar15 + ((float)uVar22 - fVar15) * fVar16);
            *(float *)(lVar11 + 0x28) = fVar21 * fVar18 + fVar24 + fVar16 * (fVar19 - fVar24);
            lVar8 = lVar8 + 0x100000000;
          } while (lVar6 != 4);
        }
        uVar14 = uVar14 + 1;
                    /* try { // try from 02673ec4 to 02773ecf has its CatchHandler @ 02673f74 */
      } while ((long)uVar14 < (long)*(int *)(lVar4 + 0x18));
    }
                    /* try { // try from 02673eec to 02773ef7 has its CatchHandler @ 02673f40 */
                    /* WARNING: Could not recover jumptable at 0x02673f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 02673f08 to 02773f13 has its CatchHandler @ 02673f3c */
    (**(code **)(*param_3 + 0x7f8))(param_3,1,*(undefined8 *)(*param_3 + 0x800));
    return;
  }
LAB_02673f10:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

