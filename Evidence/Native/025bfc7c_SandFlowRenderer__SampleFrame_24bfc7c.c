/* IL2CPP: SandFlowRenderer$$SampleFrame
void SandFlowRenderer__SampleFrame (SandFlowRenderer_o* __this, float distance, UnityEngine_Vector3_o* surface, UnityEngine_Vector3_o* forward, UnityEngine_Vector3_o* up, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$SampleFrame
   void SandFlowRenderer__SampleFrame (SandFlowRenderer_o* __this, float distance,
   UnityEngine_Vector3_o* surface, UnityEngine_Vector3_o* forward, UnityEngine_Vector3_o* up, const
   MethodInfo* method); */

void SandFlowRenderer__SampleFrame_24bfc7c
               (float param_1,long param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  undefined *puVar7;
  char cVar8;
  long lVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  cVar8 = cRam0000000004f4a55c;
  fVar13 = *(float *)(param_2 + 0x318);
  param_1 = param_1 - fVar13 * (float)(int)(param_1 / fVar13);
  fVar10 = fVar13;
  if (param_1 <= fVar13) {
    fVar10 = param_1;
  }
  fVar19 = 0.0;
  if (0.0 <= param_1) {
    fVar19 = fVar10;
  }
  fVar10 = (fVar19 / fVar13) * (float)(*(int *)(param_2 + 0x2fc) + -1);
  iVar3 = -0x80000000;
  if (fVar10 != INFINITY) {
    iVar3 = (int)fVar10;
  }
  iVar5 = *(int *)(param_2 + 0x2fc) + -2;
  lVar9 = *(long *)(param_2 + 0x2c8);
  if (iVar5 <= iVar3) {
    iVar3 = iVar5;
  }
  if (lVar9 != 0) {
    uVar4 = iVar3 * 2;
    if ((uVar4 < *(uint *)(lVar9 + 0x18)) && (uVar4 + 2 < *(uint *)(lVar9 + 0x18))) {
      puVar1 = (undefined8 *)(lVar9 + 0x20 + (long)(int)uVar4 * 0x10);
      puVar2 = (undefined8 *)(lVar9 + 0x20 + (long)(int)(uVar4 + 2) * 0x10);
      uVar14 = *puVar2;
      fVar15 = *(float *)(puVar1 + 1);
      fVar10 = fVar10 - (float)iVar3;
      fVar19 = *(float *)(puVar2 + 1) - fVar15;
      fVar13 = 1.0;
      if (fVar10 <= 1.0) {
        fVar13 = fVar10;
      }
      uVar11 = *puVar1;
      fVar18 = (float)uVar11;
      fVar16 = (float)uVar14 - fVar18;
      fVar12 = (float)((ulong)uVar11 >> 0x20);
      fVar17 = (float)((ulong)uVar14 >> 0x20) - fVar12;
      fVar6 = 0.0;
      if (0.0 <= fVar10) {
        fVar6 = fVar13;
      }
      *param_3 = CONCAT44(fVar12 + fVar17 * fVar6,fVar18 + fVar16 * fVar6);
      *(float *)(param_3 + 1) = fVar15 + fVar6 * fVar19;
      if (cVar8 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a55c = '\x01';
      }
      puVar7 = PTR_DAT_049b8758;
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar10 = _UNK_013aa920;
      fVar13 = SQRT(fVar19 * fVar19 + fVar16 * fVar16 + fVar17 * fVar17);
      if (fVar13 <= _UNK_013aa920) {
        if (cRam0000000004f4a233 == '\0') {
          FUN_021f03f8(PTR_DAT_049bbf90);
          cRam0000000004f4a233 = '\x01';
        }
        uVar14 = **(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
        fVar19 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 1);
      }
      else {
        fVar19 = fVar19 / fVar13;
        uVar14 = CONCAT44(fVar17 / fVar13,fVar16 / fVar13);
      }
      *param_4 = uVar14;
      *(float *)(param_4 + 1) = fVar19;
      lVar9 = *(long *)(param_2 + 0x2c8);
      if (lVar9 == 0) goto LAB_025bff60;
      if (((uint)((long)(int)uVar4 | 1U) < *(uint *)(lVar9 + 0x18)) &&
         (uVar4 + 3 < *(uint *)(lVar9 + 0x18))) {
        puVar2 = (undefined8 *)(lVar9 + 0x20 + ((long)(int)uVar4 | 1U) * 0x10);
        puVar1 = (undefined8 *)(lVar9 + 0x20 + (long)(int)(uVar4 + 3) * 0x10);
        fVar19 = *(float *)(puVar2 + 1);
        fVar13 = *(float *)(puVar1 + 1);
        uVar11 = *puVar2;
        uVar14 = *puVar1;
        fVar15 = (float)uVar11;
        fVar18 = (float)((ulong)uVar11 >> 0x20);
        if (cRam0000000004f4a55c == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4a55c = '\x01';
        }
        fVar15 = fVar15 + ((float)uVar14 - fVar15) * fVar6;
        fVar18 = fVar18 + ((float)((ulong)uVar14 >> 0x20) - fVar18) * fVar6;
        fVar19 = fVar19 + fVar6 * (fVar13 - fVar19);
        if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
          FUN_021f0574();
        }
        fVar13 = SQRT(fVar19 * fVar19 + fVar15 * fVar15 + fVar18 * fVar18);
        if (fVar13 <= fVar10) {
          if (cRam0000000004f4a233 == '\0') {
            FUN_021f03f8(PTR_DAT_049bbf90);
            cRam0000000004f4a233 = '\x01';
          }
          uVar14 = **(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
          fVar19 = *(float *)(*(undefined8 **)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 1);
        }
        else {
          fVar19 = fVar19 / fVar13;
          uVar14 = CONCAT44(fVar18 / fVar13,fVar15 / fVar13);
        }
        *param_5 = uVar14;
        *(float *)(param_5 + 1) = fVar19;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a8();
  }
LAB_025bff60:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

