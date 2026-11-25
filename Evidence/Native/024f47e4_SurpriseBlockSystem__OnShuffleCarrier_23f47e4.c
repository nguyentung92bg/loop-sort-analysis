/* IL2CPP: SurpriseBlockSystem$$OnShuffleCarrier
void SurpriseBlockSystem__OnShuffleCarrier (SurpriseBlockSystem_o* __this, ShuffleCarrierMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SurpriseBlockSystem$$OnShuffleCarrier
   void SurpriseBlockSystem__OnShuffleCarrier (SurpriseBlockSystem_o* __this,
   ShuffleCarrierMessage_o m, const MethodInfo* method); */

void SurpriseBlockSystem__OnShuffleCarrier_23f47e4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined1 auStack_60 [16];
  long lStack_48;
  
  SurpriseBlockSystem__HandleEnableTransferExit_23f4274();
  puVar2 = PTR_DAT_049c14d0;
  if ((bRam0000000004f4b658 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049c2210);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c14f8);
    bRam0000000004f4b658 = 1;
  }
  puVar1 = PTR_DAT_049c14c8;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  lStack_68 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar2 = PTR_DAT_049c14f8;
  auStack_60 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                         (&lStack_68,*(undefined8 *)puVar1);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Carrier__FindNextTransferBlocks_23fb3d4(param_2,lStack_68,0);
  puVar3 = PTR_DAT_049c2210;
  puVar1 = PTR_DAT_049c1558;
  lVar6 = *(long *)(param_2 + 0x1e0);
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (0 < *(int *)(lVar6 + 0x18)) {
    iVar7 = 0;
    do {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lVar6,iVar7,&lStack_48,*(undefined8 *)puVar1);
      lVar5 = lStack_48;
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar4 = Block__TryGetFeature_23dc908(lStack_48,0x20,&uStack_78);
      if ((uVar4 & 1) != 0) {
        if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar4 = System_Collections_Generic_List___Il2CppFullySharedGenericType___Contains_28ce5cc
                          (lStack_68,lVar5,*(undefined8 *)puVar3);
        if ((uVar4 & 1) == 0) {
          lVar5 = *(long *)(param_1 + 0x48);
          if (lVar5 == 0) {
LAB_024f4724:
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          iVar8 = 0;
          while (iVar8 < *(int *)(lVar5 + 0x154)) {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar6,iVar7 + iVar8,&lStack_48,*(undefined8 *)puVar1);
            if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            Block__DisableTransferExit_23dcf8c(lStack_48,param_1);
            lVar5 = *(long *)(param_1 + 0x48);
            iVar8 = iVar8 + 1;
            if (lVar5 == 0) goto LAB_024f4724;
          }
        }
        else {
          Carrier__DisableTransferEnter_2408aa4(param_2,param_1,0);
        }
      }
      if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar7 = *(int *)(*(long *)(param_1 + 0x48) + 0x154) + iVar7;
    } while (iVar7 < *(int *)(lVar6 + 0x18));
  }
  UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
            (auStack_60,*(undefined8 *)puVar2);
  return;
}

