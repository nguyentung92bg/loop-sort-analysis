/* IL2CPP: SandFlowSystem$$Offer
void SandFlowSystem__Offer (SandFlowSystem_o* __this, Block_o* block, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$Offer
   void SandFlowSystem__Offer (SandFlowSystem_o* __this, Block_o* block, Carrier_o* carrier, const
   MethodInfo* method); */

void SandFlowSystem__Offer_24ce488(long param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  ushort uVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined4 *puVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  undefined1 auVar22 [16];
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  if ((bRam0000000004f4bbe7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c1df0);
    bRam0000000004f4bbe7 = 1;
  }
  lVar20 = *(long *)(param_1 + 0x270);
  if (lVar20 != 0) {
    lVar17 = *(long *)PTR_DAT_049c1df0;
    *(int *)(lVar20 + 0x1c) = *(int *)(lVar20 + 0x1c) + 1;
    uVar16 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar17 + 0x20) + 0xc0) + 200));
    if ((uVar16 & 1) == 0) {
      *(undefined4 *)(lVar20 + 0x18) = 0;
    }
    else {
      iVar18 = *(int *)(lVar20 + 0x18);
      *(undefined4 *)(lVar20 + 0x18) = 0;
      if (0 < iVar18) {
        System_Array__Clear_31229cc(*(undefined8 *)(lVar20 + 0x10),0,iVar18,0);
      }
    }
    if (*(long *)(param_1 + 0x270) != 0) {
      FUN_02333498(*(long *)(param_1 + 0x270),param_2,*(undefined8 *)PTR_DAT_049c1c80);
      lVar20 = *(long *)(param_1 + 0x80);
      if (lVar20 != 0) {
        lVar17 = *(long *)(param_1 + 0x270);
        if ((bRam0000000004f4b5fe & 1) == 0) {
          FUN_021f03f8(PTR_DAT_049c1a70,param_3,lVar17,0);
          FUN_021f03f8(PTR_DAT_049c1ae8);
          FUN_021f03f8(PTR_DAT_049c1af0);
          FUN_021f03f8(PTR_DAT_049c1af8);
          FUN_021f03f8(PTR_DAT_049c14d8);
          FUN_021f03f8(PTR_DAT_049c14e0);
          FUN_021f03f8(PTR_DAT_049c14e8);
          FUN_021f03f8(PTR_DAT_049c1410);
          FUN_021f03f8(PTR_DAT_049c1ae0);
          FUN_021f03f8(PTR_DAT_049c14f0);
          FUN_021f03f8(PTR_DAT_049c1550);
          FUN_021f03f8(PTR_DAT_049c1558);
          FUN_021f03f8(PTR_DAT_049b3b98);
          FUN_021f03f8(PTR_DAT_049c1b00);
          FUN_021f03f8(PTR_DAT_049c1b08);
          FUN_021f03f8(PTR_DAT_049c1b10);
          FUN_021f03f8(PTR_DAT_049c1b18);
          FUN_021f03f8(PTR_DAT_049c1b20);
          bRam0000000004f4b5fe = 1;
        }
        lStack_90 = 0;
        plStack_88 = (long *)0x0;
        uStack_80 = 0;
        lStack_98 = 0;
        if (*(long *)(lVar20 + 0x38) != 0) {
          uVar16 = GameMachine__IsInState_object__261a580
                             (*(long *)(lVar20 + 0x38),*(undefined8 *)PTR_DAT_049c1ae0);
          if ((uVar16 & 1) == 0) {
            return;
          }
          if (lVar17 != 0) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (lVar17,&lStack_b0,*(undefined8 *)PTR_DAT_049c14f0);
            puVar10 = PTR_DAT_049c1b20;
            puVar9 = PTR_DAT_049c1b18;
            puVar8 = PTR_DAT_049c1af0;
            puVar7 = PTR_DAT_049c14e8;
            puVar6 = PTR_DAT_049c14e0;
            puVar5 = PTR_DAT_049c1410;
            puVar4 = PTR_DAT_049b3b98;
            plStack_88 = plStack_a8;
            lStack_90 = lStack_b0;
            uStack_80 = uStack_a0;
            plStack_a8 = &lStack_90;
            lStack_b0 = 0;
            while (uVar16 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                      (&lStack_90,*(undefined8 *)puVar6), (uVar16 & 1) != 0) {
              lVar19 = *(long *)puVar7;
              lVar11 = *(long *)(lVar19 + 0x20);
              uVar2 = *(ushort *)(lVar11 + 0x135);
              lVar12 = lVar11;
              if ((uVar2 & 1) == 0) {
                lVar12 = FUN_02229718();
                lVar11 = *(long *)(lVar19 + 0x20);
                uVar2 = *(ushort *)(lVar11 + 0x135);
              }
              uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
              if ((uVar2 & 1) == 0) {
                lVar11 = FUN_02229718();
              }
              uVar13 = thunk_FUN_0224e54c(&lStack_90,
                                          *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80)
                                          + 0x60);
              func_0x04608620(&lStack_68,uVar13,uVar1);
              lVar12 = lStack_68;
              lVar11 = *(long *)(lVar20 + 0xb8);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                FUN_021f0574();
              }
              if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              uVar16 = FUN_024f5708(lVar11,*(undefined8 *)(lVar12 + 0x60),*(undefined8 *)puVar9);
              if ((uVar16 & 1) != 0) {
                lVar11 = *(long *)(lVar20 + 0xb8);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                puVar14 = (undefined8 *)
                          FUN_024f6008(lVar11,*(undefined8 *)(lVar12 + 0x60),
                                       *(undefined8 *)PTR_DAT_049c1b08);
                if (*(long *)(lVar20 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                          (*(long *)(lVar20 + 0xe8),*puVar14,&lStack_68,*(undefined8 *)puVar8);
                lVar11 = lStack_68;
                if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                uVar16 = UnityEngine_Object__op_Equality_3c1eeb4(param_3,lVar11,0);
                if ((uVar16 & 1) != 0) {
                  lVar11 = *(long *)(lVar20 + 0xb8);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  FUN_024f581c(lVar11,*(undefined8 *)(lVar12 + 0x60),*(undefined8 *)puVar10);
                }
              }
            }
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&lStack_90,*(undefined8 *)PTR_DAT_049c14d8);
            if ((param_3 != 0) &&
               (lVar12 = UnityEngine_Component__get_gameObject_3c187f4(param_3,0), lVar12 != 0)) {
              uVar16 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar12,0);
              if ((uVar16 & 1) == 0) {
                return;
              }
              iVar18 = *(int *)(lVar17 + 0x18);
              if (iVar18 + -1 < 0) {
                return;
              }
              iVar21 = 0;
              do {
                iVar18 = iVar18 + -1;
                System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                          (lVar17,iVar18,&lStack_b0,*(undefined8 *)PTR_DAT_049c1558);
                lVar12 = lStack_b0;
                lVar11 = *(long *)(lVar20 + 0xb8);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                if ((lVar12 == 0) || (lVar11 == 0)) break;
                uVar16 = FUN_024f5708(lVar11,*(undefined8 *)(lVar12 + 0x60),*(undefined8 *)puVar9);
                if ((uVar16 & 1) == 0) {
LAB_024e7514:
                  lVar11 = *(long *)(lVar20 + 0xc0);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  if (lVar11 == 0) break;
                  uVar16 = FUN_024f5708(lVar11,*(undefined8 *)(lVar12 + 0x60),
                                        *(undefined8 *)PTR_DAT_049c1b10);
                  if ((uVar16 & 1) == 0) {
LAB_024e763c:
                    bVar3 = false;
                  }
                  else {
                    lVar11 = *(long *)(lVar20 + 0xc0);
                    if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    if (lVar11 == 0) break;
                    puVar15 = (undefined4 *)
                              FUN_024f6008(lVar11,*(undefined8 *)(lVar12 + 0x60),
                                           *(undefined8 *)PTR_DAT_049c1b00);
                    if (*(long *)(lVar20 + 0xf0) == 0) break;
                    uVar1 = *puVar15;
                    lStack_b0 = CONCAT44(lStack_b0._4_4_,uVar1);
                    uVar16 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                                       (*(long *)(lVar20 + 0xf0),&lStack_b0,&lStack_98,
                                        *(undefined8 *)PTR_DAT_049c1ae8);
                    if ((uVar16 & 1) == 0) goto LAB_024e763c;
                    if (lStack_98 == 0) break;
                    uVar16 = Carrier__IsFull_2409500(lStack_98,0);
                    if ((uVar16 & 1) != 0) {
LAB_024e761c:
                      if (*(long *)(lVar20 + 0xf0) != 0) {
                        lStack_b0 = CONCAT44(lStack_b0._4_4_,uVar1);
                        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                                  (*(long *)(lVar20 + 0xf0),&lStack_b0,
                                   *(undefined8 *)PTR_DAT_049c1a70);
                        goto LAB_024e763c;
                      }
                      break;
                    }
                    if ((lStack_98 == 0) ||
                       (lVar11 = UnityEngine_Component__get_gameObject_3c187f4(lStack_98,0),
                       lVar11 == 0)) break;
                    uVar16 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar11,0);
                    if (((uVar16 & 1) == 0) ||
                       (uVar16 = Block__IsCompatibleWith_23dcb20(lVar12,lStack_98),
                       lVar11 = lStack_98, (uVar16 & 1) == 0)) goto LAB_024e761c;
                    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                      FUN_021f0574();
                    }
                    uVar16 = UnityEngine_Object__op_Equality_3c1eeb4(param_3,lVar11,0);
                    if ((uVar16 & 1) == 0) goto LAB_024e7790;
                    bVar3 = true;
                  }
                  if (*(char *)(lVar12 + 0x159) == '\0') {
                    uVar16 = Carrier__IsFull_2409500(param_3,0);
                    if ((uVar16 & 1) != 0) {
                      return;
                    }
                    uVar16 = Carrier__CanBeginTransferEnter_23fad1c(param_3,0);
                    if ((uVar16 & 1) == 0) {
                      return;
                    }
                    uVar16 = Block__IsCompatibleWith_23dcb20(lVar12,param_3);
                    if (((((uVar16 & 1) != 0) &&
                         (uVar16 = Carrier__IsColorRejected_2409d7c(param_3,lVar12,0),
                         (uVar16 & 1) == 0)) &&
                        ((bVar3 || (uVar16 = BlockTransferSystem__HasBetterCarrier_23e7870
                                                       (lVar20,param_3,lVar12), (uVar16 & 1) == 0)))
                        ) && (uVar16 = Carrier__CanTransferBlock_24097e8(param_3,lVar12,0),
                             (uVar16 & 1) != 0)) {
                      if (*(char *)(param_3 + 0x1b0) != '\0') {
                        return;
                      }
                      lVar11 = *(long *)(lVar20 + 0x48);
                      if (lVar11 == 0) break;
                      auVar22 = Carrier__AddBlock_23fe404
                                          ((*(float *)(lVar11 + 0x138) / *(float *)(lVar11 + 0x140))
                                           * (float)iVar21 * 0.5,param_3,lVar12,1,0,0);
                      Cysharp_Threading_Tasks_UniTaskExtensions__Forget_37da268
                                (auVar22._0_8_,auVar22._8_8_,0);
                      lVar11 = *(long *)(lVar20 + 0xc0);
                      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                        FUN_021f0574();
                      }
                      if (lVar11 == 0) break;
                      uVar16 = FUN_024f5708(lVar11,*(undefined8 *)(lVar12 + 0x60),
                                            *(undefined8 *)PTR_DAT_049c1b10);
                      if ((uVar16 & 1) != 0) {
                        lVar11 = *(long *)(lVar20 + 0xc0);
                        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                          FUN_021f0574();
                        }
                        if (lVar11 == 0) break;
                        puVar15 = (undefined4 *)
                                  FUN_024f6008(lVar11,*(undefined8 *)(lVar12 + 0x60),
                                               *(undefined8 *)PTR_DAT_049c1b00);
                        if (*(long *)(lVar20 + 0xf0) == 0) break;
                        lStack_b0 = CONCAT44(lStack_b0._4_4_,*puVar15);
                        System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                                  (*(long *)(lVar20 + 0xf0),&lStack_b0,param_3,
                                   *(undefined8 *)PTR_DAT_049c1af8);
                      }
                    }
                  }
                }
                else {
                  lVar11 = *(long *)(lVar20 + 0xb8);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  if (lVar11 == 0) break;
                  puVar14 = (undefined8 *)
                            FUN_024f6008(lVar11,*(undefined8 *)(lVar12 + 0x60),
                                         *(undefined8 *)PTR_DAT_049c1b08);
                  uVar13 = *puVar14;
                  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  uVar16 = UnityEngine_Object__op_Equality_3c1eeb4(uVar13,param_3,0);
                  if ((uVar16 & 1) == 0) goto LAB_024e7514;
                }
LAB_024e7790:
                iVar21 = iVar21 + 1;
                if (iVar18 < 1) {
                  return;
                }
              } while( true );
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

