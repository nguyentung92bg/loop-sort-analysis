/* IL2CPP: SandFlowRenderer$$DistanceAt
float SandFlowRenderer__DistanceAt (SandFlowRenderer_o* __this, int32_t index, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowRenderer$$DistanceAt
   float SandFlowRenderer__DistanceAt (SandFlowRenderer_o* __this, int32_t index,
   UnityEngine_Vector3_o position, const MethodInfo* method); */

float SandFlowRenderer__DistanceAt_24bf87c(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if ((bRam0000000004f4bbc6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbc6 = 1;
  }
  puVar5 = PTR_DAT_049c6e10;
  lVar6 = *(long *)(param_1 + 0x2c8);
  if (lVar6 == 0) goto LAB_025bfa90;
  if (*(uint *)(lVar6 + 0x18) <= (uint)(param_2 << 1)) goto LAB_025bfa8c;
  lVar1 = lVar6 + (long)(param_2 << 1) * 0x10;
  iVar8 = param_2 + -1;
  iVar4 = *(int *)(param_1 + 0x2fc) + -1;
  uVar13 = *(undefined4 *)(lVar1 + 0x20);
  uVar14 = *(undefined4 *)(lVar1 + 0x24);
  uVar15 = *(undefined4 *)(lVar1 + 0x28);
  iVar7 = param_2 + 1;
  fVar12 = *(float *)(param_1 + 0x318) / (float)iVar4;
  fVar11 = fVar12 * (float)param_2;
  if (*(char *)(param_1 + 0x31c) == '\0') {
    if (iVar4 < iVar8 || iVar8 < 0) {
      iVar8 = -1;
    }
    if ((-1 < iVar7) && (iVar7 <= iVar4)) goto LAB_025bf968;
  }
  else {
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = iVar7 / iVar4;
    }
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = iVar8 / iVar4;
    }
    iVar7 = (iVar7 - iVar2 * iVar4) + iVar4;
    iVar2 = 0;
    if (iVar4 != 0) {
      iVar2 = iVar7 / iVar4;
    }
    iVar8 = (iVar8 - iVar3 * iVar4) + iVar4;
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = iVar8 / iVar4;
    }
    iVar7 = iVar7 - iVar2 * iVar4;
    iVar8 = iVar8 - iVar3 * iVar4;
    if (-1 < iVar7) {
LAB_025bf968:
      if (*(uint *)(lVar6 + 0x18) <= (uint)(iVar7 << 1)) goto LAB_025bfa8c;
      lVar6 = lVar6 + (long)(iVar7 << 1) * 0x10;
      uVar16 = *(undefined4 *)(lVar6 + 0x20);
      uVar17 = *(undefined4 *)(lVar6 + 0x24);
      uVar10 = *(undefined4 *)(lVar6 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar9 = (float)SandFlowRenderer__SegmentProgress_24bfacc
                               (uVar13,uVar14,uVar15,uVar16,uVar17,uVar10);
      if (0.0 < fVar9) {
        fVar11 = fVar11 + fVar12 * fVar9;
        goto LAB_025bfa3c;
      }
    }
  }
  if (-1 < iVar8) {
    lVar6 = *(long *)(param_1 + 0x2c8);
    if (lVar6 == 0) {
LAB_025bfa90:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(uint *)(lVar6 + 0x18) <= (uint)(iVar8 << 1)) {
LAB_025bfa8c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a8();
    }
    lVar6 = lVar6 + (long)(iVar8 << 1) * 0x10;
    uVar10 = *(undefined4 *)(lVar6 + 0x20);
    uVar16 = *(undefined4 *)(lVar6 + 0x24);
    uVar17 = *(undefined4 *)(lVar6 + 0x28);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar9 = (float)SandFlowRenderer__SegmentProgress_24bfacc
                             (uVar13,uVar14,uVar15,uVar10,uVar16,uVar17);
    fVar11 = fVar11 - fVar12 * fVar9;
  }
LAB_025bfa3c:
  fVar12 = *(float *)(param_1 + 0x318);
  if (*(char *)(param_1 + 0x31c) != '\0') {
    fVar11 = fVar11 - fVar12 * (float)(int)(fVar11 / fVar12);
  }
  if (fVar11 <= fVar12) {
    fVar12 = fVar11;
  }
  fVar9 = 0.0;
  if (0.0 <= fVar11) {
    fVar9 = fVar12;
  }
  return fVar9;
}

