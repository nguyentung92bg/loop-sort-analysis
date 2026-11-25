/* IL2CPP: Extensions$$Add
UnityEngine_Vector2_o Extensions__Add (UnityEngine_Vector2_o v, UnityEngine_Vector2_o direction, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Extensions$$Add
   UnityEngine_Vector2_o Extensions__Add (UnityEngine_Vector2_o v, UnityEngine_Vector2_o direction,
   float value, const MethodInfo* method); */

float Extensions__Add_3f0cca4
                (float param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5)

{
  float fVar1;
  
  if (cRam0000000004f4a55b == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a55b = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar1 = SQRT(param_3 * param_3 + param_4 * param_4);
  if (fVar1 <= _UNK_013aa920) {
    if (cRam0000000004f49d57 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a18);
      cRam0000000004f49d57 = '\x01';
    }
    param_3 = **(float **)(*(long *)PTR_DAT_049b8a18 + 0xb8);
  }
  else {
    param_3 = param_3 / fVar1;
  }
  return param_1 + param_3 * param_5;
}

