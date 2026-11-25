/* IL2CPP: SheetContainer$$set_Nicknames
void SheetContainer__set_Nicknames (SheetContainer_o* __this, NicknameSheet_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetContainer$$set_Nicknames
   void SheetContainer__set_Nicknames (SheetContainer_o* __this, NicknameSheet_o* value, const
   MethodInfo* method); */

void SheetContainer__set_Nicknames_25658e0(long param_1,undefined8 param_2)

{
                    /* try { // try from 026658e0 to 027658e3 has its CatchHandler @ 02665a38 */
  *(undefined8 *)(param_1 + 0x140) = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x140U >> 0xc & 0x3f),
                 (param_1 + 0x140U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

