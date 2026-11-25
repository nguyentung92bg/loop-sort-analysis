/* IL2CPP: SheetContainer$$set_Grids
void SheetContainer__set_Grids (SheetContainer_o* __this, GridSheet_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetContainer$$set_Grids
   void SheetContainer__set_Grids (SheetContainer_o* __this, GridSheet_o* value, const MethodInfo*
   method); */

void SheetContainer__set_Grids_25658f8(long param_1,undefined8 param_2)

{
                    /* try { // try from 02665900 to 0276596b has its CatchHandler @ 026659f8 */
  *(undefined8 *)(param_1 + 0x148) = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x148U >> 0xc & 0x3f),
                 (param_1 + 0x148U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

