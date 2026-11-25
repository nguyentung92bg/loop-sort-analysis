/* IL2CPP: Carrier$$IsTransferringOrAddingBlocks
bool Carrier__IsTransferringOrAddingBlocks (Carrier_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$IsTransferringOrAddingBlocks
   bool Carrier__IsTransferringOrAddingBlocks (Carrier_o* __this, const MethodInfo* method); */

bool Carrier__IsTransferringOrAddingBlocks_23fad2c(long param_1)

{
  if (*(char *)(param_1 + 0x1b0) != '\0') {
    return true;
  }
  if ((bRam0000000004f4b6ec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c28e0);
    bRam0000000004f4b6ec = 1;
  }
  if (*(long *)(param_1 + 0x1f8) != 0) {
    return 0 < *(int *)(*(long *)(param_1 + 0x1f8) + 0x20);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

