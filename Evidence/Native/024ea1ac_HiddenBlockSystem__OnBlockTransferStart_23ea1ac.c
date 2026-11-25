/* IL2CPP: HiddenBlockSystem$$OnBlockTransferStart
void HiddenBlockSystem__OnBlockTransferStart (HiddenBlockSystem_o* __this, BlockTransferStartMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenBlockSystem$$OnBlockTransferStart
   void HiddenBlockSystem__OnBlockTransferStart (HiddenBlockSystem_o* __this,
   BlockTransferStartMessage_o m, const MethodInfo* method); */

void HiddenBlockSystem__OnBlockTransferStart_23ea1ac(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [16];
  
  HiddenBlockSystem__HandleHiddenBlocks_23ea1d8();
  if ((bRam0000000004f4b617 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c14c8);
    FUN_021f03f8(PTR_DAT_049c14d0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c14f8);
    bRam0000000004f4b617 = 1;
  }
  puVar1 = PTR_DAT_049b3b98;
  auStack_30._0_8_ = 0;
  auStack_30._8_8_ = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_48 = 0;
  if (param_2 != 0) {
    lVar2 = Carrier__GetNextFirstBlock_2409e1c(param_2,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar1);
    }
    uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(lVar2,0,0);
    if ((uVar3 & 1) == 0) {
      if (lVar2 == 0) goto LAB_024ea788;
      uVar3 = Block__TryGetFeature_23dc908(lVar2,1,&uStack_48);
      if ((uVar3 & 1) != 0) {
        if (*(int *)(*(long *)PTR_DAT_049c14d0 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auStack_30 = UnityEngine_Pool_CollectionPool_object____Il2CppFullySharedGenericType___Get_2804528
                               (&uStack_38,*(undefined8 *)PTR_DAT_049c14c8);
        Carrier__FindBlocksWithSameColor_24096a4(param_2,uStack_38,0);
        HiddenBlockSystem__HandleHiddenBlocks_23ea1d8(param_1,param_2,uStack_38,1);
        UnityEngine_Pool_PooledObject_object___System_IDisposable_Dispose_2916e18
                  (auStack_30,*(undefined8 *)PTR_DAT_049c14f8);
      }
    }
    return;
  }
LAB_024ea788:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

