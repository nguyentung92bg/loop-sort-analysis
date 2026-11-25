/* IL2CPP: HomeSceneView$$Stretch
void HomeSceneView__Stretch (UnityEngine_RectTransform_o* rt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneView$$Stretch
   void HomeSceneView__Stretch (UnityEngine_RectTransform_o* rt, const MethodInfo* method); */

void HomeSceneView__Stretch_242881c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (cRam0000000004f49d57 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f49d57 = '\x01';
  }
  puVar1 = PTR_DAT_049b8a18;
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_RectTransform__set_anchorMin_3c2bc3c
            (**(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8),
             (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1],param_1,0);
  if (cRam0000000004f4a194 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f4a194 = '\x01';
  }
  lVar2 = *(long *)(*(long *)puVar1 + 0xb8);
  UnityEngine_RectTransform__set_anchorMax_3c2bdd0
            (*(undefined4 *)(lVar2 + 8),*(undefined4 *)(lVar2 + 0xc),param_1,0);
  if (cRam0000000004f49d57 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f49d57 = '\x01';
  }
                    /* try { // try from 025288d4 to 026288df has its CatchHandler @ 025289f8 */
  pfVar3 = *(float **)(*(long *)puVar1 + 0xb8);
  fVar8 = *pfVar3;
  UnityEngine_RectTransform__set_offsetMax_3c2c6c8(fVar8,pfVar3[1],param_1,0);
  fVar4 = (float)UnityEngine_RectTransform__get_anchoredPosition_3c2be98(param_1,0);
  fVar5 = (float)UnityEngine_RectTransform__get_sizeDelta_3c2c02c(param_1);
  fVar6 = (float)UnityEngine_RectTransform__get_pivot_3c2c1c0(param_1);
  fVar7 = (float)UnityEngine_RectTransform__get_sizeDelta_3c2c02c(param_1);
  UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
            (fVar7 - (fVar8 - (fVar4 - fVar5 * fVar6)),param_1);
  UnityEngine_RectTransform__get_anchoredPosition_3c2be98(param_1);
                    /* try { // try from 025288fc to 026288ff has its CatchHandler @ 025289ec */
  if (cRam0000000004f4a194 == '\0') {
    FUN_021f03f8(PTR_DAT_049b8a18);
    cRam0000000004f4a194 = '\x01';
  }
  UnityEngine_RectTransform__get_pivot_3c2c1c0(param_1);
  if ((bRam0000000004f58960 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_04a26c78);
    bRam0000000004f58960 = 1;
  }
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(param_1,0);
    }
    if (pcRam0000000004f589a8 == (code *)0x0) {
      pcRam0000000004f589a8 = (code *)FUN_021f03bc(&UNK_013cb96e);
    }
    (*pcRam0000000004f589a8)(lVar2,&stack0xffffffffffffffe8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

