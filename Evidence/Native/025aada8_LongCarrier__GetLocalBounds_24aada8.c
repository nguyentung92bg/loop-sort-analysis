/* IL2CPP: LongCarrier$$GetLocalBounds
UnityEngine_Bounds_o LongCarrier__GetLocalBounds (UnityEngine_Renderer_o* renderer, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LongCarrier$$GetLocalBounds
   UnityEngine_Bounds_o LongCarrier__GetLocalBounds (UnityEngine_Renderer_o* renderer, const
   MethodInfo* method); */

void LongCarrier__GetLocalBounds_24aada8(undefined8 *param_1,long *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  if ((bRam0000000004f4bb2e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c68d8);
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c68e0);
    bRam0000000004f4bb2e = 1;
  }
  lStack_28 = 0;
  if (param_2 == (long *)0x0) goto LAB_025aaf38;
  bVar1 = *(byte *)(*(long *)PTR_DAT_049c68e0 + 0x130);
  if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
     (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_049c68e0)) {
LAB_025aae84:
    uVar3 = UnityEngine_Component__TryGetComponent___Il2CppFullySharedGenericType__25c2438
                      (param_2,&lStack_28,*(undefined8 *)PTR_DAT_049c68d8);
    if ((uVar3 & 1) != 0) {
      if (lStack_28 == 0) goto LAB_025aaf38;
      uVar2 = UnityEngine_MeshFilter__get_sharedMesh_3befabc(lStack_28,0);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b3b98);
      }
      uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar2,0,0);
      if ((uVar3 & 1) != 0) {
        if (lStack_28 == 0) goto LAB_025aaf38;
        lVar4 = UnityEngine_MeshFilter__get_sharedMesh_3befabc(lStack_28,0);
        goto joined_r0x025aaef4;
      }
    }
    UnityEngine_Renderer__get_localBounds_3bdbeec(&uStack_40,param_2,0);
  }
  else {
    uVar2 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh_3befc8c(param_2,0);
    if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
      FUN_021f0574(*(long *)PTR_DAT_049b3b98);
    }
    uVar3 = UnityEngine_Object__op_Inequality_3c1b96c(uVar2,0,0);
    if ((uVar3 & 1) == 0) goto LAB_025aae84;
    lVar4 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh_3befc8c(param_2,0);
joined_r0x025aaef4:
    if (lVar4 == 0) {
LAB_025aaf38:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_Mesh__get_bounds_3bf1bc0(&uStack_40,lVar4,0);
  }
  param_1[1] = uStack_38;
  *param_1 = uStack_40;
  param_1[2] = uStack_30;
  return;
}

