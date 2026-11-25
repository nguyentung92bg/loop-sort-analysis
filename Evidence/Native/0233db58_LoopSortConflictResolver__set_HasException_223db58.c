/* IL2CPP: LoopSortConflictResolver$$set_HasException
void LoopSortConflictResolver__set_HasException (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver$$set_HasException
   void LoopSortConflictResolver__set_HasException (bool value, const MethodInfo* method); */

void LoopSortConflictResolver__set_HasException_223db58(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_049b5018;
  if ((bRam0000000004f49aee & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5018);
    bRam0000000004f49aee = 1;
  }
  *(byte *)(*(long *)(*(long *)puVar1 + 0xb8) + 9) = param_1 & 1;
  return;
}

