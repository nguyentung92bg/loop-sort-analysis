/* IL2CPP: Block$$DisableTransferExit
void Block__DisableTransferExit (Block_o* __this, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$DisableTransferExit
   void Block__DisableTransferExit (Block_o* __this, Il2CppObject* source, const MethodInfo*
   method); */

void Block__DisableTransferExit_23dcf8c(long param_1,undefined8 param_2)

{
  if ((bRam0000000004f4b5c3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4b5c3 = 1;
  }
  if (*(long *)(param_1 + 0x168) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(param_1 + 0x168),param_2,*(undefined8 *)PTR_DAT_049bb8b0);
    *(undefined1 *)(param_1 + 0x15a) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

