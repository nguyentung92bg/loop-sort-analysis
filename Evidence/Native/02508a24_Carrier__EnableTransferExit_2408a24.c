/* IL2CPP: Carrier$$EnableTransferExit
void Carrier__EnableTransferExit (Carrier_o* __this, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$EnableTransferExit
   void Carrier__EnableTransferExit (Carrier_o* __this, Il2CppObject* source, const MethodInfo*
   method); */

void Carrier__EnableTransferExit_2408a24(long param_1,undefined8 param_2)

{
                    /* try { // try from 02508a24 to 02608a2f has its CatchHandler @ 02508c28 */
                    /* try { // try from 02508a30 to 02608a87 has its CatchHandler @ 0250863c */
  if ((bRam0000000004f4b6d3 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0);
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4b6d3 = 1;
  }
  if (*(long *)(param_1 + 0x218) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0x218),param_2,*(undefined8 *)PTR_DAT_049c13f0);
    if (*(long *)(param_1 + 0x218) != 0) {
                    /* try { // try from 02508a88 to 02608a8f has its CatchHandler @ 02508c48 */
      if (*(int *)(*(long *)(param_1 + 0x218) + 0x20) < 1) {
        *(undefined1 *)(param_1 + 0x1b4) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

