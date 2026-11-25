/* IL2CPP: CarpetCarrierGroupSystem$$OnLevelBuildComplete
void CarpetCarrierGroupSystem__OnLevelBuildComplete (CarpetCarrierGroupSystem_o* __this, LevelBuildCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02504ea8) */
/* WARNING: Removing unreachable block (ram,0x02504f68) */
/* IL2CPP: CarpetCarrierGroupSystem$$OnLevelBuildComplete
   void CarpetCarrierGroupSystem__OnLevelBuildComplete (CarpetCarrierGroupSystem_o* __this,
   LevelBuildCompleteMessage_o m, const MethodInfo* method); */

void CarpetCarrierGroupSystem__OnLevelBuildComplete_2404a64(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plStack_110;
  long **pplStack_108;
  long *aplStack_100 [2];
  long lStack_f0;
  undefined1 *puStack_e8;
  long *plStack_e0;
  long **pplStack_d8;
  long *plStack_d0;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  long *plStack_70;
  undefined8 uStack_68;
  
  puVar3 = PTR_DAT_049c2730;
  if ((bRam0000000004f4b6af & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c2738);
    FUN_021f03f8(PTR_DAT_049c2730);
    FUN_021f03f8(PTR_DAT_049c2740);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c2748);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c2750);
    FUN_021f03f8(PTR_DAT_049c2758);
    FUN_021f03f8(PTR_DAT_049c2760);
    FUN_021f03f8(PTR_DAT_049c2768);
    FUN_021f03f8(PTR_DAT_049c2770);
    FUN_021f03f8(PTR_DAT_049c2778);
    FUN_021f03f8(PTR_DAT_049c2780);
    FUN_021f03f8(PTR_DAT_049c2788);
    FUN_021f03f8(PTR_DAT_049c1590);
    bRam0000000004f4b6af = 1;
  }
  puVar4 = PTR_DAT_049c2738;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  plStack_c0 = (long *)0x0;
  uStack_b8 = (long **)0x0;
  plStack_b0 = (long *)0x0;
  lStack_c8 = 0;
  pplStack_d8 = (long **)0x0;
  plStack_e0 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_80 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_88,*(undefined8 *)puVar4);
  lVar12 = *(long *)(param_1 + 0x30);
  puStack_e8 = auStack_80;
  lStack_f0 = 0;
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_98 = *(undefined8 *)(lVar12 + 0x40);
  uStack_a0 = *(undefined8 *)(lVar12 + 0x38);
  uStack_90 = *(undefined8 *)(lVar12 + 0x48);
  lVar12 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                     (&uStack_a0,*(undefined8 *)PTR_DAT_049c2788);
  lVar13 = *(long *)(param_1 + 0x68);
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plStack_110 = (long *)0x0;
  pplStack_108 = (long **)0x0;
  aplStack_100[0] = (long *)0x0;
  lVar14 = *(long *)PTR_DAT_049c1590;
  puVar9 = (undefined8 *)
           thunk_FUN_0224e54c(lVar13,*(long *)(**(long **)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x80)
                                     + 0x60);
  plStack_70 = (long *)*puVar9;
  uStack_68 = 0;
  thunk_FUN_021f190c(&plStack_70);
  uStack_68 = 0;
  pplStack_108 = (long **)0x0;
  plStack_110 = plStack_70;
  thunk_FUN_021f190c(&plStack_110,0);
  puVar9 = (undefined8 *)
           thunk_FUN_0224e54c(lVar13,*(long *)(**(long **)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x80)
                                     + 0x80);
  aplStack_100[0] = (long *)*puVar9;
  thunk_FUN_021f190c(aplStack_100);
  puVar7 = PTR_DAT_049c2768;
  puVar6 = PTR_DAT_049c2760;
  puVar5 = PTR_DAT_049c2750;
  puVar4 = PTR_DAT_049c2748;
  puVar3 = PTR_DAT_049c2740;
  uStack_b8 = pplStack_108;
  plStack_c0 = plStack_110;
  plStack_b0 = aplStack_100[0];
  while( true ) {
    do {
      do {
        do {
          uVar10 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&plStack_c0,0);
          lVar13 = lStack_f0;
          if ((uVar10 & 1) == 0) {
            UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                      (puStack_e8,*(undefined8 *)PTR_DAT_049c2780);
            if (lVar13 == 0) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f0698(lVar13);
          }
          if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar13 = *(long *)((long)plStack_b0 +
                            (ulong)*(uint *)(*plStack_b0 + 0x104) * (long)uStack_b8._4_4_ + 0x20);
          uVar10 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                             (lStack_88,lVar13,*(undefined8 *)puVar7);
        } while ((uVar10 & 1) != 0);
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar10 = CarrierSheet_Row__HasCarrierFeature_255b53c
                           (lVar12,*(undefined4 *)(lVar13 + 0x130),0x1a,0);
      } while ((uVar10 & 1) == 0);
      uVar10 = CarrierSheet_Row__TryGetCarrierGroup_255b2e8
                         (lVar12,*(undefined4 *)(lVar13 + 0x130),0x1a,&lStack_c8,0);
    } while ((uVar10 & 1) == 0);
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Features__Get_24fb17c(&plStack_110,*(long *)(param_1 + 0x38),0x1a,0);
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar13 = PrefabModule__Rent_2537380(*(long *)(param_1 + 0x40),plStack_110,0);
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar13,&plStack_110,*(undefined8 *)PTR_DAT_049c2758);
    plVar8 = plStack_110;
    if (*(long *)(param_1 + 0x70) == 0) break;
    FUN_02333498(*(long *)(param_1 + 0x70),plStack_110,*(undefined8 *)PTR_DAT_049c2770);
    if (lStack_c8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_c8,&plStack_110,*(undefined8 *)PTR_DAT_049c2778);
    plStack_e0 = plStack_110;
    plStack_110 = (long *)0x0;
    pplStack_d8 = pplStack_108;
    plStack_d0 = aplStack_100[0];
    pplStack_108 = &plStack_e0;
    while( true ) {
      uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&plStack_e0,*(undefined8 *)puVar4);
      if ((uVar10 & 1) == 0) break;
      lVar15 = *(long *)puVar5;
      lVar14 = *(long *)(lVar15 + 0x20);
      uVar2 = *(ushort *)(lVar14 + 0x135);
      lVar13 = lVar14;
      if ((uVar2 & 1) == 0) {
        lVar13 = FUN_02229718();
        lVar14 = *(long *)(lVar15 + 0x20);
        uVar2 = *(ushort *)(lVar14 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar13 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar14 = FUN_02229718();
      }
      uVar11 = thunk_FUN_0224e54c(&plStack_e0,
                                  *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&plStack_70,uVar11,uVar1);
      uVar11 = CarpetCarrierGroupSystem__FindCarrier_2405550(param_1,(ulong)plStack_70 & 0xffffffff)
      ;
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      (**(code **)(*plVar8 + 0x228))(plVar8,uVar11,*(undefined8 *)(*plVar8 + 0x230));
      if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                (lStack_88,uVar11,*(undefined8 *)puVar6);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&plStack_e0,*(undefined8 *)puVar3);
    if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    (**(code **)(*plVar8 + 0x218))(plVar8,*(undefined8 *)(*plVar8 + 0x220));
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

