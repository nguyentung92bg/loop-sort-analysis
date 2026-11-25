/* IL2CPP: Block$$SetFeature
void Block__SetFeature (Block_o* __this, IBlockFeature_o* feature, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$SetFeature
   void Block__SetFeature (Block_o* __this, IBlockFeature_o* feature, const MethodInfo* method); */

void Block__SetFeature_23dc710(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x150) = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x150U >> 0xc & 0x3f),
                 (param_1 + 0x150U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

