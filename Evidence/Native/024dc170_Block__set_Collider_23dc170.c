/* IL2CPP: Block$$set_Collider
void Block__set_Collider (Block_o* __this, UnityEngine_SphereCollider_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$set_Collider
   void Block__set_Collider (Block_o* __this, UnityEngine_SphereCollider_o* value, const MethodInfo*
   method); */

void Block__set_Collider_23dc170(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x148) = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x148U >> 0xc & 0x3f),
                 (param_1 + 0x148U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

