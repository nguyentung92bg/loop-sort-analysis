/* IL2CPP: LondonTripSheet.Row$$set_Gifts
void LondonTripSheet_Row__set_Gifts (LondonTripSheet_Row_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LondonTripSheet.Row$$set_Gifts
   void LondonTripSheet_Row__set_Gifts (LondonTripSheet_Row_o* __this, System_String_o* value, const
   MethodInfo* method); */

void LondonTripSheet_Row__set_Gifts_2564a88(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
                    /* catch() { ... } // from try @ 02664a7c with catch @ 02664a88 */
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *puVar1 = param_2;
                    /* try { // try from 02664a8c to 02764c03 has its CatchHandler @ 02664a8c
                       catch() { ... } // from try @ 02664a8c with catch @ 02664a8c
                       catch() { ... } // from try @ 02665170 with catch @ 02664a8c
                       catch() { ... } // from try @ 0266519c with catch @ 02664a8c
                       catch() { ... } // from try @ 026652fc with catch @ 02664a8c
                       catch() { ... } // from try @ 02665380 with catch @ 02664a8c */
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

