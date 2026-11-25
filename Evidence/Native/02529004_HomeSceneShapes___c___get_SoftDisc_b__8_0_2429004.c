/* IL2CPP: HomeSceneShapes.<>c$$<get_SoftDisc>b__8_0
float HomeSceneShapes___c___get_SoftDisc_b__8_0 (HomeSceneShapes___c_o* __this, float u, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneShapes.<>c$$<get_SoftDisc>b__8_0
   float HomeSceneShapes___c___get_SoftDisc_b__8_0 (HomeSceneShapes___c_o* __this, float u, float v,
   const MethodInfo* method); */

float HomeSceneShapes___c___get_SoftDisc_b__8_0_2429004(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (cRam0000000004f4a55b == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a55b = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar1 = SQRT((param_1 + -0.5) * (param_1 + -0.5) + (param_2 + -0.5) * (param_2 + -0.5));
  fVar2 = 1.0 - (fVar1 + fVar1);
  fVar1 = 1.0;
  if (fVar2 <= 1.0) {
    fVar1 = fVar2;
  }
  fVar3 = 0.0;
  if (0.0 <= fVar2) {
    fVar3 = fVar1;
  }
  return fVar3;
}

