/* IL2CPP: Block$$EnableTransferEnter
void Block__EnableTransferEnter (Block_o* __this, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$EnableTransferEnter
   void Block__EnableTransferEnter (Block_o* __this, Il2CppObject* source, const MethodInfo*
   method); */

void Block__EnableTransferEnter_23dce28(long param_1,undefined8 param_2)

{
  if ((bRam0000000004f4b5c0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0);
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4b5c0 = 1;
  }
  if (*(long *)(param_1 + 0x160) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0x160),param_2,*(undefined8 *)PTR_DAT_049c13f0);
    if (*(long *)(param_1 + 0x160) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x160) + 0x20) < 1) {
        *(undefined1 *)(param_1 + 0x159) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

