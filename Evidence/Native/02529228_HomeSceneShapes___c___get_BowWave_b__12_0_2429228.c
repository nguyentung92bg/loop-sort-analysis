/* IL2CPP: HomeSceneShapes.<>c$$<get_BowWave>b__12_0
float HomeSceneShapes___c___get_BowWave_b__12_0 (HomeSceneShapes___c_o* __this, float u, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneShapes.<>c$$<get_BowWave>b__12_0
   float HomeSceneShapes___c___get_BowWave_b__12_0 (HomeSceneShapes___c_o* __this, float u, float v,
   const MethodInfo* method); */

float HomeSceneShapes___c___get_BowWave_b__12_0_2429228(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = _UNK_013aa954;
  fVar4 = _UNK_013aa500;
  param_1 = param_1 + -0.5;
  fVar3 = param_2 + -0.5 + param_2 + -0.5;
  fVar2 = 0.0;
  if ((param_1 + param_1) * (param_1 + param_1) + fVar3 * fVar3 <= 1.0) {
    if (cRam0000000004f4a55b == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a55b = '\x01';
    }
    fVar4 = (param_2 + -0.25) / fVar4;
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar4 = SQRT((param_1 / fVar1) * (param_1 / fVar1) + fVar4 * fVar4);
    if (_UNK_013aa734 <= fVar4) {
                    /* try { // try from 02529318 to 02629387 has its CatchHandler @ 02529318
                       catch() { ... } // from try @ 02529318 with catch @ 02529318
                       catch() { ... } // from try @ 025293dc with catch @ 02529318
                       catch() { ... } // from try @ 02529434 with catch @ 02529318
                       catch() { ... } // from try @ 02529474 with catch @ 02529318
                       catch() { ... } // from try @ 025294b0 with catch @ 02529318 */
      fVar1 = (fVar4 + _UNK_013aa3b0) / _UNK_013aa5fc;
      fVar4 = 1.0;
      if (fVar1 <= 1.0) {
        fVar4 = fVar1;
      }
      fVar3 = 0.75;
      if (0.0 <= fVar1) {
        fVar3 = 0.75 - fVar4 * 0.75;
      }
      fVar4 = 1.0;
      if (fVar3 <= 1.0) {
        fVar4 = fVar3;
      }
      fVar2 = 0.0;
      if (0.0 <= fVar3) {
        fVar2 = fVar4;
      }
    }
    else {
      fVar1 = 1.0;
      if (fVar4 / _UNK_013aa734 <= 1.0) {
        fVar1 = fVar4 / _UNK_013aa734;
      }
      fVar2 = fVar1 * _UNK_013aa670 + _UNK_013aa8c0;
    }
  }
  return fVar2;
}

