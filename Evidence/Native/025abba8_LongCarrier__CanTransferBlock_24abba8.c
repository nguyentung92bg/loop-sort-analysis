/* IL2CPP: LongCarrier$$CanTransferBlock
bool LongCarrier__CanTransferBlock (LongCarrier_o* __this, Block_o* block, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LongCarrier$$CanTransferBlock
   bool LongCarrier__CanTransferBlock (LongCarrier_o* __this, Block_o* block, const MethodInfo*
   method); */

bool LongCarrier__CanTransferBlock_24abba8(long param_1,long param_2)

{
  if (*(char *)(param_1 + 0x118) == '\0') {
    return true;
  }
  if (param_2 != 0) {
    return *(long *)(param_2 + 0xe4) == *(long *)(param_1 + 0x110);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

