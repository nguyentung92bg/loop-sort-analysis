/* IL2CPP: UndoBoosterSystem$$OnBlockTransferComplete
void UndoBoosterSystem__OnBlockTransferComplete (UndoBoosterSystem_o* __this, BlockTransferCompleteMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UndoBoosterSystem$$OnBlockTransferComplete
   void UndoBoosterSystem__OnBlockTransferComplete (UndoBoosterSystem_o* __this,
   BlockTransferCompleteMessage_o m, const MethodInfo* method); */

void UndoBoosterSystem__OnBlockTransferComplete_2402eb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b69d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b69d = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Inequality_3c1b96c(param_2,uVar3,0);
  if ((uVar2 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}

