/* IL2CPP: SandFlowSystem$$Sweep
bool SandFlowSystem__Sweep (SandFlowSystem_o* __this, Block_o* block, float distance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: SandFlowSystem$$Sweep
   bool SandFlowSystem__Sweep (SandFlowSystem_o* __this, Block_o* block, float distance, const
   MethodInfo* method); */

bool SandFlowSystem__Sweep_24cd0dc(float param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  float fStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  if ((bRam0000000004f4bbea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1c78);
    FUN_021f03f8(PTR_DAT_049c7308);
    FUN_021f03f8(PTR_DAT_049c7268);
    FUN_021f03f8(PTR_DAT_049c7358);
    FUN_021f03f8(PTR_DAT_049c7360);
    FUN_021f03f8(PTR_DAT_049c7368);
    FUN_021f03f8(PTR_DAT_049c7370);
    FUN_021f03f8(PTR_DAT_049c7198);
    FUN_021f03f8(PTR_DAT_049c71a0);
    FUN_021f03f8(PTR_DAT_049c7378);
    FUN_021f03f8(PTR_DAT_049c7380);
    FUN_021f03f8(PTR_DAT_049c7388);
    FUN_021f03f8(PTR_DAT_049c7130);
    FUN_021f03f8(PTR_DAT_049c7390);
    bRam0000000004f4bbea = 1;
  }
  fStack_a4 = 0.0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  if ((*(long *)(param_2 + 0x168) == 0) || (*(long *)(param_2 + 0x250) == 0)) goto LAB_025cd668;
  fVar22 = *(float *)(*(long *)(param_2 + 0x168) + 0x318);
  uVar13 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                     (*(long *)(param_2 + 0x250),param_3,&fStack_a4,*(undefined8 *)PTR_DAT_049c7308)
  ;
  fVar18 = fStack_a4;
  if ((uVar13 & 1) == 0) {
    if (param_3 == 0) goto LAB_025cd668;
    lVar15 = *(long *)(param_2 + 0x168);
    lVar16 = UnityEngine_Component__get_transform_3c18724(param_3,0);
    if ((lVar16 == 0) || (UnityEngine_Transform__get_position_3c2d540(lVar16,0), lVar15 == 0))
    goto LAB_025cd668;
    fVar18 = (float)SandFlowRenderer__FindNearestDistance_24bfb4c(lVar15);
  }
  if (*(long *)(param_2 + 0x250) != 0) {
    uStack_100 = CONCAT44(uStack_100._4_4_,param_1);
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (*(long *)(param_2 + 0x250),param_3,&uStack_100,*(undefined8 *)PTR_DAT_049c7268);
    if (_UNK_013aa94c < fVar22) {
      if (*(long *)(param_2 + 0x260) == 0) goto LAB_025cd668;
      if (*(int *)(*(long *)(param_2 + 0x260) + 0x18) != 0) {
        fVar19 = (param_1 - fVar18) - fVar22 * (float)(int)((param_1 - fVar18) / fVar22);
        fVar23 = fVar22;
        if (fVar19 <= fVar22) {
          fVar23 = fVar19;
        }
        fVar20 = fVar22 * 0.5;
        fVar21 = 0.0;
        if (0.0 <= fVar19) {
          fVar21 = fVar23;
        }
        bVar10 = false;
        bVar11 = false;
        bVar12 = false;
        if (0.0 < fVar21) {
          bVar10 = false;
          bVar11 = false;
          bVar12 = true;
          if (!NAN(fVar21) && !NAN(fVar20)) {
            bVar10 = fVar21 < fVar20;
            bVar11 = fVar21 == fVar20;
            bVar12 = false;
          }
        }
        if (bVar11 || bVar10 != bVar12) {
          if ((*(long *)(param_2 + 0x48) != 0) && (lVar16 = *(long *)(param_2 + 0x268), lVar16 != 0)
             ) {
            fVar23 = *(float *)(*(long *)(param_2 + 0x48) + 100);
            lVar15 = *(long *)PTR_DAT_049c71a0;
            *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
            uVar13 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200))
            ;
            if ((uVar13 & 1) == 0) {
              *(undefined4 *)(lVar16 + 0x18) = 0;
            }
            else {
              iVar1 = *(int *)(lVar16 + 0x18);
              *(undefined4 *)(lVar16 + 0x18) = 0;
              if (0 < iVar1) {
                System_Array__Clear_31229cc(*(undefined8 *)(lVar16 + 0x10),0,iVar1,0);
              }
            }
            puVar4 = PTR_DAT_049c7378;
            if (*(long *)(param_2 + 0x260) != 0) {
              System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                        (*(long *)(param_2 + 0x260),&uStack_100,*(undefined8 *)PTR_DAT_049c7378);
              puVar9 = PTR_DAT_049c7390;
              puVar8 = PTR_DAT_049c7370;
              puVar7 = PTR_DAT_049c7368;
              puVar6 = PTR_DAT_049c7360;
              puVar5 = PTR_DAT_049c7198;
              uStack_c8 = uStack_f8;
              uStack_d0 = uStack_100;
              uStack_b8 = uStack_e8;
              uStack_c0 = uStack_f0;
              while (uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                        (&uStack_d0,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
                lVar17 = *(long *)puVar7;
                lVar15 = *(long *)(lVar17 + 0x20);
                uVar3 = *(ushort *)(lVar15 + 0x135);
                lVar16 = lVar15;
                if ((uVar3 & 1) == 0) {
                  lVar16 = FUN_02229718();
                  lVar15 = *(long *)(lVar17 + 0x20);
                  uVar3 = *(ushort *)(lVar15 + 0x135);
                }
                uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
                if ((uVar3 & 1) == 0) {
                  lVar15 = FUN_02229718();
                }
                uVar14 = thunk_FUN_0224e54c(&uStack_d0,
                                            *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80
                                                     ) + 0x60);
                func_0x04608620(&uStack_100,uVar14,uVar2);
                uVar14 = uStack_100;
                fVar20 = (fVar23 * 0.5 + 0.25 + (float)uStack_f8) - fVar18;
                fVar20 = fVar20 - fVar22 * (float)(int)(fVar20 / fVar22);
                fVar19 = fVar22;
                if (fVar20 <= fVar22) {
                  fVar19 = fVar20;
                }
                fVar24 = 0.0;
                if (0.0 <= fVar20) {
                  fVar24 = fVar19;
                }
                bVar10 = false;
                bVar11 = false;
                bVar12 = false;
                if (0.0 < fVar24) {
                  bVar10 = false;
                  bVar11 = false;
                  bVar12 = true;
                  if (!NAN(fVar24) && !NAN(fVar21)) {
                    bVar10 = fVar24 < fVar21;
                    bVar11 = fVar24 == fVar21;
                    bVar12 = false;
                  }
                }
                if (bVar11 || bVar10 != bVar12) {
                  lVar16 = *(long *)(param_2 + 0x280);
                  uStack_100 = 0;
                  uStack_f8 = 0;
                  System_ValueTuple___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____ctor_2a02e24
                            (&uStack_100,param_3,uVar14,*(undefined8 *)puVar9);
                  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  uStack_98 = uStack_f8;
                  uStack_a0 = uStack_100;
                  uVar13 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                                     (lVar16,&uStack_a0,*(undefined8 *)puVar8);
                  if ((uVar13 & 1) == 0) {
                    lVar16 = *(long *)(param_2 + 0x268);
                    uStack_e0 = uVar14;
                    uStack_d8 = 0;
                    thunk_FUN_021f190c(&uStack_e0,uVar14);
                    uStack_d8 = CONCAT44(uStack_d8._4_4_,fVar24);
                    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    uStack_98 = uStack_d8;
                    uStack_a0 = uStack_e0;
                    FUN_02333498(lVar16,&uStack_a0,*(undefined8 *)puVar5);
                  }
                }
              }
              System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                        (&uStack_d0,*(undefined8 *)PTR_DAT_049c7358);
              puVar5 = PTR_DAT_049c7130;
              lVar16 = *(long *)(param_2 + 0x268);
              if (lVar16 != 0) {
                if (1 < *(int *)(lVar16 + 0x18)) {
                  lVar15 = *(long *)PTR_DAT_049c7130;
                  if (*(int *)(lVar15 + 0xe4) == 0) {
                    FUN_021f0574();
                    lVar15 = *(long *)puVar5;
                  }
                  System_Collections_Generic_List___Il2CppFullySharedGenericType___Sort_28d0a68
                            (lVar16,*(undefined8 *)(*(long *)(lVar15 + 0xb8) + 0x20),
                             *(undefined8 *)PTR_DAT_049c7380);
                  lVar16 = *(long *)(param_2 + 0x268);
                  if (lVar16 == 0) goto LAB_025cd668;
                }
                System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                          (lVar16,&uStack_100,*(undefined8 *)puVar4);
                puVar4 = PTR_DAT_049c1c78;
                uStack_c8 = uStack_f8;
                uStack_d0 = uStack_100;
                uStack_b8 = uStack_e8;
                uStack_c0 = uStack_f0;
                while (uVar13 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                          (&uStack_d0,*(undefined8 *)puVar6), (uVar13 & 1) != 0) {
                  lVar17 = *(long *)puVar7;
                  lVar15 = *(long *)(lVar17 + 0x20);
                  uVar3 = *(ushort *)(lVar15 + 0x135);
                  lVar16 = lVar15;
                  if ((uVar3 & 1) == 0) {
                    lVar16 = FUN_02229718();
                    lVar15 = *(long *)(lVar17 + 0x20);
                    uVar3 = *(ushort *)(lVar15 + 0x135);
                  }
                  uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
                  if ((uVar3 & 1) == 0) {
                    lVar15 = FUN_02229718();
                  }
                  uVar14 = thunk_FUN_0224e54c(&uStack_d0,
                                              *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) +
                                                       0x80) + 0x60);
                  func_0x04608620(&uStack_100,uVar14,uVar2);
                  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_021f06a0();
                  }
                  if ((*(long **)(param_3 + 0x100) == (long *)0x0) ||
                     (**(long **)(param_3 + 0x100) != *(long *)puVar4)) break;
                  SandFlowSystem__Offer_24ce488(param_2,param_3,uStack_100);
                }
                System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                          (&uStack_d0,*(undefined8 *)PTR_DAT_049c7358);
                if (param_3 != 0) {
                  if (*(long **)(param_3 + 0x100) != (long *)0x0) {
                    return **(long **)(param_3 + 0x100) != *(long *)puVar4;
                  }
                  return true;
                }
              }
            }
          }
          goto LAB_025cd668;
        }
      }
    }
    return false;
  }
LAB_025cd668:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

