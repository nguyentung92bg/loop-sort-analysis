/* IL2CPP: HomePopupSheet.Row$$set_Type
void HomePopupSheet_Row__set_Type (HomePopupSheet_Row_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomePopupSheet.Row$$set_Type
   void HomePopupSheet_Row__set_Type (HomePopupSheet_Row_o* __this, System_String_o* value, const
   MethodInfo* method); */

void HomePopupSheet_Row__set_Type_256182c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = param_2;
                    /* try { // try from 02661830 to 0276183f has its CatchHandler @ 02661b78 */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

