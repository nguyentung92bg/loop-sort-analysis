/* IL2CPP: Carrier$$DisableTransferEnter
void Carrier__DisableTransferEnter (Carrier_o* __this, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$DisableTransferEnter
   void Carrier__DisableTransferEnter (Carrier_o* __this, Il2CppObject* source, const MethodInfo*
   method); */

void Carrier__DisableTransferEnter_2408aa4(long param_1,undefined8 param_2)

{
                    /* try { // try from 02508aa8 to 02608af3 has its CatchHandler @ 02508ca4 */
  if ((bRam0000000004f4b6d2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4b6d2 = 1;
  }
  if (*(long *)(param_1 + 0x210) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(param_1 + 0x210),param_2,*(undefined8 *)PTR_DAT_049bb8b0);
                    /* try { // try from 02508af4 to 02608b0f has its CatchHandler @ 0250863c */
    *(undefined1 *)(param_1 + 0x1b3) = 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

