/* IL2CPP: LoopSortConflictResolver$$SetEnabled
void LoopSortConflictResolver__SetEnabled (bool enabled, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver$$SetEnabled
   void LoopSortConflictResolver__SetEnabled (bool enabled, const MethodInfo* method); */

void LoopSortConflictResolver__SetEnabled_223de20(byte param_1)

{
  if (cRam0000000004f49bee == '\0') {
    FUN_021f03f8(PTR_DAT_049b5018);
    cRam0000000004f49bee = '\x01';
  }
  *(byte *)(*(long *)(*(long *)PTR_DAT_049b5018 + 0xb8) + 8) = param_1 & 1;
  return;
}

