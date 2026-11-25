/* IL2CPP: LoopSortConflictResolver$$set_Enabled
void LoopSortConflictResolver__set_Enabled (bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver$$set_Enabled
   void LoopSortConflictResolver__set_Enabled (bool value, const MethodInfo* method); */

void LoopSortConflictResolver__set_Enabled_223dac0(byte param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_049b5018;
                    /* try { // try from 0233dac8 to 0243dacb has its CatchHandler @ 0233db14 */
  if ((bRam0000000004f49aec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5018);
    bRam0000000004f49aec = 1;
  }
  *(byte *)(*(long *)(*(long *)puVar1 + 0xb8) + 8) = param_1 & 1;
                    /* try { // try from 0233db08 to 0243db0f has its CatchHandler @ 0233db34 */
  return;
}

