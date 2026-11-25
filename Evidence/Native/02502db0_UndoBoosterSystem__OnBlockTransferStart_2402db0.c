/* IL2CPP: UndoBoosterSystem$$OnBlockTransferStart
void UndoBoosterSystem__OnBlockTransferStart (UndoBoosterSystem_o* __this, BlockTransferStartMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UndoBoosterSystem$$OnBlockTransferStart
   void UndoBoosterSystem__OnBlockTransferStart (UndoBoosterSystem_o* __this,
   BlockTransferStartMessage_o m, const MethodInfo* method); */

void UndoBoosterSystem__OnBlockTransferStart_2402db0
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = UndoBoosterSystem__AreAllBlocksGrouped_2402e20(param_1,param_3);
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),0);
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = param_2;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),param_2);
    *(undefined8 *)(param_1 + 0x58) = param_3;
  }
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x58U >> 0xc & 0x3f),
                 (param_1 + 0x58U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

