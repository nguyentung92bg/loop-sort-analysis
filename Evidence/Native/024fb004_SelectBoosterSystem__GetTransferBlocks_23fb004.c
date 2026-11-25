/* IL2CPP: SelectBoosterSystem$$GetTransferBlocks
System_Collections_Generic_List_Block__o* SelectBoosterSystem__GetTransferBlocks (SelectBoosterSystem_o* __this, Carrier_o* carrier, Block_o* closestBlock, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SelectBoosterSystem$$GetTransferBlocks
   System_Collections_Generic_List_Block__o* SelectBoosterSystem__GetTransferBlocks
   (SelectBoosterSystem_o* __this, Carrier_o* carrier, Block_o* closestBlock, const MethodInfo*
   method); */

long SelectBoosterSystem__GetTransferBlocks_23fb004(long param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long lStack_60;
  undefined1 auStack_58 [16];
  undefined8 uStack_48;
  
  puVar8 = PTR_DAT_049c1a38;
  puVar7 = PTR_DAT_049c1a30;
  puVar6 = PTR_DAT_049c14d0;
  if ((bRam0000000004f4b678 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c1c80);
    FUN_021f03f8(PTR_DAT_049c23c0);
    FUN_021f03f8(PTR_DAT_049c1a30);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1a38);
    FUN_021f03f8(PTR_DAT_049c14f8);
    bRam0000000004f4b678 = 1;
  }
  puVar5 = PTR_DAT_049c14c8;
  auStack_58._0_8_ = 0;
  auStack_58._8_8_ = 0;
  lStack_60 = 0;
  lVar10 = thunk_FUN_0222ca34(*(undefined8 *)puVar8);
  System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
            (lVar10,*(undefined8 *)puVar7);
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar6 = PTR_DAT_049c14f8;
  auStack_58 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_60,*(undefined8 *)puVar5);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Carrier__FindBlocksByColor_23fb298(param_2,lStack_60,*(undefined8 *)(param_3 + 0xe4));
  if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar9 = System_Collections_Generic_List___Il2CppFullySharedGenericType___IndexOf_28cf4d0
                    (lStack_60,param_3,*(undefined8 *)PTR_DAT_049c23c0);
  puVar8 = PTR_DAT_049c1c80;
  puVar7 = PTR_DAT_049c1558;
  if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar3 = *(int *)(lStack_60 + 0x18);
  iVar1 = 0;
  do {
    iVar11 = iVar1;
    if (iVar3 <= iVar11) goto LAB_024fb1e4;
    if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar4 = *(int *)(*(long *)(param_1 + 0x30) + 0x154);
    iVar1 = iVar4 + iVar11;
    iVar2 = iVar3;
    if (iVar1 <= iVar3) {
      iVar2 = iVar1;
    }
  } while ((iVar9 < iVar11) || (iVar2 <= iVar9));
  if (iVar11 < iVar2) {
    iVar4 = iVar11 + iVar4;
    if (iVar4 <= iVar3) {
      iVar3 = iVar4;
    }
    do {
      if (lStack_60 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lStack_60,iVar11,&uStack_48,*(undefined8 *)puVar7);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      FUN_02333498(lVar10,uStack_48,*(undefined8 *)puVar8);
      iVar11 = iVar11 + 1;
    } while (iVar3 != iVar11);
  }
LAB_024fb1e4:
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
            (auStack_58,*(undefined8 *)puVar6);
  return lVar10;
}

