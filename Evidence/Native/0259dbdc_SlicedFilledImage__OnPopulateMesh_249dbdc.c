/* IL2CPP: SlicedFilledImage$$OnPopulateMesh
void SlicedFilledImage__OnPopulateMesh (SlicedFilledImage_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SlicedFilledImage$$OnPopulateMesh
   void SlicedFilledImage__OnPopulateMesh (SlicedFilledImage_o* __this,
   UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method); */

void SlicedFilledImage__OnPopulateMesh_249dbdc
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  double dVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  double dVar33;
  float fVar34;
  double dVar35;
  double adStack_58 [2];
  
  puVar3 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bad5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bad5 = 1;
  }
  uVar5 = SlicedFilledImage__get_activeSprite_249d660(param_5);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  uVar6 = UnityEngine_Object__op_Equality_3c1eeb4(uVar5,0,0);
  if ((uVar6 & 1) != 0) {
    fVar20 = (float)UnityEngine_UI_Graphic__GetPixelAdjustedRect_3cf8e94(param_5,param_6,0);
    (**(code **)(*param_5 + 0x298))(param_5,*(undefined8 *)(*param_5 + 0x2a0));
    uVar4 = FUN_023aa3cc(0);
    if (param_6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_UI_VertexHelper__Clear_3edd4d4(param_6,0);
    UnityEngine_UI_VertexHelper__AddVert_3edd860(fVar20,param_2,0,0,0,0,0,param_6,uVar4,0);
    UnityEngine_UI_VertexHelper__AddVert_3edd860
              (fVar20,param_2 + param_4,0,0,0x3f800000,0,0,param_6,uVar4,0);
    UnityEngine_UI_VertexHelper__AddVert_3edd860
              (fVar20 + param_3,param_2 + param_4,0,0x3f800000,0x3f800000,0,0,param_6,uVar4,0);
    UnityEngine_UI_VertexHelper__AddVert_3edd860
              (fVar20 + param_3,param_2,0,0x3f800000,0,0,0,param_6,uVar4,0);
    UnityEngine_UI_VertexHelper__AddTriangle_3edd990(param_6,0,1,2,0);
    if ((bRam0000000004f5c088 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049be138);
      bRam0000000004f5c088 = 1;
    }
    UnityEngine_UI_VertexHelper__InitializeListIfRequired_3eed800(param_6);
    puVar3 = PTR_DAT_049be138;
    if (*(long *)(param_6 + 0x50) != 0) {
      FUN_02333498(*(long *)(param_6 + 0x50),&stack0xffffffffffffffc4,
                   *(undefined8 *)PTR_DAT_049be138);
      if (*(long *)(param_6 + 0x50) != 0) {
        FUN_02333498(*(long *)(param_6 + 0x50),&stack0xffffffffffffffc8,*(undefined8 *)puVar3);
        if (*(long *)(param_6 + 0x50) != 0) {
          FUN_02333498(*(long *)(param_6 + 0x50),&stack0xffffffffffffffcc,*(undefined8 *)puVar3);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4bad7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6480);
    bRam0000000004f4bad7 = 1;
  }
  if (param_6 == 0) {
LAB_0259e4e0:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_UI_VertexHelper__Clear_3edd4d4(param_6,0);
  if (*(float *)((long)param_5 + 0xe4) < _UNK_013aa94c) {
    return;
  }
  fVar22 = _UNK_013aa94c;
  fVar14 = (float)UnityEngine_UI_Graphic__GetPixelAdjustedRect_3cf8e94(param_5,0);
  fVar29 = param_4;
  fVar26 = param_3;
  fVar23 = fVar22;
  uVar5 = SlicedFilledImage__get_activeSprite_249d660(param_5);
  uVar4 = UnityEngine_Sprites_DataUtility__GetOuterUV_3c4603c(uVar5,0);
  fVar24 = fVar23;
  fVar27 = fVar26;
  fVar30 = fVar29;
  uVar5 = SlicedFilledImage__get_activeSprite_249d660(param_5);
  fVar15 = (float)UnityEngine_Sprites_DataUtility__GetPadding_3c46050(uVar5,0);
  fVar20 = fVar27;
  fVar32 = fVar30;
  fVar34 = fVar24;
  uVar6 = SlicedFilledImage__get_hasBorder_249d8dc(param_5);
  lVar7 = SlicedFilledImage__get_activeSprite_249d660(param_5);
  if ((uVar6 & 1) != 0) {
    uVar16 = UnityEngine_Sprites_DataUtility__GetInnerUV_3c46028(lVar7,0);
    fVar25 = fVar34;
    fVar28 = fVar20;
    fVar31 = fVar32;
    lVar7 = SlicedFilledImage__get_activeSprite_249d660(param_5);
    if (lVar7 != 0) {
      fVar17 = (float)UnityEngine_Sprite__get_border_3bc3cc0(lVar7,0);
      fVar18 = (float)SlicedFilledImage__get_pixelsPerUnit_249d55c(param_5);
      fVar25 = fVar25 / fVar18;
      fVar28 = fVar28 / fVar18;
      fVar31 = fVar31 / fVar18;
      uVar19 = SlicedFilledImage__GetAdjustedBorders_249e9b0(fVar17 / fVar18,param_5);
      fVar17 = (float)SlicedFilledImage__get_pixelsPerUnit_249d55c(param_5);
      puVar3 = PTR_DAT_049c6480;
      lVar7 = *(long *)PTR_DAT_049c6480;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_021f0574();
        lVar7 = *(long *)puVar3;
      }
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
      if (lVar7 != 0) {
        if (*(int *)(lVar7 + 0x18) != 0) {
          *(float *)(lVar7 + 0x20) = fVar15 / fVar17;
          *(float *)(lVar7 + 0x24) = fVar24 / fVar17;
          lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          if (lVar7 == 0) goto LAB_0259e4e0;
          if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) != 0) {
            *(float *)(lVar7 + 0x38) = param_3 - fVar27 / fVar17;
            *(float *)(lVar7 + 0x3c) = param_4 - fVar30 / fVar17;
            lVar7 = *(long *)puVar3;
            lVar8 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
            if (lVar8 == 0) goto LAB_0259e4e0;
            if (1 < *(uint *)(lVar8 + 0x18)) {
              *(undefined4 *)(lVar8 + 0x28) = uVar19;
              *(float *)(lVar8 + 0x2c) = fVar25;
              if (*(uint *)(lVar8 + 0x18) != 2) {
                uVar6 = 0;
                *(float *)(lVar8 + 0x30) = param_3 - fVar28;
                *(float *)(lVar8 + 0x34) = param_4 - fVar31;
                do {
                  if (*(int *)(lVar7 + 0xe4) == 0) {
                    FUN_021f0574();
                    lVar7 = *(long *)puVar3;
                  }
                  lVar9 = *(long *)(lVar7 + 0xb8);
                  lVar8 = *(long *)(lVar9 + 0x10);
                  if (lVar8 == 0) goto LAB_0259e4e0;
                  if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_0259e4dc;
                  lVar8 = lVar8 + uVar6 * 8;
                  uVar6 = uVar6 + 1;
                  uVar5 = *(undefined8 *)(lVar8 + 0x20);
                  *(ulong *)(lVar8 + 0x20) =
                       CONCAT44(fVar22 + (float)((ulong)uVar5 >> 0x20),fVar14 + (float)uVar5);
                } while (uVar6 != 4);
                if (*(int *)(lVar7 + 0xe4) == 0) {
                  FUN_021f0574();
                  lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                lVar7 = *(long *)(lVar9 + 0x18);
                if (lVar7 != 0) {
                  if (*(int *)(lVar7 + 0x18) == 0) goto LAB_0259e4dc;
                  *(undefined4 *)(lVar7 + 0x20) = uVar4;
                  *(float *)(lVar7 + 0x24) = fVar23;
                  lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                  if (lVar7 != 0) {
                    if ((*(uint *)(lVar7 + 0x18) & 0xfffffffe) == 0) goto LAB_0259e4dc;
                    *(undefined4 *)(lVar7 + 0x28) = uVar16;
                    *(float *)(lVar7 + 0x2c) = fVar34;
                    lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                    if (lVar7 != 0) {
                      if (*(uint *)(lVar7 + 0x18) < 3) goto LAB_0259e4dc;
                      *(float *)(lVar7 + 0x30) = fVar20;
                      *(float *)(lVar7 + 0x34) = fVar32;
                      lVar7 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                      if (lVar7 != 0) {
                        if ((*(uint *)(lVar7 + 0x18) & 0xfffffffc) == 0) goto LAB_0259e4dc;
                        *(float *)(lVar7 + 0x38) = fVar26;
                        *(float *)(lVar7 + 0x3c) = fVar29;
                        lVar7 = *(long *)puVar3;
                        if (*(uint *)(param_5 + 0x1c) < 2) {
                          if (*(int *)(lVar7 + 0xe4) == 0) {
                            FUN_021f0574();
                            lVar7 = *(long *)puVar3;
                          }
                          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                          if (lVar7 != 0) {
                            if ((*(uint *)(lVar7 + 0x18) != 0) && (3 < *(uint *)(lVar7 + 0x18))) {
                              fVar32 = *(float *)(lVar7 + 0x20);
                              fVar20 = *(float *)(lVar7 + 0x38);
LAB_0259e0b8:
                              fVar34 = 1.0;
                              if (0.0 < fVar20 - fVar32) {
                                fVar34 = 1.0 / (fVar20 - fVar32);
                              }
                              uVar6 = 0;
                              do {
                                uVar1 = uVar6 + 1;
                                lVar7 = uVar6 * 8;
                                lVar8 = uVar1 * 8;
                                uVar13 = 0;
                                do {
                                  if (((uVar13 == 1) && (uVar6 == 1)) &&
                                     ((char)param_5[0x1d] == '\0')) {
                                    uVar12 = 2;
                                  }
                                  else {
                                    iVar2 = (int)param_5[0x1c];
                                    uVar12 = uVar13 + 1;
                                    if (iVar2 < 2) {
                                      if (iVar2 == 0) {
                                        lVar9 = *(long *)puVar3;
                                        if (*(int *)(lVar9 + 0xe4) == 0) {
                                          FUN_021f0574();
                                          lVar9 = *(long *)puVar3;
                                        }
                                        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
                                        if (lVar9 == 0) goto LAB_0259e4e0;
                                        if ((*(uint *)(lVar9 + 0x18) <= uVar6) ||
                                           (*(uint *)(lVar9 + 0x18) <= uVar1)) goto LAB_0259e4dc;
                                        fVar20 = *(float *)(lVar9 + 0x20 + lVar7);
LAB_0259e264:
                                        fVar20 = fVar34 * (fVar20 - fVar32);
                                      }
                                      else {
                                        fVar20 = 0.0;
                                        if (iVar2 == 1) {
                                          lVar9 = *(long *)puVar3;
                                          if (*(int *)(lVar9 + 0xe4) == 0) {
                                            FUN_021f0574();
                                            lVar9 = *(long *)puVar3;
                                          }
                                          lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
                                          if (lVar9 == 0) goto LAB_0259e4e0;
                                          if (*(uint *)(lVar9 + 0x18) <= uVar1) goto LAB_0259e4dc;
                                          fVar20 = *(float *)(lVar9 + 0x20 + lVar8);
LAB_0259e1bc:
                                          fVar20 = 1.0 - fVar34 * (fVar20 - fVar32);
                                        }
                                      }
                                    }
                                    else {
                                      if (iVar2 == 2) {
                                        lVar9 = *(long *)puVar3;
                                        if (*(int *)(lVar9 + 0xe4) == 0) {
                                          FUN_021f0574();
                                          lVar9 = *(long *)puVar3;
                                        }
                                        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
                                        if (lVar9 != 0) {
                                          if ((uVar13 < *(uint *)(lVar9 + 0x18)) &&
                                             (uVar12 < *(uint *)(lVar9 + 0x18))) {
                                            fVar20 = *(float *)(lVar9 + uVar13 * 8 + 0x24);
                                            goto LAB_0259e264;
                                          }
                                          goto LAB_0259e4dc;
                                        }
                                        goto LAB_0259e4e0;
                                      }
                                      fVar20 = 0.0;
                                      if (iVar2 == 3) {
                                        lVar9 = *(long *)puVar3;
                                        if (*(int *)(lVar9 + 0xe4) == 0) {
                                          FUN_021f0574();
                                          lVar9 = *(long *)puVar3;
                                        }
                                        lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
                                        if (lVar9 != 0) {
                                          if (uVar12 < *(uint *)(lVar9 + 0x18)) {
                                            fVar20 = *(float *)(lVar9 + uVar12 * 8 + 0x24);
                                            goto LAB_0259e1bc;
                                          }
                                          goto LAB_0259e4dc;
                                        }
                                        goto LAB_0259e4e0;
                                      }
                                    }
                                    if (fVar20 < *(float *)((long)param_5 + 0xe4)) {
                                      lVar9 = *(long *)puVar3;
                                      if (*(int *)(lVar9 + 0xe4) == 0) {
                                        FUN_021f0574();
                                        lVar9 = *(long *)puVar3;
                                      }
                                      lVar10 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x10);
                                      if (lVar10 == 0) goto LAB_0259e4e0;
                                      uVar11 = (ulong)*(uint *)(lVar10 + 0x18);
                                      if ((((uVar11 <= uVar6) || (uVar11 <= uVar13)) ||
                                          (uVar11 <= uVar1)) || (uVar11 <= uVar12))
                                      goto LAB_0259e4dc;
                                      lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 0x18);
                                      if (lVar9 == 0) goto LAB_0259e4e0;
                                      uVar11 = (ulong)*(uint *)(lVar9 + 0x18);
                                      if (((uVar11 <= uVar6) || (uVar11 <= uVar13)) ||
                                         ((uVar11 <= uVar1 || (uVar11 <= uVar12))))
                                      goto LAB_0259e4dc;
                                      lVar10 = lVar10 + 0x20;
                                      lVar9 = lVar9 + 0x20;
                                      SlicedFilledImage__GenerateFilledSprite_249e5e4
                                                (*(undefined4 *)(lVar10 + lVar7),
                                                 *(undefined4 *)(lVar10 + uVar13 * 8 + 4),
                                                 *(undefined4 *)(lVar10 + lVar8),
                                                 *(undefined4 *)(lVar10 + uVar12 * 8 + 4),
                                                 *(undefined4 *)(lVar9 + lVar7),
                                                 *(undefined4 *)(lVar9 + uVar13 * 8 + 4),
                                                 *(undefined4 *)(lVar9 + lVar8),
                                                 *(undefined4 *)(lVar9 + uVar12 * 8 + 4),param_5,
                                                 param_6);
                                    }
                                  }
                                  uVar13 = uVar12;
                                } while (uVar12 != 3);
                                uVar6 = uVar1;
                                if (uVar1 == 3) {
                                  return;
                                }
                              } while( true );
                            }
                            goto LAB_0259e4dc;
                          }
                        }
                        else {
                          if (*(int *)(lVar7 + 0xe4) == 0) {
                            FUN_021f0574();
                            lVar7 = *(long *)puVar3;
                          }
                          lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x10);
                          if (lVar7 != 0) {
                            if ((*(uint *)(lVar7 + 0x18) != 0) && (3 < *(uint *)(lVar7 + 0x18))) {
                              fVar32 = *(float *)(lVar7 + 0x24);
                              fVar20 = *(float *)(lVar7 + 0x3c);
                              goto LAB_0259e0b8;
                            }
                            goto LAB_0259e4dc;
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_0259e4e0;
              }
            }
          }
        }
LAB_0259e4dc:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
    }
    goto LAB_0259e4e0;
  }
  if (lVar7 == 0) goto LAB_0259e4e0;
  UnityEngine_Sprite__get_rect_3bc3be8(lVar7,0);
  if (cRam0000000004f4a004 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a004 = '\x01';
  }
  puVar3 = PTR_DAT_049b8758;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  dVar35 = (double)fVar20;
  dVar21 = (double)FUN_04608690(dVar35,adStack_58);
  if (0.0 <= fVar20) {
    if (dVar21 == 0.5) {
      dVar21 = 1.0;
      goto LAB_0259e074;
    }
    dVar35 = (double)(long)(dVar35 + 0.5);
  }
  else if (dVar21 == -0.5) {
    dVar21 = -1.0;
LAB_0259e074:
    dVar35 = adStack_58[0];
    if (((long)adStack_58[0] & 1U) != 0) {
      dVar35 = adStack_58[0] + dVar21;
    }
  }
  else {
    dVar35 = (double)(long)(dVar35 + -0.5);
  }
  if (cRam0000000004f4a004 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a004 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  dVar33 = (double)fVar32;
  dVar21 = (double)FUN_04608690(dVar33,adStack_58);
  if (0.0 <= fVar32) {
    if (dVar21 != 0.5) {
      adStack_58[0] = (double)(long)(dVar33 + 0.5);
      goto LAB_0259e428;
    }
    dVar21 = 1.0;
  }
  else {
    if (dVar21 != -0.5) {
      adStack_58[0] = (double)(long)(dVar33 + -0.5);
      goto LAB_0259e428;
    }
    dVar21 = -1.0;
  }
  if (((long)adStack_58[0] & 1U) != 0) {
    adStack_58[0] = adStack_58[0] + dVar21;
  }
LAB_0259e428:
  fVar20 = -2.1474836e+09;
  if (dVar35 != INFINITY) {
    fVar20 = (float)(int)dVar35;
  }
  fVar32 = -2.1474836e+09;
  if (adStack_58[0] != INFINITY) {
    fVar32 = (float)(int)adStack_58[0];
  }
  SlicedFilledImage__GenerateFilledSprite_249e5e4
            (fVar14 + param_3 * (fVar15 / fVar20),fVar22 + param_4 * (fVar24 / fVar32),
             fVar14 + param_3 * ((fVar20 - fVar27) / fVar20),
             fVar22 + param_4 * ((fVar32 - fVar30) / fVar32),uVar4,fVar23,fVar26,fVar29,param_5,
             param_6);
  return;
}

