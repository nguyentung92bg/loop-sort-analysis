/* IL2CPP: Block$$SetMeshOverrides
void Block__SetMeshOverrides (Block_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Mesh_o* groupMesh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Block$$SetMeshOverrides
   void Block__SetMeshOverrides (Block_o* __this, UnityEngine_Mesh_o* mesh, UnityEngine_Mesh_o*
   groupMesh, const MethodInfo* method); */

void Block__SetMeshOverrides_23dc610(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x110) = param_2;
  thunk_FUN_021f190c(param_1 + 0x110);
  *(undefined8 *)(param_1 + 0x118) = param_3;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x118U >> 0xc & 0x3f),
                 (param_1 + 0x118U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

