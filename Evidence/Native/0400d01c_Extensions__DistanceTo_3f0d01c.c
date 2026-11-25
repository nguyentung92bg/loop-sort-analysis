/* IL2CPP: Extensions$$DistanceTo
float Extensions__DistanceTo (UnityEngine_Vector2_o from, UnityEngine_Vector2_o to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$DistanceTo
   float Extensions__DistanceTo (UnityEngine_Vector2_o from, UnityEngine_Vector2_o to, const
   MethodInfo* method); */

float Extensions__DistanceTo_3f0d01c(float param_1,float param_2,float param_3,float param_4)

{
  if (cRam0000000004f4a281 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a281 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  return SQRT((param_1 - param_3) * (param_1 - param_3) + (param_2 - param_4) * (param_2 - param_4))
  ;
}

