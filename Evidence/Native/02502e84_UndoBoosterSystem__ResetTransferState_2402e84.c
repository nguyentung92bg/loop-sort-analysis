/* IL2CPP: UndoBoosterSystem$$ResetTransferState
void UndoBoosterSystem__ResetTransferState (UndoBoosterSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: UndoBoosterSystem$$ResetTransferState
   void UndoBoosterSystem__ResetTransferState (UndoBoosterSystem_o* __this, const MethodInfo*
   method); */

void UndoBoosterSystem__ResetTransferState_2402e84(long param_1)

{
  undefined8 *puVar1;
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  thunk_FUN_021f190c((undefined8 *)(param_1 + 0x50),0);
  puVar1 = (undefined8 *)(param_1 + 0x58);
  *puVar1 = 0;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

