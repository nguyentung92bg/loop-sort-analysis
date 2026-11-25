/* IL2CPP: BlockPhysicsSystem$$OnConveyorSlotRemoveBlock
void BlockPhysicsSystem__OnConveyorSlotRemoveBlock (BlockPhysicsSystem_o* __this, ConveyorSlotRemoveBlockMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BlockPhysicsSystem$$OnConveyorSlotRemoveBlock
   void BlockPhysicsSystem__OnConveyorSlotRemoveBlock (BlockPhysicsSystem_o* __this,
   ConveyorSlotRemoveBlockMessage_o m, const MethodInfo* method); */

void BlockPhysicsSystem__OnConveyorSlotRemoveBlock_23e3f30
               (undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_3 != 0) && (*(long *)(param_3 + 0x140) != 0)) {
    UnityEngine_Rigidbody__set_isKinematic_3c8a7bc(*(long *)(param_3 + 0x140),1,0);
    lVar1 = *(long *)(param_3 + 0x140);
    if (lVar1 != 0) {
      if ((bRam0000000004f5a0cb & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a28848,0,0);
        bRam0000000004f5a0cb = 1;
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f5a150 == (code *)0x0) {
          pcRam0000000004f5a150 = (code *)FUN_021f03bc(&UNK_013e7281);
        }
                    /* WARNING: Could not recover jumptable at 0x03d8addc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f5a150)(lVar2,0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

