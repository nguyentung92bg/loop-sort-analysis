/* IL2CPP: BoosterSystem$$Dispose
void BoosterSystem__Dispose (BoosterSystem_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: BoosterSystem$$Dispose
   void BoosterSystem__Dispose (BoosterSystem_o* __this, const MethodInfo* method); */

void BoosterSystem__Dispose_24e575c(long param_1)

{
  undefined8 *puVar1;
  
  SystemBase__Dispose_2555efc(param_1,0);
                    /* try { // try from 025e576c to 026e5773 has its CatchHandler @ 025e5988 */
  if (*(long *)(param_1 + 0x48) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x48) + 0x30);
    *puVar1 = 0;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                   ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

