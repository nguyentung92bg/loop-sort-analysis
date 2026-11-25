/* IL2CPP: BlockTransferSystem$$TrimBlocks
void BlockTransferSystem__TrimBlocks (BlockTransferSystem_o* __this, Carrier_o* carrier, System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$TrimBlocks
   void BlockTransferSystem__TrimBlocks (BlockTransferSystem_o* __this, Carrier_o* carrier,
   System_Collections_Generic_List_Block__o* blocks, const MethodInfo* method); */

void BlockTransferSystem__TrimBlocks_23e5f38(long param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long lStack_38;
  
  if ((bRam0000000004f4b5fc & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1410);
    FUN_021f03f8(PTR_DAT_049c1a40);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1558);
    FUN_021f03f8(PTR_DAT_049c1a48);
    bRam0000000004f4b5fc = 1;
  }
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (iVar5 = Conveyor__GetTotalSlotCount_24b0e24(*(long *)(param_1 + 0x48),0), param_3 != 0)) {
    uVar1 = *(uint *)(param_3 + 0x18);
    iVar6 = BlockTransferSystem__GetConveyorBlockCount_23e6ee0(param_1);
    if ((*(long *)(param_1 + 0x48) != 0) && ((param_2 != 0 && (*(long *)(param_2 + 0x1e0) != 0)))) {
      uVar3 = iVar5 - iVar6;
      uVar2 = *(uint *)(*(long *)(param_1 + 0x48) + 0x158);
      uVar9 = uVar1;
      if ((int)uVar3 <= (int)uVar1) {
        uVar9 = uVar3;
      }
      iVar5 = uVar9 - *(int *)(*(long *)(param_2 + 0x1e0) + 0x18);
      iVar6 = 0;
      if (uVar2 != 0) {
        iVar6 = iVar5 / (int)uVar2;
      }
      iVar5 = iVar5 - iVar6 * uVar2;
      uVar4 = (uVar9 - iVar5) - (uVar2 & iVar5 >> 0x1f);
      uVar9 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
      uVar2 = uVar9;
      if ((int)uVar1 <= (int)uVar3) {
        uVar2 = uVar1;
      }
      if (0 < (int)uVar4) {
        uVar2 = uVar9;
      }
      if ((int)uVar2 < (int)uVar1) {
        uVar9 = uVar2;
        if (0 < (int)uVar2) {
          lVar8 = *(long *)(param_1 + 200);
          System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                    (param_3,uVar2 - 1,&lStack_38,*(undefined8 *)PTR_DAT_049c1558);
          if (*(int *)(*(long *)PTR_DAT_049c1410 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if ((lStack_38 == 0) || (lVar8 == 0)) goto LAB_024e60bc;
          uVar7 = FUN_024f5708(lVar8,*(undefined8 *)(lStack_38 + 0x60),
                               *(undefined8 *)PTR_DAT_049c1a48);
          uVar9 = 0;
          if ((uVar7 & 1) == 0) {
            uVar9 = uVar2;
          }
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___RemoveRange_28d07ec
                  (param_3,uVar9,uVar1 - uVar9,*(undefined8 *)PTR_DAT_049c1a40);
      }
      return;
    }
  }
LAB_024e60bc:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

