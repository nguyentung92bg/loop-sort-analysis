/* IL2CPP: ConnectedCarrierGroupSystem$$Create
void ConnectedCarrierGroupSystem__Create (ConnectedCarrierGroupSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0250fd98) */
/* WARNING: Removing unreachable block (ram,0x0250fe5c) */
/* IL2CPP: ConnectedCarrierGroupSystem$$Create
   void ConnectedCarrierGroupSystem__Create (ConnectedCarrierGroupSystem_o* __this, const
   MethodInfo* method); */

void ConnectedCarrierGroupSystem__Create_240f960(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uStack_110;
  ulong *puStack_108;
  long *aplStack_100 [2];
  long lStack_f0;
  undefined1 *puStack_e8;
  ulong uStack_e0;
  ulong *puStack_d8;
  long *plStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  ulong auStack_70 [2];
  
  puVar3 = PTR_DAT_049c2730;
  if ((bRam0000000004f4b718 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c2738);
    FUN_021f03f8(PTR_DAT_049c2730);
    FUN_021f03f8(PTR_DAT_049c2ae8);
    FUN_021f03f8(PTR_DAT_049c2740);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c2748);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c2750);
    FUN_021f03f8(PTR_DAT_049c2af0);
    FUN_021f03f8(PTR_DAT_049c2760);
    FUN_021f03f8(PTR_DAT_049c2768);
    FUN_021f03f8(PTR_DAT_049c2778);
    FUN_021f03f8(PTR_DAT_049c2780);
    FUN_021f03f8(PTR_DAT_049c2788);
    FUN_021f03f8(PTR_DAT_049c1590);
    bRam0000000004f4b718 = 1;
  }
  puVar4 = PTR_DAT_049c2738;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_c0 = 0;
  uStack_b8 = (ulong *)0x0;
  plStack_b0 = (long *)0x0;
  lStack_c8 = 0;
  puStack_d8 = (ulong *)0x0;
  uStack_e0 = 0;
  plStack_d0 = (long *)0x0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_80 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_88,*(undefined8 *)puVar4);
  lVar13 = *(long *)(param_1 + 0x30);
  puStack_e8 = auStack_80;
  lStack_f0 = 0;
  if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_98 = *(undefined8 *)(lVar13 + 0x40);
  uStack_a0 = *(undefined8 *)(lVar13 + 0x38);
  uStack_90 = *(undefined8 *)(lVar13 + 0x48);
  lVar13 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                     (&uStack_a0,*(undefined8 *)PTR_DAT_049c2788);
  lVar14 = *(long *)(param_1 + 0x68);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_110 = 0;
  puStack_108 = (ulong *)0x0;
  aplStack_100[0] = (long *)0x0;
  lVar15 = *(long *)PTR_DAT_049c1590;
  puVar8 = (ulong *)thunk_FUN_0224e54c(lVar14,*(long *)(**(long **)(*(long *)(lVar15 + 0x20) + 0xc0)
                                                       + 0x80) + 0x60);
  auStack_70[0] = *puVar8;
  auStack_70[1] = 0;
  thunk_FUN_021f190c(auStack_70);
  auStack_70[1] = 0;
  puStack_108 = (ulong *)0x0;
  uStack_110 = auStack_70[0];
  thunk_FUN_021f190c(&uStack_110,0);
  puVar9 = (undefined8 *)
           thunk_FUN_0224e54c(lVar14,*(long *)(**(long **)(*(long *)(lVar15 + 0x20) + 0xc0) + 0x80)
                                     + 0x80);
  aplStack_100[0] = (long *)*puVar9;
  thunk_FUN_021f190c(aplStack_100);
  puVar7 = PTR_DAT_049c2ae8;
  puVar6 = PTR_DAT_049c2768;
  puVar5 = PTR_DAT_049c2760;
  puVar4 = PTR_DAT_049c2750;
  puVar3 = PTR_DAT_049c2748;
  uStack_b8 = puStack_108;
  uStack_c0 = uStack_110;
  plStack_b0 = aplStack_100[0];
  while( true ) {
    do {
      do {
        do {
          uVar10 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(&uStack_c0,0);
          lVar14 = lStack_f0;
          if ((uVar10 & 1) == 0) {
            UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                      (puStack_e8,*(undefined8 *)PTR_DAT_049c2780);
            if (lVar14 == 0) {
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f0698(lVar14);
          }
          if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar14 = *(long *)((long)plStack_b0 +
                            (ulong)*(uint *)(*plStack_b0 + 0x104) * (long)uStack_b8._4_4_ + 0x20);
          uVar10 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                             (lStack_88,lVar14,*(undefined8 *)puVar6);
        } while ((uVar10 & 1) != 0);
        if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar10 = CarrierSheet_Row__HasCarrierFeature_255b53c
                           (lVar13,*(undefined4 *)(lVar14 + 0x130),0x19,0);
      } while ((uVar10 & 1) == 0);
      uVar10 = CarrierSheet_Row__TryGetCarrierGroup_255b2e8
                         (lVar13,*(undefined4 *)(lVar14 + 0x130),0x19,&lStack_c8,0);
    } while ((uVar10 & 1) == 0);
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Features__Get_24fb17c(&uStack_110,*(long *)(param_1 + 0x38),0x19,0);
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar14 = PrefabModule__Rent_2537380(*(long *)(param_1 + 0x40),uStack_110,0);
    if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar14,&uStack_110,*(undefined8 *)PTR_DAT_049c2af0);
    uVar10 = uStack_110;
    if (lStack_c8 == 0) break;
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_c8,&uStack_110,*(undefined8 *)PTR_DAT_049c2778);
    uStack_e0 = uStack_110;
    uStack_110 = 0;
    puStack_d8 = puStack_108;
    plStack_d0 = aplStack_100[0];
    puStack_108 = &uStack_e0;
    while( true ) {
      uVar11 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_e0,*(undefined8 *)puVar3);
      if ((uVar11 & 1) == 0) break;
      lVar16 = *(long *)puVar4;
      lVar15 = *(long *)(lVar16 + 0x20);
      uVar2 = *(ushort *)(lVar15 + 0x135);
      lVar14 = lVar15;
      if ((uVar2 & 1) == 0) {
        lVar14 = FUN_02229718();
        lVar15 = *(long *)(lVar16 + 0x20);
        uVar2 = *(ushort *)(lVar15 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar15 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(&uStack_e0,
                                  *(long *)(*(long *)(*(long *)(lVar15 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(auStack_70,uVar12,uVar1);
      uVar12 = ConnectedCarrierGroupSystem__FindCarrier_2410330(param_1,auStack_70[0] & 0xffffffff);
      if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      ConnectedCarrierGroup__AddCarrier_240edd4(uVar10,uVar12);
      if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                (lStack_88,uVar12,*(undefined8 *)puVar5);
      if (*(long *)(param_1 + 0x70) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
                (*(long *)(param_1 + 0x70),uVar12,uVar10,*(undefined8 *)puVar7);
    }
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_e0,*(undefined8 *)PTR_DAT_049c2740);
    if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    ConnectedCarrierGroup__Initialize_240e5e0(uVar10);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

