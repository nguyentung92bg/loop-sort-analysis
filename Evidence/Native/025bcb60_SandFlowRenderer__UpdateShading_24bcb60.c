/* IL2CPP: SandFlowRenderer$$UpdateShading
void SandFlowRenderer__UpdateShading (SandFlowRenderer_o* __this, float brightness, float shade, float toneContrast, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowRenderer$$UpdateShading
   void SandFlowRenderer__UpdateShading (SandFlowRenderer_o* __this, float brightness, float shade,
   float toneContrast, const MethodInfo* method); */

void SandFlowRenderer__UpdateShading_24bcb60
               (float param_1,float param_2,undefined8 param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 uVar11;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 uVar12;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 uVar13;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 uVar18;
  
  puVar4 = PTR_DAT_049b3b98;
  fVar15 = param_2;
  uVar18 = param_3;
  if ((bRam0000000004f4bbc1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6e58);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6e10);
    bRam0000000004f4bbc1 = 1;
  }
  plVar7 = (long *)(param_4 + 0x10);
  lVar8 = *plVar7;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(lVar8,0,0);
  if ((uVar6 & 1) == 0) {
    if (*plVar7 == 0) goto LAB_025bce70;
    uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled_3c17fb0(*plVar7,0);
    fVar16 = (float)uVar18;
    if ((uVar6 & 1) == 0) goto LAB_025bcc04;
  }
  else {
LAB_025bcc04:
    lVar8 = UnityEngine_RenderSettings__get_sun_3bdf4d0(0);
    *plVar7 = lVar8;
    thunk_FUN_021f190c(plVar7,lVar8);
    lVar8 = *plVar7;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(lVar8,0,0);
    if ((uVar6 & 1) == 0) {
      if (*plVar7 == 0) goto LAB_025bce70;
      uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled_3c17fb0(*plVar7,0);
      fVar16 = (float)uVar18;
      if ((uVar6 & 1) != 0) goto LAB_025bcd28;
    }
    UnityEngine_Time__get_unscaledTime_3c296e8(0);
    fVar16 = (float)uVar18;
    fVar15 = *(float *)(param_4 + 0x58);
    if (fVar15 <= (float)CONCAT13(extraout_var_05,
                                  CONCAT12(extraout_var_02,CONCAT11(extraout_var,extraout_b0)))) {
      UnityEngine_Time__get_unscaledTime_3c296e8(0);
      fVar15 = 1.0;
      *(undefined8 *)(param_4 + 0x10) = 0;
      *(float *)(param_4 + 0x58) =
           (float)CONCAT13(extraout_var_06,
                           CONCAT12(extraout_var_03,CONCAT11(extraout_var_00,extraout_b0_00))) + 1.0
      ;
      thunk_FUN_021f190c(plVar7,0);
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar8 = UnityEngine_Object__FindObjectsByType_object__2695670
                        (0,*(undefined8 *)PTR_DAT_049c6e58);
      fVar16 = (float)uVar18;
      if (lVar8 == 0) goto LAB_025bce70;
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a8();
          }
          lVar9 = *(long *)(lVar8 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar9 == 0) goto LAB_025bce70;
          iVar5 = UnityEngine_Light__get_type_3bef118(lVar9,0);
          if (iVar5 == 1) {
            uVar6 = UnityEngine_Behaviour__get_isActiveAndEnabled_3c17fb0(lVar9,0);
            fVar16 = (float)uVar18;
            if ((uVar6 & 1) != 0) {
              *plVar7 = lVar9;
              thunk_FUN_021f190c(plVar7,lVar9);
              break;
            }
          }
          fVar16 = (float)uVar18;
          uVar1 = *(uint *)(lVar8 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
    }
  }
LAB_025bcd28:
  lVar8 = *plVar7;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar6 = UnityEngine_Object__op_Inequality_3c1b96c(lVar8,0,0);
  if ((uVar6 & 1) == 0) {
    if (cRam0000000004f4a55c == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a55c = '\x01';
    }
    fVar15 = _UNK_013aa728;
    uVar11 = (undefined1)_UNK_013aa490;
    uVar12 = (undefined1)((uint)_UNK_013aa490 >> 8);
    uVar13 = (undefined1)((uint)_UNK_013aa490 >> 0x10);
    uVar14 = (undefined1)((uint)_UNK_013aa490 >> 0x18);
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
      uVar11 = (undefined1)_UNK_013aa490;
      uVar12 = (undefined1)((uint)_UNK_013aa490 >> 8);
      uVar13 = (undefined1)((uint)_UNK_013aa490 >> 0x10);
      uVar14 = (undefined1)((uint)_UNK_013aa490 >> 0x18);
    }
    fVar16 = (float)CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)));
  }
  else {
    if ((*plVar7 == 0) ||
       (lVar8 = UnityEngine_Component__get_transform_3c18724(*plVar7,0), lVar8 == 0))
    goto LAB_025bce70;
    UnityEngine_Transform__get_forward_3c2db78(lVar8,0);
    fVar17 = -(float)CONCAT13(extraout_var_07,
                              CONCAT12(extraout_var_04,CONCAT11(extraout_var_01,extraout_b0_01)));
    uVar11 = SUB41(fVar17,0);
    uVar12 = (undefined1)((uint)fVar17 >> 8);
    uVar13 = (undefined1)((uint)fVar17 >> 0x10);
    uVar14 = (undefined1)((uint)fVar17 >> 0x18);
    fVar15 = -fVar15;
    fVar16 = -fVar16;
  }
  *(uint *)(param_4 + 0x5c) = CONCAT13(uVar14,CONCAT12(uVar13,CONCAT11(uVar12,uVar11)));
  *(float *)(param_4 + 0x60) = fVar15;
  puVar4 = PTR_DAT_049c6e10;
  uVar6 = _UNK_013a7858;
  fVar17 = (float)param_3;
  *(float *)(param_4 + 100) = fVar16;
  lVar8 = *(long *)(param_4 + 0x2d8);
  fVar15 = 0.0;
  if (0.0 <= param_1) {
    fVar15 = param_1;
  }
  lVar9 = *(long *)puVar4;
  *(undefined4 *)(param_4 + 0x124) = 0;
  iVar5 = -(uint)((float)(uVar6 >> 0x20) < fVar17);
  *(float *)(param_4 + 0x118) = fVar15;
  uVar6 = uVar6 ^ (uVar6 ^ CONCAT44(fVar17,param_2)) &
                  ~CONCAT17((char)((uint)iVar5 >> 0x18),
                            CONCAT16((char)((uint)iVar5 >> 0x10),
                                     CONCAT15((char)((uint)iVar5 >> 8),
                                              CONCAT14((char)iVar5,-(uint)((float)uVar6 < param_2)))
                                    ));
  iVar5 = -(uint)(param_2 < 0.0);
  iVar3 = -(uint)(fVar17 < 0.0);
  *(ulong *)(param_4 + 0x11c) =
       CONCAT17((byte)(uVar6 >> 0x38) & ~(byte)((uint)iVar3 >> 0x18),
                CONCAT16((byte)(uVar6 >> 0x30) & ~(byte)((uint)iVar3 >> 0x10),
                         CONCAT15((byte)(uVar6 >> 0x28) & ~(byte)((uint)iVar3 >> 8),
                                  CONCAT14((byte)(uVar6 >> 0x20) & ~(byte)iVar3,
                                           CONCAT13((byte)(uVar6 >> 0x18) &
                                                    ~(byte)((uint)iVar5 >> 0x18),
                                                    CONCAT12((byte)(uVar6 >> 0x10) &
                                                             ~(byte)((uint)iVar5 >> 0x10),
                                                             CONCAT11((byte)(uVar6 >> 8) &
                                                                      ~(byte)((uint)iVar5 >> 8),
                                                                      (byte)uVar6 & ~(byte)iVar5))))
                                 )));
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (lVar8 != 0) {
    uVar2 = *(undefined4 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x40);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(0,uVar2,0);
    }
    lVar9 = *(long *)(lVar8 + 0x10);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar8,0);
    }
    if (pcRam0000000004f56e88 == (code *)0x0) {
      pcRam0000000004f56e88 = (code *)FUN_021f03bc(&UNK_013b9000);
    }
    (*pcRam0000000004f56e88)(lVar9,uVar2,&stack0xffffffffffffffd0);
    return;
  }
LAB_025bce70:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

