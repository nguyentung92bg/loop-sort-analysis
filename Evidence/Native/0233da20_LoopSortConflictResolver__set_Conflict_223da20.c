/* IL2CPP: LoopSortConflictResolver$$set_Conflict
void LoopSortConflictResolver__set_Conflict (CloudSaveConflict_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LoopSortConflictResolver$$set_Conflict
   void LoopSortConflictResolver__set_Conflict (CloudSaveConflict_o* value, const MethodInfo*
   method); */

void LoopSortConflictResolver__set_Conflict_223da20(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  puVar1 = PTR_DAT_049b5018;
  if ((bRam0000000004f49aea & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5018);
    bRam0000000004f49aea = 1;
  }
  **(undefined8 **)(*(long *)puVar1 + 0xb8) = param_1;
                    /* try { // try from 0233da6c to 0243da73 has its CatchHandler @ 0233db10 */
  uVar2 = *(ulong *)(*(long *)puVar1 + 0xb8);
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (uVar2 >> 0xc & 0x3f),(uVar2 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

