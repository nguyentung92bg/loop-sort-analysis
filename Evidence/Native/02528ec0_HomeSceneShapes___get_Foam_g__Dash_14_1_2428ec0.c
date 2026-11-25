/* IL2CPP: HomeSceneShapes$$<get_Foam>g__Dash|14_1
float HomeSceneShapes___get_Foam_g__Dash_14_1 (float cx, float cy, float rx, float ry, HomeSceneShapes___c__DisplayClass14_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShapes$$<get_Foam>g__Dash|14_1
   float HomeSceneShapes___get_Foam_g__Dash_14_1 (float cx, float cy, float rx, float ry,
   HomeSceneShapes___c__DisplayClass14_0_o* , const MethodInfo* method); */

float HomeSceneShapes___get_Foam_g__Dash_14_1_2428ec0
                (float param_1,float param_2,float param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* catch() { ... } // from try @ 02528e6c with catch @ 02528ec0 */
                    /* catch() { ... } // from try @ 02528e60 with catch @ 02528ec4 */
                    /* catch() { ... } // from try @ 02528df4 with catch @ 02528ec8 */
                    /* catch() { ... } // from try @ 02528de8 with catch @ 02528ecc */
                    /* catch() { ... } // from try @ 02528db0 with catch @ 02528ed4
                       catch() { ... } // from try @ 02528e20 with catch @ 02528ed4
                       catch() { ... } // from try @ 02528e4c with catch @ 02528ed4 */
                    /* try { // try from 02528edc to 02628eef has its CatchHandler @ 02528ef8 */
                    /* catch() { ... } // from try @ 02528d28 with catch @ 02528ee8
                       catch() { ... } // from try @ 02528e0c with catch @ 02528ee8 */
  fVar3 = *param_5;
  fVar2 = param_5[1];
  if (cRam0000000004f4a55b == '\0') {
                    /* try { // try from 02528ef0 to 02628efb has its CatchHandler @ 02528b30 */
                    /* catch() { ... } // from try @ 02528edc with catch @ 02528ef8 */
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a55b = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar3 = (fVar3 - param_1) + 0.5;
  param_4 = (fVar2 - param_2) / param_4;
  fVar3 = fVar3 - (float)(int)fVar3;
  fVar2 = 1.0;
  if (fVar3 <= 1.0) {
    fVar2 = fVar3;
  }
  fVar1 = -0.5;
  if (0.0 <= fVar3) {
    fVar1 = fVar2 + -0.5;
  }
  fVar3 = 1.0 - SQRT(param_4 * param_4 + (fVar1 / param_3) * (fVar1 / param_3));
  fVar2 = 1.0;
  if (fVar3 <= 1.0) {
    fVar2 = fVar3;
  }
  fVar1 = 0.0;
  if (0.0 <= fVar3) {
    fVar1 = fVar2;
  }
  return fVar1;
}

