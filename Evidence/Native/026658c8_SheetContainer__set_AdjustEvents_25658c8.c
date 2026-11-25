/* IL2CPP: SheetContainer$$set_AdjustEvents
void SheetContainer__set_AdjustEvents (SheetContainer_o* __this, AdjustEventSheet_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetContainer$$set_AdjustEvents
   void SheetContainer__set_AdjustEvents (SheetContainer_o* __this, AdjustEventSheet_o* value, const
   MethodInfo* method); */

void SheetContainer__set_AdjustEvents_25658c8(long param_1,undefined8 param_2)

{
                    /* try { // try from 026658cc to 027658d7 has its CatchHandler @ 02665a04 */
  *(undefined8 *)(param_1 + 0x138) = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x138U >> 0xc & 0x3f),
                 (param_1 + 0x138U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

