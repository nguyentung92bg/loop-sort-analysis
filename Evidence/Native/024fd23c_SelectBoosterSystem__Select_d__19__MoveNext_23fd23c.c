/* IL2CPP: SelectBoosterSystem.<Select>d__19$$MoveNext
void SelectBoosterSystem__Select_d__19__MoveNext (SelectBoosterSystem__Select_d__19_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024fdc08) */
/* WARNING: Removing unreachable block (ram,0x024fd6f0) */
/* WARNING: Removing unreachable block (ram,0x024fdfb8) */
/* WARNING: Removing unreachable block (ram,0x024fdfac) */
/* IL2CPP: SelectBoosterSystem.<Select>d__19$$MoveNext
   void SelectBoosterSystem__Select_d__19__MoveNext (SelectBoosterSystem__Select_d__19_o __this,
   const MethodInfo* method); */

void SelectBoosterSystem__Select_d__19__MoveNext_23fd23c
               (undefined1 param_1 [16],float param_2,float param_3,uint *param_4)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint *puVar13;
  float *pfVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  ulong uVar19;
  long lVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_130 [16];
  uint **ppuStack_120;
  undefined1 auStack_110 [16];
  uint **ppuStack_100;
  long lStack_f8;
  uint *puStack_f0;
  uint **ppuStack_e8;
  undefined8 uStack_e0;
  int iStack_d8;
  undefined1 auStack_d0 [16];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  uint *puStack_b0;
  undefined8 uStack_a8;
  uint **ppuStack_a0;
  long lStack_90;
  uint uStack_84;
  undefined1 auStack_80 [16];
  uint *puStack_68;
  
  puStack_68 = param_4;
  if ((bRam0000000004f4b684 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c24a0);
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c1b58);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c1b60);
    FUN_021f03f8(PTR_DAT_049c24a8);
    FUN_021f03f8(PTR_DAT_049c24b0);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c24b8);
    FUN_021f03f8(PTR_DAT_049c2350);
    FUN_021f03f8(PTR_DAT_049c1b88);
    FUN_021f03f8(PTR_DAT_049c2210);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c1b90);
    FUN_021f03f8(PTR_DAT_049c14f8);
    FUN_021f03f8(PTR_DAT_049c2370);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b684 = 1;
  }
  uStack_84 = *param_4;
  lVar17 = *(long *)(param_4 + 4);
  lStack_90 = 0;
  puStack_b0 = (uint *)0x0;
  uStack_a8 = 0;
  ppuStack_a0 = (uint **)0x0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  auStack_d0._0_8_ = 0;
  auStack_d0._8_8_ = 0;
  iStack_d8 = 0;
  if (uStack_84 < 2) {
    lVar8 = 0;
  }
  else {
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar17 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(lVar17 + 0x70),*(undefined8 *)(param_4 + 6),&lStack_f8,
               *(undefined8 *)PTR_DAT_049c24b0);
    if (*(long *)(lVar17 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
              (*(long *)(lVar17 + 0x70),*(undefined8 *)(puStack_68 + 6),
               *(undefined8 *)PTR_DAT_049c24a8);
    if (*(long *)(puStack_68 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *(long *)(*(long *)(puStack_68 + 6) + 0x118);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = UnityEngine_Component__get_transform_3c18724(lVar8,0);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar21 = (float)UnityEngine_Transform__get_position_3c2d540(lVar8,0);
    puVar2 = PTR_DAT_049c2370;
    lVar9 = *(long *)PTR_DAT_049c2370;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_021f0574();
      lVar9 = *(long *)puVar2;
    }
    pfVar14 = *(float **)(lVar9 + 0xb8);
    param_3 = param_3 - pfVar14[2];
    param_2 = param_2 - pfVar14[1];
    UnityEngine_Transform__set_position_3c2d61c(fVar21 - *pfVar14,param_2,param_3,lVar8,0);
    if (*(long *)(puStack_68 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Carrier__DisableGroupBlock_23fb7ac();
    lVar8 = *(long *)(puStack_68 + 6);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = UnityEngine_Component__get_gameObject_3c187f4(lVar8,0);
    Carrier__DisableTransferEnter_2408aa4(lVar8,uVar10);
    Carrier__DisableTransferExit_2408b08(lVar8,uVar10);
    uVar10 = SelectBoosterSystem__GetTransferBlocks_23fb004
                       (lVar17,*(undefined8 *)(puStack_68 + 6),*(undefined8 *)(puStack_68 + 8));
    *(undefined8 *)(puStack_68 + 10) = uVar10;
    thunk_FUN_021f190c();
    puVar13 = puStack_68;
    if (*(int *)(*(long *)PTR_DAT_049c14d0 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar25 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                        (puVar13 + 0x10,*(undefined8 *)PTR_DAT_049c14c8);
    *(undefined1 (*) [16])(puStack_68 + 0xc) = auVar25;
    thunk_FUN_021f190c((undefined1 (*) [16])(puStack_68 + 0xc),0);
    lVar8 = lStack_f8;
  }
  puStack_f0 = &uStack_84;
  ppuStack_e8 = &puStack_68;
  lStack_f8 = 0;
  if (uStack_84 == 0) {
    uStack_84 = 0xffffffff;
    auStack_d0 = *(undefined1 (*) [16])(puStack_68 + 0x16);
    puStack_68[0x16] = 0;
    puStack_68[0x17] = 0;
    puStack_68[0x18] = 0;
    puStack_68[0x19] = 0;
    *puStack_68 = 0xffffffff;
LAB_024fd8c0:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar10 = auStack_d0._0_8_;
    if ((long *)auStack_d0._0_8_ != (long *)0x0) {
      lVar8 = *(long *)auStack_d0._0_8_;
      uVar19 = auStack_d0._8_8_ & 0xffff;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar12 = (undefined8 *)(lVar8 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_024fd940;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_024fd940:
      (*(code *)*puVar12)(uVar10,uVar19,puVar12[1]);
    }
    if (*(int *)(*(long *)PTR_DAT_049c1b60 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar25 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                        (&lStack_90,*(undefined8 *)PTR_DAT_049c1b58);
    *(undefined1 (*) [16])(puStack_68 + 0x12) = auVar25;
    thunk_FUN_021f190c((undefined1 (*) [16])(puStack_68 + 0x12),0);
    auStack_110._8_8_ = &uStack_84;
    auStack_110._0_8_ = 0;
    ppuStack_100 = &puStack_68;
    if (uStack_84 == 1) goto LAB_024fd9ac;
    if (*(long *)(puStack_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(puStack_68 + 0x10),auStack_130,*(undefined8 *)PTR_DAT_049c14f0);
    puVar5 = PTR_DAT_049c2210;
    puVar4 = PTR_DAT_049c1b88;
    puVar3 = PTR_DAT_049c14e8;
    puVar2 = PTR_DAT_049c14e0;
    uStack_a8 = auStack_130._8_8_;
    puStack_b0 = (uint *)auStack_130._0_8_;
    ppuStack_a0 = ppuStack_120;
    ppuStack_120 = &puStack_b0;
    auStack_130._0_8_ = 0;
    auStack_130._8_8_ = &uStack_84;
    while( true ) {
      uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&puStack_b0,*(undefined8 *)puVar2);
      if ((uVar15 & 1) == 0) break;
      lVar11 = *(long *)puVar3;
      lVar9 = *(long *)(lVar11 + 0x20);
      uVar1 = *(ushort *)(lVar9 + 0x135);
      lVar8 = lVar9;
      if ((uVar1 & 1) == 0) {
        lVar8 = FUN_02229718();
        lVar9 = *(long *)(lVar11 + 0x20);
        uVar1 = *(ushort *)(lVar9 + 0x135);
      }
      uVar22 = *(undefined4 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0xfc);
      if ((uVar1 & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      uVar10 = thunk_FUN_0224e54c(&puStack_b0,
                                  *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(auStack_80,uVar10,uVar22);
      uVar10 = auStack_80._0_8_;
      if (*(long *)(puStack_68 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar15 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                         (*(long *)(puStack_68 + 10),auStack_80._0_8_,*(undefined8 *)puVar5);
      if ((uVar15 & 1) == 0) {
        if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar8 = UnityEngine_Component__get_transform_3c18724(uVar10,0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar22 = UnityEngine_Transform__get_localPosition_3c2c388(lVar8,0);
        if (*(long *)(puStack_68 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        fVar21 = param_2;
        fVar24 = param_3;
        Carrier__AddBlock_23fe404(0,*(long *)(puStack_68 + 6),uVar10,0);
        uVar23 = UnityEngine_Transform__get_localPosition_3c2c388(lVar8,0);
        if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        auVar25 = SelectBoosterSystem__ApplyAddBlockMotion_23fbd88
                            (uVar22,param_2,param_3,uVar23,fVar21,fVar24,lVar17,uVar10);
        if (lStack_90 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        auStack_80 = auVar25;
        FUN_02333498(lStack_90,auStack_80,*(undefined8 *)puVar4);
      }
    }
    if ((int)uStack_84 < 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (ppuStack_120,*(undefined8 *)PTR_DAT_049c14d8);
    }
    lVar8 = lStack_90;
    puVar2 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar25 = Cysharp_Threading_Tasks_UniTask__WhenAll_37cc4d0(lVar8,0);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_130 = Cysharp_Threading_Tasks_UniTaskExtensions__AttachExternalCancellation_37da07c
                            (auVar25._0_8_,auVar25._8_8_,*(undefined8 *)(lVar17 + 0x20),0);
    thunk_FUN_021f190c(auStack_130,0);
    auStack_d0 = auStack_130;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar10 = auStack_d0._0_8_;
    if ((long *)auStack_d0._0_8_ == (long *)0x0) goto LAB_024fd9c8;
    lVar17 = *(long *)auStack_d0._0_8_;
    uVar19 = auStack_d0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar12 = (undefined8 *)(lVar17 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_024fdeec;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar12 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_024fdeec:
    iVar7 = (*(code *)*puVar12)(uVar10,uVar19,puVar12[1]);
    if (iVar7 != 0) goto LAB_024fd9c8;
    uStack_84 = 1;
    *puStack_68 = 1;
    *(undefined1 (*) [16])(puStack_68 + 0x16) = auStack_d0;
    thunk_FUN_021f190c(puStack_68 + 0x16,0);
    FUN_0235c420(puStack_68 + 2,auStack_d0,puStack_68,*(undefined8 *)PTR_DAT_049c24a0);
    iVar7 = 9;
  }
  else {
    if (uStack_84 != 1) {
      if (*(long *)(puStack_68 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(puStack_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                (*(long *)(puStack_68 + 0x10),*(undefined8 *)(*(long *)(puStack_68 + 6) + 0x1e0),
                 *(undefined8 *)PTR_DAT_049c2350);
      if (*(long *)(puStack_68 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(puStack_68 + 0x10),auStack_110,*(undefined8 *)PTR_DAT_049c14f0);
      puVar4 = PTR_DAT_049c2210;
      puVar3 = PTR_DAT_049c14e8;
      puVar2 = PTR_DAT_049c14e0;
      uStack_a8 = auStack_110._8_8_;
      puStack_b0 = (uint *)auStack_110._0_8_;
      ppuStack_a0 = ppuStack_100;
      ppuStack_100 = &puStack_b0;
      auStack_110._0_8_ = 0;
      auStack_110._8_8_ = &uStack_84;
      while (uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&puStack_b0,*(undefined8 *)puVar2), (uVar15 & 1) != 0) {
        lVar20 = *(long *)puVar3;
        lVar11 = *(long *)(lVar20 + 0x20);
        uVar1 = *(ushort *)(lVar11 + 0x135);
        lVar9 = lVar11;
        if ((uVar1 & 1) == 0) {
          lVar9 = FUN_02229718();
          lVar11 = *(long *)(lVar20 + 0x20);
          uVar1 = *(ushort *)(lVar11 + 0x135);
        }
        uVar22 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar11 = FUN_02229718();
        }
        uVar10 = thunk_FUN_0224e54c(&puStack_b0,
                                    *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(auStack_130,uVar10,uVar22);
        uVar10 = auStack_130._0_8_;
        if (*(long *)(puStack_68 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        Carrier__RemoveBlock_23fe2b8(*(long *)(puStack_68 + 6),auStack_130._0_8_);
        if (*(long *)(puStack_68 + 10) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar15 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                           (*(long *)(puStack_68 + 10),uVar10,*(undefined8 *)puVar4);
        if ((uVar15 & 1) == 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar15 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                             (lVar8,uVar10,*(undefined8 *)puVar4);
          if ((uVar15 & 1) != 0) {
            if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            SelectBoosterSystem__ApplyBlockDownMotion_23fbab0
                      (lVar17,*(undefined8 *)(puStack_68 + 6),uVar10);
          }
        }
      }
      if ((int)uStack_84 < 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (ppuStack_100,*(undefined8 *)PTR_DAT_049c14d8);
      }
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      plVar18 = *(long **)(lVar17 + 0x58);
      uStack_c0 = *(undefined8 *)(puStack_68 + 6);
      uStack_b8 = 0;
      thunk_FUN_021f190c(&uStack_c0);
      uStack_b8 = *(undefined8 *)(puStack_68 + 10);
      thunk_FUN_021f190c(&uStack_b8);
      uVar6 = uStack_b8;
      uVar10 = uStack_c0;
      if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar8 = *plVar18;
      uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049c24b8) {
            puVar12 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_024fd784;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)PTR_DAT_049c24b8,0);
LAB_024fd784:
      (*(code *)*puVar12)(plVar18,uVar10,uVar6,puVar12[1]);
      SelectBoosterSystem__ApplySelectOutlineEffect_23fbf80(lVar17,*(undefined8 *)(puStack_68 + 10))
      ;
      if (*(long *)(lVar17 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar25 = BlockTransferSystem__TransferBlocks_23e60c0
                          (*(long *)(lVar17 + 0x38),*(undefined8 *)(puStack_68 + 6),
                           *(undefined8 *)(puStack_68 + 10),0);
      puVar2 = PTR_DAT_049b5138;
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_110 = auVar25;
      thunk_FUN_021f190c(auStack_110,0);
      auStack_d0 = auStack_110;
      if (cRam0000000004f49bf4 == '\0') {
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar10 = auStack_d0._0_8_;
      if ((long *)auStack_d0._0_8_ != (long *)0x0) {
        lVar8 = *(long *)auStack_d0._0_8_;
        uVar19 = auStack_d0._8_8_ & 0xffff;
        uVar15 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar12 = (undefined8 *)(lVar8 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_024fd8ac;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar12 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_024fd8ac:
        iVar7 = (*(code *)*puVar12)(uVar10,uVar19,puVar12[1]);
        if (iVar7 == 0) {
          uStack_84 = 0;
          *puStack_68 = 0;
          *(undefined1 (*) [16])(puStack_68 + 0x16) = auStack_d0;
          thunk_FUN_021f190c(puStack_68 + 0x16,0);
          FUN_0235c420(puStack_68 + 2,auStack_d0,puStack_68,*(undefined8 *)PTR_DAT_049c24a0);
          iVar7 = 9;
          goto LAB_024fdda0;
        }
      }
      goto LAB_024fd8c0;
    }
LAB_024fd9ac:
    ppuStack_100 = &puStack_68;
    auStack_110._8_8_ = &uStack_84;
    auStack_110._0_8_ = 0;
    uStack_84 = 0xffffffff;
    auStack_d0 = *(undefined1 (*) [16])(puStack_68 + 0x16);
    puStack_68[0x16] = 0;
    puStack_68[0x17] = 0;
    puStack_68[0x18] = 0;
    puStack_68[0x19] = 0;
    *puStack_68 = 0xffffffff;
LAB_024fd9c8:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar10 = auStack_d0._0_8_;
    if ((long *)auStack_d0._0_8_ != (long *)0x0) {
      lVar17 = *(long *)auStack_d0._0_8_;
      uVar19 = auStack_d0._8_8_ & 0xffff;
      uVar15 = (ulong)*(ushort *)(lVar17 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar17 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar12 = (undefined8 *)(lVar17 + (long)(*piVar16 + 2) * 0x10 + 0x138);
            goto LAB_024fdd10;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_024fdd10:
      (*(code *)*puVar12)(uVar10,uVar19,puVar12[1]);
    }
    if (*(long *)(puStack_68 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Carrier__EnableGroupBlock_23fd170();
    lVar17 = *(long *)(puStack_68 + 6);
    if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = UnityEngine_Component__get_gameObject_3c187f4(lVar17,0);
    Carrier__EnableTransferEnter_24089a4(lVar17,uVar10);
    Carrier__EnableTransferExit_2408a24(lVar17,uVar10);
    iVar7 = 0xf;
  }
  if ((int)*(uint *)auStack_110._8_8_ < 0) {
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (*ppuStack_100 + 0x12,*(undefined8 *)PTR_DAT_049c1b90);
  }
  auVar25._8_8_ = auStack_110._8_8_;
  auVar25._0_8_ = auStack_110._0_8_;
  if (auStack_110._0_8_ != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if (iVar7 == 0) {
    iVar7 = 0;
    auStack_110 = auVar25;
  }
LAB_024fdda0:
  if ((int)*puStack_f0 < 0) {
    UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
              (*ppuStack_e8 + 0xc,*(undefined8 *)PTR_DAT_049c14f8);
  }
  if (lStack_f8 == 0) {
    if (iVar7 == 0xf) {
      *puStack_68 = 0xfffffffe;
      puVar13 = puStack_68 + 10;
      puVar13[0] = 0;
      puVar13[1] = 0;
      thunk_FUN_021f190c(puVar13,0);
      puVar13 = puStack_68 + 0x10;
      puVar13[0] = 0;
      puVar13[1] = 0;
      puStack_68[0xc] = 0;
      puStack_68[0xd] = 0;
      puStack_68[0xe] = 0;
      puStack_68[0xf] = 0;
      thunk_FUN_021f190c(puVar13,0);
      puStack_68[0x12] = 0;
      puStack_68[0x13] = 0;
      puStack_68[0x14] = 0;
      puStack_68[0x15] = 0;
      FUN_0235afc8(puStack_68 + 2,0);
    }
    else if (iVar7 == 0) {
      uVar10 = (&uStack_e0)[iStack_d8 + -1];
      *puStack_68 = 0xfffffffe;
      puVar13 = puStack_68 + 10;
      puVar13[0] = 0;
      puVar13[1] = 0;
      thunk_FUN_021f190c(puVar13,0);
      puVar13 = puStack_68 + 0x10;
      puVar13[0] = 0;
      puVar13[1] = 0;
      puStack_68[0xc] = 0;
      puStack_68[0xd] = 0;
      puStack_68[0xe] = 0;
      puStack_68[0xf] = 0;
      thunk_FUN_021f190c(puVar13,0);
      puStack_68[0x12] = 0;
      puStack_68[0x13] = 0;
      puStack_68[0x14] = 0;
      puStack_68[0x15] = 0;
      FUN_0235aea8(puStack_68 + 2,uVar10,0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698();
}

