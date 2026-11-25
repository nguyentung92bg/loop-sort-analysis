/* IL2CPP: Block$$set_MeshFilter
void Block__set_MeshFilter (Block_o* __this, UnityEngine_MeshFilter_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$set_MeshFilter
   void Block__set_MeshFilter (Block_o* __this, UnityEngine_MeshFilter_o* value, const MethodInfo*
   method); */

void Block__set_MeshFilter_23dc0d0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x108) = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x108U >> 0xc & 0x3f),
                 (param_1 + 0x108U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

