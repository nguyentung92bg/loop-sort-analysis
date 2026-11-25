/* IL2CPP: LoopSortConflictResolver$$get_Conflict
CloudSaveConflict_o* LoopSortConflictResolver__get_Conflict (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver$$get_Conflict
   CloudSaveConflict_o* LoopSortConflictResolver__get_Conflict (const MethodInfo* method); */

undefined8 LoopSortConflictResolver__get_Conflict_223d9d8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_049b5018;
                    /* catch() { ... } // from try @ 0233d9ac with catch @ 0233d9e8 */
  if ((bRam0000000004f49ae9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5018);
                    /* try { // try from 0233da04 to 0243da6b has its CatchHandler @ 0233da04
                       catch() { ... } // from try @ 0233da04 with catch @ 0233da04
                       catch() { ... } // from try @ 0233db10 with catch @ 0233da04 */
    bRam0000000004f49ae9 = 1;
  }
  return **(undefined8 **)(*(long *)puVar1 + 0xb8);
}

