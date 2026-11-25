/* IL2CPP: SandFlowSystem$$RefreshFilledCarriers
void SandFlowSystem__RefreshFilledCarriers (SandFlowSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SandFlowSystem$$RefreshFilledCarriers
   void SandFlowSystem__RefreshFilledCarriers (SandFlowSystem_o* __this, const MethodInfo* method);
    */

void SandFlowSystem__RefreshFilledCarriers_24cb068(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4bbed & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c72d8);
    FUN_021f03f8(PTR_DAT_049c2628);
    FUN_021f03f8(PTR_DAT_049c2630);
    FUN_021f03f8(PTR_DAT_049c72e0);
    FUN_021f03f8(PTR_DAT_049c72e8);
    FUN_021f03f8(PTR_DAT_049c2638);
    FUN_021f03f8(PTR_DAT_049c2760);
    FUN_021f03f8(PTR_DAT_049c71d8);
    FUN_021f03f8(PTR_DAT_049c2768);
    FUN_021f03f8(PTR_DAT_049c72f0);
    FUN_021f03f8(PTR_DAT_049c72f8);
    FUN_021f03f8(PTR_DAT_049c26a0);
    FUN_021f03f8(PTR_DAT_049c2618);
    FUN_021f03f8(PTR_DAT_049c2640);
    bRam0000000004f4bbed = 1;
  }
  puVar13 = PTR_DAT_049c72f8;
  puVar12 = PTR_DAT_049c72f0;
  puVar11 = PTR_DAT_049c72e8;
  puVar10 = PTR_DAT_049c72e0;
  puVar8 = PTR_DAT_049c2768;
  puVar7 = PTR_DAT_049c2760;
  puVar6 = PTR_DAT_049c26a0;
  puVar5 = PTR_DAT_049c2638;
  puVar4 = PTR_DAT_049c2630;
  uStack_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  if (*(long *)(param_1 + 0x130) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
              (*(long *)(param_1 + 0x130),&uStack_b0,*(undefined8 *)PTR_DAT_049c72f0);
    uStack_70 = uStack_a0;
    puStack_78 = puStack_a8;
    uStack_80 = uStack_b0;
    uStack_b0 = 0;
    puStack_a8 = &uStack_80;
    while (uVar14 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                              (&uStack_80,*(undefined8 *)puVar10), puVar9 = PTR_DAT_049c72d8,
          (uVar14 & 1) != 0) {
      lVar18 = *(long *)puVar11;
      lVar15 = *(long *)(lVar18 + 0x20);
      uVar3 = *(ushort *)(lVar15 + 0x135);
      lVar16 = lVar15;
      if ((uVar3 & 1) == 0) {
        lVar16 = FUN_02229718();
        lVar15 = *(long *)(lVar18 + 0x20);
        uVar3 = *(ushort *)(lVar15 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
      if ((uVar3 & 1) == 0) {
        lVar15 = FUN_02229718();
      }
      uVar17 = thunk_FUN_0224e54c(&uStack_80,
                                  *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&lStack_68,uVar17,uVar1);
      lVar16 = lStack_68;
      if (*(long *)(param_1 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar14 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                         (*(long *)(param_1 + 0x138),lStack_68,*(undefined8 *)puVar8);
      if (((uVar14 & 1) == 0) &&
         (uVar14 = SandFlowSystem__HasBlockInFlight_24ce6b8(param_1,lVar16), (uVar14 & 1) == 0)) {
        if (*(long *)(param_1 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar14 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                           (*(long *)(param_1 + 0x140),lVar16,*(undefined8 *)puVar7);
        if ((uVar14 & 1) != 0) {
          if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          Carrier__RefreshGroupBlock_2409cac(lVar16,0);
        }
      }
    }
    System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
              (&uStack_80,*(undefined8 *)PTR_DAT_049c72d8);
    lVar16 = *(long *)(param_1 + 0x148);
    if (lVar16 != 0) {
      lVar15 = *(long *)PTR_DAT_049c2618;
      *(int *)(lVar16 + 0x1c) = *(int *)(lVar16 + 0x1c) + 1;
      uVar14 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar15 + 0x20) + 0xc0) + 200));
      if ((uVar14 & 1) == 0) {
        *(undefined4 *)(lVar16 + 0x18) = 0;
      }
      else {
        iVar2 = *(int *)(lVar16 + 0x18);
        *(undefined4 *)(lVar16 + 0x18) = 0;
        if (0 < iVar2) {
          System_Array__Clear_31229cc(*(undefined8 *)(lVar16 + 0x10),0,iVar2,0);
        }
      }
      if (*(long *)(param_1 + 0x140) != 0) {
        System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___GetEnumerator_28a2bc4
                  (*(long *)(param_1 + 0x140),&uStack_b0,*(undefined8 *)puVar12);
        uStack_70 = uStack_a0;
        puStack_78 = puStack_a8;
        uStack_80 = uStack_b0;
        uStack_b0 = 0;
        puStack_a8 = &uStack_80;
        while (uVar14 = System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___MoveNext_2843f24
                                  (&uStack_80,*(undefined8 *)puVar10), (uVar14 & 1) != 0) {
          lVar18 = *(long *)puVar11;
          lVar15 = *(long *)(lVar18 + 0x20);
          uVar3 = *(ushort *)(lVar15 + 0x135);
          lVar16 = lVar15;
          if ((uVar3 & 1) == 0) {
            lVar16 = FUN_02229718();
            lVar15 = *(long *)(lVar18 + 0x20);
            uVar3 = *(ushort *)(lVar15 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
          if ((uVar3 & 1) == 0) {
            lVar15 = FUN_02229718();
          }
          uVar17 = thunk_FUN_0224e54c(&uStack_80,
                                      *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(&lStack_68,uVar17,uVar1);
          lVar16 = lStack_68;
          if (*(long *)(param_1 + 0x130) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar14 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                             (*(long *)(param_1 + 0x130),lStack_68,*(undefined8 *)puVar8);
          if ((uVar14 & 1) == 0) {
            if (*(long *)(param_1 + 0x138) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            uVar14 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                               (*(long *)(param_1 + 0x138),lVar16,*(undefined8 *)puVar8);
            if ((uVar14 & 1) == 0) {
              if (*(long *)(param_1 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              FUN_02333498(*(long *)(param_1 + 0x148),lVar16,*(undefined8 *)puVar6);
            }
          }
        }
        System_Collections_Generic_HashSet_Enumerator___Il2CppFullySharedGenericType___Dispose_2843f20
                  (&uStack_80,*(undefined8 *)puVar9);
        if (*(long *)(param_1 + 0x148) != 0) {
          System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                    (*(long *)(param_1 + 0x148),&uStack_98,*(undefined8 *)PTR_DAT_049c2640);
          uStack_b0 = 0;
          puStack_a8 = &uStack_98;
          while (uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                                    (&uStack_98,*(undefined8 *)puVar4), (uVar14 & 1) != 0) {
            lVar18 = *(long *)puVar5;
            lVar15 = *(long *)(lVar18 + 0x20);
            uVar3 = *(ushort *)(lVar15 + 0x135);
            lVar16 = lVar15;
            if ((uVar3 & 1) == 0) {
              lVar16 = FUN_02229718();
              lVar15 = *(long *)(lVar18 + 0x20);
              uVar3 = *(ushort *)(lVar15 + 0x135);
            }
            uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
            if ((uVar3 & 1) == 0) {
              lVar15 = FUN_02229718();
            }
            uVar17 = thunk_FUN_0224e54c(&uStack_98,
                                        *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) +
                                        0x60);
            func_0x04608620(&lStack_68,uVar17,uVar1);
            if (*(long *)(param_1 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
                      (*(long *)(param_1 + 0x140),lStack_68,*(undefined8 *)puVar13);
          }
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (&uStack_98,*(undefined8 *)PTR_DAT_049c2628);
          puVar4 = PTR_DAT_049c71d8;
          if (*(long *)(param_1 + 0x130) != 0) {
            System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                      (*(long *)(param_1 + 0x130),*(undefined8 *)PTR_DAT_049c71d8);
            if (*(long *)(param_1 + 0x138) != 0) {
              System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Clear_28a2210
                        (*(long *)(param_1 + 0x138),*(undefined8 *)puVar4);
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

