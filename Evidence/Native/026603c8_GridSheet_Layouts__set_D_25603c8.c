/* IL2CPP: GridSheet.Layouts$$set_D
void GridSheet_Layouts__set_D (GridSheet_Layouts_o* __this, System_Collections_Generic_Dictionary_int__VerticalList_string___o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GridSheet.Layouts$$set_D
   void GridSheet_Layouts__set_D (GridSheet_Layouts_o* __this,
   System_Collections_Generic_Dictionary_int__VerticalList_string___o* value, const MethodInfo*
   method); */

void GridSheet_Layouts__set_D_25603c8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x30);
  *puVar1 = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

