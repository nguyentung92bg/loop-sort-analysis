/* IL2CPP: LiveOpsSheet.Row$$set_WeeklyScheduleUtc
void LiveOpsSheet_Row__set_WeeklyScheduleUtc (LiveOpsSheet_Row_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsSheet.Row$$set_WeeklyScheduleUtc
   void LiveOpsSheet_Row__set_WeeklyScheduleUtc (LiveOpsSheet_Row_o* __this, System_String_o* value,
   const MethodInfo* method); */

void LiveOpsSheet_Row__set_WeeklyScheduleUtc_2562fd8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
                    /* try { // try from 02662fd8 to 02762fef has its CatchHandler @ 026633e0 */
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

