/* IL2CPP: SlicedFilledImage$$GenerateSlicedFilledSprite
void SlicedFilledImage__GenerateSlicedFilledSprite (SlicedFilledImage_o* __this, UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SlicedFilledImage$$GenerateSlicedFilledSprite
   void SlicedFilledImage__GenerateSlicedFilledSprite (SlicedFilledImage_o* __this,
   UnityEngine_UI_VertexHelper_o* vh, const MethodInfo* method); */

void SlicedFilledImage__GenerateSlicedFilledSprite_249dc80
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5,long param_6)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
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
  double dStack_58;
  
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
  if (*(float *)(param_5 + 0xe4) < _UNK_013aa94c) {
    return;
  }
  fVar22 = _UNK_013aa94c;
  fVar13 = (float)UnityEngine_UI_Graphic__GetPixelAdjustedRect_3cf8e94(param_5,0);
  fVar29 = param_4;
  fVar26 = param_3;
  fVar23 = fVar22;
  uVar4 = SlicedFilledImage__get_activeSprite_249d660(param_5);
  uVar14 = UnityEngine_Sprites_DataUtility__GetOuterUV_3c4603c(uVar4,0);
  fVar24 = fVar23;
  fVar27 = fVar26;
  fVar30 = fVar29;
  uVar4 = SlicedFilledImage__get_activeSprite_249d660(param_5);
  fVar15 = (float)UnityEngine_Sprites_DataUtility__GetPadding_3c46050(uVar4,0);
  fVar20 = fVar27;
  fVar32 = fVar30;
  fVar34 = fVar24;
  uVar5 = SlicedFilledImage__get_hasBorder_249d8dc(param_5);
  lVar6 = SlicedFilledImage__get_activeSprite_249d660(param_5);
  if ((uVar5 & 1) != 0) {
    uVar16 = UnityEngine_Sprites_DataUtility__GetInnerUV_3c46028(lVar6,0);
    fVar25 = fVar34;
    fVar28 = fVar20;
    fVar31 = fVar32;
    lVar6 = SlicedFilledImage__get_activeSprite_249d660(param_5);
    if (lVar6 != 0) {
      fVar17 = (float)UnityEngine_Sprite__get_border_3bc3cc0(lVar6,0);
      fVar18 = (float)SlicedFilledImage__get_pixelsPerUnit_249d55c(param_5);
      fVar25 = fVar25 / fVar18;
      fVar28 = fVar28 / fVar18;
      fVar31 = fVar31 / fVar18;
      uVar19 = SlicedFilledImage__GetAdjustedBorders_249e9b0(fVar17 / fVar18,param_5);
      fVar17 = (float)SlicedFilledImage__get_pixelsPerUnit_249d55c(param_5);
      puVar3 = PTR_DAT_049c6480;
      lVar6 = *(long *)PTR_DAT_049c6480;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar3;
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
      if (lVar6 != 0) {
        if (*(int *)(lVar6 + 0x18) != 0) {
          *(float *)(lVar6 + 0x20) = fVar15 / fVar17;
          *(float *)(lVar6 + 0x24) = fVar24 / fVar17;
          lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x10);
          if (lVar6 == 0) goto LAB_0259e4e0;
          if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) != 0) {
            *(float *)(lVar6 + 0x38) = param_3 - fVar27 / fVar17;
            *(float *)(lVar6 + 0x3c) = param_4 - fVar30 / fVar17;
            lVar6 = *(long *)puVar3;
            lVar7 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
            if (lVar7 == 0) goto LAB_0259e4e0;
            if (1 < *(uint *)(lVar7 + 0x18)) {
              *(undefined4 *)(lVar7 + 0x28) = uVar19;
              *(float *)(lVar7 + 0x2c) = fVar25;
              if (*(uint *)(lVar7 + 0x18) != 2) {
                uVar5 = 0;
                *(float *)(lVar7 + 0x30) = param_3 - fVar28;
                *(float *)(lVar7 + 0x34) = param_4 - fVar31;
                do {
                  if (*(int *)(lVar6 + 0xe4) == 0) {
                    FUN_021f0574();
                    lVar6 = *(long *)puVar3;
                  }
                  lVar8 = *(long *)(lVar6 + 0xb8);
                  lVar7 = *(long *)(lVar8 + 0x10);
                  if (lVar7 == 0) goto LAB_0259e4e0;
                  if (*(uint *)(lVar7 + 0x18) <= uVar5) goto LAB_0259e4dc;
                  lVar7 = lVar7 + uVar5 * 8;
                  uVar5 = uVar5 + 1;
                  uVar4 = *(undefined8 *)(lVar7 + 0x20);
                  *(ulong *)(lVar7 + 0x20) =
                       CONCAT44(fVar22 + (float)((ulong)uVar4 >> 0x20),fVar13 + (float)uVar4);
                } while (uVar5 != 4);
                if (*(int *)(lVar6 + 0xe4) == 0) {
                  FUN_021f0574();
                  lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
                }
                lVar6 = *(long *)(lVar8 + 0x18);
                if (lVar6 != 0) {
                  if (*(int *)(lVar6 + 0x18) == 0) goto LAB_0259e4dc;
                  *(undefined4 *)(lVar6 + 0x20) = uVar14;
                  *(float *)(lVar6 + 0x24) = fVar23;
                  lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                  if (lVar6 != 0) {
                    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) goto LAB_0259e4dc;
                    *(undefined4 *)(lVar6 + 0x28) = uVar16;
                    *(float *)(lVar6 + 0x2c) = fVar34;
                    lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                    if (lVar6 != 0) {
                      if (*(uint *)(lVar6 + 0x18) < 3) goto LAB_0259e4dc;
                      *(float *)(lVar6 + 0x30) = fVar20;
                      *(float *)(lVar6 + 0x34) = fVar32;
                      lVar6 = *(long *)(*(long *)(*(long *)puVar3 + 0xb8) + 0x18);
                      if (lVar6 != 0) {
                        if ((*(uint *)(lVar6 + 0x18) & 0xfffffffc) == 0) goto LAB_0259e4dc;
                        *(float *)(lVar6 + 0x38) = fVar26;
                        *(float *)(lVar6 + 0x3c) = fVar29;
                        lVar6 = *(long *)puVar3;
                        if (*(uint *)(param_5 + 0xe0) < 2) {
                          if (*(int *)(lVar6 + 0xe4) == 0) {
                            FUN_021f0574();
                            lVar6 = *(long *)puVar3;
                          }
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                          if (lVar6 != 0) {
                            if ((*(uint *)(lVar6 + 0x18) != 0) && (3 < *(uint *)(lVar6 + 0x18))) {
                              fVar32 = *(float *)(lVar6 + 0x20);
                              fVar20 = *(float *)(lVar6 + 0x38);
LAB_0259e0b8:
                              fVar34 = 1.0;
                              if (0.0 < fVar20 - fVar32) {
                                fVar34 = 1.0 / (fVar20 - fVar32);
                              }
                              uVar5 = 0;
                              do {
                                uVar1 = uVar5 + 1;
                                lVar6 = uVar5 * 8;
                                lVar7 = uVar1 * 8;
                                uVar12 = 0;
                                do {
                                  if (((uVar12 == 1) && (uVar5 == 1)) &&
                                     (*(char *)(param_5 + 0xe8) == '\0')) {
                                    uVar11 = 2;
                                  }
                                  else {
                                    iVar2 = *(int *)(param_5 + 0xe0);
                                    uVar11 = uVar12 + 1;
                                    if (iVar2 < 2) {
                                      if (iVar2 == 0) {
                                        lVar8 = *(long *)puVar3;
                                        if (*(int *)(lVar8 + 0xe4) == 0) {
                                          FUN_021f0574();
                                          lVar8 = *(long *)puVar3;
                                        }
                                        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
                                        if (lVar8 == 0) goto LAB_0259e4e0;
                                        if ((*(uint *)(lVar8 + 0x18) <= uVar5) ||
                                           (*(uint *)(lVar8 + 0x18) <= uVar1)) goto LAB_0259e4dc;
                                        fVar20 = *(float *)(lVar8 + 0x20 + lVar6);
LAB_0259e264:
                                        fVar20 = fVar34 * (fVar20 - fVar32);
                                      }
                                      else {
                                        fVar20 = 0.0;
                                        if (iVar2 == 1) {
                                          lVar8 = *(long *)puVar3;
                                          if (*(int *)(lVar8 + 0xe4) == 0) {
                                            FUN_021f0574();
                                            lVar8 = *(long *)puVar3;
                                          }
                                          lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
                                          if (lVar8 == 0) goto LAB_0259e4e0;
                                          if (*(uint *)(lVar8 + 0x18) <= uVar1) goto LAB_0259e4dc;
                                          fVar20 = *(float *)(lVar8 + 0x20 + lVar7);
LAB_0259e1bc:
                                          fVar20 = 1.0 - fVar34 * (fVar20 - fVar32);
                                        }
                                      }
                                    }
                                    else {
                                      if (iVar2 == 2) {
                                        lVar8 = *(long *)puVar3;
                                        if (*(int *)(lVar8 + 0xe4) == 0) {
                                          FUN_021f0574();
                                          lVar8 = *(long *)puVar3;
                                        }
                                        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
                                        if (lVar8 != 0) {
                                          if ((uVar12 < *(uint *)(lVar8 + 0x18)) &&
                                             (uVar11 < *(uint *)(lVar8 + 0x18))) {
                                            fVar20 = *(float *)(lVar8 + uVar12 * 8 + 0x24);
                                            goto LAB_0259e264;
                                          }
                                          goto LAB_0259e4dc;
                                        }
                                        goto LAB_0259e4e0;
                                      }
                                      fVar20 = 0.0;
                                      if (iVar2 == 3) {
                                        lVar8 = *(long *)puVar3;
                                        if (*(int *)(lVar8 + 0xe4) == 0) {
                                          FUN_021f0574();
                                          lVar8 = *(long *)puVar3;
                                        }
                                        lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
                                        if (lVar8 != 0) {
                                          if (uVar11 < *(uint *)(lVar8 + 0x18)) {
                                            fVar20 = *(float *)(lVar8 + uVar11 * 8 + 0x24);
                                            goto LAB_0259e1bc;
                                          }
                                          goto LAB_0259e4dc;
                                        }
                                        goto LAB_0259e4e0;
                                      }
                                    }
                                    if (fVar20 < *(float *)(param_5 + 0xe4)) {
                                      lVar8 = *(long *)puVar3;
                                      if (*(int *)(lVar8 + 0xe4) == 0) {
                                        FUN_021f0574();
                                        lVar8 = *(long *)puVar3;
                                      }
                                      lVar9 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x10);
                                      if (lVar9 == 0) goto LAB_0259e4e0;
                                      uVar10 = (ulong)*(uint *)(lVar9 + 0x18);
                                      if ((((uVar10 <= uVar5) || (uVar10 <= uVar12)) ||
                                          (uVar10 <= uVar1)) || (uVar10 <= uVar11))
                                      goto LAB_0259e4dc;
                                      lVar8 = *(long *)(*(long *)(lVar8 + 0xb8) + 0x18);
                                      if (lVar8 == 0) goto LAB_0259e4e0;
                                      uVar10 = (ulong)*(uint *)(lVar8 + 0x18);
                                      if (((uVar10 <= uVar5) || (uVar10 <= uVar12)) ||
                                         ((uVar10 <= uVar1 || (uVar10 <= uVar11))))
                                      goto LAB_0259e4dc;
                                      lVar9 = lVar9 + 0x20;
                                      lVar8 = lVar8 + 0x20;
                                      SlicedFilledImage__GenerateFilledSprite_249e5e4
                                                (*(undefined4 *)(lVar9 + lVar6),
                                                 *(undefined4 *)(lVar9 + uVar12 * 8 + 4),
                                                 *(undefined4 *)(lVar9 + lVar7),
                                                 *(undefined4 *)(lVar9 + uVar11 * 8 + 4),
                                                 *(undefined4 *)(lVar8 + lVar6),
                                                 *(undefined4 *)(lVar8 + uVar12 * 8 + 4),
                                                 *(undefined4 *)(lVar8 + lVar7),
                                                 *(undefined4 *)(lVar8 + uVar11 * 8 + 4),param_5,
                                                 param_6);
                                    }
                                  }
                                  uVar12 = uVar11;
                                } while (uVar11 != 3);
                                uVar5 = uVar1;
                                if (uVar1 == 3) {
                                  return;
                                }
                              } while( true );
                            }
                            goto LAB_0259e4dc;
                          }
                        }
                        else {
                          if (*(int *)(lVar6 + 0xe4) == 0) {
                            FUN_021f0574();
                            lVar6 = *(long *)puVar3;
                          }
                          lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x10);
                          if (lVar6 != 0) {
                            if ((*(uint *)(lVar6 + 0x18) != 0) && (3 < *(uint *)(lVar6 + 0x18))) {
                              fVar32 = *(float *)(lVar6 + 0x24);
                              fVar20 = *(float *)(lVar6 + 0x3c);
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
  if (lVar6 == 0) goto LAB_0259e4e0;
  UnityEngine_Sprite__get_rect_3bc3be8(lVar6,0);
  if (cRam0000000004f4a004 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8758);
    cRam0000000004f4a004 = '\x01';
  }
  puVar3 = PTR_DAT_049b8758;
  if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
    FUN_021f0574();
  }
  dVar35 = (double)fVar20;
  dVar21 = (double)FUN_04608690(dVar35,&dStack_58);
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
    dVar35 = dStack_58;
    if (((long)dStack_58 & 1U) != 0) {
      dVar35 = dStack_58 + dVar21;
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
  dVar21 = (double)FUN_04608690(dVar33,&dStack_58);
  if (0.0 <= fVar32) {
    if (dVar21 != 0.5) {
      dStack_58 = (double)(long)(dVar33 + 0.5);
      goto LAB_0259e428;
    }
    dVar21 = 1.0;
  }
  else {
    if (dVar21 != -0.5) {
      dStack_58 = (double)(long)(dVar33 + -0.5);
      goto LAB_0259e428;
    }
    dVar21 = -1.0;
  }
  if (((long)dStack_58 & 1U) != 0) {
    dStack_58 = dStack_58 + dVar21;
  }
LAB_0259e428:
  fVar20 = -2.1474836e+09;
  if (dVar35 != INFINITY) {
    fVar20 = (float)(int)dVar35;
  }
  fVar32 = -2.1474836e+09;
  if (dStack_58 != INFINITY) {
    fVar32 = (float)(int)dStack_58;
  }
  SlicedFilledImage__GenerateFilledSprite_249e5e4
            (fVar13 + param_3 * (fVar15 / fVar20),fVar22 + param_4 * (fVar24 / fVar32),
             fVar13 + param_3 * ((fVar20 - fVar27) / fVar20),
             fVar22 + param_4 * ((fVar32 - fVar30) / fVar32),uVar14,fVar23,fVar26,fVar29,param_5,
             param_6);
  return;
}

