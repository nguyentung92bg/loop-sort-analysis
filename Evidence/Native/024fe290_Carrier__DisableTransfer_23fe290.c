/* IL2CPP: Carrier$$DisableTransfer
void Carrier__DisableTransfer (Carrier_o* __this, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$DisableTransfer
   void Carrier__DisableTransfer (Carrier_o* __this, Il2CppObject* source, const MethodInfo*
   method); */

void Carrier__DisableTransfer_23fe290(long param_1,undefined8 param_2)

{
  Carrier__DisableTransferEnter_2408aa4();
  if ((bRam0000000004f4b6d4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4b6d4 = 1;
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(param_1 + 0x218),param_2,*(undefined8 *)PTR_DAT_049bb8b0);
    *(undefined1 *)(param_1 + 0x1b4) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

