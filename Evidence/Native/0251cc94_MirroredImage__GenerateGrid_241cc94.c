/* IL2CPP: MirroredImage$$GenerateGrid
void MirroredImage__GenerateGrid (UnityEngine_UI_VertexHelper_o* vh, System_ReadOnlySpan_float__o xPos, System_ReadOnlySpan_float__o yPos, System_ReadOnlySpan_float__o uvX, System_ReadOnlySpan_float__o uvY, UnityEngine_Color32_o color32, bool skipCenter, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MirroredImage$$GenerateGrid
   void MirroredImage__GenerateGrid (UnityEngine_UI_VertexHelper_o* vh, System_ReadOnlySpan_float__o
   xPos, System_ReadOnlySpan_float__o yPos, System_ReadOnlySpan_float__o uvX,
   System_ReadOnlySpan_float__o uvY, UnityEngine_Color32_o color32, bool skipCenter, const
   MethodInfo* method); */

void MirroredImage__GenerateGrid_241cc94
               (long param_1,float *param_2,uint param_3,long param_4,uint param_5,
               undefined4 *param_6,ulong param_7,undefined8 param_8,long param_9,ulong param_10,
               undefined4 param_11,byte param_12)

{
  int iVar1;
  int iVar2;
  undefined1 auVar3 [16];
  float fVar4;
  undefined *puVar5;
  ulong uVar6;
  float *pfVar7;
  undefined4 *puVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
                    /* try { // try from 0251cc9c to 0261ccbf has its CatchHandler @ 0251cee8 */
                    /* try { // try from 0251ccd0 to 0261cd67 has its CatchHandler @ 0251cef0 */
  if ((bRam0000000004f4b75a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f10);
    bRam0000000004f4b75a = 1;
  }
  if (0 < (int)param_5) {
    uVar6 = 0;
    do {
      pfVar7 = param_2;
      puVar8 = param_6;
      uVar10 = param_7 & 0xffffffff;
      lVar11 = (long)(int)param_3;
      if (0 < (int)param_3) {
        do {
          if ((uVar10 == 0) || ((param_10 & 0xffffffff) <= uVar6)) goto LAB_0251cfcc;
          if (param_1 == 0) goto LAB_0251cfd0;
                    /* try { // try from 0251cd6c to 0261cd6f has its CatchHandler @ 0251ceec */
          UnityEngine_UI_VertexHelper__AddVert_3edd860
                    (*pfVar7,*(undefined4 *)(param_4 + uVar6 * 4),0,*puVar8,
                     *(undefined4 *)(param_9 + uVar6 * 4),0,0,param_1,param_11,0);
          lVar11 = lVar11 + -1;
          pfVar7 = pfVar7 + 1;
          puVar8 = puVar8 + 1;
          uVar10 = uVar10 - 1;
        } while (lVar11 != 0);
      }
                    /* try { // try from 0251cd88 to 0261cd8f has its CatchHandler @ 0251cee0 */
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_5);
  }
                    /* try { // try from 0251cd94 to 0261cdab has its CatchHandler @ 0251ced8 */
  puVar5 = PTR_DAT_049bbf30;
  fVar4 = _UNK_013aa8a0;
  if (0 < (int)(param_5 - 1)) {
    uVar6 = 0;
                    /* try { // try from 0251cdbc to 0261cdc7 has its CatchHandler @ 0251ced4 */
    do {
      if (0 < (int)(param_3 - 1)) {
                    /* try { // try from 0251cdf8 to 0261ce03 has its CatchHandler @ 0251cec4 */
        uVar10 = 0;
        iVar2 = (int)uVar6 * param_3;
                    /* try { // try from 0251ce1c to 0261ce2b has its CatchHandler @ 0251ced0 */
                    /* try { // try from 0251ce30 to 0261ce3b has its CatchHandler @ 0251cec8 */
        pfVar7 = param_2;
        do {
          if (param_3 == uVar10) {
LAB_0251cfcc:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          fVar15 = *pfVar7;
          fVar16 = pfVar7[1];
          if (cRam0000000004f4a18f == '\0') {
                    /* try { // try from 0251ce48 to 0261ce53 has its CatchHandler @ 0251cec0 */
            FUN_021f03f8(puVar5);
            cRam0000000004f4a18f = '\x01';
          }
          fVar12 = ABS(fVar15);
          fVar13 = ABS(fVar16);
                    /* try { // try from 0251ce60 to 0261ce97 has its CatchHandler @ 0251cee4 */
          if (fVar12 <= fVar13) {
            fVar12 = fVar13;
          }
          fVar12 = fVar12 * fVar4;
          fVar13 = **(float **)(*(long *)puVar5 + 0xb8) * 8.0;
          if (fVar12 <= fVar13) {
            fVar12 = fVar13;
          }
          if (fVar12 <= ABS(fVar16 - fVar15)) {
            if (param_5 <= uVar6) goto LAB_0251cfcc;
            fVar16 = *(float *)(param_4 + uVar6 * 4);
            fVar12 = *(float *)(param_4 + (uVar6 + 1) * 4);
            fVar15 = ABS(fVar16);
            fVar14 = ABS(fVar12);
                    /* try { // try from 0251ceb0 to 0261ceb3 has its CatchHandler @ 0251cee8 */
            if (fVar15 <= fVar14) {
              fVar15 = fVar14;
            }
                    /* try { // try from 0251ceb4 to 0261ceb7 has its CatchHandler @ 0251ceec */
            fVar15 = fVar15 * fVar4;
                    /* try { // try from 0251ceb8 to 0261cebb has its CatchHandler @ 0251cedc */
                    /* catch() { ... } // from try @ 0251cc8c with catch @ 0251cebc
                       try { // try from 0251cebc to 0261cf07 has its CatchHandler @ 0251cb78 */
            if (fVar15 <= fVar13) {
              fVar15 = fVar13;
            }
                    /* catch() { ... } // from try @ 0251ce48 with catch @ 0251cec0 */
                    /* catch() { ... } // from try @ 0251cdf8 with catch @ 0251cec4 */
                    /* catch() { ... } // from try @ 0251ce30 with catch @ 0251cec8 */
                    /* catch() { ... } // from try @ 0251cdd8 with catch @ 0251cecc */
                    /* catch() { ... } // from try @ 0251ce1c with catch @ 0251ced0 */
                    /* catch() { ... } // from try @ 0251cdbc with catch @ 0251ced4 */
                    /* catch() { ... } // from try @ 0251cd94 with catch @ 0251ced8 */
                    /* catch() { ... } // from try @ 0251ceb8 with catch @ 0251cedc */
                    /* catch() { ... } // from try @ 0251cd88 with catch @ 0251cee0 */
                    /* catch() { ... } // from try @ 0251ce60 with catch @ 0251cee4 */
                    /* catch() { ... } // from try @ 0251cc9c with catch @ 0251cee8
                       catch() { ... } // from try @ 0251ceb0 with catch @ 0251cee8 */
                    /* catch() { ... } // from try @ 0251cd6c with catch @ 0251ceec
                       catch() { ... } // from try @ 0251ceb4 with catch @ 0251ceec */
                    /* catch() { ... } // from try @ 0251ccd0 with catch @ 0251cef0 */
            if ((fVar15 <= ABS(fVar12 - fVar16)) &&
               (((iVar9 = (int)uVar10, (int)uVar6 + (int)((uVar6 & 0xffffffff) / 3) * -3 != 1 ||
                 (auVar3._8_8_ = 0, auVar3._0_8_ = uVar10,
                 (SUB164(auVar3 * ZEXT816(0xaaaaaaaaaaaaaaab),8) & 0xfffffffe) + (int)(uVar10 / 3) +
                 1 != iVar9)) || ((param_12 & 1) == 0)))) {
              if (param_1 == 0) {
LAB_0251cfd0:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0251cf08 with catch @ 0251cfd0
                       catch() { ... } // from try @ 0251cfc0 with catch @ 0251cfd0 */
                FUN_021f06a0();
              }
                    /* try { // try from 0251cf08 to 0261cf1f has its CatchHandler @ 0251cfd0 */
                    /* try { // try from 0251cf20 to 0261cfbf has its CatchHandler @ 0251cb78 */
              iVar1 = iVar2 + iVar9;
              iVar9 = param_3 + iVar2 + iVar9;
              UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_1,iVar1,iVar9,iVar9 + 1,0);
              UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_1,iVar9 + 1,iVar1 + 1,iVar1,0);
            }
          }
          uVar10 = uVar10 + 1;
          pfVar7 = pfVar7 + 1;
        } while (param_3 - 1 != uVar10);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_5 - 1);
  }
                    /* try { // try from 0251cfc0 to 0261cfcf has its CatchHandler @ 0251cfd0 */
  return;
}

