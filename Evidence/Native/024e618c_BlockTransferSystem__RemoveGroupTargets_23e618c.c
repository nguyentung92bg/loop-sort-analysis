/* IL2CPP: BlockTransferSystem$$RemoveGroupTargets
void BlockTransferSystem__RemoveGroupTargets (BlockTransferSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024e659c) */
/* WARNING: Removing unreachable block (ram,0x024e6590) */
/* IL2CPP: BlockTransferSystem$$RemoveGroupTargets
   void BlockTransferSystem__RemoveGroupTargets (BlockTransferSystem_o* __this, Carrier_o* carrier,
   const MethodInfo* method); */

void BlockTransferSystem__RemoveGroupTargets_23e618c(long param_1,undefined8 param_2)

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
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  undefined1 *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_80;
  undefined1 auStack_78 [16];
  undefined4 uStack_64;
  
  puVar3 = PTR_DAT_049c1a58;
  if ((bRam0000000004f4b5f7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1a60);
    FUN_021f03f8(PTR_DAT_049c1a58);
    FUN_021f03f8(PTR_DAT_049c1a68);
    FUN_021f03f8(PTR_DAT_049c1a70);
    FUN_021f03f8(PTR_DAT_049c1a78);
    FUN_021f03f8(PTR_DAT_049c1a80);
    FUN_021f03f8(PTR_DAT_049c1a88);
    FUN_021f03f8(PTR_DAT_049c1a90);
    FUN_021f03f8(PTR_DAT_049c1a98);
    FUN_021f03f8(PTR_DAT_049c1aa0);
    FUN_021f03f8(PTR_DAT_049c1aa8);
    FUN_021f03f8(PTR_DAT_049be138);
    FUN_021f03f8(PTR_DAT_049c1ab0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c1ab8);
    bRam0000000004f4b5f7 = 1;
  }
  puVar4 = PTR_DAT_049c1a60;
  auStack_78._0_8_ = 0;
  auStack_78._8_8_ = 0;
  lStack_80 = 0;
  uStack_90 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_c4 = 0;
  uStack_d0 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_e0 = 0;
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_78 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_80,*(undefined8 *)puVar4);
  puStack_f8 = auStack_78;
  lStack_100 = 0;
  if (*(long *)(param_1 + 0xf0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___GetEnumerator_282ca60
            (*(long *)(param_1 + 0xf0),&uStack_130,*(undefined8 *)PTR_DAT_049c1a68);
  puVar9 = PTR_DAT_049c1aa8;
  puVar8 = PTR_DAT_049c1a98;
  puVar7 = PTR_DAT_049c1a90;
  puVar6 = PTR_DAT_049c1a88;
  puVar5 = PTR_DAT_049c1a70;
  puVar4 = PTR_DAT_049be138;
  puVar3 = PTR_DAT_049b3b98;
  uStack_a8 = puStack_128;
  uStack_b0 = uStack_130;
  uStack_90 = uStack_110;
  puStack_138 = &uStack_b0;
  uStack_98 = uStack_118;
  uStack_a0 = uStack_120;
  uStack_140 = 0;
  while( true ) {
    uVar10 = System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___MoveNext_284ce84
                       (&uStack_b0,*(undefined8 *)puVar7);
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
    uVar13 = thunk_FUN_0224e54c(&uStack_b0,
                                *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_130,uVar13,uVar1);
    uStack_b8 = puStack_128;
    uStack_c0 = uStack_130;
    System_Collections_Generic_KeyValuePair___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Deconstruct_28c0314
              (&uStack_c0,&uStack_c4,&uStack_d0,*(undefined8 *)puVar9);
    uVar1 = uStack_c4;
    uVar13 = uStack_d0;
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar10 = UnityEngine_Object__op_Equality_3c1eeb4(uVar13,param_2,0);
    if ((uVar10 & 1) != 0) {
      if (lStack_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_64 = uVar1;
      FUN_02333498(lStack_80,&uStack_64,*(undefined8 *)puVar4);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Dispose_284d478
            (&uStack_b0,*(undefined8 *)PTR_DAT_049c1a80);
  puVar3 = PTR_DAT_049c1aa0;
  if (lStack_80 != 0) {
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (lStack_80,&uStack_130,*(undefined8 *)PTR_DAT_049c1ab0);
    uStack_e0 = uStack_120;
    uStack_e8 = puStack_128;
    uStack_f0 = uStack_130;
    uStack_130 = 0;
    puStack_128 = &uStack_f0;
    while( true ) {
      uVar10 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (&uStack_f0,*(undefined8 *)puVar6);
      if ((uVar10 & 1) == 0) {
        System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                  (&uStack_f0,*(undefined8 *)PTR_DAT_049c1a78);
        lVar12 = lStack_100;
        UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                  (puStack_f8,*(undefined8 *)PTR_DAT_049c1ab8);
        if (lVar12 == 0) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_021f0698(lVar12);
      }
      lVar14 = *(long *)puVar3;
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
                    /* try { // try from 024e64ec to 025e65ab has its CatchHandler @ 024e64ec
                       catch() { ... } // from try @ 024e64ec with catch @ 024e64ec
                       catch() { ... } // from try @ 024e69d8 with catch @ 024e64ec
                       catch() { ... } // from try @ 024e6a48 with catch @ 024e64ec
                       catch() { ... } // from try @ 024e6a6c with catch @ 024e64ec */
      uVar13 = thunk_FUN_0224e54c(&uStack_f0,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(&uStack_140,uVar13,uVar1);
      if (*(long *)(param_1 + 0xf0) == 0) break;
      System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
                (*(long *)(param_1 + 0xf0),&uStack_140,*(undefined8 *)puVar5);
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

