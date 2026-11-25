/* IL2CPP: ConnectedCarrierGroup$$Initialize
void ConnectedCarrierGroup__Initialize (ConnectedCarrierGroup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: ConnectedCarrierGroup$$Initialize
   void ConnectedCarrierGroup__Initialize (ConnectedCarrierGroup_o* __this, const MethodInfo*
   method); */

void ConnectedCarrierGroup__Initialize_240e5e0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 *puVar20;
  float *pfVar21;
  long lVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  long lStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  int iStack_b4;
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_58;
  
  if ((bRam0000000004f4b70c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2620);
    FUN_021f03f8(PTR_DAT_049c2aa0);
    FUN_021f03f8(PTR_DAT_049c2628);
    FUN_021f03f8(PTR_DAT_049c2630);
    FUN_021f03f8(PTR_DAT_049c2638);
    FUN_021f03f8(PTR_DAT_049c2640);
    FUN_021f03f8(PTR_DAT_049c2648);
    FUN_021f03f8(PTR_DAT_049c2678);
    FUN_021f03f8(PTR_DAT_049c2680);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c2aa8);
    FUN_021f03f8(PTR_DAT_049c2ab0);
    bRam0000000004f4b70c = 1;
  }
  lStack_b0 = 0;
  plStack_a8 = (long *)0x0;
  uStack_a0 = 0;
  iStack_b4 = 0;
  lVar13 = UnityEngine_Component__get_transform_3c18724(param_1,0);
  if (cRam0000000004f4a190 == '\0') {
    FUN_021f03f8(PTR_DAT_049bbf90);
    cRam0000000004f4a190 = '\x01';
  }
  puVar7 = PTR_DAT_049bbf90;
  if (lVar13 != 0) {
    lVar19 = *(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8);
    fVar28 = *(float *)(lVar19 + 0x10);
    uVar17 = (ulong)*(uint *)(lVar19 + 0x14);
    UnityEngine_Transform__set_localScale_3c2ddfc(*(undefined4 *)(lVar19 + 0xc),lVar13,0);
    puVar12 = PTR_DAT_049c2ab0;
    puVar11 = PTR_DAT_049c2680;
    puVar10 = PTR_DAT_049c2648;
    puVar9 = PTR_DAT_049c2638;
    puVar8 = PTR_DAT_049c2630;
    puVar6 = PTR_DAT_049c2628;
    puVar5 = PTR_DAT_049b3b98;
    if (*(long *)(param_1 + 200) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_1 + 200),&lStack_d0,*(undefined8 *)PTR_DAT_049c2640);
      uStack_a0 = uStack_c0;
      plStack_a8 = plStack_c8;
      lStack_b0 = lStack_d0;
      lStack_d0 = 0;
      plStack_c8 = &lStack_b0;
      while( true ) {
        uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (&lStack_b0,*(undefined8 *)puVar8);
        fVar30 = (float)uVar17;
        if ((uVar14 & 1) == 0) break;
        lVar22 = *(long *)puVar9;
        lVar19 = *(long *)(lVar22 + 0x20);
        uVar4 = *(ushort *)(lVar19 + 0x135);
        lVar13 = lVar19;
        if ((uVar4 & 1) == 0) {
          lVar13 = FUN_02229718();
          lVar19 = *(long *)(lVar22 + 0x20);
          uVar4 = *(ushort *)(lVar19 + 0x135);
        }
        uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
        if ((uVar4 & 1) == 0) {
          lVar19 = FUN_02229718();
        }
        uVar15 = thunk_FUN_0224e54c(&lStack_b0,
                                    *(long *)(*(long *)(*(long *)(lVar19 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_58,uVar15,uVar2);
        lVar13 = lStack_58;
        uVar15 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0(uVar15,uVar15);
        }
        Carrier__DisableInteraction_2403394(lVar13);
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_b0,*(undefined8 *)puVar6);
      lVar13 = *(long *)puVar12;
      lVar19 = *(long *)(param_1 + 200);
      if (*(int *)(lVar13 + 0xe4) == 0) {
        FUN_021f0574();
        lVar13 = *(long *)puVar12;
      }
      puVar20 = *(undefined8 **)(lVar13 + 0xb8);
      lVar22 = puVar20[1];
      if (lVar22 == 0) {
        if (*(int *)(lVar13 + 0xe4) == 0) {
          FUN_021f0574();
          puVar20 = *(undefined8 **)(*(long *)puVar12 + 0xb8);
        }
        uVar15 = *puVar20;
        lVar22 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2620);
        System_Comparison___Il2CppFullySharedGenericType____ctor_280c240
                  (lVar22,uVar15,*(undefined8 *)PTR_DAT_049c2aa8,0);
        plVar16 = (long *)(*(long *)(*(long *)puVar12 + 0xb8) + 8);
        *plVar16 = lVar22;
        thunk_FUN_021f190c(plVar16,lVar22);
      }
      if (lVar19 != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                  (lVar19,lVar22,*(undefined8 *)puVar10);
        if (*(long *)(param_1 + 200) != 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (*(long *)(param_1 + 200),0,&lStack_d0,*(undefined8 *)puVar11);
          lVar13 = lStack_d0;
          lVar19 = *(long *)(param_1 + 200);
          if ((((lVar19 != 0) &&
               (System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                          (lVar19,*(int *)(lVar19 + 0x18) + -1,&lStack_d0,*(undefined8 *)puVar11),
               lVar13 != 0)) && (lStack_d0 != 0)) && (*(long *)(lStack_d0 + 0x110) != 0)) {
            lVar13 = *(long *)(lVar13 + 0x110);
            fVar24 = (float)UnityEngine_Transform__get_position_3c2d540
                                      (*(long *)(lStack_d0 + 0x110),0);
            if (lVar13 != 0) {
              fVar29 = fVar28;
              fVar26 = fVar30;
              fVar25 = (float)UnityEngine_Transform__get_position_3c2d540(lVar13,0);
              fVar27 = fVar26;
              if (cRam0000000004f4a55c == '\0') {
                FUN_021f03f8(PTR_DAT_049b8758);
                cRam0000000004f4a55c = '\x01';
              }
              puVar6 = PTR_DAT_049b8758;
              fVar24 = fVar24 - fVar25;
              fVar28 = fVar28 - fVar29;
              fVar30 = fVar30 - fVar26;
              if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
                FUN_021f0574();
              }
              fVar26 = SQRT(fVar30 * fVar30 + fVar24 * fVar24 + fVar28 * fVar28);
              fVar29 = _UNK_013aa920;
              if (fVar26 <= _UNK_013aa920) {
                if (cRam0000000004f4a233 == '\0') {
                  FUN_021f03f8(PTR_DAT_049bbf90);
                  cRam0000000004f4a233 = '\x01';
                }
                pfVar21 = *(float **)(*(long *)puVar7 + 0xb8);
                fVar24 = *pfVar21;
                fVar28 = pfVar21[1];
                fVar30 = pfVar21[2];
              }
              else {
                fVar24 = fVar24 / fVar26;
                fVar28 = fVar28 / fVar26;
                fVar30 = fVar30 / fVar26;
              }
              fVar26 = (float)UnityEngine_Transform__get_right_3c2da80(lVar13,0);
              lVar13 = *(long *)(param_1 + 200);
              fVar30 = fVar30 * fVar27;
              fVar28 = fVar30 + fVar24 * fVar26 + fVar28 * fVar29;
              if (fVar28 <= 0.0) {
                iStack_b4 = -2;
              }
              else {
                iStack_b4 = System_Index__op_Implicit_30f94e8(0,0);
              }
              if (lVar13 != 0) {
                iVar3 = *(int *)(lVar13 + 0x18);
                uVar17 = System_Index__get_IsFromEnd_30f9438(&iStack_b4,0);
                iVar1 = 0;
                if ((uVar17 & 1) != 0) {
                  iVar1 = iVar3 + 1;
                }
                System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                          (lVar13,iStack_b4 + iVar1,&lStack_d0,*(undefined8 *)puVar11);
                lVar13 = lStack_d0;
                lVar19 = *(long *)(param_1 + 200);
                if (fVar28 <= 0.0) {
                  iStack_b4 = System_Index__op_Implicit_30f94e8(0,0);
                }
                else {
                  iStack_b4 = -2;
                }
                if (lVar19 != 0) {
                  iVar3 = *(int *)(lVar19 + 0x18);
                  uVar17 = System_Index__get_IsFromEnd_30f9438(&iStack_b4,0);
                  iVar1 = 0;
                  if ((uVar17 & 1) != 0) {
                    iVar1 = iVar3 + 1;
                  }
                  System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                            (lVar19,iStack_b4 + iVar1,&lStack_d0,*(undefined8 *)puVar11);
                  lVar19 = lStack_d0;
                  if (((lVar13 != 0) && (lStack_d0 != 0)) &&
                     (lVar22 = *(long *)(lVar13 + 0x110), lVar22 != 0)) {
                    lVar23 = *(long *)(lStack_d0 + 0x110);
                    fVar28 = (float)UnityEngine_Transform__get_position_3c2d540(lVar22,0);
                    if (lVar23 != 0) {
                      fVar24 = fVar30;
                      fVar29 = fVar27;
                      fVar26 = (float)UnityEngine_Transform__get_position_3c2d540(lVar23,0);
                      lVar18 = UnityEngine_Component__get_transform_3c18724(param_1,0);
                      if (lVar18 != 0) {
                        fVar29 = (fVar27 + fVar29) * 0.5;
                        fVar30 = (fVar30 + fVar24) * 0.5;
                        UnityEngine_Transform__set_position_3c2d61c
                                  ((fVar28 + fVar26) * 0.5,fVar30,fVar29,lVar18,0);
                        lVar18 = UnityEngine_Component__get_transform_3c18724(param_1,0);
                        UnityEngine_Transform__get_rotation_3c2d7a8(lVar22,0);
                        if (lVar18 != 0) {
                          UnityEngine_Transform__set_rotation_3c2d86c(lVar18,0);
                          fVar27 = (float)UnityEngine_Transform__get_position_3c2d540(lVar22,0);
                          fVar28 = fVar30;
                          fVar24 = fVar29;
                          fVar26 = (float)UnityEngine_Transform__get_position_3c2d540(lVar23,0);
                          if (cRam0000000004f4a234 == '\0') {
                            FUN_021f03f8(PTR_DAT_049b8758);
                            cRam0000000004f4a234 = '\x01';
                          }
                          if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
                            FUN_021f0574();
                          }
                          if (*(long *)(param_1 + 0xa0) != 0) {
                            UnityEngine_Transform__set_localScale_3c2ddfc
                                      (SQRT((fVar29 - fVar24) * (fVar29 - fVar24) +
                                            (fVar27 - fVar26) * (fVar27 - fVar26) +
                                            (fVar30 - fVar28) * (fVar30 - fVar28)) +
                                       *(float *)(param_1 + 0xb8),0x3f800000,0x3f800000,
                                       *(long *)(param_1 + 0xa0),0);
                            if (*(long *)(lVar13 + 0x110) != 0) {
                              lVar22 = *(long *)(param_1 + 0xa8);
                              UnityEngine_Transform__get_position_3c2d540
                                        (*(long *)(lVar13 + 0x110),0);
                              if (lVar22 != 0) {
                                UnityEngine_Transform__set_position_3c2d61c(lVar22,0);
                                lVar22 = *(long *)(lVar19 + 0x110);
                                if (lVar22 != 0) {
                                  lVar23 = *(long *)(param_1 + 0xb0);
                                  UnityEngine_Transform__get_position_3c2d540(lVar22,0);
                                  if (lVar23 != 0) {
                                    UnityEngine_Transform__set_position_3c2d61c(lVar23,0);
                                    if (*(long *)(lVar13 + 0x110) != 0) {
                                      lVar22 = *(long *)(param_1 + 0xa8);
                                      UnityEngine_Transform__get_rotation_3c2d7a8
                                                (*(long *)(lVar13 + 0x110),0);
                                      if (lVar22 != 0) {
                                        UnityEngine_Transform__set_rotation_3c2d86c(lVar22,0);
                                        lVar13 = *(long *)(lVar19 + 0x110);
                                        if (lVar13 != 0) {
                                          lVar19 = *(long *)(param_1 + 0xb0);
                                          UnityEngine_Transform__get_rotation_3c2d7a8(lVar13,0);
                                          if (lVar19 != 0) {
                                            UnityEngine_Transform__set_rotation_3c2d86c(lVar19,0);
                                            uVar15 = *(undefined8 *)(param_1 + 0xc0);
                                            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                                              FUN_021f0574();
                                            }
                                            uVar17 = UnityEngine_Object__op_Inequality_3c1b96c
                                                               (uVar15,0,0);
                                            if ((uVar17 & 1) == 0) {
                                              return;
                                            }
                                            if ((*(long *)(param_1 + 200) != 0) &&
                                               (*(long *)(param_1 + 0x48) != 0)) {
                                              iVar1 = *(int *)(*(long *)(param_1 + 200) + 0x18);
                                              UnityEngine_MaterialPropertyBlock__Clear_3bdb93c
                                                        (*(long *)(param_1 + 0x48),0);
                                              puVar7 = PTR_DAT_049c2aa0;
                                              lVar13 = *(long *)(param_1 + 0x48);
                                              if (*(int *)(*(long *)PTR_DAT_049c2aa0 + 0xe4) == 0) {
                                                FUN_021f0574();
                                              }
                                              if (lVar13 != 0) {
                                                UnityEngine_MaterialPropertyBlock__SetVector_3bdbd14
                                                          (0x3f800000,(float)iVar1 + 1.0,0,0,lVar13,
                                                           **(undefined4 **)(*(long *)puVar7 + 0xb8)
                                                           ,0);
                                                if (*(long *)(param_1 + 0xc0) != 0) {
                                                  UnityEngine_Renderer__SetPropertyBlock_3bdc9ec
                                                            (*(long *)(param_1 + 0xc0),
                                                             *(undefined8 *)(param_1 + 0x48),0);
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
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

