/* IL2CPP: BlockTransferSystem$$TransferNextBlocks
void BlockTransferSystem__TransferNextBlocks (BlockTransferSystem_o* __this, Carrier_o* carrier, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$TransferNextBlocks
   void BlockTransferSystem__TransferNextBlocks (BlockTransferSystem_o* __this, Carrier_o* carrier,
   const MethodInfo* method); */

void BlockTransferSystem__TransferNextBlocks_23e5d78(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  long *plVar9;
  long lStack_38;
  
  if ((bRam0000000004f4b5f5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1a28);
    FUN_021f03f8(PTR_DAT_049c1a30);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1a38);
    bRam0000000004f4b5f5 = 1;
  }
  lStack_38 = 0;
  if (param_2 == 0) {
LAB_024e5f34:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar3 = Carrier__CanBeginTransferExit_23fec98(param_2,0);
  if ((uVar3 & 1) != 0) {
    if ((*(char *)(param_2 + 0x1b0) == '\0') &&
       (uVar3 = Carrier__IsAddingBlocks_2409ec0(param_2,0), (uVar3 & 1) != 0)) {
      uVar4 = Carrier__GetNextColorType_24095f4(param_2,0);
      Carrier__AddRejectedColorType_24087a4(param_2,uVar4,0);
    }
    else {
      uVar3 = Carrier__IsTransferringOrAddingBlocks_23fad2c(param_2,0);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
    lVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c1a38);
    System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
              (lVar5,*(undefined8 *)PTR_DAT_049c1a30);
    Carrier__FindNextTransferBlocks_23fb3d4(param_2,lVar5,0);
    if (lVar5 == 0) goto LAB_024e5f34;
    iVar1 = *(int *)(lVar5 + 0x18);
    BlockTransferSystem__TrimBlocks_23e5f38(param_1,param_2,lVar5);
    if ((0 < iVar1) && (*(int *)(lVar5 + 0x18) == 0)) {
      plVar9 = *(long **)(param_1 + 0x88);
      lStack_38 = param_2;
      thunk_FUN_021f190c(&lStack_38,param_2);
      lVar2 = lStack_38;
      if (plVar9 == (long *)0x0) goto LAB_024e5f34;
      lVar7 = *plVar9;
      uVar3 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar3 != 0) {
        piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049c1a28) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_024e5f00;
          }
          uVar3 = uVar3 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar3 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049c1a28,0);
LAB_024e5f00:
      (*(code *)*puVar6)(plVar9,lVar2,puVar6[1]);
    }
    BlockTransferSystem__TransferBlocks_23e60c0(param_1,param_2,lVar5);
  }
  return;
}

