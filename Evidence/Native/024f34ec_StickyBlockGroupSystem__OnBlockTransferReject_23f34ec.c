/* IL2CPP: StickyBlockGroupSystem$$OnBlockTransferReject
void StickyBlockGroupSystem__OnBlockTransferReject (StickyBlockGroupSystem_o* __this, BlockTransferRejectMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024f3738) */
/* IL2CPP: StickyBlockGroupSystem$$OnBlockTransferReject
   void StickyBlockGroupSystem__OnBlockTransferReject (StickyBlockGroupSystem_o* __this,
   BlockTransferRejectMessage_o m, const MethodInfo* method); */

void StickyBlockGroupSystem__OnBlockTransferReject_23f34ec(long param_1,long param_2)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined1 *puStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_38;
  
  puVar4 = PTR_DAT_049c14d0;
  if ((bRam0000000004f4b64f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c21a8);
    FUN_021f03f8(PTR_DAT_049c14d8);
    FUN_021f03f8(PTR_DAT_049c14e0);
    FUN_021f03f8(PTR_DAT_049c14e8);
    FUN_021f03f8(PTR_DAT_049c14f0);
    FUN_021f03f8(PTR_DAT_049c14f8);
    bRam0000000004f4b64f = 1;
  }
  puVar3 = PTR_DAT_049c14c8;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  lStack_58 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  lStack_78 = 0;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_50 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_58,*(undefined8 *)puVar3);
  puStack_80 = auStack_50;
  lStack_88 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Carrier__FindNextTransferBlocks_23fb3d4(param_2,lStack_58,0);
  if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (lStack_58,&uStack_a0,*(undefined8 *)PTR_DAT_049c14f0);
  puVar6 = PTR_DAT_049c21a8;
  puVar5 = PTR_DAT_049c14e8;
  puVar3 = PTR_DAT_049c14e0;
  puVar4 = PTR_DAT_049c14d8;
  uStack_68 = puStack_98;
  uStack_70 = uStack_a0;
  uStack_60 = uStack_90;
  puStack_98 = &uStack_70;
  uStack_a0 = 0;
  while( true ) {
    uVar7 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                      (&uStack_70,*(undefined8 *)puVar3);
    if ((uVar7 & 1) == 0) {
      System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                (&uStack_70,*(undefined8 *)puVar4);
      lVar9 = lStack_88;
      UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                (puStack_80,*(undefined8 *)PTR_DAT_049c14f8);
      if (lVar9 == 0) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f0698(lVar9);
    }
    lVar11 = *(long *)puVar5;
    lVar8 = *(long *)(lVar11 + 0x20);
    uVar2 = *(ushort *)(lVar8 + 0x135);
    lVar9 = lVar8;
    if ((uVar2 & 1) == 0) {
      lVar9 = FUN_02229718();
      lVar8 = *(long *)(lVar11 + 0x20);
      uVar2 = *(ushort *)(lVar8 + 0x135);
    }
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0xfc);
    if ((uVar2 & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar10 = thunk_FUN_0224e54c(&uStack_70,
                                *(long *)(*(long *)(*(long *)(lVar8 + 0xc0) + 8) + 0x80) + 0x60);
    func_0x04608620(&uStack_38,uVar10,uVar1);
    if (*(long *)(param_1 + 0x70) == 0) break;
    uVar7 = System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_282fc2c
                      (*(long *)(param_1 + 0x70),uStack_38,&lStack_78,*(undefined8 *)puVar6);
    if ((uVar7 & 1) != 0) {
      if (lStack_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      StickyBlockGroup__ApplyJiggleMotion_23f27c4();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

