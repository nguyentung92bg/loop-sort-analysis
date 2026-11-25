/* IL2CPP: HomeSceneFx$$DurRangeOr
UnityEngine_Vector2_o HomeSceneFx__DurRangeOr (HomeSceneFx_o* __this, UnityEngine_Vector2_o fallback, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFx$$DurRangeOr
   UnityEngine_Vector2_o HomeSceneFx__DurRangeOr (HomeSceneFx_o* __this, UnityEngine_Vector2_o
   fallback, const MethodInfo* method); */

float HomeSceneFx__DurRangeOr_241f51c(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x48);
  if (fVar1 < 0.0) {
    fVar1 = param_1;
  }
  return fVar1;
}

