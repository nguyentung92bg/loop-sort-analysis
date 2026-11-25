/* IL2CPP: HomeSceneView$$Phase
float HomeSceneView__Phase (float t, float delay, float dur, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneView$$Phase
   float HomeSceneView__Phase (float t, float delay, float dur, const MethodInfo* method); */

float HomeSceneView__Phase_24280b4(float param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = _UNK_013aa8d8;
  if (_UNK_013aa8d8 <= param_3) {
    fVar1 = param_3;
  }
  fVar1 = (param_1 - param_2) / fVar1;
  fVar1 = fVar1 - (float)(int)fVar1;
  fVar3 = 1.0;
  if (fVar1 <= 1.0) {
    fVar3 = fVar1;
  }
  fVar2 = 0.0;
  if (0.0 <= fVar1) {
    fVar2 = fVar3;
  }
  return fVar2;
}

