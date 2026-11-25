/* IL2CPP: Extensions$$Add
UnityEngine_Vector3_o Extensions__Add (UnityEngine_Vector3_o v, UnityEngine_Vector3_o direction, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Extensions$$Add
   UnityEngine_Vector3_o Extensions__Add (UnityEngine_Vector3_o v, UnityEngine_Vector3_o direction,
   float value, const MethodInfo* method); */

float Extensions__Add_3f0d098
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4,
                float param_5,float param_6,float param_7)

{
  float fVar1;
  
  if (cRam0000000004f4a55c == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a55c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar1 = SQRT(param_6 * param_6 + param_4 * param_4 + param_5 * param_5);
  if (fVar1 <= _UNK_013aa920) {
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a233 = '\x01';
    }
    param_4 = **(float **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  }
  else {
    param_4 = param_4 / fVar1;
  }
  return param_1 + param_4 * param_7;
}

