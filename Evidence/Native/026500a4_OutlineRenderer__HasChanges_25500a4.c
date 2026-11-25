/* IL2CPP: OutlineRenderer$$HasChanges
bool OutlineRenderer__HasChanges (OutlineRenderer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: OutlineRenderer$$HasChanges
   bool OutlineRenderer__HasChanges (OutlineRenderer_o* __this, const MethodInfo* method); */

bool OutlineRenderer__HasChanges_25500a4(long param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((*(int *)(param_1 + 0x3c) == *(int *)(param_1 + 0x20)) &&
      (*(int *)(param_1 + 0x40) == *(int *)(param_1 + 0x24))) &&
     (fVar1 = (float)*(undefined8 *)(param_1 + 0x44) - (float)*(undefined8 *)(param_1 + 0x28),
     fVar2 = (float)((ulong)*(undefined8 *)(param_1 + 0x44) >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20),
     fVar3 = (float)*(undefined8 *)(param_1 + 0x4c) - (float)*(undefined8 *)(param_1 + 0x30),
     fVar5 = (float)((ulong)*(undefined8 *)(param_1 + 0x4c) >> 0x20) -
             (float)((ulong)*(undefined8 *)(param_1 + 0x30) >> 0x20),
     fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2 < _UNK_013aa3dc)) {
    fVar1 = *(float *)(param_1 + 0x54);
    fVar2 = *(float *)(param_1 + 0x38);
    if (cRam0000000004f4a18f == '\0') {
      FUN_021f03f8(PTR_DAT_049bbf30);
      cRam0000000004f4a18f = '\x01';
    }
    fVar3 = ABS(fVar1);
    fVar5 = ABS(fVar2);
    if (fVar3 <= fVar5) {
      fVar3 = fVar5;
    }
    fVar4 = **(float **)(*(long *)PTR_DAT_049bbf30 + 0xb8) * 8.0;
    fVar5 = fVar3 * _UNK_013aa8a0;
    if (fVar3 * _UNK_013aa8a0 <= fVar4) {
      fVar5 = fVar4;
    }
    return fVar5 <= ABS(fVar2 - fVar1);
  }
  return true;
}

