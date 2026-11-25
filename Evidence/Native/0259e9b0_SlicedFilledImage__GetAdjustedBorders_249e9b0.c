/* IL2CPP: SlicedFilledImage$$GetAdjustedBorders
UnityEngine_Vector4_o SlicedFilledImage__GetAdjustedBorders (SlicedFilledImage_o* __this, UnityEngine_Vector4_o border, UnityEngine_Rect_o adjustedRect, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$GetAdjustedBorders
   UnityEngine_Vector4_o SlicedFilledImage__GetAdjustedBorders (SlicedFilledImage_o* __this,
   UnityEngine_Vector4_o border, UnityEngine_Rect_o adjustedRect, const MethodInfo* method); */

float SlicedFilledImage__GetAdjustedBorders_249e9b0
                (float param_1,float param_2,float param_3,float param_4,undefined1 param_5 [16],
                undefined1 param_6 [16],float param_7,float param_8,undefined8 param_9)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fStack_38;
  float fStack_34;
  
  fStack_38 = param_4;
  fStack_34 = param_3;
  lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(param_9,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  UnityEngine_RectTransform__get_rect_3c2ba98(lVar3,0);
  iVar6 = 2;
  bVar2 = true;
  do {
    bVar1 = bVar2;
    fVar8 = param_3;
    if (!bVar1) {
      fVar8 = param_4;
    }
    if (fVar8 != 0.0) {
      pfVar7 = &fStack_34;
      fVar8 = param_7 / param_3;
      if (!bVar1) {
        pfVar7 = &fStack_38;
        fVar8 = param_8 / param_4;
      }
      iVar6 = 2;
      if (!bVar1) {
        iVar6 = 3;
      }
      fVar9 = (param_7 / param_3) * param_1;
      if (!bVar1) {
        fVar9 = param_1;
        param_2 = (param_8 / param_4) * param_2;
      }
      param_1 = fVar9;
      *pfVar7 = fVar8 * *pfVar7;
    }
    fVar8 = param_1;
    if (!bVar1) {
      fVar8 = param_2;
    }
    if (iVar6 == 2) {
      pfVar7 = &fStack_34;
    }
    else {
      if (iVar6 != 3) {
        thunk_FUN_02256840(PTR_DAT_049bc690);
        uVar4 = thunk_FUN_0222ca34();
        uVar5 = thunk_FUN_02256840(PTR_DAT_049bc698);
        System_IndexOutOfRangeException___ctor_30f97dc(uVar4,uVar5,0);
        uVar5 = thunk_FUN_02256840(PTR_DAT_049c64a8);
                    /* WARNING: Subroutine does not return */
        FUN_021f0564(uVar4,uVar5);
      }
      pfVar7 = &fStack_38;
    }
    fVar8 = fVar8 + *pfVar7;
    fVar9 = param_7;
    if (!bVar1) {
      fVar9 = param_8;
    }
    if ((fVar9 < fVar8) && (fVar8 != 0.0)) {
      if (bVar1) {
        fVar8 = param_7 / fVar8;
        pfVar7 = &fStack_34;
        param_1 = fVar8 * param_1;
        fVar9 = fStack_34;
      }
      else {
        fVar8 = param_8 / fVar8;
        pfVar7 = &fStack_38;
        param_2 = fVar8 * param_2;
        fVar9 = fStack_38;
      }
      *pfVar7 = fVar8 * fVar9;
    }
    iVar6 = 3;
    bVar2 = false;
  } while (bVar1);
  return param_1;
}

