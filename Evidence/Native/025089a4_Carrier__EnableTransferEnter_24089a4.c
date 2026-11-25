/* IL2CPP: Carrier$$EnableTransferEnter
void Carrier__EnableTransferEnter (Carrier_o* __this, Il2CppObject* source, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Carrier$$EnableTransferEnter
   void Carrier__EnableTransferEnter (Carrier_o* __this, Il2CppObject* source, const MethodInfo*
   method); */

void Carrier__EnableTransferEnter_24089a4(long param_1,undefined8 param_2)

{
                    /* try { // try from 025089ac to 026089af has its CatchHandler @ 02508bf4 */
  if ((bRam0000000004f4b6d1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0);
                    /* try { // try from 025089cc to 026089d3 has its CatchHandler @ 02508bec */
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4b6d1 = 1;
  }
                    /* try { // try from 025089e0 to 026089e3 has its CatchHandler @ 02508bf4 */
  if (*(long *)(param_1 + 0x210) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(param_1 + 0x210),param_2,*(undefined8 *)PTR_DAT_049c13f0);
    if (*(long *)(param_1 + 0x210) != 0) {
                    /* try { // try from 02508a08 to 02608a13 has its CatchHandler @ 02508c04 */
      if (*(int *)(*(long *)(param_1 + 0x210) + 0x20) < 1) {
        *(undefined1 *)(param_1 + 0x1b3) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

