/* IL2CPP: BlockTransferSystem$$HandleCarrierTrigger
void BlockTransferSystem__HandleCarrierTrigger (BlockTransferSystem_o* __this, Carrier_o* carrier, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$HandleCarrierTrigger
   void BlockTransferSystem__HandleCarrierTrigger (BlockTransferSystem_o* __this, Carrier_o*
   carrier, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

void BlockTransferSystem__HandleCarrierTrigger_23e7118(long param_1,long param_2,long param_3)

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
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined4 *puVar16;
  int iVar17;
  long lVar18;
  int iVar19;
  undefined1 auVar20 [16];
  long lStack_b0;
  long *plStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  long *plStack_88;
  undefined8 uStack_80;
  long lStack_68;
  
  if ((bRam0000000004f4b5fe & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1a70);
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
  if (*(long *)(param_1 + 0x38) != 0) {
    uVar11 = GameMachine__IsInState_object__261a580
                       (*(long *)(param_1 + 0x38),*(undefined8 *)PTR_DAT_049c1ae0);
    if ((uVar11 & 1) == 0) {
      return;
    }
    if (param_3 != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (param_3,&lStack_b0,*(undefined8 *)PTR_DAT_049c14f0);
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
      while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&lStack_90,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
        lVar18 = *(long *)puVar7;
        lVar12 = *(long *)(lVar18 + 0x20);
        uVar2 = *(ushort *)(lVar12 + 0x135);
        lVar13 = lVar12;
        if ((uVar2 & 1) == 0) {
          lVar13 = FUN_02229718();
          lVar12 = *(long *)(lVar18 + 0x20);
          uVar2 = *(ushort *)(lVar12 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar12 = FUN_02229718();
        }
        uVar14 = thunk_FUN_0224e54c(&lStack_90,
                                    *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_68,uVar14,uVar1);
        lVar13 = lStack_68;
        lVar12 = *(long *)(param_1 + 0xb8);
        if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar11 = FUN_024f5708(lVar12,*(undefined8 *)(lVar13 + 0x60),*(undefined8 *)puVar9);
        if ((uVar11 & 1) != 0) {
          lVar12 = *(long *)(param_1 + 0xb8);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          puVar15 = (undefined8 *)
                    FUN_024f6008(lVar12,*(undefined8 *)(lVar13 + 0x60),
                                 *(undefined8 *)PTR_DAT_049c1b08);
          if (*(long *)(param_1 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
                    (*(long *)(param_1 + 0xe8),*puVar15,&lStack_68,*(undefined8 *)puVar8);
          lVar12 = lStack_68;
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar11 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,lVar12,0);
          if ((uVar11 & 1) != 0) {
            lVar12 = *(long *)(param_1 + 0xb8);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            FUN_024f581c(lVar12,*(undefined8 *)(lVar13 + 0x60),*(undefined8 *)puVar10);
          }
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&lStack_90,*(undefined8 *)PTR_DAT_049c14d8);
      if ((param_2 != 0) &&
         (lVar13 = UnityEngine_Component__get_gameObject_3c187f4(param_2,0), lVar13 != 0)) {
        uVar11 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar13,0);
        if ((uVar11 & 1) == 0) {
          return;
        }
        iVar17 = *(int *)(param_3 + 0x18);
        if (iVar17 + -1 < 0) {
          return;
        }
        iVar19 = 0;
        do {
          iVar17 = iVar17 + -1;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (param_3,iVar17,&lStack_b0,*(undefined8 *)PTR_DAT_049c1558);
          lVar13 = lStack_b0;
          lVar12 = *(long *)(param_1 + 0xb8);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if ((lVar13 == 0) || (lVar12 == 0)) break;
          uVar11 = FUN_024f5708(lVar12,*(undefined8 *)(lVar13 + 0x60),*(undefined8 *)puVar9);
          if ((uVar11 & 1) == 0) {
LAB_024e7514:
            lVar12 = *(long *)(param_1 + 0xc0);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (lVar12 == 0) break;
            uVar11 = FUN_024f5708(lVar12,*(undefined8 *)(lVar13 + 0x60),
                                  *(undefined8 *)PTR_DAT_049c1b10);
            if ((uVar11 & 1) == 0) {
LAB_024e763c:
              bVar3 = false;
            }
            else {
              lVar12 = *(long *)(param_1 + 0xc0);
              if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                FUN_021f0574();
              }
              if (lVar12 == 0) break;
              puVar16 = (undefined4 *)
                        FUN_024f6008(lVar12,*(undefined8 *)(lVar13 + 0x60),
                                     *(undefined8 *)PTR_DAT_049c1b00);
              if (*(long *)(param_1 + 0xf0) == 0) break;
              uVar1 = *puVar16;
              lStack_b0 = CONCAT44(lStack_b0._4_4_,uVar1);
              uVar11 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                                 (*(long *)(param_1 + 0xf0),&lStack_b0,&lStack_98,
                                  *(undefined8 *)PTR_DAT_049c1ae8);
              if ((uVar11 & 1) == 0) goto LAB_024e763c;
              if (lStack_98 == 0) break;
              uVar11 = Carrier__IsFull_2409500(lStack_98,0);
              if ((uVar11 & 1) != 0) {
LAB_024e761c:
                if (*(long *)(param_1 + 0xf0) != 0) {
                  lStack_b0 = CONCAT44(lStack_b0._4_4_,uVar1);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                            (*(long *)(param_1 + 0xf0),&lStack_b0,*(undefined8 *)PTR_DAT_049c1a70);
                  goto LAB_024e763c;
                }
                break;
              }
              if ((lStack_98 == 0) ||
                 (lVar12 = UnityEngine_Component__get_gameObject_3c187f4(lStack_98,0), lVar12 == 0))
              break;
              uVar11 = UnityEngine_GameObject__get_activeInHierarchy_3c1cfac(lVar12,0);
              if (((uVar11 & 1) == 0) ||
                 (uVar11 = Block__IsCompatibleWith_23dcb20(lVar13,lStack_98), lVar12 = lStack_98,
                 (uVar11 & 1) == 0)) goto LAB_024e761c;
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                FUN_021f0574();
              }
              uVar11 = UnityEngine_Object__op_Equality_3c1eeb4(param_2,lVar12,0);
              if ((uVar11 & 1) == 0) goto LAB_024e7790;
              bVar3 = true;
            }
            if (*(char *)(lVar13 + 0x159) == '\0') {
              uVar11 = Carrier__IsFull_2409500(param_2,0);
              if ((uVar11 & 1) != 0) {
                return;
              }
              uVar11 = Carrier__CanBeginTransferEnter_23fad1c(param_2,0);
              if ((uVar11 & 1) == 0) {
                return;
              }
              uVar11 = Block__IsCompatibleWith_23dcb20(lVar13,param_2);
              if (((((uVar11 & 1) != 0) &&
                   (uVar11 = Carrier__IsColorRejected_2409d7c(param_2,lVar13,0), (uVar11 & 1) == 0))
                  && ((bVar3 || (uVar11 = BlockTransferSystem__HasBetterCarrier_23e7870
                                                    (param_1,param_2,lVar13), (uVar11 & 1) == 0))))
                 && (uVar11 = Carrier__CanTransferBlock_24097e8(param_2,lVar13,0), (uVar11 & 1) != 0
                    )) {
                if (*(char *)(param_2 + 0x1b0) != '\0') {
                  return;
                }
                lVar12 = *(long *)(param_1 + 0x48);
                if (lVar12 == 0) break;
                auVar20 = Carrier__AddBlock_23fe404
                                    ((*(float *)(lVar12 + 0x138) / *(float *)(lVar12 + 0x140)) *
                                     (float)iVar19 * 0.5,param_2,lVar13,1,0,0);
                Cysharp_Threading_Tasks_UniTaskExtensions__Forget_37da268
                          (auVar20._0_8_,auVar20._8_8_,0);
                lVar12 = *(long *)(param_1 + 0xc0);
                if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                if (lVar12 == 0) break;
                uVar11 = FUN_024f5708(lVar12,*(undefined8 *)(lVar13 + 0x60),
                                      *(undefined8 *)PTR_DAT_049c1b10);
                if ((uVar11 & 1) != 0) {
                  lVar12 = *(long *)(param_1 + 0xc0);
                  if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  if (lVar12 == 0) break;
                  puVar16 = (undefined4 *)
                            FUN_024f6008(lVar12,*(undefined8 *)(lVar13 + 0x60),
                                         *(undefined8 *)PTR_DAT_049c1b00);
                  if (*(long *)(param_1 + 0xf0) == 0) break;
                  lStack_b0 = CONCAT44(lStack_b0._4_4_,*puVar16);
                  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                            (*(long *)(param_1 + 0xf0),&lStack_b0,param_2,
                             *(undefined8 *)PTR_DAT_049c1af8);
                }
              }
            }
          }
          else {
            lVar12 = *(long *)(param_1 + 0xb8);
            if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
              FUN_021f0574();
            }
            if (lVar12 == 0) break;
            puVar15 = (undefined8 *)
                      FUN_024f6008(lVar12,*(undefined8 *)(lVar13 + 0x60),
                                   *(undefined8 *)PTR_DAT_049c1b08);
            uVar14 = *puVar15;
            if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
              FUN_021f0574();
            }
            uVar11 = UnityEngine_Object__op_Equality_3c1eeb4(uVar14,param_2,0);
            if ((uVar11 & 1) == 0) goto LAB_024e7514;
          }
LAB_024e7790:
          iVar19 = iVar19 + 1;
          if (iVar17 < 1) {
            return;
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

