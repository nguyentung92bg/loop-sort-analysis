/* IL2CPP: Carrier$$DisableTransferExit
void Carrier__DisableTransferExit (Carrier_o* __this, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$DisableTransferExit
   void Carrier__DisableTransferExit (Carrier_o* __this, Il2CppObject* source, const MethodInfo*
   method); */

void Carrier__DisableTransferExit_2408b08(long param_1,undefined8 param_2)

{
                    /* try { // try from 02508b10 to 02608b13 has its CatchHandler @ 02508ca4 */
  if ((bRam0000000004f4b6d4 & 1) == 0) {
                    /* try { // try from 02508b2c to 02608b33 has its CatchHandler @ 02508c2c */
    FUN_021f03f8(PTR_DAT_049bb8b0);
    bRam0000000004f4b6d4 = 1;
  }
  if (*(long *)(param_1 + 0x218) != 0) {
                    /* try { // try from 02508b40 to 02608b4b has its CatchHandler @ 02508c40 */
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
              (*(long *)(param_1 + 0x218),param_2,*(undefined8 *)PTR_DAT_049bb8b0);
    *(undefined1 *)(param_1 + 0x1b4) = 1;
                    /* try { // try from 02508b60 to 02608b67 has its CatchHandler @ 02508c3c */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02508b68 to 02608bbb has its CatchHandler @ 0250863c */
  FUN_021f06a0();
}

