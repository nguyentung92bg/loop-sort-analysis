/* IL2CPP: CellDistanceComparer$$Compare
int32_t CellDistanceComparer__Compare (CellDistanceComparer_o* __this, CellBase_o* left, CellBase_o* right, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CellDistanceComparer$$Compare
   int32_t CellDistanceComparer__Compare (CellDistanceComparer_o* __this, CellBase_o* left,
   CellBase_o* right, const MethodInfo* method); */

undefined8
CellDistanceComparer__Compare_2505de8
          (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5,
          long param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fStack_64;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bd88 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bd88 = 1;
  }
  fStack_64 = 0.0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(param_5,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(param_6,0,0);
    if ((uVar2 & 1) == 0) {
      if (param_5 != 0) {
        fVar5 = *(float *)(param_4 + 0x10);
        fVar9 = *(float *)(param_4 + 0x14);
        fVar7 = *(float *)(param_4 + 0x18);
        fVar4 = (float)CellBase__get_CenterPosition_2504e44(param_5);
        if (cRam0000000004f4a234 == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4a234 = '\x01';
        }
        puVar1 = PTR_DAT_049b8758;
        if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
          FUN_021f0574();
        }
        fVar9 = fVar9 - param_2;
        fVar5 = fVar5 - fVar4;
        fVar7 = fVar7 - param_3;
        fVar4 = fVar7 * fVar7;
        fStack_64 = SQRT(fVar4 + fVar5 * fVar5 + fVar9 * fVar9);
        if (param_6 != 0) {
          fVar6 = *(float *)(param_4 + 0x10);
          fVar5 = *(float *)(param_4 + 0x14);
          fVar8 = *(float *)(param_4 + 0x18);
          fVar9 = (float)CellBase__get_CenterPosition_2504e44(param_6);
          if (cRam0000000004f4a234 == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4a234 = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          fVar5 = fVar5 - fVar4;
          fVar6 = fVar6 - fVar9;
          fVar8 = fVar8 - fVar7;
          uVar3 = System_Single__CompareTo_311213c
                            (SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar5 * fVar5),&fStack_64,0);
          return uVar3;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
  return 0;
}

