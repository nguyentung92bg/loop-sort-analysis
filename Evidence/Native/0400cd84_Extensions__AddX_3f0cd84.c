/* IL2CPP: Extensions$$AddX
UnityEngine_Vector2_o Extensions__AddX (UnityEngine_Vector2_o v, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Extensions$$AddX
   UnityEngine_Vector2_o Extensions__AddX (UnityEngine_Vector2_o v, float value, const MethodInfo*
   method); */

float Extensions__AddX_3f0cd84(float param_1,undefined1 param_2 [16],float param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  float fVar4;
  
  if ((bRam0000000004f5c3d0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f5c3d0 = 1;
  }
  puVar1 = PTR_DAT_049b5480;
  if (cRam0000000004f4a195 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f4a195 = '\x01';
  }
  puVar2 = PTR_DAT_049b8a18;
  fVar3 = *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x28);
  fVar4 = *(float *)(*(long *)(*(long *)PTR_DAT_049b8a18 + 0xb8) + 0x2c);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f4a55b == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a55b = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar4 = SQRT(fVar3 * fVar3 + fVar4 * fVar4);
  if (fVar4 <= _UNK_013aa920) {
    if (cRam0000000004f49d57 == '\0') {
      FUN_021f03f8(PTR_DAT_049b8a18);
      cRam0000000004f49d57 = '\x01';
    }
    fVar3 = **(float **)(*(long *)puVar2 + 0xb8);
  }
  else {
    fVar3 = fVar3 / fVar4;
  }
  return param_1 + fVar3 * param_3;
}

