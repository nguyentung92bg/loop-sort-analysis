/* IL2CPP: OutlineModule$$CombineSubmeshes
void OutlineModule__CombineSubmeshes (OutlineModule_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: OutlineModule$$CombineSubmeshes
   void OutlineModule__CombineSubmeshes (OutlineModule_o* __this, UnityEngine_Mesh_o* mesh, const
   MethodInfo* method); */

void OutlineModule__CombineSubmeshes_254f400(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar1 = UnityEngine_Mesh__get_subMeshCount_3bf1a48(param_2,0);
  if (iVar1 == 1) {
    return;
  }
  iVar1 = UnityEngine_Mesh__get_subMeshCount_3bf1a48(param_2,0);
  UnityEngine_Mesh__set_subMeshCount_3bf1afc(param_2,iVar1 + 1,0);
  uVar3 = UnityEngine_Mesh__get_triangles_3bf3ed8(param_2,0);
  iVar1 = UnityEngine_Mesh__get_subMeshCount_3bf1a48(param_2,0);
  iVar1 = iVar1 + -1;
  uVar2 = UnityEngine_NoAllocHelpers__SafeLength_3c208e4(uVar3,0,iVar1,0);
  uVar4 = UnityEngine_Mesh__CheckCanAccessSubmesh_3bf3dc4(param_2,iVar1,1,uVar2);
  if ((uVar4 & 1) != 0) {
    uVar4 = UnityEngine_NoAllocHelpers__SafeLength_3c208e4(uVar3,0);
    UnityEngine_Mesh__CheckIndicesArrayRange_3bf44fc(uVar4,uVar4 & 0xffffffff,0,uVar2);
    UnityEngine_Mesh__SetIndicesImpl_3bf0640(param_2,iVar1,0,1,uVar3,0,uVar2,1,0);
  }
  return;
}

