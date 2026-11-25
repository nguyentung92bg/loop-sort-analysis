/* IL2CPP: GridSheet.Layouts$$set_A
void GridSheet_Layouts__set_A (GridSheet_Layouts_o* __this, System_Collections_Generic_Dictionary_int__VerticalList_string___o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GridSheet.Layouts$$set_A
   void GridSheet_Layouts__set_A (GridSheet_Layouts_o* __this,
   System_Collections_Generic_Dictionary_int__VerticalList_string___o* value, const MethodInfo*
   method); */

void GridSheet_Layouts__set_A_2560398(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

