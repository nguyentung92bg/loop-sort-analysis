/* IL2CPP: HiddenBlock$$Reveal
void HiddenBlock__Reveal (HiddenBlock_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HiddenBlock$$Reveal
   void HiddenBlock__Reveal (HiddenBlock_o* __this, const MethodInfo* method); */

void HiddenBlock__Reveal_23e9bf8(long param_1)

{
  long lVar1;
  
                    /* try { // try from 024e9bf8 to 025e9bfb has its CatchHandler @ 024e9c00 */
                    /* catch() { ... } // from try @ 024e9a98 with catch @ 024e9bfc */
  lVar1 = *(long *)(param_1 + 0xb0);
                    /* catch() { ... } // from try @ 024e9bf8 with catch @ 024e9c00 */
                    /* catch() { ... } // from try @ 024e9bf0 with catch @ 024e9c04 */
  *(undefined1 *)(param_1 + 0xb8) = 1;
                    /* catch() { ... } // from try @ 024e9bd8 with catch @ 024e9c08 */
  if (lVar1 == 0) {
                    /* catch() { ... } // from try @ 024e9be8 with catch @ 024e9c10 */
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 024e9a30 with catch @ 024e9c14
                       catch() { ... } // from try @ 024e9bf4 with catch @ 024e9c14 */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4b5c2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c13f0);
    FUN_021f03f8(PTR_DAT_049c13f8);
    bRam0000000004f4b5c2 = 1;
  }
  if (*(long *)(lVar1 + 0x168) != 0) {
    System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
              (*(long *)(lVar1 + 0x168),param_1,*(undefined8 *)PTR_DAT_049c13f0);
    if (*(long *)(lVar1 + 0x168) != 0) {
      if (*(int *)(*(long *)(lVar1 + 0x168) + 0x20) < 1) {
        *(undefined1 *)(lVar1 + 0x15a) = 0;
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

