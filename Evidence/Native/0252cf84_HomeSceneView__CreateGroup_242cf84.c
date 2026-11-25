/* IL2CPP: HomeSceneView$$CreateGroup
UnityEngine_RectTransform_o* HomeSceneView__CreateGroup (HomeSceneView_o* __this, bool screen, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$CreateGroup
   UnityEngine_RectTransform_o* HomeSceneView__CreateGroup (HomeSceneView_o* __this, bool screen,
   const MethodInfo* method); */

long HomeSceneView__CreateGroup_242cf84(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  puVar3 = PTR_DAT_049c3690;
  puVar1 = (undefined8 *)PTR_DAT_049c3688;
  puVar2 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b7b9 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3688);
    FUN_021f03f8(PTR_DAT_049c3690);
    bRam0000000004f4b7b9 = 1;
  }
  if ((param_2 & 1) == 0) {
    puVar1 = (undefined8 *)puVar3;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uVar6 = *puVar1;
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar4 = HomeSceneView__CreateNode_2426d00(uVar6,uVar7);
  HomeSceneView__StretchTopLeft_242d4c4();
  if ((param_2 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x40);
    if ((lVar5 == 0) || (lVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar8 = *(float *)(lVar5 + 0x24);
    fVar10 = *(float *)(lVar5 + 0x28);
    fVar9 = *(float *)(lVar5 + 0x2c);
    UnityEngine_Transform__set_localScale_3c2ddfc(fVar8,fVar8,0x3f800000,lVar4,0);
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (fVar10 * (1.0 - fVar8),-(fVar9 * (1.0 - fVar8)),lVar4,0);
  }
  return lVar4;
}

