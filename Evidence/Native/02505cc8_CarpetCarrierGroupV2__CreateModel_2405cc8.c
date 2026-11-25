/* IL2CPP: CarpetCarrierGroupV2$$CreateModel
void CarpetCarrierGroupV2__CreateModel (CarpetCarrierGroupV2_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: CarpetCarrierGroupV2$$CreateModel
   void CarpetCarrierGroupV2__CreateModel (CarpetCarrierGroupV2_o* __this, const MethodInfo*
   method); */

void CarpetCarrierGroupV2__CreateModel_2405cc8
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long lStack_a8;
  
  if ((bRam0000000004f4b6b6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c27d8);
    FUN_021f03f8(PTR_DAT_049c24f8);
    FUN_021f03f8(PTR_DAT_049c2678);
    FUN_021f03f8(PTR_DAT_049c2680);
    bRam0000000004f4b6b6 = 1;
  }
  puVar3 = PTR_DAT_049c2680;
  if (*(long *)(param_4 + 0xe8) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (*(long *)(param_4 + 0xe8),0,&lStack_a8,*(undefined8 *)PTR_DAT_049c2680);
    lVar11 = lStack_a8;
    lVar5 = *(long *)(param_4 + 0xe8);
    if ((((lVar5 != 0) &&
         (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (lVar5,*(int *)(lVar5 + 0x18) + -1,&lStack_a8,*(undefined8 *)puVar3),
         lVar11 != 0)) && (lStack_a8 != 0)) && (lVar11 = *(long *)(lVar11 + 0x110), lVar11 != 0)) {
      lVar5 = *(long *)(lStack_a8 + 0x110);
      fVar13 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar11,0);
      if (cRam0000000004f4a55a == '\0') {
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55a = '\x01';
      }
      puVar3 = PTR_DAT_049bbf90;
      lVar8 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
      fVar27 = *(float *)(lVar8 + 0x48);
      fVar28 = *(float *)(lVar8 + 0x4c);
      fVar26 = *(float *)(lVar8 + 0x50);
      if (cRam0000000004f4a5db == '\0') {
        FUN_021f03f8(PTR_DAT_049b8758);
        cRam0000000004f4a5db = '\x01';
      }
      puVar2 = PTR_DAT_049b8758;
      if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
        FUN_021f0574();
      }
      fVar19 = _UNK_013aa374;
      fVar22 = 0.0;
      fVar14 = SQRT((param_3 * param_3 + fVar13 * fVar13 + param_2 * param_2) *
                    (fVar26 * fVar26 + fVar27 * fVar27 + fVar28 * fVar28));
      fVar17 = _UNK_013aa374;
      if (_UNK_013aa374 <= fVar14) {
        fVar14 = (param_3 * fVar26 + fVar13 * fVar27 + param_2 * fVar28) / fVar14;
        fVar13 = 1.0;
        if (fVar14 <= 1.0) {
          fVar13 = fVar14;
        }
        fVar26 = -1.0;
        if (-1.0 <= fVar14) {
          fVar26 = fVar13;
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        dVar20 = (double)FUN_046086c0((double)fVar26);
        fVar22 = (float)dVar20 * _UNK_013aa654;
        fVar17 = _UNK_013aa654;
      }
      lVar8 = 0xcc;
      if (fVar22 < 90.0) {
        lVar8 = 200;
      }
      fVar26 = *(float *)(param_4 + lVar8);
      fVar13 = fVar22;
      fVar27 = (float)UnityEngine_Transform__get_position_3c2d540(lVar11,0);
      if (lVar5 != 0) {
        fVar18 = fVar17;
        fVar23 = fVar13;
        fVar15 = (float)UnityEngine_Transform__get_position_3c2d540(lVar5,0);
        fVar28 = fVar18;
        fVar14 = fVar23;
        fVar16 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar11,0);
        lVar8 = UnityEngine_Component__get_transform_3c18724(param_4,0);
        if (lVar8 != 0) {
          fVar23 = (fVar13 + fVar23) * 0.5 + fVar26 * fVar14;
          fVar14 = (fVar17 + fVar18) * 0.5 + fVar26 * fVar28;
          UnityEngine_Transform__set_position_3c2d61c
                    ((fVar27 + fVar15) * 0.5 + fVar26 * fVar16,lVar8,0);
          fVar28 = (float)UnityEngine_Transform__get_position_3c2d540(lVar11,0);
          fVar13 = fVar14;
          fVar27 = fVar23;
          fVar17 = (float)UnityEngine_Transform__get_position_3c2d540(lVar5,0);
          if (cRam0000000004f4a234 == '\0') {
            FUN_021f03f8(PTR_DAT_049b8758);
            cRam0000000004f4a234 = '\x01';
          }
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (*(long *)(param_4 + 0xa0) != 0) {
            fVar13 = SQRT((fVar23 - fVar27) * (fVar23 - fVar27) +
                          (fVar28 - fVar17) * (fVar28 - fVar17) +
                          (fVar14 - fVar13) * (fVar14 - fVar13)) + *(float *)(param_4 + 0xb8);
            UnityEngine_Transform__set_localScale_3c2ddfc
                      (fVar13,0x3f800000,0x3f800000,*(long *)(param_4 + 0xa0),0);
            lVar8 = UnityEngine_Component__get_transform_3c18724(param_4,0);
            UnityEngine_Transform__get_rotation_3c2d7a8(lVar11,0);
            if (lVar8 != 0) {
              UnityEngine_Transform__set_rotation_3c2d86c(lVar8,0);
              uVar7 = 0x43340000;
              if (fVar22 < 90.0) {
                uVar7 = 0;
              }
              lVar8 = UnityEngine_Component__get_transform_3c18724(param_4,0);
              if (cRam0000000004f4a55e == '\0') {
                FUN_021f03f8(PTR_DAT_049bbf90);
                cRam0000000004f4a55e = '\x01';
              }
              if (lVar8 != 0) {
                lVar9 = *(long *)(*(long *)puVar3 + 0xb8);
                UnityEngine_Transform__Rotate_3c2e930
                          (*(undefined4 *)(lVar9 + 0x18),*(undefined4 *)(lVar9 + 0x1c),
                           *(undefined4 *)(lVar9 + 0x20),uVar7,lVar8,0);
                if (*(long *)(param_4 + 0xe8) != 0) {
                  iVar1 = *(int *)(*(long *)(param_4 + 0xe8) + 0x18);
                  fVar27 = (float)iVar1;
                  *(float *)(param_4 + 0xe0) = fVar27;
                  puVar4 = PTR_DAT_049c27d8;
                  if (*(long *)(param_4 + 0x48) != 0) {
                    UnityEngine_MaterialPropertyBlock__Clear_3bdb93c(*(long *)(param_4 + 0x48),0);
                    lVar8 = *(long *)(param_4 + 0x48);
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    if (lVar8 != 0) {
                      fVar17 = 0.0;
                      fVar28 = 1.0;
                      UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                                (fVar27,0x3f800000,0,0,lVar8,
                                 **(undefined4 **)(*(long *)puVar4 + 0xb8),0);
                      if (*(long *)(param_4 + 0xc0) != 0) {
                        UnityEngine_Renderer__SetPropertyBlock_3bdc9ec
                                  (*(long *)(param_4 + 0xc0),*(undefined8 *)(param_4 + 0x48),0);
                        fVar18 = (float)UnityEngine_Transform__get_right_3c2da80(lVar11,0);
                        fVar14 = fVar17;
                        fVar22 = fVar28;
                        if (cRam0000000004f4a55a == '\0') {
                          FUN_021f03f8(PTR_DAT_049bbf90);
                          cRam0000000004f4a55a = '\x01';
                        }
                        lVar8 = *(long *)(*(long *)puVar3 + 0xb8);
                        fVar29 = *(float *)(lVar8 + 0x48);
                        fVar15 = *(float *)(lVar8 + 0x4c);
                        fVar16 = *(float *)(lVar8 + 0x50);
                        fVar23 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar11,0);
                        if (cRam0000000004f4a5db == '\0') {
                          FUN_021f03f8(PTR_DAT_049b8758);
                          cRam0000000004f4a5db = '\x01';
                        }
                        fVar24 = fVar23 * fVar23 + fVar22 * fVar22;
                        fVar25 = fVar14 * fVar14 + fVar24;
                        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                          FUN_021f0574();
                        }
                        fVar25 = SQRT((fVar16 * fVar16 + fVar29 * fVar29 + fVar15 * fVar15) * fVar25
                                     );
                        fVar21 = 1.0;
                        if (fVar19 <= fVar25) {
                          fVar24 = fVar16 * fVar14;
                          fVar25 = (fVar24 + fVar29 * fVar23 + fVar15 * fVar22) / fVar25;
                          fVar19 = 1.0;
                          if (fVar25 <= 1.0) {
                            fVar19 = fVar25;
                          }
                          fVar14 = -1.0;
                          if (-1.0 <= fVar25) {
                            fVar14 = fVar19;
                          }
                          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
                            FUN_021f0574();
                          }
                          dVar20 = (double)FUN_046086c0((double)fVar14);
                          fVar21 = 1.0;
                          if (90.0 <= (float)dVar20 * _UNK_013aa654) {
                            fVar21 = -1.0;
                          }
                        }
                        fVar19 = fVar21;
                        lVar8 = UnityEngine_Component__get_transform_3c18724(param_4,0);
                        if (lVar8 != 0) {
                          iVar1 = iVar1 + -1;
                          fVar14 = (float)UnityEngine_Transform__get_position_3c2d540(lVar8,0);
                          puVar2 = PTR_DAT_049c24f8;
                          if (0 < iVar1) {
                            iVar12 = 0;
                            fVar27 = fVar13 / fVar27;
                            fVar18 = fVar18 * fVar21;
                            fVar28 = fVar28 * fVar21;
                            fVar13 = fVar13 * 0.5;
                            fVar17 = fVar17 * fVar21;
                            fVar22 = fVar19 - fVar28 * fVar13;
                            fVar23 = fVar24 - fVar13 * fVar17;
                            do {
                              if (((*(long *)(param_4 + 0x30) == 0) ||
                                  (lVar8 = PrefabModule__Rent_2537380
                                                     (*(long *)(param_4 + 0x30),
                                                      *(undefined8 *)(param_4 + 0xd0),0), lVar8 == 0
                                  )) || (lVar9 = UnityEngine_GameObject__get_transform_3c1ca74
                                                           (lVar8,0), lVar9 == 0))
                              goto LAB_0250655c;
                              fVar19 = fVar27 * (float)iVar12;
                              fVar15 = fVar28 * fVar27 + fVar22 + fVar28 * fVar19;
                              UnityEngine_Transform__set_position_3c2d61c
                                        (CONCAT44(fVar15,fVar18 * fVar27 +
                                                         (fVar14 - fVar18 * fVar13) +
                                                         fVar18 * fVar19),fVar15,
                                         fVar27 * fVar17 + fVar23 + fVar17 * fVar19,lVar9,0);
                              UnityEngine_Transform__get_rotation_3c2d7a8(lVar11,0);
                              UnityEngine_Transform__set_rotation_3c2d86c(lVar9,0);
                              lVar9 = UnityEngine_Transform__GetChild_3c2f8bc(lVar9,0,0);
                              if (cRam0000000004f4a190 == '\0') {
                                FUN_021f03f8(puVar3);
                                cRam0000000004f4a190 = '\x01';
                              }
                              if (lVar9 == 0) goto LAB_0250655c;
                              lVar10 = *(long *)(*(long *)puVar3 + 0xb8);
                              fVar19 = *(float *)(lVar10 + 0x10);
                              fVar24 = *(float *)(lVar10 + 0x14);
                              UnityEngine_Transform__set_localScale_3c2ddfc
                                        (*(undefined4 *)(lVar10 + 0xc),fVar19,fVar24,lVar9,0);
                              if (*(long *)(param_4 + 0xf0) == 0) goto LAB_0250655c;
                              FUN_02333498(*(long *)(param_4 + 0xf0),lVar8,*(undefined8 *)puVar2);
                              iVar12 = iVar12 + 1;
                            } while (iVar1 != iVar12);
                          }
                          fVar28 = (float)UnityEngine_Transform__get_position_3c2d540(lVar5,0);
                          fVar13 = fVar24;
                          fVar27 = fVar19;
                          fVar17 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar5,0);
                          if (*(long *)(param_4 + 0xb0) != 0) {
                            fVar24 = fVar24 + fVar26 * fVar13;
                            fVar19 = fVar19 + fVar26 * fVar27;
                            UnityEngine_Transform__set_position_3c2d61c
                                      (fVar28 + fVar26 * fVar17,fVar19,fVar24,
                                       *(long *)(param_4 + 0xb0),0);
                            fVar28 = (float)UnityEngine_Transform__get_position_3c2d540(lVar11,0);
                            fVar13 = fVar19;
                            fVar27 = fVar24;
                            fVar17 = (float)UnityEngine_Transform__get_forward_3c2db78(lVar11,0);
                            lVar11 = *(long *)(param_4 + 0xa8);
                            uVar6 = UnityEngine_Component__get_transform_3c18724(param_4,0);
                            if (lVar11 != 0) {
                              UnityEngine_Transform__set_parent_3c2ded4(lVar11,uVar6,0);
                              if (*(long *)(param_4 + 0xa8) != 0) {
                                UnityEngine_Transform__set_position_3c2d61c
                                          (fVar28 + fVar26 * fVar17,fVar19 + fVar26 * fVar13,
                                           fVar24 + fVar26 * fVar27,*(long *)(param_4 + 0xa8),0);
                                lVar11 = *(long *)(param_4 + 0xd8);
                                if (cRam0000000004f4a190 == '\0') {
                                  FUN_021f03f8(PTR_DAT_049bbf90);
                                  cRam0000000004f4a190 = '\x01';
                                }
                                if (lVar11 != 0) {
                                  lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
                                  UnityEngine_Transform__set_localScale_3c2ddfc
                                            (*(undefined4 *)(lVar5 + 0xc),
                                             *(undefined4 *)(lVar5 + 0x10),
                                             *(undefined4 *)(lVar5 + 0x14),lVar11,0);
                                  lVar11 = *(long *)(param_4 + 0xa8);
                                  if (cRam0000000004f4a190 == '\0') {
                                    FUN_021f03f8(PTR_DAT_049bbf90);
                                    cRam0000000004f4a190 = '\x01';
                                  }
                                  if (lVar11 != 0) {
                                    lVar5 = *(long *)(*(long *)puVar3 + 0xb8);
                                    UnityEngine_Transform__set_localScale_3c2ddfc
                                              (*(undefined4 *)(lVar5 + 0xc),
                                               *(undefined4 *)(lVar5 + 0x10),
                                               *(undefined4 *)(lVar5 + 0x14),lVar11,0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_0250655c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

