/* IL2CPP: SandFlowRenderer$$SetViewLight
void SandFlowRenderer__SetViewLight (SandFlowRenderer_o* __this, UnityEngine_Camera_o* camera, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$SetViewLight
   void SandFlowRenderer__SetViewLight (SandFlowRenderer_o* __this, UnityEngine_Camera_o* camera,
   const MethodInfo* method); */

void SandFlowRenderer__SetViewLight_24c3844(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bbd8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbd8 = 1;
  }
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,0,0);
  puVar2 = PTR_DAT_049c6e10;
  if ((uVar3 & 1) != 0) {
    return;
  }
  lVar6 = *(long *)(param_1 + 0x2d8);
  lVar4 = *(long *)PTR_DAT_049c6e10;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(*(long *)(lVar4 + 0xb8) + 0x3c);
    UnityEngine_Camera__get_worldToCameraMatrix_3bce094(&uStack_c0,param_2,0);
    fVar9 = *(float *)(param_1 + 100);
    uStack_78 = uStack_b8;
    uStack_80 = uStack_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    fVar8 = *(float *)(param_1 + 0x60);
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    uStack_48 = uStack_88;
    uStack_50 = uStack_90;
    fVar7 = (float)UnityEngine_Matrix4x4__MultiplyVector_3c07a64
                             (*(undefined4 *)(param_1 + 0x5c),&uStack_80,0);
    if (cRam0000000004f4a55c == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a55c = '\x01';
    }
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    fVar10 = SQRT(fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8);
    if (fVar10 <= _UNK_013aa920) {
      if (cRam0000000004f4a233 == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a233 = '\x01';
      }
      pfVar5 = *(float **)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      fVar7 = *pfVar5;
      fVar8 = pfVar5[1];
      fVar9 = pfVar5[2];
    }
    else {
      fVar7 = fVar7 / fVar10;
      fVar8 = fVar8 / fVar10;
      fVar9 = fVar9 / fVar10;
    }
    if (lVar6 != 0) {
      UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14(fVar7,fVar8,fVar9,0,lVar6,uVar1,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

