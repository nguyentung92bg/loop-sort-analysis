/* IL2CPP: LockCarrierGroupSystem$$Create
void LockCarrierGroupSystem__Create (LockCarrierGroupSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025a9f04) */
/* WARNING: Removing unreachable block (ram,0x025a9fb8) */
/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: LockCarrierGroupSystem$$Create
   void LockCarrierGroupSystem__Create (LockCarrierGroupSystem_o* __this, const MethodInfo* method);
    */

void LockCarrierGroupSystem__Create_24a99d8(long param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uStack_120;
  ulong *puStack_118;
  long *aplStack_110 [2];
  long lStack_100;
  undefined1 *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  long *plStack_e0;
  long alStack_d8 [4];
  undefined8 uStack_b8;
  long *plStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 auStack_80 [16];
  ulong auStack_70 [2];
  
  puVar3 = PTR_DAT_049c2730;
  if ((bRam0000000004f4bb27 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1578);
    FUN_021f03f8(PTR_DAT_049c6820);
    FUN_021f03f8(PTR_DAT_049c2738);
    FUN_021f03f8(PTR_DAT_049c2730);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c6828);
    FUN_021f03f8(PTR_DAT_049c2740);
    FUN_021f03f8(PTR_DAT_049c1580);
    FUN_021f03f8(PTR_DAT_049c2748);
    FUN_021f03f8(PTR_DAT_049c1588);
    FUN_021f03f8(PTR_DAT_049c2750);
    FUN_021f03f8(PTR_DAT_049c6830);
    FUN_021f03f8(PTR_DAT_049c2760);
    FUN_021f03f8(PTR_DAT_049c2768);
    FUN_021f03f8(PTR_DAT_049c2778);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c2780);
    FUN_021f03f8(PTR_DAT_049c2788);
    FUN_021f03f8(PTR_DAT_049c1590);
    FUN_021f03f8(PTR_DAT_049c6838);
    FUN_021f03f8(PTR_DAT_049c6840);
    bRam0000000004f4bb27 = 1;
  }
  puVar4 = PTR_DAT_049c2738;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_90 = 0;
  lStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  alStack_d8[3] = 0;
  uStack_b8 = (ulong *)0x0;
  plStack_b0 = (long *)0x0;
  alStack_d8[1] = 0;
  alStack_d8[2] = 0;
  alStack_d8[0] = 0;
  puStack_e8 = (ulong *)0x0;
  uStack_f0 = 0;
  plStack_e0 = (long *)0x0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_80 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_88,*(undefined8 *)puVar4);
  lVar15 = *(long *)(param_1 + 0x30);
  puStack_f8 = auStack_80;
  lStack_100 = 0;
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_98 = *(undefined8 *)(lVar15 + 0x40);
  uStack_a0 = *(undefined8 *)(lVar15 + 0x38);
  uStack_90 = *(undefined8 *)(lVar15 + 0x48);
  lVar15 = Cathei_BakingSheet_Sheet_Reference___Il2CppFullySharedGenericType__object___get_Ref_29374dc
                     (&uStack_a0,*(undefined8 *)PTR_DAT_049c2788);
  lVar16 = *(long *)(param_1 + 0xb0);
  if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_120 = 0;
  puStack_118 = (ulong *)0x0;
  aplStack_110[0] = (long *)0x0;
  lVar17 = *(long *)PTR_DAT_049c1590;
  puVar9 = (ulong *)thunk_FUN_0224e54c(lVar16,*(long *)(**(long **)(*(long *)(lVar17 + 0x20) + 0xc0)
                                                       + 0x80) + 0x60);
  auStack_70[0] = *puVar9;
  auStack_70[1] = 0;
  thunk_FUN_021f190c(auStack_70);
  auStack_70[1] = 0;
  puStack_118 = (ulong *)0x0;
  uStack_120 = auStack_70[0];
  thunk_FUN_021f190c(&uStack_120,0);
  puVar10 = (undefined8 *)
            thunk_FUN_0224e54c(lVar16,*(long *)(**(long **)(*(long *)(lVar17 + 0x20) + 0xc0) + 0x80)
                                      + 0x80);
  aplStack_110[0] = (long *)*puVar10;
  thunk_FUN_021f190c(aplStack_110);
  puVar8 = PTR_DAT_049c6838;
  puVar7 = PTR_DAT_049c2760;
  puVar6 = PTR_DAT_049c2750;
  puVar5 = PTR_DAT_049c2748;
  puVar4 = PTR_DAT_049b3c58;
  puVar3 = PTR_DAT_049b3b98;
  uStack_b8 = puStack_118;
  alStack_d8[3] = uStack_120;
  plStack_b0 = aplStack_110[0];
  while( true ) {
    do {
      do {
        do {
          uVar11 = Scellecs_Morpeh_IntSlotMap_Enumerator__MoveNext_32b51b8(alStack_d8 + 3,0);
          lVar16 = lStack_100;
          if ((uVar11 & 1) == 0) {
            UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                      (puStack_f8,*(undefined8 *)PTR_DAT_049c2780);
            if (lVar16 == 0) {
                    /* try { // try from 025a9fa4 to 026a9faf has its CatchHandler @ 025aa07c */
              return;
            }
                    /* try { // try from 025a9fdc to 026a9feb has its CatchHandler @ 025aa078 */
                    /* WARNING: Subroutine does not return */
            FUN_021f0698(lVar16);
          }
          if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar16 = *(long *)((long)plStack_b0 +
                            (ulong)*(uint *)(*plStack_b0 + 0x104) * (long)uStack_b8._4_4_ + 0x20);
          uVar11 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                             (lStack_88,lVar16,*(undefined8 *)PTR_DAT_049c2768);
        } while ((uVar11 & 1) != 0);
        if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar11 = CarrierSheet_Row__TryGetCarrierFeature_255b058
                           (lVar15,*(undefined4 *)(lVar16 + 0x130),5,alStack_d8 + 1,0);
      } while ((uVar11 & 1) == 0);
      uVar11 = CarrierSheet_Row__TryGetCarrierGroup_255b2e8
                         (lVar15,*(undefined4 *)(lVar16 + 0x130),5,alStack_d8,0);
    } while ((uVar11 & 1) == 0);
    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Features__Get_24fb17c(&uStack_120,*(long *)(param_1 + 0x38),5,0);
    if (*(long *)(param_1 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar16 = PrefabModule__Rent_2537380(*(long *)(param_1 + 0x40),uStack_120,0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__GetComponent___Il2CppFullySharedGenericType__261a804
              (lVar16,&uStack_120,*(undefined8 *)PTR_DAT_049c6830);
    uVar11 = uStack_120;
    uVar12 = Level__GetColor_2555ca8(param_1 + 0x48,alStack_d8[2],0);
    if (uVar11 == 0) break;
    *(ulong *)(uVar11 + 0xf4) = uVar12;
    if (*(long *)(param_1 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uStack_120 = uVar12;
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___set_Item_282b5bc
              (*(long *)(param_1 + 0xb8),&uStack_120,uVar11,*(undefined8 *)PTR_DAT_049c6828);
    if (alStack_d8[0] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (alStack_d8[0],&uStack_120,*(undefined8 *)PTR_DAT_049c2778);
    plStack_e0 = aplStack_110[0];
    puStack_e8 = puStack_118;
    uStack_f0 = uStack_120;
    uStack_120 = 0;
    puStack_118 = &uStack_f0;
    while( true ) {
      uVar12 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_f0,*(undefined8 *)puVar5);
      if ((uVar12 & 1) == 0) break;
      lVar18 = *(long *)puVar6;
      lVar17 = *(long *)(lVar18 + 0x20);
      uVar2 = *(ushort *)(lVar17 + 0x135);
      lVar16 = lVar17;
      if ((uVar2 & 1) == 0) {
        lVar16 = FUN_02229718();
        lVar17 = *(long *)(lVar18 + 0x20);
        uVar2 = *(ushort *)(lVar17 + 0x135);
      }
      uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar16 + 0xc0) + 0x10) + 0xfc);
      if ((uVar2 & 1) == 0) {
        lVar17 = FUN_02229718();
      }
      uVar13 = thunk_FUN_0224e54c(&uStack_f0,
                                  *(long *)(*(long *)(*(long *)(lVar17 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(auStack_70,uVar13,uVar1);
      uVar1 = (undefined4)auStack_70[0];
      uVar13 = LockCarrierGroupSystem__FindCarrier_24aa4b0(param_1,auStack_70[0] & 0xffffffff);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar12 = UnityEngine_Object__op_Equality_3c1eeb4(uVar13,0,0);
      if ((uVar12 & 1) != 0) {
        auStack_70[0] = CONCAT44(auStack_70[0]._4_4_,uVar1);
        uVar14 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049c6820,auStack_70);
                    /* catch() { ... } // from try @ 025a9eac with catch @ 025a9e84
                       catch() { ... } // from try @ 025a9ee4 with catch @ 025a9e84
                       catch() { ... } // from try @ 025a9f0c with catch @ 025a9e84 */
        uVar14 = System_String__Format_2f7dfac
                           (*(undefined8 *)PTR_DAT_049c6840,uVar14,*(undefined8 *)puVar8,0);
                    /* try { // try from 025a9ea4 to 026a9eab has its CatchHandler @ 025a9ec4 */
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
                    /* try { // try from 025a9eac to 026a9edf has its CatchHandler @ 025a9e84 */
        UnityEngine_Debug__Log_3bd0be4(uVar14,0);
      }
      LockCarrierGroup__AddCarrier_24a7020(uVar11,uVar13);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a9ea4 with catch @ 025a9ec4
                        */
      if (lStack_88 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025a9f04 with catch @ 025a9f14
                        */
        FUN_021f06a0();
      }
      System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                (lStack_88,uVar13,*(undefined8 *)puVar7);
    }
                    /* try { // try from 025a9ee0 to 026a9ee3 has its CatchHandler @ 025a9f00 */
                    /* try { // try from 025a9ee4 to 026a9f03 has its CatchHandler @ 025a9e84 */
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (&uStack_f0,*(undefined8 *)PTR_DAT_049c2740);
                    /* catch() { ... } // from try @ 025a9ee0 with catch @ 025a9f00 */
                    /* try { // try from 025a9f0c to 026a9f17 has its CatchHandler @ 025a9e84 */
    LockCarrierGroup__Initialize_24a6734(uVar11);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

