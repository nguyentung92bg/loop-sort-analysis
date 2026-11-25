/* IL2CPP: HighlightModule$$CombineSubmeshes
void HighlightModule__CombineSubmeshes (HighlightModule_o* __this, UnityEngine_Mesh_o* mesh, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HighlightModule$$CombineSubmeshes
   void HighlightModule__CombineSubmeshes (HighlightModule_o* __this, UnityEngine_Mesh_o* mesh,
   const MethodInfo* method); */

void HighlightModule__CombineSubmeshes_254df88(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((bRam0000000004f4c05c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cab60);
    bRam0000000004f4c05c = 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar3 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                      (*(long *)(param_1 + 0x40),param_2,*(undefined8 *)PTR_DAT_049cab60);
    if ((uVar3 & 1) != 0) {
      if (param_2 == 0) goto LAB_0264e054;
      iVar1 = UnityEngine_Mesh__get_subMeshCount_3bf1a48(param_2,0);
      if (iVar1 != 1) {
        iVar1 = UnityEngine_Mesh__get_subMeshCount_3bf1a48(param_2,0);
        UnityEngine_Mesh__set_subMeshCount_3bf1afc(param_2,iVar1 + 1,0);
        uVar4 = UnityEngine_Mesh__get_triangles_3bf3ed8(param_2,0);
        iVar1 = UnityEngine_Mesh__get_subMeshCount_3bf1a48(param_2,0);
        iVar1 = iVar1 + -1;
        uVar2 = UnityEngine_NoAllocHelpers__SafeLength_3c208e4(uVar4,0,iVar1,0);
        uVar3 = UnityEngine_Mesh__CheckCanAccessSubmesh_3bf3dc4(param_2,iVar1,1,uVar2);
        if ((uVar3 & 1) != 0) {
          uVar3 = UnityEngine_NoAllocHelpers__SafeLength_3c208e4(uVar4,0);
          UnityEngine_Mesh__CheckIndicesArrayRange_3bf44fc(uVar3,uVar3 & 0xffffffff,0,uVar2);
          UnityEngine_Mesh__SetIndicesImpl_3bf0640(param_2,iVar1,0,1,uVar4,0,uVar2,1,0);
        }
        return;
      }
    }
    return;
  }
LAB_0264e054:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

