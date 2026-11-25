/* IL2CPP: SandPileField.StepJob$$BendLateral
float SandPileField_StepJob__BendLateral (float lateral, float swing, float halfWidth, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandPileField.StepJob$$BendLateral
   float SandPileField_StepJob__BendLateral (float lateral, float swing, float halfWidth, const
   MethodInfo* method); */

float SandPileField_StepJob__BendLateral_24d4fd4(float param_1,float param_2,float param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d4fc4 with catch @ 025d4fe0
                        */
  bVar1 = true;
  if (((uint)ABS(param_3) < 0x7f800001) && (bVar1 = false, !NAN(param_3) && !NAN(_UNK_013aa688))) {
    bVar1 = param_3 < _UNK_013aa688;
  }
  fVar5 = _UNK_013aa688;
  if (!bVar1) {
    fVar5 = param_3;
  }
                    /* try { // try from 025d4ffc to 026d4fff has its CatchHandler @ 025d501c */
                    /* try { // try from 025d5000 to 026d501f has its CatchHandler @ 025d4fb0 */
  fVar4 = -fVar5;
  fVar2 = fVar5;
  if (param_1 <= fVar5 && (uint)ABS(param_1) < 0x7f800001) {
    fVar2 = param_1;
  }
                    /* catch() { ... } // from try @ 025d4ffc with catch @ 025d501c */
  bVar1 = true;
  if (((uint)ABS(fVar2) < 0x7f800001) && (bVar1 = false, !NAN(fVar2) && !NAN(fVar4))) {
    bVar1 = fVar2 < fVar4;
  }
                    /* try { // try from 025d5020 to 026d5027 has its CatchHandler @ 025d5030 */
  if (!bVar1) {
    fVar4 = fVar2;
  }
                    /* try { // try from 025d5028 to 026d5033 has its CatchHandler @ 025d4fb0 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d5020 with catch @ 025d5030
                        */
  fVar2 = fVar5 * _UNK_013aa734;
  if (param_2 <= fVar5 * _UNK_013aa734 && (uint)ABS(param_2) < 0x7f800001) {
    fVar2 = param_2;
  }
  fVar3 = fVar5 * _UNK_013aa3b0;
  bVar1 = true;
  if (((uint)ABS(fVar2) < 0x7f800001) && (bVar1 = false, !NAN(fVar2) && !NAN(fVar3))) {
    bVar1 = fVar2 < fVar3;
  }
  fVar5 = 1.0 - (fVar4 / fVar5) * (fVar4 / fVar5);
  if (!bVar1) {
    fVar3 = fVar2;
  }
  return fVar4 + fVar5 * fVar3 * fVar5;
}

