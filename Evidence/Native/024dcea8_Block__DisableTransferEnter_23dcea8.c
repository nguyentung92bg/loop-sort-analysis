/* IL2CPP: Block$$DisableTransferEnter
void Block__DisableTransferEnter (Block_o* __this, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$DisableTransferEnter
   void Block__DisableTransferEnter (Block_o* __this, Il2CppObject* source, const MethodInfo*
   method); */

void Block__DisableTransferEnter_23dcea8(long param_1,undefined8 param_2)

{
  if ((bRam0000000004f4b5c1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4b5c1 = 1;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(param_1 + 0x160),param_2,*(undefined8 *)PTR_DAT_049bb8b0);
    *(undefined1 *)(param_1 + 0x159) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

