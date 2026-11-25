/* IL2CPP: Extensions$$DistanceTo
float Extensions__DistanceTo (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions$$DistanceTo
   float Extensions__DistanceTo (UnityEngine_Vector3_o from, UnityEngine_Vector3_o to, const
   MethodInfo* method); */

float Extensions__DistanceTo_3f0c6f4
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                )

{
  if (cRam0000000004f4a234 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a234 = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  return SQRT((param_3 - param_6) * (param_3 - param_6) +
              (param_1 - param_4) * (param_1 - param_4) + (param_2 - param_5) * (param_2 - param_5))
  ;
}

