/* IL2CPP: SplineSheet.Layout$$set_Data
void SplineSheet_Layout__set_Data (SplineSheet_Layout_o* __this, SplineSheet_Grid_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SplineSheet.Layout$$set_Data
   void SplineSheet_Layout__set_Data (SplineSheet_Layout_o* __this, SplineSheet_Grid_o value, const
   MethodInfo* method); */

void SplineSheet_Layout__set_Data_25678a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x40);
  *puVar1 = param_2;
  *(undefined8 *)(param_1 + 0x48) = param_3;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

