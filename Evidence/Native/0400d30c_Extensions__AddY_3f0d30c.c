/* IL2CPP: Extensions$$AddY
UnityEngine_Vector3_o Extensions__AddY (UnityEngine_Vector3_o v, float value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Extensions$$AddY
   UnityEngine_Vector3_o Extensions__AddY (UnityEngine_Vector3_o v, float value, const MethodInfo*
   method); */

float Extensions__AddY_3f0d30c
                (float param_1,undefined1 param_2 [16],undefined1 param_3 [16],float param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if ((bRam0000000004f5c3d3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f5c3d3 = 1;
  }
  puVar1 = PTR_DAT_049b5480;
  if (cRam0000000004f4a55e == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a55e = '\x01';
  }
  puVar2 = PTR_DAT_049bbf90;
  lVar3 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
  fVar4 = *(float *)(lVar3 + 0x18);
  fVar5 = *(float *)(lVar3 + 0x1c);
  fVar6 = *(float *)(lVar3 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f4a55c == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a55c = '\x01';
  }
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  fVar5 = SQRT(fVar6 * fVar6 + fVar4 * fVar4 + fVar5 * fVar5);
  if (fVar5 <= _UNK_013aa920) {
    if (cRam0000000004f4a233 == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf90);
      cRam0000000004f4a233 = '\x01';
    }
    fVar4 = **(float **)(*(long *)puVar2 + 0xb8);
  }
  else {
    fVar4 = fVar4 / fVar5;
  }
  return param_1 + fVar4 * param_4;
}

