/* IL2CPP: HomeSceneSpawnerRunner$$LaneStep
void HomeSceneSpawnerRunner__LaneStep (HomeSceneSpawnerRunner_o* __this, float clock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0252ba48) */
/* WARNING: Removing unreachable block (ram,0x0252b80c) */
/* WARNING: Removing unreachable block (ram,0x0252ba30) */
/* WARNING: Removing unreachable block (ram,0x0252ba70) */
/* IL2CPP: HomeSceneSpawnerRunner$$LaneStep
   void HomeSceneSpawnerRunner__LaneStep (HomeSceneSpawnerRunner_o* __this, float clock, const
   MethodInfo* method); */

void HomeSceneSpawnerRunner__LaneStep_242b334(float param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  float fVar17;
  ulong extraout_d0;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  
  if ((bRam0000000004f4b7b3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c35c8);
    FUN_021f03f8(PTR_DAT_049c35a8);
    FUN_021f03f8(PTR_DAT_049c35d0);
    FUN_021f03f8(PTR_DAT_049c35d8);
    FUN_021f03f8(PTR_DAT_049c35b0);
    FUN_021f03f8(PTR_DAT_049c35e0);
    FUN_021f03f8(PTR_DAT_049c35b8);
    FUN_021f03f8(PTR_DAT_049c35e8);
    FUN_021f03f8(PTR_DAT_049c35f0);
    FUN_021f03f8(PTR_DAT_049c3510);
    FUN_021f03f8(PTR_DAT_049c35f8);
    FUN_021f03f8(PTR_DAT_049c35c0);
    FUN_021f03f8(PTR_DAT_049c3600);
    bRam0000000004f4b7b3 = 1;
  }
  puVar7 = PTR_DAT_049c35b8;
  puVar6 = PTR_DAT_049c35b0;
  puVar5 = PTR_DAT_049c35a8;
  puVar4 = PTR_DAT_049c3510;
  uStack_90 = 0;
  uStack_c0 = 0;
  puStack_b8 = (undefined8 *)0x0;
  iStack_c4 = 0;
  lStack_d0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_f0 = 0;
  puStack_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  if (*(long *)(param_2 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
            (*(long *)(param_2 + 0x28),&uStack_120,*(undefined8 *)PTR_DAT_049c35c8);
  uStack_90 = uStack_100;
  puStack_a8 = puStack_118;
  uStack_b0 = uStack_120;
  uStack_98 = uStack_108;
  uStack_a0 = uStack_110;
  do {
    do {
      uVar10 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                         (&uStack_b0,*(undefined8 *)PTR_DAT_049c35d8);
      if ((uVar10 & 1) == 0) {
        System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
                  (&uStack_b0,*(undefined8 *)PTR_DAT_049c35d0);
        return;
      }
      lVar14 = *(long *)PTR_DAT_049c35e0;
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar3 = *(ushort *)(lVar11 + 0x135);
      lVar12 = lVar11;
      if ((uVar3 & 1) == 0) {
        lVar12 = FUN_02229718();
        lVar11 = *(long *)(lVar14 + 0x20);
        uVar3 = *(ushort *)(lVar11 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_b0,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_120,uVar13,uVar1);
      puStack_b8 = puStack_118;
      uStack_c0 = uStack_120;
      System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
                (&uStack_c0,&iStack_c4,&lStack_d0,*(undefined8 *)PTR_DAT_049c35e8);
      iVar8 = iStack_c4;
      lVar12 = lStack_d0;
      if (lStack_d0 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    } while (param_1 < *(float *)(lStack_d0 + 0x10));
    iVar16 = 0;
    do {
      bVar9 = iVar16 == 0x32;
      iVar16 = iVar16 + 1;
      if (bVar9) break;
      lVar11 = *(long *)(param_2 + 0x38);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar14 = *(long *)PTR_DAT_049c35f8;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar10 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
      }
      else {
        iVar2 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (0 < iVar2) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar11 + 0x10),0,iVar2,0);
        }
      }
      if (*(long *)(param_2 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_2 + 0x20),&uStack_120,*(undefined8 *)PTR_DAT_049c35c0);
      uStack_f0 = uStack_120;
      uStack_120 = 0;
      puStack_e8 = puStack_118;
      uStack_e0 = uStack_110;
      puStack_118 = &uStack_f0;
      while (uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_f0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
        lVar15 = *(long *)puVar7;
        lVar14 = *(long *)(lVar15 + 0x20);
        uVar3 = *(ushort *)(lVar14 + 0x135);
        lVar11 = lVar14;
        if ((uVar3 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar14 = *(long *)(lVar15 + 0x20);
          uVar3 = *(ushort *)(lVar14 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar14 = FUN_02229718();
        }
        uVar13 = thunk_FUN_0224e54c(&uStack_f0,
                                    *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_88,uVar13,uVar1);
        if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if ((*(int *)(lStack_88 + 0x1c) == iVar8) &&
           (*(float *)(lStack_88 + 0x40) <= *(float *)(lVar12 + 0x10))) {
          if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FUN_02333498(*(long *)(param_2 + 0x38),lStack_88,*(undefined8 *)puVar4);
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_f0,*(undefined8 *)puVar5);
      lVar11 = *(long *)(param_2 + 0x40);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar14 = *(long *)PTR_DAT_049c35f8;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      uVar10 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 200));
      if ((uVar10 & 1) == 0) {
        *(undefined4 *)(lVar11 + 0x18) = 0;
      }
      else {
        iVar2 = *(int *)(lVar11 + 0x18);
        *(undefined4 *)(lVar11 + 0x18) = 0;
        if (0 < iVar2) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar11 + 0x10),0,iVar2,0);
        }
      }
      if (*(long *)(param_2 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_2 + 0x38),&uStack_120,*(undefined8 *)PTR_DAT_049c35c0);
      uStack_f0 = uStack_120;
      uStack_120 = 0;
      puStack_e8 = puStack_118;
      uStack_e0 = uStack_110;
      puStack_118 = &uStack_f0;
      while (uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_f0,*(undefined8 *)puVar6), (uVar10 & 1) != 0) {
        lVar15 = *(long *)puVar7;
        lVar14 = *(long *)(lVar15 + 0x20);
        uVar3 = *(ushort *)(lVar14 + 0x135);
        lVar11 = lVar14;
        if ((uVar3 & 1) == 0) {
          lVar11 = FUN_02229718();
          lVar14 = *(long *)(lVar15 + 0x20);
          uVar3 = *(ushort *)(lVar14 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) + 0xfc);
        if ((uVar3 & 1) == 0) {
          lVar14 = FUN_02229718();
        }
        uVar13 = thunk_FUN_0224e54c(&uStack_f0,
                                    *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&lStack_88,uVar13,uVar1);
        if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(int *)(lStack_88 + 0x18) != *(int *)(lVar12 + 0x24)) {
          if (*(long *)(param_2 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FUN_02333498(*(long *)(param_2 + 0x40),lStack_88,*(undefined8 *)puVar4);
        }
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_f0,*(undefined8 *)puVar5);
      lVar11 = *(long *)(param_2 + 0x40);
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar11 + 0x18) == 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
                  (lVar11,*(undefined8 *)(param_2 + 0x38),*(undefined8 *)PTR_DAT_049c35f0);
        lVar11 = *(long *)(param_2 + 0x40);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
      if (*(int *)(lVar11 + 0x18) == 0) {
        fVar20 = *(float *)(lVar12 + 0x10) + 0.5;
      }
      else {
        lVar11 = HomeSceneSpawnerRunner__Choose_242c4a8(param_2);
        lVar14 = *(long *)(param_2 + 0x10);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar13 = HomeSceneSpawnerRunner__Range_242b044
                           (*(undefined4 *)(lVar14 + 0x38),*(undefined4 *)(lVar14 + 0x3c),param_2);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        fVar20 = *(float *)(lVar12 + 0x10);
        fVar21 = (float)extraout_d0 * *(float *)(lVar11 + 0x28);
        if (*(char *)(lVar12 + 0x14) != '\0') {
          if (*(long *)(param_2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          fVar19 = *(float *)(lVar12 + 0x1c);
          fVar18 = *(float *)(*(long *)(param_2 + 0x10) + 0x40);
          fVar17 = *(float *)(lVar12 + 0x18) + (*(float *)(lVar12 + 0x20) + fVar18) / fVar19;
          if ((fVar19 < fVar21) &&
             (fVar18 = (*(float *)(lVar12 + 0x18) +
                       (*(float *)(lVar12 + 0x20) + *(float *)(param_2 + 0x1c)) / fVar19) -
                       (*(float *)(param_2 + 0x1c) - fVar18) / fVar21, fVar17 <= fVar18)) {
            fVar17 = fVar18;
          }
          if (fVar20 <= fVar17) {
            fVar20 = fVar17;
          }
        }
        if (param_1 < fVar20) {
          *(float *)(lVar12 + 0x10) = fVar20;
          break;
        }
        HomeSceneSpawnerRunner__Begin_242c80c
                  (fVar20,extraout_d0 & 0xffffffff,0,param_1,uVar13,lVar11);
        *(float *)(lVar12 + 0x18) = fVar20;
        *(float *)(lVar12 + 0x1c) = fVar21;
        *(undefined1 *)(lVar12 + 0x14) = 1;
        *(undefined4 *)(lVar12 + 0x20) = *(undefined4 *)(lVar11 + 0x20);
        *(undefined4 *)(lVar12 + 0x24) = *(undefined4 *)(lVar11 + 0x18);
        lVar11 = *(long *)(param_2 + 0x10);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        fVar21 = (float)HomeSceneSpawnerRunner__Range_242b044
                                  (*(undefined4 *)(lVar11 + 0x28),*(undefined4 *)(lVar11 + 0x2c),
                                   param_2);
        fVar20 = fVar20 + fVar21;
      }
      *(float *)(lVar12 + 0x10) = fVar20;
    } while (fVar20 <= param_1);
  } while( true );
}

