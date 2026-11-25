/* IL2CPP: ConveyorSlot$$HasElement
bool ConveyorSlot__HasElement (ConveyorSlot_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConveyorSlot$$HasElement
   bool ConveyorSlot__HasElement (ConveyorSlot_o* __this, const MethodInfo* method); */

bool ConveyorSlot__HasElement_24b100c(long param_1)

{
  if ((bRam0000000004f4bb7c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c1550);
    bRam0000000004f4bb7c = 1;
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    return 0 < *(int *)(*(long *)(param_1 + 0xf8) + 0x18);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

