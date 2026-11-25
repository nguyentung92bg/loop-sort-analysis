/* IL2CPP: HomeSceneSpawnerRunner$$FlockStep
void HomeSceneSpawnerRunner__FlockStep (HomeSceneSpawnerRunner_o* __this, float clock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0252bf38) */
/* WARNING: Removing unreachable block (ram,0x0252c374) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneSpawnerRunner$$FlockStep
   void HomeSceneSpawnerRunner__FlockStep (HomeSceneSpawnerRunner_o* __this, float clock, const
   MethodInfo* method); */

void HomeSceneSpawnerRunner__FlockStep_242bb48(float param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  float fVar26;
  float fVar27;
  double dVar28;
  double extraout_d0;
  float fVar29;
  float fVar30;
  ulong uStack_108;
  long *plStack_100;
  long lStack_f8;
  long *plStack_f0;
  undefined8 uStack_e8;
  long lStack_e0;
  long *plStack_d8;
  undefined8 uStack_d0;
  long lStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  
  if ((bRam0000000004f4b7b4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3608);
    FUN_021f03f8(PTR_DAT_049c35a8);
    FUN_021f03f8(PTR_DAT_049c35b0);
    FUN_021f03f8(PTR_DAT_049c35b8);
    FUN_021f03f8(PTR_DAT_049c3510);
    FUN_021f03f8(PTR_DAT_049c35f8);
    FUN_021f03f8(PTR_DAT_049c35c0);
    FUN_021f03f8(PTR_DAT_049c3600);
    FUN_021f03f8(PTR_DAT_049c3610);
    bRam0000000004f4b7b4 = 1;
  }
  lStack_c0 = 0;
  plStack_b8 = (long *)0x0;
  uStack_b0 = 0;
  lStack_e0 = 0;
  plStack_d8 = (long *)0x0;
  uStack_d0 = 0;
  if (*(long *)(param_2 + 0x28) != 0) {
    uStack_108 = uStack_108 & 0xffffffff00000000;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___get_Item_282b400
              (*(long *)(param_2 + 0x28),&uStack_108,&lStack_f8,*(undefined8 *)PTR_DAT_049c3608);
    lVar13 = lStack_f8;
    puVar12 = PTR_DAT_049c35c0;
    puVar11 = PTR_DAT_049c35b8;
    puVar10 = PTR_DAT_049c35b0;
    puVar9 = PTR_DAT_049c35a8;
    fVar8 = _UNK_013aa8c0;
    fVar7 = _UNK_013aa764;
    fVar6 = _UNK_013aa5f0;
    if (lStack_f8 != 0) {
      if (*(float *)(lStack_f8 + 0x10) <= param_1) {
        iVar25 = 0;
        do {
          if (iVar25 == 0x14) {
            return;
          }
          lVar21 = *(long *)(param_2 + 0x40);
          if (lVar21 == 0) goto LAB_0252c460;
          lVar20 = *(long *)PTR_DAT_049c35f8;
          *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
          uVar16 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
          if ((uVar16 & 1) == 0) {
            *(undefined4 *)(lVar21 + 0x18) = 0;
          }
          else {
            iVar1 = *(int *)(lVar21 + 0x18);
            *(undefined4 *)(lVar21 + 0x18) = 0;
            if (0 < iVar1) {
              System_Array__Clear_31229cc(*(undefined8 *)(lVar21 + 0x10),0,iVar1,0);
            }
          }
          if (*(long *)(param_2 + 0x20) == 0) goto LAB_0252c460;
          iVar25 = iVar25 + 1;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(param_2 + 0x20),&lStack_f8,*(undefined8 *)puVar12);
          uStack_b0 = uStack_e8;
          plStack_100 = &lStack_c0;
          plStack_b8 = plStack_f0;
          lStack_c0 = lStack_f8;
          uStack_108 = 0;
          while (uVar17 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                    (&lStack_c0,*(undefined8 *)puVar10), uVar16 = uStack_108,
                (uVar17 & 1) != 0) {
            lVar22 = *(long *)puVar11;
            lVar20 = *(long *)(lVar22 + 0x20);
            uVar4 = *(ushort *)(lVar20 + 0x135);
            lVar21 = lVar20;
            if ((uVar4 & 1) == 0) {
              lVar21 = FUN_02229718();
              lVar20 = *(long *)(lVar22 + 0x20);
              uVar4 = *(ushort *)(lVar20 + 0x135);
            }
            uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x10) + 0xfc);
            if ((uVar4 & 1) == 0) {
              lVar20 = FUN_02229718();
            }
            uVar18 = thunk_FUN_0224e54c(&lStack_c0,
                                        *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&lStack_f8,uVar18,uVar2);
            lVar21 = lStack_f8;
            if (*(long *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                      (*(long *)(param_2 + 0x40),&lStack_f8,*(undefined8 *)puVar12);
            lStack_e0 = lStack_f8;
            bVar5 = false;
            lStack_f8 = 0;
            plStack_d8 = plStack_f0;
            uStack_d0 = uStack_e8;
            plStack_f0 = &lStack_e0;
            while (uVar16 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                      (&lStack_e0,*(undefined8 *)puVar10), (uVar16 & 1) != 0) {
              lVar23 = *(long *)puVar11;
              lVar22 = *(long *)(lVar23 + 0x20);
              uVar4 = *(ushort *)(lVar22 + 0x135);
              lVar20 = lVar22;
              if ((uVar4 & 1) == 0) {
                lVar20 = FUN_02229718();
                lVar22 = *(long *)(lVar23 + 0x20);
                uVar4 = *(ushort *)(lVar22 + 0x135);
              }
              uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar20 + 0xc0) + 0x10) + 0xfc);
              if ((uVar4 & 1) == 0) {
                lVar22 = FUN_02229718();
              }
              uVar18 = thunk_FUN_0224e54c(&lStack_e0,
                                          *(long *)(*(long *)(*(long *)(lVar22 + 0xc0) + 8) + 0x80)
                                          + 0x60);
              func_0x04608620(&lStack_a8,uVar18,uVar2);
              if (lStack_a8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              bVar5 = (bool)(bVar5 | *(int *)(lStack_a8 + 0x18) == *(int *)(lVar21 + 0x18));
            }
            System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                      (&lStack_e0,*(undefined8 *)puVar9);
            if (!bVar5) {
              if (*(long *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              FUN_02333498(*(long *)(param_2 + 0x40),lVar21,*(undefined8 *)PTR_DAT_049c3510);
            }
          }
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (plStack_100,*(undefined8 *)puVar9);
          if (uVar16 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f0698(uVar16);
          }
          lVar21 = HomeSceneSpawnerRunner__Choose_242c4a8(param_2,*(undefined8 *)(param_2 + 0x40));
          if ((lVar21 == 0) || (*(long *)(param_2 + 0x20) == 0)) goto LAB_0252c460;
          iVar1 = *(int *)(lVar21 + 0x18);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(param_2 + 0x20),&lStack_f8,*(undefined8 *)puVar12);
          uStack_b0 = uStack_e8;
          plStack_b8 = plStack_f0;
          lStack_c0 = lStack_f8;
          lStack_f8 = 0;
          plStack_f0 = &lStack_c0;
          iVar15 = 0;
          iVar14 = 0;
          while (iVar24 = iVar14,
                uVar16 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                   (&lStack_c0,*(undefined8 *)puVar10), (uVar16 & 1) != 0) {
            lVar22 = *(long *)puVar11;
            lVar20 = *(long *)(lVar22 + 0x20);
            uVar4 = *(ushort *)(lVar20 + 0x135);
            lVar21 = lVar20;
            if ((uVar4 & 1) == 0) {
              lVar21 = FUN_02229718();
              lVar20 = *(long *)(lVar22 + 0x20);
              uVar4 = *(ushort *)(lVar20 + 0x135);
            }
            uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x10) + 0xfc);
            if ((uVar4 & 1) == 0) {
              lVar20 = FUN_02229718();
            }
            uVar18 = thunk_FUN_0224e54c(&lStack_c0,
                                        *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&uStack_108,uVar18,uVar2);
            if (uStack_108 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            iVar14 = iVar24;
            if (((*(int *)(uStack_108 + 0x18) == iVar1) &&
                (iVar3 = *(int *)(uStack_108 + 0x1c), iVar14 = iVar3, iVar24 != 0)) &&
               (iVar14 = iVar24, iVar3 != iVar24)) {
              iVar15 = iVar3;
            }
          }
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&lStack_c0,*(undefined8 *)puVar9);
          if (iVar15 != 0) {
            plVar19 = *(long **)(param_2 + 0x30);
            if (plVar19 == (long *)0x0) goto LAB_0252c460;
            dVar28 = (double)(**(code **)(*plVar19 + 0x1b8))
                                       (plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
            if (dVar28 < 0.5) {
              iVar24 = iVar15;
            }
          }
          lVar21 = *(long *)(param_2 + 0x38);
          if (lVar21 == 0) goto LAB_0252c460;
          lVar20 = *(long *)PTR_DAT_049c35f8;
          *(int *)(lVar21 + 0x1c) = *(int *)(lVar21 + 0x1c) + 1;
          uVar16 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 200));
          if ((uVar16 & 1) == 0) {
            *(undefined4 *)(lVar21 + 0x18) = 0;
          }
          else {
            iVar15 = *(int *)(lVar21 + 0x18);
            *(undefined4 *)(lVar21 + 0x18) = 0;
            if (0 < iVar15) {
              System_Array__Clear_31229cc(*(undefined8 *)(lVar21 + 0x10),0,iVar15,0);
            }
          }
          if (*(long *)(param_2 + 0x20) == 0) goto LAB_0252c460;
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(param_2 + 0x20),&lStack_f8,*(undefined8 *)puVar12);
          uStack_b0 = uStack_e8;
          plStack_b8 = plStack_f0;
          lStack_c0 = lStack_f8;
          lStack_f8 = 0;
          uVar16 = 0;
          plStack_f0 = &lStack_c0;
          while (uVar17 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                    (&lStack_c0,*(undefined8 *)puVar10), (uVar17 & 1) != 0) {
            lVar22 = *(long *)puVar11;
            lVar20 = *(long *)(lVar22 + 0x20);
            uVar4 = *(ushort *)(lVar20 + 0x135);
            lVar21 = lVar20;
            if ((uVar4 & 1) == 0) {
              lVar21 = FUN_02229718();
              lVar20 = *(long *)(lVar22 + 0x20);
              uVar4 = *(ushort *)(lVar20 + 0x135);
            }
            uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar21 + 0xc0) + 0x10) + 0xfc);
            if ((uVar4 & 1) == 0) {
              lVar20 = FUN_02229718();
            }
            uVar18 = thunk_FUN_0224e54c(&lStack_c0,
                                        *(long *)(*(long *)(*(long *)(lVar20 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&uStack_108,uVar18,uVar2);
            if (uStack_108 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            if (*(int *)(uStack_108 + 0x18) == iVar1) {
              uVar17 = uStack_108;
              if (uVar16 != 0) {
                uVar17 = uVar16;
              }
              uVar16 = uVar17;
              if ((*(int *)(uStack_108 + 0x1c) == iVar24) &&
                 (*(float *)(uStack_108 + 0x40) <= *(float *)(lVar13 + 0x10))) {
                if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                FUN_02333498(*(long *)(param_2 + 0x38),uStack_108,*(undefined8 *)PTR_DAT_049c3510);
              }
            }
          }
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&lStack_c0,*(undefined8 *)puVar9);
          if (((*(long *)(param_2 + 0x38) == 0) || (uVar16 == 0)) ||
             (plVar19 = *(long **)(param_2 + 0x30), plVar19 == (long *)0x0)) goto LAB_0252c460;
          iVar1 = *(int *)(*(long *)(param_2 + 0x38) + 0x18);
          iVar15 = (**(code **)(*plVar19 + 0x198))
                             (plVar19,*(undefined4 *)(uVar16 + 0x30),*(int *)(uVar16 + 0x34) + 1,
                              *(undefined8 *)(*plVar19 + 0x1a0));
          if (iVar15 <= iVar1) {
            iVar1 = iVar15;
          }
          if (iVar1 == 0) {
            fVar26 = *(float *)(lVar13 + 0x10) + 1.0;
          }
          else {
            lVar21 = *(long *)(param_2 + 0x10);
            if (lVar21 == 0) goto LAB_0252c460;
            fVar26 = (float)HomeSceneSpawnerRunner__Range_242b044
                                      (*(undefined4 *)(lVar21 + 0x14),*(undefined4 *)(lVar21 + 0x18)
                                       ,param_2);
            lVar21 = *(long *)(param_2 + 0x10);
            if (lVar21 == 0) goto LAB_0252c460;
            fVar27 = (float)HomeSceneSpawnerRunner__Range_242b044
                                      (*(undefined4 *)(lVar21 + 0x38),*(undefined4 *)(lVar21 + 0x3c)
                                       ,param_2);
            if (0 < iVar1) {
              fVar29 = *(float *)(lVar13 + 0x10);
              iVar15 = 0;
              do {
                if (iVar15 == 0) {
                  fVar30 = 0.0;
                }
                else {
                  plVar19 = *(long **)(param_2 + 0x30);
                  if (plVar19 == (long *)0x0) goto LAB_0252c460;
                  dVar28 = (double)(**(code **)(*plVar19 + 0x1b8))
                                             (plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
                  fVar30 = *(float *)(uVar16 + 0x3c) * ((float)dVar28 + (float)dVar28 + -1.0);
                }
                if (*(long *)(param_2 + 0x38) == 0) goto LAB_0252c460;
                System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                          (*(long *)(param_2 + 0x38),iVar15,&lStack_f8,
                           *(undefined8 *)PTR_DAT_049c3610);
                lVar21 = lStack_f8;
                plVar19 = *(long **)(param_2 + 0x30);
                if (plVar19 == (long *)0x0) goto LAB_0252c460;
                uVar18 = (**(code **)(*plVar19 + 0x1b8))(plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
                HomeSceneSpawnerRunner__Begin_242c80c
                          (fVar29,fVar27 * ((float)extraout_d0 * fVar7 + fVar8),fVar26 + fVar30,
                           param_1,uVar18,lVar21);
                plVar19 = *(long **)(param_2 + 0x30);
                if (plVar19 == (long *)0x0) goto LAB_0252c460;
                dVar28 = (double)(**(code **)(*plVar19 + 0x1b8))
                                           (plVar19,*(undefined8 *)(*plVar19 + 0x1c0));
                iVar15 = iVar15 + 1;
                fVar29 = fVar29 + *(float *)(uVar16 + 0x38) * (float)dVar28 + fVar6;
              } while (iVar1 != iVar15);
            }
            lVar21 = *(long *)(param_2 + 0x10);
            if (lVar21 == 0) goto LAB_0252c460;
            fVar26 = *(float *)(lVar13 + 0x10);
            fVar27 = (float)HomeSceneSpawnerRunner__Range_242b044
                                      (*(undefined4 *)(lVar21 + 0x30),*(undefined4 *)(lVar21 + 0x34)
                                       ,param_2);
            fVar26 = fVar26 + fVar27;
          }
          *(float *)(lVar13 + 0x10) = fVar26;
        } while (fVar26 <= param_1);
      }
      return;
    }
  }
LAB_0252c460:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

