/* IL2CPP: BlockTransferSystem$$GetConveyorBlockCount
int32_t BlockTransferSystem__GetConveyorBlockCount (BlockTransferSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockTransferSystem$$GetConveyorBlockCount
   int32_t BlockTransferSystem__GetConveyorBlockCount (BlockTransferSystem_o* __this, const
   MethodInfo* method); */

int BlockTransferSystem__GetConveyorBlockCount_23e6ee0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  undefined8 uStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lStack_40;
  long lStack_38;
  
  if ((bRam0000000004f4b5fb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1a08);
    FUN_021f03f8(PTR_DAT_049c1550);
    FUN_021f03f8(PTR_DAT_049c1ad0);
    bRam0000000004f4b5fb = 1;
  }
  puVar2 = PTR_DAT_049c1ad0;
  lVar5 = *(long *)(param_1 + 0x98);
  uStack_60 = 0;
  lStack_58 = 0;
  lStack_50 = 0;
  if (lVar5 != 0) {
    lStack_40 = 0;
    lStack_38 = 0;
    lStack_48 = (ulong)*(uint *)(lVar5 + 0x30) << 0x20;
    thunk_FUN_021f190c(&lStack_40,0);
    lStack_38 = *(long *)(lVar5 + 0x28);
    thunk_FUN_021f190c(&lStack_38);
    iVar4 = 0;
    lStack_58 = lStack_40;
    uStack_60 = lStack_48;
    lStack_50 = lStack_38;
    while( true ) {
      iVar1 = (int)uStack_60 + -1;
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar1);
      if (iVar1 < 0) {
        uStack_60._4_4_ = uStack_60._4_4_ - 1;
        if ((int)uStack_60._4_4_ < 0) {
          return iVar4;
        }
        lVar5 = *(long *)(lStack_50 + (ulong)uStack_60._4_4_ * 8 + 0x20);
        lStack_58 = *(long *)(lVar5 + 0x18);
        uStack_60._0_4_ = iVar1;
        thunk_FUN_021f190c((ulong)&uStack_60 | 8);
        iVar1 = *(int *)(lVar5 + 0x30) + -1;
        uStack_60 = CONCAT44(uStack_60._4_4_,iVar1);
      }
      if (*(long *)(param_1 + 0xa8) == 0) break;
      plVar3 = (long *)FUN_024f6008(*(long *)(param_1 + 0xa8),
                                    *(undefined8 *)(lStack_58 + (long)iVar1 * 8 + 0x20),
                                    *(undefined8 *)puVar2);
      if ((*plVar3 == 0) || (lVar5 = *(long *)(*plVar3 + 0xf8), lVar5 == 0)) break;
      iVar4 = *(int *)(lVar5 + 0x18) + iVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

