/* IL2CPP: HomeSceneView$$Update
void HomeSceneView__Update (HomeSceneView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneView$$Update
   void HomeSceneView__Update (HomeSceneView_o* __this, const MethodInfo* method); */

void HomeSceneView__Update_242e094(long param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  long *plVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  undefined8 uStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  long *plStack_78;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    return;
  }
  fVar19 = *(float *)(param_1 + 100);
  uVar17 = UnityEngine_Time__get_unscaledDeltaTime_3c29788(0);
  fVar18 = (float)NEON_fminnm(uVar17,_UNK_013aa810);
  *(float *)(param_1 + 100) = fVar19 + fVar18;
  if ((bRam0000000004f4b7c0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c36d8);
    FUN_021f03f8(PTR_DAT_049c36e0);
    FUN_021f03f8(PTR_DAT_049c36e8);
    FUN_021f03f8(PTR_DAT_049c36f0);
    FUN_021f03f8(PTR_DAT_049c36f8);
    FUN_021f03f8(PTR_DAT_049c3700);
    FUN_021f03f8(PTR_DAT_049c3708);
    FUN_021f03f8(PTR_DAT_049c3710);
    FUN_021f03f8(PTR_DAT_049c3718);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3720);
    FUN_021f03f8(PTR_DAT_049c3728);
    FUN_021f03f8(PTR_DAT_049c3730);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b7c0 = 1;
  }
  puVar10 = PTR_DAT_049c3728;
  puVar9 = PTR_DAT_049c3718;
  puVar8 = PTR_DAT_049c3710;
  puVar7 = PTR_DAT_049c3708;
  puVar6 = PTR_DAT_049c3700;
  puVar5 = PTR_DAT_049c36f8;
  puVar4 = PTR_DAT_049c36f0;
  puVar3 = PTR_DAT_049c36e8;
  puVar2 = PTR_DAT_049c36d8;
  uStack_90 = 0;
  puStack_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  uStack_b0 = 0;
  puStack_a8 = (undefined8 *)0x0;
  uStack_a0 = 0;
  uStack_d0 = 0;
  puStack_c8 = (undefined8 *)0x0;
  uStack_c0 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(param_1 + 0x20),&uStack_e8,*(undefined8 *)PTR_DAT_049c3720);
    uStack_80 = uStack_d8;
    puStack_88 = puStack_e0;
    uStack_90 = uStack_e8;
    uStack_e8 = 0;
    puStack_e0 = &uStack_90;
    while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                              (&uStack_90,*(undefined8 *)puVar6), (uVar11 & 1) != 0) {
      lVar16 = *(long *)puVar7;
      lVar12 = *(long *)(lVar16 + 0x20);
      uVar1 = *(ushort *)(lVar12 + 0x135);
      lVar13 = lVar12;
      if ((uVar1 & 1) == 0) {
        lVar13 = FUN_02229718();
        lVar12 = *(long *)(lVar16 + 0x20);
        uVar1 = *(ushort *)(lVar12 + 0x135);
      }
      uVar17 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
      if ((uVar1 & 1) == 0) {
        lVar12 = FUN_02229718();
      }
      uVar14 = thunk_FUN_0224e54c(&uStack_90,
                                  *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&plStack_78,uVar14,uVar17);
      if (plStack_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      HomeSceneMover__Evaluate_2425f54(*(undefined4 *)(param_1 + 100),plStack_78,0);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_90,*(undefined8 *)puVar2);
    if (*(long *)(param_1 + 0x28) != 0) {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                (*(long *)(param_1 + 0x28),&uStack_e8,*(undefined8 *)puVar10);
      uStack_a0 = uStack_d8;
      puStack_a8 = puStack_e0;
      uStack_b0 = uStack_e8;
      uStack_e8 = 0;
      puStack_e0 = &uStack_b0;
      while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                (&uStack_b0,*(undefined8 *)puVar4), (uVar11 & 1) != 0) {
        lVar16 = *(long *)puVar9;
        lVar12 = *(long *)(lVar16 + 0x20);
        uVar1 = *(ushort *)(lVar12 + 0x135);
        lVar13 = lVar12;
        if ((uVar1 & 1) == 0) {
          lVar13 = FUN_02229718();
          lVar12 = *(long *)(lVar16 + 0x20);
          uVar1 = *(ushort *)(lVar12 + 0x135);
        }
        uVar17 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
        if ((uVar1 & 1) == 0) {
          lVar12 = FUN_02229718();
        }
        uVar14 = thunk_FUN_0224e54c(&uStack_b0,
                                    *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(&plStack_78,uVar14,uVar17);
        if (plStack_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        HomeSceneSpawnerRunner__Tick_242b088(*(undefined4 *)(param_1 + 100));
      }
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_b0,*(undefined8 *)puVar3);
      if (*(long *)(param_1 + 0x30) != 0) {
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (*(long *)(param_1 + 0x30),&uStack_e8,*(undefined8 *)PTR_DAT_049c3730);
        uStack_c0 = uStack_d8;
        puStack_c8 = puStack_e0;
        uStack_d0 = uStack_e8;
        uStack_e8 = 0;
        puStack_e0 = &uStack_d0;
        while (uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                  (&uStack_d0,*(undefined8 *)puVar5), (uVar11 & 1) != 0) {
          lVar16 = *(long *)puVar8;
          lVar12 = *(long *)(lVar16 + 0x20);
          uVar1 = *(ushort *)(lVar12 + 0x135);
          lVar13 = lVar12;
          if ((uVar1 & 1) == 0) {
            lVar13 = FUN_02229718();
            lVar12 = *(long *)(lVar16 + 0x20);
            uVar1 = *(ushort *)(lVar12 + 0x135);
          }
          uVar17 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
          if ((uVar1 & 1) == 0) {
            lVar12 = FUN_02229718();
          }
          uVar14 = thunk_FUN_0224e54c(&uStack_d0,
                                      *(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&plStack_78,uVar14,uVar17);
          if (plStack_78 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          (**(code **)(*plStack_78 + 0x178))
                    (*(undefined4 *)(param_1 + 100),plStack_78,*(undefined8 *)(*plStack_78 + 0x180))
          ;
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_d0,*(undefined8 *)PTR_DAT_049c36e0);
        uVar14 = *(undefined8 *)(param_1 + 0x50);
        if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar11 = UnityEngine_Object__op_Inequality_3c1b96c(uVar14,0,0);
        puVar2 = PTR_DAT_049c3110;
        if ((uVar11 & 1) == 0) {
          return;
        }
        uVar17 = *(undefined4 *)(param_1 + 100);
        lVar13 = *(long *)PTR_DAT_049c3110;
        if (*(int *)(lVar13 + 0xe4) == 0) {
          FUN_021f0574();
          lVar13 = *(long *)puVar2;
        }
        fVar18 = (float)HomeSceneView__Alternate_24280f0
                                  (uVar17,0,_UNK_013aa768,
                                   *(undefined8 *)(*(long *)(lVar13 + 0xb8) + 0x18));
        if (*(long *)(param_1 + 0x50) != 0) {
          UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                    (0,fVar18 * *(float *)(param_1 + 0x60),*(long *)(param_1 + 0x50),0);
          if (*(long *)(param_1 + 0x50) != 0) {
            UnityEngine_Transform__set_localScale_3c2ddfc
                      (0x3f800000,fVar18 * _UNK_013aa3e0 + 1.0,0x3f800000,*(long *)(param_1 + 0x50),
                       0);
            plVar15 = *(long **)(param_1 + 0x58);
            if (plVar15 != (long *)0x0) {
              (**(code **)(*plVar15 + 0x2a8))
                        (0x3f800000,0x3f800000,0x3f800000,fVar18 * _UNK_013aa7c0 + 1.0,plVar15,
                         *(undefined8 *)(*plVar15 + 0x2b0));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

