/* IL2CPP: Carrier$$EnableTransfer
void Carrier__EnableTransfer (Carrier_o* __this, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$EnableTransfer
   void Carrier__EnableTransfer (Carrier_o* __this, Il2CppObject* source, const MethodInfo* method);
    */

void Carrier__EnableTransfer_23fe4dc(long param_1,undefined8 param_2)

{
  Carrier__EnableTransferEnter_24089a4();
  if ((bRam0000000004f4b6d3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0);
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4b6d3 = 1;
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0x218),param_2,*(undefined8 *)PTR_DAT_049c13f0);
    if (*(long *)(param_1 + 0x218) != 0) {
      if (*(int *)(*(long *)(param_1 + 0x218) + 0x20) < 1) {
        *(undefined1 *)(param_1 + 0x1b4) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

