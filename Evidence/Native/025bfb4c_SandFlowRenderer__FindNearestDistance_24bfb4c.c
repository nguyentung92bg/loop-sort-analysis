/* IL2CPP: SandFlowRenderer$$FindNearestDistance
float SandFlowRenderer__FindNearestDistance (SandFlowRenderer_o* __this, UnityEngine_Vector3_o position, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$FindNearestDistance
   float SandFlowRenderer__FindNearestDistance (SandFlowRenderer_o* __this, UnityEngine_Vector3_o
   position, const MethodInfo* method); */

float SandFlowRenderer__FindNearestDistance_24bfb4c
                (undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4)

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
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  if ((*(int *)(param_4 + 0x2fc) < 2) || (*(float *)(param_4 + 0x318) <= _UNK_013aa94c)) {
    return 0.0;
  }
  fVar12 = 3.4028235e+38;
  iVar7 = 0;
  iVar8 = 0;
  do {
    fVar10 = (float)SandFlowRenderer__SampleDistanceSqr_24bfc24
                              (param_1,param_2,param_3,param_4,iVar7);
    iVar2 = iVar7;
    if (fVar12 <= fVar10) {
      iVar2 = iVar8;
      fVar10 = fVar12;
    }
    fVar12 = fVar10;
    iVar7 = iVar7 + 1;
    iVar8 = iVar2;
  } while (iVar7 < *(int *)(param_4 + 0x2fc));
  iVar7 = 0;
  if (iVar2 != *(int *)(param_4 + 0x2fc) + -1) {
    iVar7 = iVar2;
  }
  if (*(char *)(param_4 + 0x31c) != '\0') {
    iVar2 = iVar7;
  }
  if ((bRam0000000004f4bbc6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbc6 = 1;
  }
  puVar5 = PTR_DAT_049c6e10;
  lVar6 = *(long *)(param_4 + 0x2c8);
  if (lVar6 == 0) goto LAB_025bfa90;
  if (*(uint *)(lVar6 + 0x18) <= (uint)(iVar2 << 1)) goto LAB_025bfa8c;
  lVar1 = lVar6 + (long)(iVar2 << 1) * 0x10;
  iVar8 = iVar2 + -1;
  iVar4 = *(int *)(param_4 + 0x2fc) + -1;
  uVar13 = *(undefined4 *)(lVar1 + 0x20);
  uVar14 = *(undefined4 *)(lVar1 + 0x24);
  uVar15 = *(undefined4 *)(lVar1 + 0x28);
  iVar7 = iVar2 + 1;
  fVar10 = *(float *)(param_4 + 0x318) / (float)iVar4;
  fVar12 = fVar10 * (float)iVar2;
  if (*(char *)(param_4 + 0x31c) == '\0') {
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
      uVar11 = *(undefined4 *)(lVar6 + 0x28);
      if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar9 = (float)SandFlowRenderer__SegmentProgress_24bfacc
                               (uVar13,uVar14,uVar15,uVar16,uVar17,uVar11);
      if (0.0 < fVar9) {
        fVar12 = fVar12 + fVar10 * fVar9;
        goto LAB_025bfa3c;
      }
    }
  }
  if (-1 < iVar8) {
    lVar6 = *(long *)(param_4 + 0x2c8);
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
    uVar11 = *(undefined4 *)(lVar6 + 0x20);
    uVar16 = *(undefined4 *)(lVar6 + 0x24);
    uVar17 = *(undefined4 *)(lVar6 + 0x28);
    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar9 = (float)SandFlowRenderer__SegmentProgress_24bfacc
                             (uVar13,uVar14,uVar15,uVar11,uVar16,uVar17);
    fVar12 = fVar12 - fVar10 * fVar9;
  }
LAB_025bfa3c:
  fVar10 = *(float *)(param_4 + 0x318);
  if (*(char *)(param_4 + 0x31c) != '\0') {
    fVar12 = fVar12 - fVar10 * (float)(int)(fVar12 / fVar10);
  }
  if (fVar12 <= fVar10) {
    fVar10 = fVar12;
  }
  fVar9 = 0.0;
  if (0.0 <= fVar12) {
    fVar9 = fVar10;
  }
  return fVar9;
}

