/* IL2CPP: LoopSortConflictResolver$$get_HasException
bool LoopSortConflictResolver__get_HasException (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver$$get_HasException
   bool LoopSortConflictResolver__get_HasException (const MethodInfo* method); */

undefined1 LoopSortConflictResolver__get_HasException_223db10(void)

{
  undefined *puVar1;
  
                    /* catch() { ... } // from try @ 0233da6c with catch @ 0233db10
                       try { // try from 0233db10 to 0243db5f has its CatchHandler @ 0233da04 */
  puVar1 = PTR_DAT_049b5018;
                    /* catch() { ... } // from try @ 0233dac8 with catch @ 0233db14 */
                    /* catch() { ... } // from try @ 0233daac with catch @ 0233db18 */
  if ((bRam0000000004f49aed & 1) == 0) {
                    /* catch() { ... } // from try @ 0233daa0 with catch @ 0233db2c */
                    /* catch() { ... } // from try @ 0233da7c with catch @ 0233db34
                       catch() { ... } // from try @ 0233db08 with catch @ 0233db34 */
    FUN_021f03f8(PTR_DAT_049b5018);
    bRam0000000004f49aed = 1;
  }
  return *(undefined1 *)(*(long *)(*(long *)puVar1 + 0xb8) + 9);
}

