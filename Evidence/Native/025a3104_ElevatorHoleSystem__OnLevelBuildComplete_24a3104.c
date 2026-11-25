/* IL2CPP: ElevatorHoleSystem$$OnLevelBuildComplete
void ElevatorHoleSystem__OnLevelBuildComplete (ElevatorHoleSystem_o* __this, LevelBuildCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025a36a4) */
/* WARNING: Removing unreachable block (ram,0x025a3910) */
/* WARNING: Removing unreachable block (ram,0x025a3848) */
/* WARNING: Removing unreachable block (ram,0x025a3a68) */
/* WARNING: Removing unreachable block (ram,0x025a3a70) */
/* IL2CPP: ElevatorHoleSystem$$OnLevelBuildComplete
   void ElevatorHoleSystem__OnLevelBuildComplete (ElevatorHoleSystem_o* __this,
   LevelBuildCompleteMessage_o m, const MethodInfo* method); */

void ElevatorHoleSystem__OnLevelBuildComplete_24a3104(long param_1)

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
  undefined *puVar10;
  ulong uVar11;
  ulong *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uStack_140;
  ulong *puStack_138;
  long *aplStack_130 [2];
  ulong uStack_120;
  ulong *puStack_118;
  long *plStack_110;
  ulong uStack_100;
  ulong *puStack_f8;
  long *plStack_f0;
  ulong uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  undefined1 auStack_98 [16];
  long lStack_88;
  undefined1 auStack_80 [16];
  ulong auStack_70 [2];
  
  if ((bRam0000000004f4baf9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c65c8);
    FUN_021f03f8(PTR_DAT_049c65d0);
    FUN_021f03f8(PTR_DAT_049c65d8);
    FUN_021f03f8(PTR_DAT_049c65e0);
    FUN_021f03f8(PTR_DAT_049c65e8);
    FUN_021f03f8(PTR_DAT_049c2740);
    FUN_021f03f8(PTR_DAT_049c2628);
    FUN_021f03f8(PTR_DAT_049c2630);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c2748);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c2750);
    FUN_021f03f8(PTR_DAT_049c2638);
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c65f0);
    FUN_021f03f8(PTR_DAT_049c26a0);
    FUN_021f03f8(PTR_DAT_049c65f8);
    FUN_021f03f8(PTR_DAT_049c2618);
    FUN_021f03f8(PTR_DAT_049c6600);
    FUN_021f03f8(PTR_DAT_049c2640);
    FUN_021f03f8(PTR_DAT_049c2778);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c6608);
    FUN_021f03f8(PTR_DAT_049c6610);
    FUN_021f03f8(PTR_DAT_049c2788);
    FUN_021f03f8(PTR_DAT_049c6618);
    FUN_021f03f8(PTR_DAT_049c1590);
    bRam0000000004f4baf9 = 1;
  }
  lVar17 = *(long *)(param_1 + 0x30);
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auStack_98._8_8_ = 0;
  lStack_88 = 0;
  lStack_a0 = 0;
  auStack_98._0_8_ = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_e0 = 0;
  uStack_d8 = (ulong *)0x0;
  plStack_d0 = (long *)0x0;
  uStack_100 = 0;
  puStack_f8 = (ulong *)0x0;
  plStack_f0 = (long *)0x0;
  uStack_120 = 0;
  puStack_118 = (ulong *)0x0;
  plStack_110 = (long *)0x0;
  if (lVar17 != 0) {
    uStack_b8 = *(undefined8 *)(lVar17 + 0x40);
    uStack_c0 = *(undefined8 *)(lVar17 + 0x38);
    uStack_b0 = *(undefined8 *)(lVar17 + 0x48);
    lVar17 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                       (&uStack_c0,*(undefined8 *)PTR_DAT_049c2788);
    puVar6 = PTR_DAT_049c65e0;
    puVar5 = PTR_DAT_049c65d8;
    puVar4 = PTR_DAT_049c65c8;
    if (*(long *)(param_1 + 0x38) != 0) {
      Features__Get_24fb17c(&uStack_140,*(long *)(param_1 + 0x38),0x22,0);
      uVar11 = uStack_140;
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_80 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                             (&lStack_88,*(undefined8 *)puVar4);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_98 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                             (&lStack_a0,*(undefined8 *)PTR_DAT_049c65d0);
      lVar19 = *(long *)(param_1 + 0x78);
      if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_140 = 0;
      puStack_138 = (ulong *)0x0;
      aplStack_130[0] = (long *)0x0;
      lVar18 = *(long *)PTR_DAT_049c1590;
      puVar12 = (ulong *)thunk_FUN_0224e54c(lVar19,*(long *)(**(long **)(*(long *)(lVar18 + 0x20) +
                                                                        0xc0) + 0x80) + 0x60);
      auStack_70[0] = *puVar12;
      auStack_70[1] = 0;
      thunk_FUN_021f190c(auStack_70);
      auStack_70[1] = 0;
      puStack_138 = (ulong *)0x0;
      uStack_140 = auStack_70[0];
      thunk_FUN_021f190c(&uStack_140,0);
      puVar13 = (undefined8 *)
                thunk_FUN_0224e54c(lVar19,*(long *)(**(long **)(*(long *)(lVar18 + 0x20) + 0xc0) +
                                                   0x80) + 0x80);
      aplStack_130[0] = (long *)*puVar13;
      thunk_FUN_021f190c(aplStack_130);
      puVar10 = PTR_DAT_049c6618;
      puVar9 = PTR_DAT_049c65e8;
      puVar8 = PTR_DAT_049c2750;
      puVar7 = PTR_DAT_049c2748;
      puVar6 = PTR_DAT_049c2630;
      puVar5 = PTR_DAT_049c1410;
      puVar4 = PTR_DAT_049b3b98;
      uStack_d8 = puStack_138;
      uStack_e0 = uStack_140;
      plStack_d0 = aplStack_130[0];
      while( true ) {
        do {
          uVar14 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_e0,0);
          lVar19 = lStack_88;
          if ((uVar14 & 1) == 0) {
            UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                      (auStack_98,*(undefined8 *)PTR_DAT_049c6608);
            UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                      (auStack_80,*(undefined8 *)PTR_DAT_049c6610);
            return;
          }
          if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar18 = *(long *)PTR_DAT_049c6600;
          lVar21 = *(long *)((long)plStack_d0 +
                            (ulong)*(uint *)(*plStack_d0 + 0x104) * (long)uStack_d8._4_4_ + 0x20);
          *(int *)(lStack_88 + 0x1c) = *(int *)(lStack_88 + 0x1c) + 1;
          uVar14 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 200));
          if ((uVar14 & 1) == 0) {
            *(undefined4 *)(lVar19 + 0x18) = 0;
          }
          else {
            iVar1 = *(int *)(lVar19 + 0x18);
            *(undefined4 *)(lVar19 + 0x18) = 0;
            if (0 < iVar1) {
              System_Array__Clear_31229cc(*(undefined8 *)(lVar19 + 0x10),0,iVar1,0);
            }
          }
          if (lVar21 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          uVar14 = CarrierSheet_Row__TryGetElevatorQueue_255b3ac
                             (lVar17,*(undefined4 *)(lVar21 + 0x130),lStack_88,0);
          lVar19 = lStack_a0;
        } while ((uVar14 & 1) == 0);
        if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar18 = *(long *)PTR_DAT_049c2618;
        *(int *)(lStack_a0 + 0x1c) = *(int *)(lStack_a0 + 0x1c) + 1;
        uVar14 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 200));
        if ((uVar14 & 1) == 0) {
          *(undefined4 *)(lVar19 + 0x18) = 0;
        }
        else {
          iVar1 = *(int *)(lVar19 + 0x18);
          *(undefined4 *)(lVar19 + 0x18) = 0;
          if (0 < iVar1) {
            System_Array__Clear_31229cc(*(undefined8 *)(lVar19 + 0x10),0,iVar1,0);
          }
        }
        if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        FUN_02333498(lStack_a0,lVar21,*(undefined8 *)PTR_DAT_049c26a0);
        if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lStack_88,&uStack_140,*(undefined8 *)PTR_DAT_049c2778);
        plStack_f0 = aplStack_130[0];
        puStack_f8 = puStack_138;
        uStack_100 = uStack_140;
        uStack_140 = 0;
        puStack_138 = &uStack_100;
        while( true ) {
          uVar14 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_100,*(undefined8 *)puVar7);
          if ((uVar14 & 1) == 0) break;
          lVar20 = *(long *)puVar8;
          lVar18 = *(long *)(lVar20 + 0x20);
          uVar3 = *(ushort *)(lVar18 + 0x135);
          lVar19 = lVar18;
          if ((uVar3 & 1) == 0) {
            lVar19 = FUN_02229718();
            lVar18 = *(long *)(lVar20 + 0x20);
            uVar3 = *(ushort *)(lVar18 + 0x135);
          }
          uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar19 + 0xc0) + 0x10) + 0xfc);
          if ((uVar3 & 1) == 0) {
            lVar18 = FUN_02229718();
          }
          uVar15 = thunk_FUN_0224e54c(&uStack_100,
                                      *(long *)(*(long *)(*(long *)(lVar18 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(auStack_70,uVar15,uVar2);
          uVar15 = ElevatorHoleSystem__FindCarrier_24a41e0(param_1,auStack_70[0] & 0xffffffff);
          if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
            FUN_021f0574();
          }
          uVar14 = UnityEngine_Object__op_Inequality_3c1b96c(uVar15,0,0);
          if ((uVar14 & 1) != 0) {
            if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            FUN_02333498(lStack_a0,uVar15,*(undefined8 *)PTR_DAT_049c26a0);
          }
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_100,*(undefined8 *)PTR_DAT_049c2740);
        lVar18 = *(long *)(param_1 + 0x40);
        lVar19 = UnityEngine_Component__get_transform_3c18724(lVar21,0);
        if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar15 = UnityEngine_Transform__get_parent_3c2d470(lVar19,0);
        if (lVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar19 = PrefabModule__Rent_2537bc4(lVar18,uVar11,uVar15,0);
        if (lVar19 == 0) break;
        UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
                  (lVar19,&uStack_140,*(undefined8 *)PTR_DAT_049c65f0);
        uVar14 = uStack_140;
        if (uStack_140 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        ElevatorHole__Initialize_24109c8(uStack_140,lStack_a0,0);
        if (*(long *)(param_1 + 0x98) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        FUN_02333498(*(long *)(param_1 + 0x98),uVar14,*(undefined8 *)PTR_DAT_049c65f8);
        if (lStack_a0 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lStack_a0,&uStack_140,*(undefined8 *)PTR_DAT_049c2640);
        plStack_110 = aplStack_130[0];
        puStack_118 = puStack_138;
        uStack_120 = uStack_140;
        uStack_140 = 0;
        puStack_138 = &uStack_120;
        while( true ) {
          uVar16 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                             (&uStack_120,*(undefined8 *)puVar6);
          if ((uVar16 & 1) == 0) break;
          lVar21 = *(long *)PTR_DAT_049c2638;
          lVar18 = *(long *)(lVar21 + 0x20);
          uVar3 = *(ushort *)(lVar18 + 0x135);
          lVar19 = lVar18;
          if ((uVar3 & 1) == 0) {
            lVar19 = FUN_02229718();
            lVar18 = *(long *)(lVar21 + 0x20);
            uVar3 = *(ushort *)(lVar18 + 0x135);
          }
          uVar2 = *(undefined4 *)(*(long *)(*(long *)(lVar19 + 0xc0) + 0x10) + 0xfc);
          if ((uVar3 & 1) == 0) {
            lVar18 = FUN_02229718();
          }
          uVar15 = thunk_FUN_0224e54c(&uStack_120,
                                      *(long *)(*(long *)(*(long *)(lVar18 + 0xc0) + 8) + 0x80) +
                                      0x60);
          func_0x04608620(auStack_70,uVar15,uVar2);
          uVar16 = auStack_70[0];
          if (*(long *)(param_1 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                    (*(long *)(param_1 + 0xa0),auStack_70[0],uVar14,*(undefined8 *)puVar9);
          lVar19 = *(long *)(param_1 + 0x80);
          if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FUN_024f5bd0(lVar19,*(undefined8 *)(uVar16 + 0x60),*(undefined8 *)puVar10);
        }
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_120,*(undefined8 *)PTR_DAT_049c2628);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

