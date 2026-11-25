/* IL2CPP: HomeSceneSpawnerRunner$$Choose
HomeSceneSpawnerRunner_Actor_o* HomeSceneSpawnerRunner__Choose (HomeSceneSpawnerRunner_o* __this, System_Collections_Generic_List_HomeSceneSpawnerRunner_Actor__o* choices, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneSpawnerRunner$$Choose
   HomeSceneSpawnerRunner_Actor_o* HomeSceneSpawnerRunner__Choose (HomeSceneSpawnerRunner_o* __this,
   System_Collections_Generic_List_HomeSceneSpawnerRunner_Actor__o* choices, const MethodInfo*
   method); */

long HomeSceneSpawnerRunner__Choose_242c4a8(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  double dVar14;
  float fVar15;
  long lStack_88;
  long *plStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long *plStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  if ((bRam0000000004f4b7b6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c35a8);
    FUN_021f03f8(PTR_DAT_049c35b0);
    FUN_021f03f8(PTR_DAT_049c35b8);
    FUN_021f03f8(PTR_DAT_049c35c0);
    FUN_021f03f8(PTR_DAT_049c3600);
    FUN_021f03f8(PTR_DAT_049c3610);
    bRam0000000004f4b7b6 = 1;
  }
  puVar7 = PTR_DAT_049c3610;
  puVar6 = PTR_DAT_049c35c0;
  puVar5 = PTR_DAT_049c35b8;
  puVar4 = PTR_DAT_049c35b0;
  puVar3 = PTR_DAT_049c35a8;
  lStack_70 = 0;
  plStack_68 = (long *)0x0;
  uStack_60 = 0;
  if (param_2 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (param_2,&lStack_88,*(undefined8 *)PTR_DAT_049c35c0);
    fVar15 = 0.0;
    uStack_60 = uStack_78;
    plStack_68 = plStack_80;
    lStack_70 = lStack_88;
    lStack_88 = 0;
    plStack_80 = &lStack_70;
    while (uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&lStack_70,*(undefined8 *)puVar4), (uVar8 & 1) != 0) {
      lVar13 = *(long *)puVar5;
      lVar9 = *(long *)(lVar13 + 0x20);
      uVar2 = *(ushort *)(lVar9 + 0x135);
      lVar10 = lVar9;
      if ((uVar2 & 1) == 0) {
        lVar10 = FUN_02229718();
        lVar9 = *(long *)(lVar13 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&lStack_70,
                                  *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_58,uVar11,uVar1);
      if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      fVar15 = fVar15 + *(float *)(lStack_58 + 0x2c);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&lStack_70,*(undefined8 *)puVar3);
    plVar12 = *(long **)(param_1 + 0x30);
    if (plVar12 != (long *)0x0) {
      dVar14 = (double)(**(code **)(*plVar12 + 0x1b8))(plVar12,*(undefined8 *)(*plVar12 + 0x1c0));
      fVar15 = fVar15 * (float)dVar14;
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (param_2,&lStack_88,*(undefined8 *)puVar6);
      uStack_60 = uStack_78;
      plStack_68 = plStack_80;
      lStack_70 = lStack_88;
      lStack_88 = 0;
      plStack_80 = &lStack_70;
      while( true ) {
        uVar8 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                          (&lStack_70,*(undefined8 *)puVar4);
        if ((uVar8 & 1) == 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&lStack_70,*(undefined8 *)puVar3);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (param_2,*(int *)(param_2 + 0x18) + -1,&lStack_88,*(undefined8 *)puVar7);
          return lStack_88;
        }
        lVar13 = *(long *)puVar5;
        lVar9 = *(long *)(lVar13 + 0x20);
        uVar2 = *(ushort *)(lVar9 + 0x135);
        lVar10 = lVar9;
        if ((uVar2 & 1) == 0) {
          lVar10 = FUN_02229718();
          lVar9 = *(long *)(lVar13 + 0x20);
          uVar2 = *(ushort *)(lVar9 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar9 = FUN_02229718();
        }
        uVar11 = thunk_FUN_0224e54c(&lStack_70,
                                    *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 8) + 0x80) + 0x60)
        ;
        func_0x04608620(&lStack_58,uVar11,uVar1);
        if (lStack_58 == 0) break;
        fVar15 = fVar15 - *(float *)(lStack_58 + 0x2c);
        if (fVar15 <= 0.0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&lStack_70,*(undefined8 *)puVar3);
          return lStack_58;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

