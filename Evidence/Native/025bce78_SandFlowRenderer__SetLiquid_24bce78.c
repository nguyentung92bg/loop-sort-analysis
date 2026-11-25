/* IL2CPP: SandFlowRenderer$$SetLiquid
void SandFlowRenderer__SetLiquid (SandFlowRenderer_o* __this, UnityEngine_Shader_o* shader, UnityEngine_Camera_o* camera, float resolution, float maskResolution, float texelsPerRadius, float kernelRadius, float jellySize, float blend, float airSize, UnityEngine_Vector4_o shape, UnityEngine_Vector4_o light, UnityEngine_Vector4_o tone, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$SetLiquid
   void SandFlowRenderer__SetLiquid (SandFlowRenderer_o* __this, UnityEngine_Shader_o* shader,
   UnityEngine_Camera_o* camera, float resolution, float maskResolution, float texelsPerRadius,
   float kernelRadius, float jellySize, float blend, float airSize, UnityEngine_Vector4_o shape,
   UnityEngine_Vector4_o light, UnityEngine_Vector4_o tone, const MethodInfo* method); */

void SandFlowRenderer__SetLiquid_24bce78
               (float param_1,float param_2,float param_3,float param_4,float param_5,
               undefined4 param_6,float param_7,long param_8,long param_9,long param_10)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long *plVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  undefined4 uStack0000000000000000;
  undefined4 uStack0000000000000004;
  undefined4 uStack0000000000000008;
  undefined4 uStack000000000000000c;
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 in_stack_00000018;
  undefined4 uStack0000000000000020;
  undefined4 uStack0000000000000024;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  
  puVar3 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bbb9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bceb8);
    FUN_021f03f8(PTR_DAT_049bcea0);
    FUN_021f03f8(PTR_DAT_049c6e60);
    FUN_021f03f8(PTR_DAT_049b89f8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6e68);
    FUN_021f03f8(PTR_DAT_049c6e70);
    FUN_021f03f8(PTR_DAT_049c6e10);
    FUN_021f03f8(PTR_DAT_049c6e78);
    FUN_021f03f8(PTR_DAT_049c6e80);
    FUN_021f03f8(PTR_DAT_049c6e88);
    FUN_021f03f8(PTR_DAT_049c6e90);
    FUN_021f03f8(PTR_DAT_049c6e98);
    bRam0000000004f4bbb9 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(param_9,0,0);
  if ((uVar8 & 1) == 0) {
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(param_10,0,0);
    if ((uVar8 & 1) == 0) {
      if (param_9 == 0) goto LAB_025bd9b8;
      uVar8 = UnityEngine_Shader__get_isSupported_3bdfae4(param_9,0);
      if ((uVar8 & 1) != 0) {
        plVar14 = (long *)(param_8 + 0x18);
        lVar15 = *plVar14;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(lVar15,0,0);
        if ((uVar8 & 1) != 0) {
          lVar15 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b89f8);
          UnityEngine_Material___ctor_3be5d2c(lVar15,param_9,0);
          if (lVar15 == 0) goto LAB_025bd9b8;
          UnityEngine_Object__set_name_3c233fc(lVar15,*(undefined8 *)PTR_DAT_049c6e80,0);
          UnityEngine_Object__set_hideFlags_3c2489c(lVar15,0x3d,0);
          *plVar14 = lVar15;
          thunk_FUN_021f190c(plVar14,lVar15);
          puVar4 = PTR_DAT_049c6e60;
          lVar15 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c6e60);
          UnityEngine_Rendering_CommandBuffer___ctor_3c3e728(lVar15,0);
          if (lVar15 == 0) goto LAB_025bd9b8;
          UnityEngine_Rendering_CommandBuffer__set_name_3c3ceb0
                    (lVar15,*(undefined8 *)PTR_DAT_049c6e90,0);
          *(long *)(param_8 + 0x20) = lVar15;
          thunk_FUN_021f190c((long *)(param_8 + 0x20),lVar15);
          lVar15 = thunk_FUN_0222ca34(*(undefined8 *)puVar4);
          UnityEngine_Rendering_CommandBuffer___ctor_3c3e728(lVar15,0);
          if (lVar15 == 0) goto LAB_025bd9b8;
          UnityEngine_Rendering_CommandBuffer__set_name_3c3ceb0
                    (lVar15,*(undefined8 *)PTR_DAT_049c6e88,0);
          *(long *)(param_8 + 0x28) = lVar15;
          thunk_FUN_021f190c((long *)(param_8 + 0x28),lVar15);
          if (*(long *)(param_8 + 0x2d0) == 0) goto LAB_025bd9b8;
          UnityEngine_Material__EnableKeyword_3be7324
                    (*(long *)(param_8 + 0x2d0),*(undefined8 *)PTR_DAT_049c6e98,0);
          SandFlowRenderer__SetLiquidState_24bdc28(param_8,1);
          puVar5 = PTR_DAT_049bceb8;
          puVar4 = PTR_DAT_049bcea0;
          uVar13 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bcea0 + 0xb8) + 8);
          uVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bceb8);
          UnityEngine_Camera_CameraCallback___ctor_3bcfd68
                    (uVar9,param_8,*(undefined8 *)PTR_DAT_049c6e70,0);
          plVar14 = (long *)System_Delegate__Combine_3145640(uVar13,uVar9,0);
          if (plVar14 == (long *)0x0) {
            plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            *plVar10 = 0;
          }
          else {
            lVar15 = *(long *)puVar5;
            if (*plVar14 != lVar15) {
LAB_025bd1d8:
                    /* WARNING: Subroutine does not return */
              FUN_021f0a20(plVar14);
            }
            plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
            *plVar10 = (long)plVar14;
            if (*plVar14 != lVar15) goto LAB_025bd1d8;
          }
          thunk_FUN_021f190c(plVar10,plVar14);
        }
        plVar14 = (long *)(param_8 + 0x50);
        lVar15 = *plVar14;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(lVar15,param_10,0);
        if ((uVar8 & 1) != 0) {
          lVar15 = *plVar14;
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(lVar15,0,0);
          if ((uVar8 & 1) != 0) {
            if (*plVar14 == 0) goto LAB_025bd9b8;
            UnityEngine_Camera__RemoveCommandBuffer_3bcfa14
                      (*plVar14,0xb,*(undefined8 *)(param_8 + 0x28),0);
          }
          if (param_10 == 0) goto LAB_025bd9b8;
          UnityEngine_Camera__AddCommandBuffer_3bcf718
                    (param_10,0xb,*(undefined8 *)(param_8 + 0x28),0);
          *(long *)(param_8 + 0x50) = param_10;
          thunk_FUN_021f190c(plVar14,param_10);
        }
        fVar22 = _UNK_013aa810;
        fVar21 = 1.0;
        if (param_1 <= 1.0) {
          fVar21 = param_1;
        }
        fVar18 = _UNK_013aa810;
        if (_UNK_013aa810 <= param_1) {
          fVar18 = fVar21;
        }
        if (param_3 <= 0.0) {
          if (param_10 == 0) goto LAB_025bd9b8;
        }
        else {
          if (param_10 == 0) goto LAB_025bd9b8;
          uVar8 = UnityEngine_Camera__get_orthographic_3bcba70(param_10,0);
          if ((uVar8 & 1) != 0) {
            fVar21 = _UNK_013aa94c;
            if (_UNK_013aa94c <= param_4) {
              fVar21 = param_4;
            }
            fVar18 = (float)UnityEngine_Camera__get_orthographicSize_3bcb8e8(param_10,0);
            iVar7 = UnityEngine_Camera__get_pixelHeight_3bcdd64(param_10,0);
            if (iVar7 < 2) {
              iVar7 = 1;
            }
            fVar19 = ((param_3 / fVar21 + param_3 / fVar21) * fVar18) / (float)iVar7;
            fVar21 = 1.0;
            if (fVar19 <= 1.0) {
              fVar21 = fVar19;
            }
            fVar18 = _UNK_013aa85c;
            if (_UNK_013aa85c <= fVar19) {
              fVar18 = fVar21;
            }
          }
        }
        iVar7 = UnityEngine_Camera__get_pixelWidth_3bcdcb0(param_10,0);
        if (cRam0000000004f4b79c == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4b79c = '\x01';
        }
        puVar4 = PTR_DAT_049b8758;
        fVar21 = fVar18 * (float)iVar7 * 0.125;
        if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar7 = (int)fVar21 * 8;
        if (iVar7 < 9) {
          iVar7 = 8;
        }
        iVar1 = 8;
        if ((float)(int)fVar21 != INFINITY) {
          iVar1 = iVar7;
        }
        iVar7 = UnityEngine_Camera__get_pixelHeight_3bcdd64(param_10,0);
        if (cRam0000000004f4b79c == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4b79c = '\x01';
        }
        fVar21 = fVar18 * (float)iVar7 * 0.125;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar7 = (int)fVar21 * 8;
        if (iVar7 < 9) {
          iVar7 = 8;
        }
        iVar2 = 8;
        if ((float)(int)fVar21 != INFINITY) {
          iVar2 = iVar7;
        }
        fVar21 = 1.0;
        if (param_2 <= 1.0) {
          fVar21 = param_2;
        }
        if (fVar22 <= param_2) {
          fVar22 = fVar21;
        }
        iVar7 = UnityEngine_Camera__get_pixelWidth_3bcdcb0(param_10,0);
        if (cRam0000000004f4b79c == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4b79c = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar11 = (int)(fVar22 * (float)iVar7);
        if (iVar11 < 2) {
          iVar11 = 1;
        }
        if ((float)(int)(fVar22 * (float)iVar7) == INFINITY) {
          iVar11 = 1;
        }
        iVar7 = UnityEngine_Camera__get_pixelHeight_3bcdd64(param_10,0);
        if (cRam0000000004f4b79c == '\0') {
          FUN_021f03f8(PTR_DAT_049b8758);
          cRam0000000004f4b79c = '\x01';
        }
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        iVar12 = (int)(fVar22 * (float)iVar7);
        plVar14 = (long *)(param_8 + 0x30);
        lVar15 = *plVar14;
        if (iVar12 < 2) {
          iVar12 = 1;
        }
        if ((float)(int)(fVar22 * (float)iVar7) == INFINITY) {
          iVar12 = 1;
        }
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(lVar15,0,0);
        if ((uVar8 & 1) == 0) {
          plVar10 = (long *)*plVar14;
          if (plVar10 == (long *)0x0) goto LAB_025bd9b8;
          iVar7 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          if (iVar7 != iVar1) goto LAB_025bd5cc;
          plVar10 = (long *)*plVar14;
          if (plVar10 == (long *)0x0) goto LAB_025bd9b8;
          iVar7 = (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
          if (iVar7 != iVar2) goto LAB_025bd5cc;
          plVar10 = *(long **)(param_8 + 0x40);
          if (plVar10 == (long *)0x0) goto LAB_025bd9b8;
          iVar7 = (**(code **)(*plVar10 + 0x178))(plVar10,*(undefined8 *)(*plVar10 + 0x180));
          if (iVar7 != iVar11) goto LAB_025bd5cc;
          plVar10 = *(long **)(param_8 + 0x40);
          if (plVar10 == (long *)0x0) goto LAB_025bd9b8;
          iVar7 = (**(code **)(*plVar10 + 0x198))(plVar10,*(undefined8 *)(*plVar10 + 0x1a0));
          if (iVar7 != iVar12) goto LAB_025bd5cc;
        }
        else {
LAB_025bd5cc:
          SandFlowRenderer__ReleaseLiquidTexture_24bdcf4(param_8);
          uVar8 = UnityEngine_SystemInfo__SupportsRenderTextureFormat_3c28ed0(2,0);
          puVar3 = PTR_DAT_049c6e10;
          uVar17 = 2;
          if ((uVar8 & 1) == 0) {
            uVar17 = 0;
          }
          if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar9 = SandFlowRenderer__CreateLiquidTexture_24bde24
                            (iVar1,iVar2,uVar17,*(undefined8 *)PTR_DAT_049c6e90,0);
          *(undefined8 *)(param_8 + 0x30) = uVar9;
          thunk_FUN_021f190c(plVar14,uVar9);
          uVar9 = SandFlowRenderer__CreateLiquidTexture_24bde24
                            (iVar1,iVar2,uVar17,*(undefined8 *)PTR_DAT_049c6e78,1);
          puVar16 = (undefined8 *)(param_8 + 0x38);
          *puVar16 = uVar9;
          thunk_FUN_021f190c(puVar16,uVar9);
          uVar9 = SandFlowRenderer__CreateMaskTexture_24bdf1c(iVar11,iVar12);
          *(undefined8 *)(param_8 + 0x40) = uVar9;
          thunk_FUN_021f190c();
          lVar15 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049c6e68,2);
          UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_3c3bd60
                    (&uStack_c8,*(undefined8 *)(param_8 + 0x30),0);
          if (lVar15 == 0) goto LAB_025bd9b8;
          if (*(int *)(lVar15 + 0x18) == 0) {
LAB_025bd9bc:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          *(undefined8 *)(lVar15 + 0x40) = uStack_a8;
          *(undefined8 *)(lVar15 + 0x28) = uStack_c0;
          *(undefined8 *)(lVar15 + 0x20) = uStack_c8;
          *(undefined8 *)(lVar15 + 0x38) = uStack_b0;
          *(undefined8 *)(lVar15 + 0x30) = uStack_b8;
          UnityEngine_Rendering_RenderTargetIdentifier__op_Implicit_3c3bd60(&uStack_f0,*puVar16,0);
          if ((*(uint *)(lVar15 + 0x18) & 0xfffffffe) == 0) goto LAB_025bd9bc;
          *(undefined8 *)(lVar15 + 0x68) = uStack_d0;
          *(undefined8 *)(lVar15 + 0x60) = uStack_d8;
          *(undefined8 *)(lVar15 + 0x58) = uStack_e0;
          *(undefined8 *)(lVar15 + 0x50) = uStack_e8;
          *(undefined8 *)(lVar15 + 0x48) = uStack_f0;
          *(long *)(param_8 + 0x48) = lVar15;
          thunk_FUN_021f190c((long *)(param_8 + 0x48),lVar15);
          if (*(long *)(param_8 + 0x2d8) == 0) goto LAB_025bd9b8;
          UnityEngine_MaterialPropertyBlock__SetTexture_3bdbda0
                    (*(long *)(param_8 + 0x2d8),
                     *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x68),
                     *(undefined8 *)(param_8 + 0x30),0);
          if (*(long *)(param_8 + 0x2d8) == 0) goto LAB_025bd9b8;
          UnityEngine_MaterialPropertyBlock__SetTexture_3bdbda0
                    (*(long *)(param_8 + 0x2d8),
                     *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x6c),
                     *(undefined8 *)(param_8 + 0x38),0);
          if (*(long *)(param_8 + 0x2d8) == 0) goto LAB_025bd9b8;
          UnityEngine_MaterialPropertyBlock__SetTexture_3bdbda0
                    (*(long *)(param_8 + 0x2d8),
                     *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x70),
                     *(undefined8 *)(param_8 + 0x40),0);
          if (*(long *)(param_8 + 0x2d8) == 0) goto LAB_025bd9b8;
          UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                    (1.0 / (float)iVar1,1.0 / (float)iVar2,*(long *)(param_8 + 0x2d8),
                     *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x94),0);
          if (*(long *)(param_8 + 0x2d8) == 0) goto LAB_025bd9b8;
          UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                    ((float)iVar11,(float)iVar12,1.0 / (float)iVar11,1.0 / (float)iVar12,
                     *(long *)(param_8 + 0x2d8),
                     *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x74),0);
        }
        puVar3 = PTR_DAT_049c6e10;
        lVar15 = *(long *)(param_8 + 0x2d8);
        if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lVar15 != 0) {
          UnityEngine_MaterialPropertyBlock__SetFloat_3bdbd10
                    (_UNK_013aa77c - fVar22,lVar15,
                     *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x78),0);
          if (*(long *)(param_8 + 0x2d8) != 0) {
            UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                      (uStack0000000000000000,uStack0000000000000004,uStack0000000000000008,
                       uStack000000000000000c,*(long *)(param_8 + 0x2d8),
                       *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x60),0);
            if (*(long *)(param_8 + 0x2d8) != 0) {
              UnityEngine_MaterialPropertyBlock__SetFloat_3bdbd10
                        (param_6,*(long *)(param_8 + 0x2d8),
                         *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x7c),0);
              fVar22 = 1.0;
              if (param_7 <= 1.0) {
                fVar22 = param_7;
              }
              fVar21 = 1.0;
              if (0.0 <= param_7) {
                fVar21 = 1.0 - fVar22;
              }
              *(float *)(param_8 + 0x138) = fVar21;
              uVar8 = UnityEngine_Camera__get_orthographic_3bcba70(param_10,0);
              fVar22 = 0.0;
              if ((uVar8 & 1) != 0) {
                fVar18 = (float)UnityEngine_Camera__get_orthographicSize_3bcb8e8(param_10,0);
                fVar21 = _UNK_013aa94c;
                if (_UNK_013aa94c <= fVar18) {
                  fVar21 = fVar18;
                }
                fVar21 = (float)iVar2 / (fVar21 + fVar21);
                if (0.0 < fVar21) {
                  fVar21 = fVar21 * param_5;
                  fVar22 = 1.0;
                  if (1.0 <= fVar21) {
                    fVar22 = fVar21;
                  }
                  if (cRam0000000004f4bc0d == '\0') {
                    FUN_021f03f8(PTR_DAT_049b8758);
                    cRam0000000004f4bc0d = '\x01';
                  }
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  dVar20 = (double)System_Math__Log_30ff3e8((double)fVar22,0x4000000000000000,0);
                  fVar22 = 0.0;
                  if (0.0 <= (float)dVar20) {
                    fVar22 = (float)dVar20;
                  }
                }
              }
              lVar15 = *(long *)(param_8 + 0x2d8);
              if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                FUN_021f0574();
              }
              if (lVar15 != 0) {
                UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                          (uStack0000000000000010,uStack0000000000000014,in_stack_00000018,fVar22,
                           lVar15,*(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 100),0);
                if (*(long *)(param_8 + 0x2d8) != 0) {
                  UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                            (uStack0000000000000020,uStack0000000000000024,uStack0000000000000028,
                             uStack000000000000002c,*(long *)(param_8 + 0x2d8),
                             *(undefined4 *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x98),0);
                  return;
                }
              }
            }
          }
        }
LAB_025bd9b8:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
  puVar3 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bbbd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bceb8);
    FUN_021f03f8(PTR_DAT_049bcea0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6e70);
    FUN_021f03f8(PTR_DAT_049c6e10);
    FUN_021f03f8(PTR_DAT_049c6e98);
    bRam0000000004f4bbbd = 1;
  }
  uVar9 = *(undefined8 *)(param_8 + 0x18);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(uVar9,0,0);
  puVar6 = PTR_DAT_049c6e70;
  puVar5 = PTR_DAT_049bceb8;
  puVar4 = PTR_DAT_049bcea0;
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar13 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bcea0 + 0xb8) + 8);
  uVar9 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bceb8);
  UnityEngine_Camera_CameraCallback___ctor_3bcfd68(uVar9,param_8,*(undefined8 *)puVar6,0);
  plVar14 = (long *)System_Delegate__Remove_314582c(uVar13,uVar9,0);
  if (plVar14 == (long *)0x0) {
    plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar10 = 0;
  }
  else {
    lVar15 = *(long *)puVar5;
    if (*plVar14 != lVar15) {
LAB_025bdaf8:
                    /* WARNING: Subroutine does not return */
      FUN_021f0a20(plVar14);
    }
    plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 8);
    *plVar10 = (long)plVar14;
    if (*plVar14 != lVar15) goto LAB_025bdaf8;
  }
  thunk_FUN_021f190c(plVar10,plVar14);
  plVar14 = (long *)(param_8 + 0x50);
  lVar15 = *plVar14;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar8 = UnityEngine_Object__op_Inequality_3c1b96c(lVar15,0,0);
  if ((uVar8 & 1) != 0) {
    if (*plVar14 == 0) goto LAB_025bdc24;
    UnityEngine_Camera__RemoveCommandBuffer_3bcfa14(*plVar14,0xb,*(undefined8 *)(param_8 + 0x28),0);
  }
  if (*(long *)(param_8 + 0x2d0) != 0) {
    UnityEngine_Material__DisableKeyword_3be7528
              (*(long *)(param_8 + 0x2d0),*(undefined8 *)PTR_DAT_049c6e98,0);
    SandFlowRenderer__SetLiquidState_24bdc28(param_8,0);
    uVar9 = *(undefined8 *)(param_8 + 0x18);
    if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
      FUN_021f0574();
    }
    SandFlowRenderer__DestroyObject_24be4c4(uVar9);
    *(undefined8 *)(param_8 + 0x18) = 0;
    thunk_FUN_021f190c((undefined8 *)(param_8 + 0x18),0);
    lVar15 = *(long *)(param_8 + 0x20);
    if (lVar15 != 0) {
      UnityEngine_Rendering_CommandBuffer__Release_3c3e76c(lVar15,0);
      *(undefined8 *)(param_8 + 0x20) = 0;
      thunk_FUN_021f190c((long *)(param_8 + 0x20),0);
      lVar15 = *(long *)(param_8 + 0x28);
      if (lVar15 != 0) {
        UnityEngine_Rendering_CommandBuffer__Release_3c3e76c(lVar15,0);
        *(undefined8 *)(param_8 + 0x28) = 0;
        thunk_FUN_021f190c((long *)(param_8 + 0x28),0);
        *(undefined8 *)(param_8 + 0x50) = 0;
        thunk_FUN_021f190c(plVar14,0);
        puVar3 = PTR_DAT_049b3b98;
        if ((bRam0000000004f4bbbf & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049b3b98);
          FUN_021f03f8(PTR_DAT_049c6e10);
          bRam0000000004f4bbbf = 1;
        }
        plVar14 = (long *)(param_8 + 0x30);
        lVar15 = *plVar14;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar8 = UnityEngine_Object__op_Equality_3c1eeb4(lVar15,0,0);
        if ((uVar8 & 1) != 0) {
          return;
        }
        if (*plVar14 != 0) {
          UnityEngine_RenderTexture__Release_3bff874(*plVar14,0);
          lVar15 = *plVar14;
          if (*(int *)(*(long *)PTR_DAT_049c6e10 + 0xe4) == 0) {
            FUN_021f0574();
          }
          SandFlowRenderer__DestroyObject_24be4c4(lVar15);
          *(undefined8 *)(param_8 + 0x30) = 0;
          thunk_FUN_021f190c(plVar14,0);
          lVar15 = *(long *)(param_8 + 0x38);
          if (lVar15 != 0) {
            UnityEngine_RenderTexture__Release_3bff874(lVar15,0);
            SandFlowRenderer__DestroyObject_24be4c4(*(undefined8 *)(param_8 + 0x38));
            *(undefined8 *)(param_8 + 0x38) = 0;
            thunk_FUN_021f190c((long *)(param_8 + 0x38),0);
            lVar15 = *(long *)(param_8 + 0x40);
            if (lVar15 != 0) {
              UnityEngine_RenderTexture__Release_3bff874(lVar15,0);
              SandFlowRenderer__DestroyObject_24be4c4(*(undefined8 *)(param_8 + 0x40));
              *(undefined8 *)(param_8 + 0x40) = 0;
              thunk_FUN_021f190c((long *)(param_8 + 0x40),0);
              puVar16 = (undefined8 *)(param_8 + 0x48);
              *puVar16 = 0;
              if (iRam0000000005174518 != 0) {
                FUN_023118d0(1L << ((ulong)puVar16 >> 0xc & 0x3f),
                             ((ulong)puVar16 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
              }
              return;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
LAB_025bdc24:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

