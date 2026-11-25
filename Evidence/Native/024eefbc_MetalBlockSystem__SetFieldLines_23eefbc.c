/* IL2CPP: MetalBlockSystem$$SetFieldLines
void MetalBlockSystem__SetFieldLines (UnityEngine_LineRenderer_array* lines, float alpha, float time, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: MetalBlockSystem$$SetFieldLines
   void MetalBlockSystem__SetFieldLines (UnityEngine_LineRenderer_array* lines, float alpha, float
   time, const MethodInfo* method); */

void MetalBlockSystem__SetFieldLines_23eefbc(float param_1,float param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  
  puVar5 = PTR_DAT_049bbf90;
  fVar4 = _UNK_013aa868;
  fVar3 = _UNK_013aa860;
  fVar2 = _UNK_013aa56c;
                    /* try { // try from 024eefc0 to 025eefc7 has its CatchHandler @ 024ef06c */
                    /* try { // try from 024eefc8 to 025ef02b has its CatchHandler @ 024ee4f8 */
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0x18);
    if (0 < (int)uVar1) {
      param_2 = param_2 * _UNK_013aa5e4;
      param_1 = param_1 * _UNK_013aa8f4;
                    /* try { // try from 024ef02c to 025ef02f has its CatchHandler @ 024ef168 */
      uVar8 = 0;
                    /* try { // try from 024ef030 to 025ef033 has its CatchHandler @ 024ef114 */
                    /* try { // try from 024ef034 to 025ef037 has its CatchHandler @ 024ef164 */
                    /* try { // try from 024ef038 to 025ef03b has its CatchHandler @ 024ef124 */
                    /* try { // try from 024ef03c to 025ef03f has its CatchHandler @ 024ef10c */
      do {
                    /* try { // try from 024ef040 to 025ef043 has its CatchHandler @ 024ef1b8 */
                    /* try { // try from 024ef044 to 025ef047 has its CatchHandler @ 024ef108 */
                    /* try { // try from 024ef048 to 025ef04b has its CatchHandler @ 024ef0b8 */
                    /* try { // try from 024ef04c to 025ef04f has its CatchHandler @ 024ef0b4 */
                    /* try { // try from 024ef050 to 025ef053 has its CatchHandler @ 024ef178 */
        fVar10 = param_2 + (float)(int)uVar8 / (float)(int)uVar1;
                    /* try { // try from 024ef054 to 025ef057 has its CatchHandler @ 024ef0a8 */
                    /* try { // try from 024ef058 to 025ef05b has its CatchHandler @ 024ef0a4 */
        fVar10 = fVar10 - (float)(int)fVar10;
                    /* try { // try from 024ef05c to 025ef05f has its CatchHandler @ 024ef094 */
                    /* try { // try from 024ef060 to 025ef063 has its CatchHandler @ 024ef08c */
                    /* try { // try from 024ef064 to 025ef067 has its CatchHandler @ 024ef090 */
        fVar11 = 1.0;
        if (fVar10 <= 1.0) {
          fVar11 = fVar10;
        }
                    /* try { // try from 024ef068 to 025ef06b has its CatchHandler @ 024ef070 */
        fVar14 = 0.0;
                    /* catch() { ... } // from try @ 024eefc0 with catch @ 024ef06c
                       try { // try from 024ef06c to 025ef0e7 has its CatchHandler @ 024ee4f8 */
        if (0.0 <= fVar10) {
          fVar14 = fVar11;
        }
                    /* catch() { ... } // from try @ 024eef7c with catch @ 024ef070
                       catch() { ... } // from try @ 024ef068 with catch @ 024ef070 */
        if (uVar1 <= uVar8) {
LAB_024ef1ac:
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024ef1ac to 025ef1b3 has its CatchHandler @ 024ef2bc */
          FUN_021f06a8();
        }
                    /* catch() { ... } // from try @ 024eec50 with catch @ 024ef07c */
        plVar9 = (long *)(param_3 + (long)(int)uVar8 * 8 + 0x20);
                    /* catch() { ... } // from try @ 024eec74 with catch @ 024ef080 */
        if (*plVar9 == 0) goto LAB_024ef1a8;
                    /* catch() { ... } // from try @ 024eec2c with catch @ 024ef084 */
                    /* catch() { ... } // from try @ 024eec20 with catch @ 024ef088 */
        lVar6 = UnityEngine_Component__get_transform_3c18724(*plVar9,0);
                    /* catch() { ... } // from try @ 024ef060 with catch @ 024ef08c */
                    /* catch() { ... } // from try @ 024eec14 with catch @ 024ef090
                       catch() { ... } // from try @ 024ef064 with catch @ 024ef090 */
                    /* catch() { ... } // from try @ 024ef05c with catch @ 024ef094 */
        if (cRam0000000004f4a190 == '\0') {
                    /* catch() { ... } // from try @ 024eeb00 with catch @ 024ef098 */
                    /* catch() { ... } // from try @ 024eeac0 with catch @ 024ef09c */
          FUN_021f03f8(puVar5);
                    /* catch() { ... } // from try @ 024eea38 with catch @ 024ef0a0 */
          cRam0000000004f4a190 = '\x01';
        }
                    /* catch() { ... } // from try @ 024ef058 with catch @ 024ef0a4 */
        if (lVar6 == 0) goto LAB_024ef1a8;
                    /* catch() { ... } // from try @ 024ef054 with catch @ 024ef0a8 */
                    /* catch() { ... } // from try @ 024eea14 with catch @ 024ef0ac */
                    /* catch() { ... } // from try @ 024ee988 with catch @ 024ef0b0 */
                    /* catch() { ... } // from try @ 024ef04c with catch @ 024ef0b4 */
                    /* catch() { ... } // from try @ 024ef048 with catch @ 024ef0b8 */
        lVar7 = *(long *)(*(long *)puVar5 + 0xb8);
        fVar11 = 0.0;
                    /* catch() { ... } // from try @ 024eed70 with catch @ 024ef0bc */
        if (0.0 <= fVar14) {
          fVar11 = fVar14;
        }
                    /* catch() { ... } // from try @ 024eee14 with catch @ 024ef0c0 */
                    /* catch() { ... } // from try @ 024eead8 with catch @ 024ef0c4 */
                    /* catch() { ... } // from try @ 024eecc8 with catch @ 024ef0c8 */
        fVar11 = fVar11 * fVar2 + fVar4;
        fVar13 = fVar11 * *(float *)(lVar7 + 0x14);
        fVar10 = fVar11 * *(float *)(lVar7 + 0x10);
        UnityEngine_Transform__set_localScale_3c2ddfc
                  (fVar11 * *(float *)(lVar7 + 0xc),fVar10,fVar13,lVar6,0);
                    /* try { // try from 024ef0e8 to 025ef0eb has its CatchHandler @ 024ef0f4 */
        if (*(uint *)(param_3 + 0x18) <= uVar8) goto LAB_024ef1ac;
        if (*plVar9 == 0) goto LAB_024ef1a8;
                    /* catch() { ... } // from try @ 024ef0e8 with catch @ 024ef0f4 */
        uVar12 = UnityEngine_LineRenderer__get_startColor_3bda738(*plVar9,0);
                    /* try { // try from 024ef0fc to 025ef103 has its CatchHandler @ 024ef2bc */
                    /* try { // try from 024ef104 to 025ef143 has its CatchHandler @ 024ee4f8 */
                    /* catch() { ... } // from try @ 024ef044 with catch @ 024ef108 */
                    /* catch() { ... } // from try @ 024ef03c with catch @ 024ef10c */
        fVar11 = (float)FUN_046086e0(fVar14 * fVar3);
                    /* catch() { ... } // from try @ 024eeeb4 with catch @ 024ef110 */
                    /* catch() { ... } // from try @ 024ef030 with catch @ 024ef114 */
                    /* catch() { ... } // from try @ 024eebc0 with catch @ 024ef118 */
        if (*(uint *)(param_3 + 0x18) <= uVar8) goto LAB_024ef1ac;
                    /* catch() { ... } // from try @ 024eea60 with catch @ 024ef11c */
                    /* catch() { ... } // from try @ 024ee904 with catch @ 024ef120 */
        if (*plVar9 == 0) goto LAB_024ef1a8;
                    /* catch() { ... } // from try @ 024eed28 with catch @ 024ef124
                       catch() { ... } // from try @ 024ef038 with catch @ 024ef124 */
        fVar11 = param_1 * fVar11;
        UnityEngine_LineRenderer__set_startColor_3bda810(uVar12,fVar10,fVar13,fVar11,*plVar9,0);
                    /* try { // try from 024ef144 to 025ef147 has its CatchHandler @ 024ef150 */
        if (*(uint *)(param_3 + 0x18) <= uVar8) goto LAB_024ef1ac;
                    /* catch() { ... } // from try @ 024ef144 with catch @ 024ef150 */
        if (*plVar9 == 0) goto LAB_024ef1a8;
                    /* try { // try from 024ef158 to 025ef15f has its CatchHandler @ 024ef2bc */
                    /* try { // try from 024ef160 to 025ef197 has its CatchHandler @ 024ee4f8 */
                    /* catch() { ... } // from try @ 024eedcc with catch @ 024ef164
                       catch() { ... } // from try @ 024ef034 with catch @ 024ef164 */
                    /* catch() { ... } // from try @ 024eee70 with catch @ 024ef168
                       catch() { ... } // from try @ 024ef02c with catch @ 024ef168 */
        UnityEngine_LineRenderer__set_endColor_3bda8e4(uVar12,fVar10,fVar13,fVar11,*plVar9,0);
                    /* catch() { ... } // from try @ 024ee7b0 with catch @ 024ef16c */
                    /* catch() { ... } // from try @ 024eeb54 with catch @ 024ef170 */
        uVar1 = *(uint *)(param_3 + 0x18);
                    /* catch() { ... } // from try @ 024eeef8 with catch @ 024ef174 */
        uVar8 = uVar8 + 1;
                    /* catch() { ... } // from try @ 024ee9a8 with catch @ 024ef178
                       catch() { ... } // from try @ 024ef050 with catch @ 024ef178 */
      } while ((int)uVar8 < (int)uVar1);
    }
                    /* try { // try from 024ef198 to 025ef19b has its CatchHandler @ 024ef1a4 */
                    /* catch() { ... } // from try @ 024ef198 with catch @ 024ef1a4 */
    return;
  }
LAB_024ef1a8:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

