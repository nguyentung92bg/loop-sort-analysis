/* IL2CPP: RocketSystem$$FindFakeHiddenBlocks
System_Collections_Generic_List_Block__o* RocketSystem__FindFakeHiddenBlocks (RocketSystem_o* __this, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025b9894) */
/* IL2CPP: RocketSystem$$FindFakeHiddenBlocks
   System_Collections_Generic_List_Block__o* RocketSystem__FindFakeHiddenBlocks (RocketSystem_o*
   __this, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

long RocketSystem__FindFakeHiddenBlocks_24b957c(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined1 *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [16];
  long lStack_68;
  
  puVar3 = PTR_DAT_049c2598;
  if ((bRam0000000004f4bbad & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2588);
    FUN_021f03f8(PTR_DAT_049c2598);
    FUN_021f03f8(PTR_DAT_049c25a0);
    FUN_021f03f8(PTR_DAT_049c25a8);
    FUN_021f03f8(PTR_DAT_049c25b0);
    FUN_021f03f8(PTR_DAT_049c6db0);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049c1710);
    FUN_021f03f8(PTR_DAT_049c2350);
    FUN_021f03f8(PTR_DAT_049c25c8);
    FUN_021f03f8(PTR_DAT_049c25d0);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c25e8);
    bRam0000000004f4bbad = 1;
  }
  puVar4 = PTR_DAT_049c2588;
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  lStack_80 = 0;
  uStack_98 = 0;
  lStack_a0 = 0;
  uStack_90 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_78 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_80,*(undefined8 *)puVar4);
  puStack_a8 = auStack_78;
  lStack_b0 = 0;
  if (*(long *)(param_1 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(param_1 + 0xa8),&lStack_c8,*(undefined8 *)PTR_DAT_049c25d0);
  puVar9 = PTR_DAT_049c25c8;
  puVar8 = PTR_DAT_049c25b0;
  puVar7 = PTR_DAT_049c25a8;
  puVar6 = PTR_DAT_049c25a0;
  puVar5 = PTR_DAT_049c1710;
  puVar4 = PTR_DAT_049c1558;
  puVar3 = PTR_DAT_049b5480;
  uStack_98 = plStack_c0;
  lStack_a0 = lStack_c8;
  uStack_90 = uStack_b8;
  plStack_c0 = &lStack_a0;
  lStack_c8 = 0;
  while( true ) {
    uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                       (&lStack_a0,*(undefined8 *)puVar7);
    if ((uVar10 & 1) == 0) break;
    lVar14 = *(long *)puVar8;
    lVar11 = *(long *)(lVar14 + 0x20);
    uVar2 = *(ushort *)(lVar11 + 0x135);
    lVar12 = lVar11;
    if ((uVar2 & 1) == 0) {
      lVar12 = FUN_02229718();
      lVar11 = *(long *)(lVar14 + 0x20);
      uVar2 = *(ushort *)(lVar11 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar11 = FUN_02229718();
    }
    uVar13 = thunk_FUN_0224e54c(&lStack_a0,
                                *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&lStack_68,uVar13,uVar1);
    lVar12 = lStack_68;
    if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *(long *)(param_1 + 0xa0);
    System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
              (lStack_68,0,&lStack_68,*(undefined8 *)puVar4);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                       (lVar11,lStack_68,*(undefined8 *)puVar5);
    if ((uVar10 & 1) == 0) {
      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      FUN_02333498(lStack_80,lVar12,*(undefined8 *)puVar9);
    }
  }
                    /* try { // try from 025b97d8 to 026b989f has its CatchHandler @ 025b97d8
                       catch() { ... } // from try @ 025b97d8 with catch @ 025b97d8
                       catch() { ... } // from try @ 025b991c with catch @ 025b97d8
                       catch() { ... } // from try @ 025b9990 with catch @ 025b97d8
                       catch() { ... } // from try @ 025b9a28 with catch @ 025b97d8
                       catch() { ... } // from try @ 025b9a78 with catch @ 025b97d8 */
  System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
            (&lStack_a0,*(undefined8 *)puVar6);
  lVar12 = lStack_80;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  Extensions__GetRandom___Il2CppFullySharedGenericType__25efbc4
            (lVar12,&lStack_c8,*(undefined8 *)PTR_DAT_049c6db0);
  lVar12 = lStack_c8;
  if (lStack_c8 != 0) {
    if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___AddRange_28ce1b0
              (param_2,lStack_c8,*(undefined8 *)PTR_DAT_049c2350);
  }
  lVar11 = lStack_b0;
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
            (puStack_a8,*(undefined8 *)PTR_DAT_049c25e8);
  if (lVar11 == 0) {
    return lVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f0698(lVar11);
}

