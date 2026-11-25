/* IL2CPP: SelectBoosterSystem$$OnActivated
void SelectBoosterSystem__OnActivated (SelectBoosterSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024f97dc) */
/* WARNING: Removing unreachable block (ram,0x024f9ad8) */
/* WARNING: Removing unreachable block (ram,0x024f9780) */
/* WARNING: Removing unreachable block (ram,0x024f9c24) */
/* WARNING: Removing unreachable block (ram,0x024f97d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SelectBoosterSystem$$OnActivated
   void SelectBoosterSystem__OnActivated (SelectBoosterSystem_o* __this, const MethodInfo* method);
    */

void SelectBoosterSystem__OnActivated_23f9328
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  int iVar17;
  float *pfVar18;
  undefined8 uVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  long lStack_1b0;
  long *plStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  long *plStack_188;
  long lStack_180;
  long *plStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_150;
  long *plStack_148;
  long lStack_140;
  long *plStack_138;
  ulong uStack_130;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long *plStack_108;
  long lStack_100;
  long *plStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  long *plStack_98;
  ulong uStack_90;
  long lStack_78;
  
  if ((bRam0000000004f4b679 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c2320);
    FUN_021f03f8(PTR_DAT_049c2328);
    FUN_021f03f8(PTR_DAT_049c2330);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c2338);
    FUN_021f03f8(PTR_DAT_049c2340);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c2348);
    FUN_021f03f8(PTR_DAT_049c2350);
    FUN_021f03f8(PTR_DAT_049c2358);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c2360);
    FUN_021f03f8(PTR_DAT_049c1a30);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1a38);
    FUN_021f03f8(PTR_DAT_049c2368);
    FUN_021f03f8(PTR_DAT_049c14f8);
    FUN_021f03f8(PTR_DAT_049c2370);
    FUN_021f03f8(PTR_DAT_049c22d8);
    bRam0000000004f4b679 = 1;
  }
  uStack_a0 = 0;
  plStack_98 = (long *)0x0;
  uStack_90 = 0;
  auStack_b0._0_8_ = 0;
  auStack_b0._8_8_ = 0;
  lStack_78 = 0;
  lStack_d0 = 0;
  plStack_c8 = (long *)0x0;
  uStack_c0 = 0;
  uStack_e0 = 0;
  plStack_f8 = (long *)0x0;
  lStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_110 = 0;
  plStack_108 = (long *)0x0;
  lStack_120 = 0;
  lStack_118 = 0;
  lStack_140 = 0;
  plStack_138 = (long *)0x0;
  uStack_130 = 0;
  auVar23 = ZEXT816(0);
  if (*(long *)(param_4 + 0x40) != 0) {
    Monitors__DisableRaycaster_256ea20(*(long *)(param_4 + 0x40),param_4,0);
    auVar23._8_8_ = auStack_b0._8_8_;
    auVar23._0_8_ = auStack_b0._0_8_;
    if (*(long *)(param_4 + 0x48) != 0) {
      OutlineModule__DeactivateRender_254f494(*(long *)(param_4 + 0x48),0);
      auVar23._8_8_ = auStack_b0._8_8_;
      auVar23._0_8_ = auStack_b0._0_8_;
      if (*(long *)(param_4 + 0x50) != 0) {
        HighlightModule__ActivateRender_254e0cc(*(long *)(param_4 + 0x50),0);
        auVar23._8_8_ = auStack_b0._8_8_;
        auVar23._0_8_ = auStack_b0._0_8_;
        if (*(long *)(param_4 + 0x40) != 0) {
          lVar9 = Monitors__Get_object__26889d0
                            (*(long *)(param_4 + 0x40),*(undefined8 *)PTR_DAT_049c2368);
          auVar23._8_8_ = auStack_b0._8_8_;
          auVar23._0_8_ = auStack_b0._0_8_;
          if (lVar9 != 0) {
            HighlightMonitor__ShowMask_2443fe8(_UNK_013aa634,lVar9,0);
            puVar7 = PTR_DAT_049c2360;
            puVar8 = PTR_DAT_049c2358;
            puVar6 = PTR_DAT_049c22d8;
            puVar5 = PTR_DAT_049c14e8;
            puVar4 = PTR_DAT_049c14e0;
            auVar23._8_8_ = auStack_b0._8_8_;
            auVar23._0_8_ = auStack_b0._0_8_;
            lVar9 = *(long *)(param_4 + 0x60);
            if (lVar9 != 0) {
              plStack_178 = (long *)0x0;
              uStack_170 = 0;
              lStack_180 = (ulong)*(uint *)(lVar9 + 0x30) << 0x20;
              thunk_FUN_021f190c(&plStack_178,0);
              uStack_170 = *(ulong *)(lVar9 + 0x28);
              thunk_FUN_021f190c(&uStack_170);
              plStack_98 = plStack_178;
              uStack_a0 = lStack_180;
              uStack_90 = uStack_170;
              do {
                iVar17 = (int)uStack_a0 + -1;
                uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar17);
                if (iVar17 < 0) {
                  uVar3 = uStack_a0._4_4_ - 1;
                  uStack_a0 = CONCAT44(uVar3,iVar17);
                  if ((int)uVar3 < 0) {
                    auVar23 = auStack_b0;
                    if (*(long *)(param_4 + 0x70) == 0) break;
                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
                              (*(long *)(param_4 + 0x70),&lStack_180,*(undefined8 *)PTR_DAT_049c2320
                              );
                    puVar7 = PTR_DAT_049c2340;
                    puVar6 = PTR_DAT_049c2338;
                    uStack_e0 = uStack_160;
                    plStack_148 = &lStack_100;
                    plStack_f8 = plStack_178;
                    lStack_100 = lStack_180;
                    uStack_e8 = uStack_168;
                    uStack_f0 = uStack_170;
                    lStack_150 = 0;
                    uVar11 = uStack_170;
                    goto LAB_024f98c0;
                  }
                  lVar9 = *(long *)(uStack_90 + (ulong)uVar3 * 8 + 0x20);
                  plStack_98 = *(long **)(lVar9 + 0x18);
                  thunk_FUN_021f190c((ulong)&uStack_a0 | 8);
                  iVar17 = *(int *)(lVar9 + 0x30) + -1;
                  uStack_a0 = CONCAT44(uStack_a0._4_4_,iVar17);
                }
                auVar23 = auStack_b0;
                if (*(long *)(param_4 + 0x68) == 0) break;
                plVar10 = (long *)FUN_024f6008(*(long *)(param_4 + 0x68),
                                               plStack_98[(long)iVar17 + 4],*(undefined8 *)puVar6);
                lVar9 = *plVar10;
                uVar11 = SelectBoosterSystem__CanSelect_23fac3c(param_4,lVar9);
                if ((uVar11 & 1) != 0) {
                  auVar23 = auStack_b0;
                  if (lVar9 == 0) break;
                  uVar19 = *(undefined8 *)(lVar9 + 0x1e0);
                  lVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1a38);
                  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                            (lVar12,*(undefined8 *)PTR_DAT_049c1a30);
                  auVar23 = auStack_b0;
                  if (lVar12 == 0) break;
                  System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                            (lVar12,uVar19,*(undefined8 *)PTR_DAT_049c2350);
                  if (*(int *)(*(long *)PTR_DAT_049c14d0 + 0xe4) == 0) {
                    FUN_021f0574();
                  }
                  auVar23 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                                      (&lStack_78,*(undefined8 *)PTR_DAT_049c14c8);
                  lStack_150 = 0;
                  plStack_148 = (long *)auStack_b0;
                  auStack_b0 = auVar23;
                  Carrier__FindNextTransferBlocks_23fb3d4(lVar9,lStack_78);
                  if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  if (*(int *)(lVar12 + 0x18) != *(int *)(lStack_78 + 0x18)) {
                    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                              (lStack_78,&lStack_180,*(undefined8 *)PTR_DAT_049c14f0);
                    uStack_c0 = uStack_170;
                    plStack_c8 = plStack_178;
                    lStack_d0 = lStack_180;
                    lStack_180 = 0;
                    plStack_178 = &lStack_d0;
                    while( true ) {
                      uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                         (&lStack_d0,*(undefined8 *)puVar4);
                      if ((uVar11 & 1) == 0) break;
                      lVar20 = *(long *)puVar5;
                      lVar13 = *(long *)(lVar20 + 0x20);
                      uVar2 = *(ushort *)(lVar13 + 0x135);
                      lVar14 = lVar13;
                      if ((uVar2 & 1) == 0) {
                        lVar14 = FUN_02229718();
                        lVar13 = *(long *)(lVar20 + 0x20);
                        uVar2 = *(ushort *)(lVar13 + 0x135);
                      }
                      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
                      if ((uVar2 & 1) == 0) {
                        lVar13 = FUN_02229718();
                      }
                      uVar19 = thunk_FUN_0224e54c(&lStack_d0,
                                                  *(long *)(*(long *)(*(long *)(lVar13 + 0xc0) + 8)
                                                           + 0x80) + 0x60);
                      func_0x04608620(&uStack_190,uVar19,uVar1);
                      System_Collections_Generic_List___Il2CppFullySharedGenericType___Remove_28d00fc
                                (lVar12,uStack_190,*(undefined8 *)puVar7);
                    }
                    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                              (&lStack_d0,*(undefined8 *)PTR_DAT_049c14d8);
                    if (*(long *)(param_4 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                              (*(long *)(param_4 + 0x70),lVar9,lVar12,
                               *(undefined8 *)PTR_DAT_049c2328);
                  }
                  lVar9 = lStack_150;
                  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                            (plStack_148,*(undefined8 *)PTR_DAT_049c14f8);
                  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f0698(lVar9);
                  }
                }
              } while( true );
            }
          }
        }
      }
    }
  }
  auStack_b0 = auVar23;
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
LAB_024f98c0:
  uVar15 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                     (&lStack_100,*(undefined8 *)puVar6);
  lVar9 = lStack_150;
  if ((uVar15 & 1) == 0) {
    System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
              (plStack_148,*(undefined8 *)PTR_DAT_049c2330);
    if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar9);
    }
    return;
  }
  lVar14 = *(long *)puVar7;
  lVar12 = *(long *)(lVar14 + 0x20);
  uVar2 = *(ushort *)(lVar12 + 0x135);
  lVar9 = lVar12;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_02229718();
    lVar12 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar12 + 0x135);
  }
  uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
  if ((uVar2 & 1) == 0) {
    lVar12 = FUN_02229718();
  }
  uVar19 = thunk_FUN_0224e54c(&lStack_100,
                              *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
  func_0x04608620(&lStack_180,uVar19,uVar1);
  plStack_108 = plStack_178;
  lStack_110 = lStack_180;
  System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
            (&lStack_110,&lStack_118,&lStack_120,*(undefined8 *)PTR_DAT_049c2348);
  lVar12 = lStack_118;
  lVar9 = lStack_120;
  if (lStack_118 == 0) {
LAB_024f9c20:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Carrier__DisableGroupBlock_23fb7ac(lStack_118);
  if (lVar9 == 0) goto LAB_024f9c20;
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lVar9,&lStack_180,*(undefined8 *)PTR_DAT_049c14f0);
  uStack_190 = 0;
  plStack_c8 = plStack_178;
  lStack_d0 = lStack_180;
  uStack_c0 = uStack_170;
  plStack_188 = &lStack_d0;
  while( true ) {
    uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&lStack_d0,*(undefined8 *)puVar4);
    fVar22 = (float)uVar11;
    if ((uVar15 & 1) == 0) break;
    lVar13 = *(long *)puVar5;
    lVar14 = *(long *)(lVar13 + 0x20);
    uVar2 = *(ushort *)(lVar14 + 0x135);
    lVar9 = lVar14;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar14 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar14 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar14 = FUN_02229718();
    }
    uVar19 = thunk_FUN_0224e54c(&lStack_d0,
                                *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_180,uVar19,uVar1);
    lVar9 = lStack_180;
    SelectBoosterSystem__ApplyBlockUpMotion_23fb870(param_4,lVar12,lStack_180);
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar14 = *(long *)(param_4 + 0x50);
    uVar19 = UnityEngine_Component__get_gameObject_3c187f4(lVar9,0);
    if (*(long *)(lVar9 + 0x108) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar16 = UnityEngine_MeshFilter__get_sharedMesh_3befabc(*(long *)(lVar9 + 0x108),0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    HighlightModule__Add_254de98(&lStack_180,lVar14,uVar19,uVar16,0);
    plStack_138 = plStack_178;
    lStack_140 = lStack_180;
    uStack_130 = uStack_170;
    if (*(long *)(param_4 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plStack_1a8 = plStack_178;
    lStack_1b0 = lStack_180;
    uStack_1a0 = uStack_170;
    FUN_02333498(*(long *)(param_4 + 0x88),&lStack_1b0,*(undefined8 *)puVar8);
  }
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&lStack_d0,*(undefined8 *)PTR_DAT_049c14d8);
  lVar9 = *(long *)(lVar12 + 0x118);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar9 = UnityEngine_Component__get_transform_3c18724(lVar9,0);
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  fVar21 = (float)UnityEngine_Transform__get_position_3c2d540(lVar9,0);
  lVar12 = *(long *)PTR_DAT_049c2370;
  if (*(int *)(lVar12 + 0xe4) == 0) {
    FUN_021f0574();
    lVar12 = *(long *)PTR_DAT_049c2370;
  }
  pfVar18 = *(float **)(lVar12 + 0xb8);
  param_3 = param_3 + pfVar18[2];
  uVar11 = (ulong)(uint)(fVar22 + pfVar18[1]);
  UnityEngine_Transform__set_position_3c2d61c(fVar21 + *pfVar18,uVar11,param_3,lVar9,0);
  goto LAB_024f98c0;
}

