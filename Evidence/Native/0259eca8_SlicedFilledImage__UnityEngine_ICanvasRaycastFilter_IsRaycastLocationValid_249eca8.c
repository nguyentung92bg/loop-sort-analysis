/* IL2CPP: SlicedFilledImage$$UnityEngine.ICanvasRaycastFilter.IsRaycastLocationValid
bool SlicedFilledImage__UnityEngine_ICanvasRaycastFilter_IsRaycastLocationValid (SlicedFilledImage_o* __this, UnityEngine_Vector2_o screenPoint, UnityEngine_Camera_o* eventCamera, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$UnityEngine.ICanvasRaycastFilter.IsRaycastLocationValid
   bool SlicedFilledImage__UnityEngine_ICanvasRaycastFilter_IsRaycastLocationValid
   (SlicedFilledImage_o* __this, UnityEngine_Vector2_o screenPoint, UnityEngine_Camera_o*
   eventCamera, const MethodInfo* method); */

bool SlicedFilledImage__UnityEngine_ICanvasRaycastFilter_IsRaycastLocationValid_249eca8
               (undefined4 param_1,float param_2,float param_3,float param_4,long param_5,
               undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fStack_28;
  float fStack_24;
  
  if ((bRam0000000004f4badb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
                    /* try { // try from 0259ecf4 to 0269eda3 has its CatchHandler @ 0259ecf4
                       catch() { ... } // from try @ 0259ecf4 with catch @ 0259ecf4
                       catch() { ... } // from try @ 0259edc0 with catch @ 0259ecf4
                       catch() { ... } // from try @ 0259eef4 with catch @ 0259ecf4 */
    FUN_021f03f8(PTR_DAT_049c2f30);
    bRam0000000004f4badb = 1;
  }
  fStack_28 = 0.0;
  fStack_24 = 0.0;
  if (*(float *)(param_5 + 0xf8) <= 0.0) {
LAB_0259ed60:
    bVar3 = true;
  }
  else {
    if (*(float *)(param_5 + 0xf8) <= 1.0) {
      uVar6 = SlicedFilledImage__get_activeSprite_249d660(param_5);
      if (*(int *)(*(long *)PTR_DAT_049b3b98 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049b3b98);
      }
      uVar7 = UnityEngine_Object__op_Equality_3c1eeb4(uVar6,0,0);
      if ((uVar7 & 1) != 0) goto LAB_0259ed60;
      uVar6 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(param_5,0);
      if (*(int *)(*(long *)PTR_DAT_049c2f30 + 0xe4) == 0) {
        FUN_021f0574(*(long *)PTR_DAT_049c2f30);
      }
                    /* try { // try from 0259eda4 to 0269edbf has its CatchHandler @ 0259eec0 */
      uVar7 = UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle_3ec6254
                        (param_1,uVar6,param_6,&fStack_28,0);
      if ((uVar7 & 1) != 0) {
        UnityEngine_UI_Graphic__GetPixelAdjustedRect_3cf8e94(param_5,0);
        fVar17 = fStack_28;
        fVar19 = param_4;
        fVar13 = param_3;
                    /* try { // try from 0259edc0 to 0269eedb has its CatchHandler @ 0259ecf4 */
        lVar8 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(param_5,0);
        if (lVar8 == 0) {
LAB_0259f224:
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        fVar11 = (float)UnityEngine_RectTransform__get_pivot_3c2c1c0(lVar8,0);
        fVar14 = fStack_24;
        fStack_28 = fVar17 + param_3 * fVar11;
        lVar8 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(param_5,0);
        if (lVar8 == 0) goto LAB_0259f224;
        UnityEngine_RectTransform__get_pivot_3c2c1c0(lVar8,0);
        fStack_24 = fVar14 + param_4 * param_2;
        lVar8 = SlicedFilledImage__get_activeSprite_249d660(param_5);
        if (lVar8 == 0) goto LAB_0259f224;
        UnityEngine_Sprite__get_rect_3bc3be8(lVar8,0);
        fVar17 = fVar19;
        fVar14 = fVar13;
        lVar8 = SlicedFilledImage__get_activeSprite_249d660(param_5);
        if (lVar8 == 0) goto LAB_0259f224;
        fVar11 = (float)UnityEngine_Sprite__get_border_3bc3cc0(lVar8,0);
        fVar12 = (float)SlicedFilledImage__get_pixelsPerUnit_249d55c(param_5);
        fVar15 = param_2 / fVar12;
        fVar16 = fVar14 / fVar12;
        fVar18 = fVar17 / fVar12;
        fVar12 = (float)SlicedFilledImage__GetAdjustedBorders_249e9b0(fVar11 / fVar12,param_5);
        bVar3 = false;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 0259eda4 with catch @ 0259eec0
                        */
        bVar2 = true;
        do {
          bVar1 = bVar2;
          fVar22 = fStack_28;
          fVar21 = fVar12;
          if (!bVar1) {
                    /* try { // try from 0259eedc to 0269eedf has its CatchHandler @ 0259eee8 */
            fVar22 = fStack_24;
            fVar21 = fVar15;
          }
          if (fVar21 < fVar22) {
            fVar21 = param_3;
                    /* catch() { ... } // from try @ 0259eedc with catch @ 0259eee8 */
                    /* try { // try from 0259eeec to 0269eef3 has its CatchHandler @ 0259eefc */
            if (!bVar1) {
              fVar21 = param_4;
            }
            fVar20 = fVar18;
                    /* try { // try from 0259eef4 to 0269eeff has its CatchHandler @ 0259ecf4 */
            if (!bVar3) {
              fVar20 = fVar16;
            }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0259eeec with catch @ 0259eefc
                        */
            if (fVar21 - fVar22 <= fVar20) {
              fVar21 = fStack_28 - (param_3 - fVar13);
              if (!bVar1) {
                fVar21 = fStack_24 - (param_4 - fVar19);
              }
            }
            else {
              pfVar10 = (float *)((ulong)&fStack_28 | 4);
              fVar21 = fVar18;
              fVar22 = param_4;
              fVar20 = fVar15;
              if (bVar1) {
                pfVar10 = &fStack_28;
                fVar21 = fVar16;
                fVar22 = param_3;
                fVar20 = fVar12;
              }
              if (fVar20 == fVar22 - fVar21) {
                fVar21 = 0.0;
              }
              else {
                fVar20 = (*pfVar10 - fVar20) / ((fVar22 - fVar21) - fVar20);
                fVar22 = 1.0;
                if (fVar20 <= 1.0) {
                  fVar22 = fVar20;
                }
                fVar21 = 0.0;
                if (0.0 <= fVar20) {
                  fVar21 = fVar22;
                }
              }
              fVar22 = 0.0;
              if (0.0 <= fVar21) {
                fVar22 = fVar21;
              }
              fVar20 = fVar11;
              fVar21 = (fVar13 - fVar14) - fVar11;
              if (!bVar1) {
                fVar20 = param_2;
                fVar21 = (fVar19 - fVar17) - param_2;
              }
              fVar21 = fVar20 + fVar21 * fVar22;
            }
            uVar7 = 0;
            if (!bVar1) {
              uVar7 = 4;
            }
            *(float *)((ulong)&fStack_28 | uVar7) = fVar21;
          }
          bVar3 = true;
          bVar2 = false;
        } while (bVar1);
        lVar8 = SlicedFilledImage__get_activeSprite_249d660(param_5);
        if (lVar8 == 0) goto LAB_0259f224;
        fVar13 = (float)UnityEngine_Sprite__get_textureRect_3bc44d0(lVar8,0);
        fVar19 = fStack_24;
        fVar14 = fStack_28 / fVar16;
        fVar17 = 1.0;
        if (fVar14 <= 1.0) {
          fVar17 = fVar14;
        }
        fVar11 = 0.0;
        if (0.0 <= fVar14) {
          fVar11 = fVar17;
        }
        fVar17 = fVar18;
        lVar8 = SlicedFilledImage__get_activeSprite_249d660(param_5);
        if ((lVar8 == 0) ||
           (plVar9 = (long *)UnityEngine_Sprite__get_texture_3bc3d98(lVar8,0), plVar9 == (long *)0x0
           )) goto LAB_0259f224;
        fVar19 = fVar19 / fVar18;
        iVar4 = (**(code **)(*plVar9 + 0x178))(plVar9,*(undefined8 *)(*plVar9 + 0x180));
        fVar14 = 1.0;
        if (fVar19 <= 1.0) {
          fVar14 = fVar19;
        }
        fVar12 = 0.0;
        if (0.0 <= fVar19) {
          fVar12 = fVar14;
        }
        lVar8 = SlicedFilledImage__get_activeSprite_249d660(param_5);
        if ((lVar8 == 0) ||
           (plVar9 = (long *)UnityEngine_Sprite__get_texture_3bc3d98(lVar8,0), plVar9 == (long *)0x0
           )) goto LAB_0259f224;
        fVar19 = (fVar13 + ((fVar16 + fVar13) - fVar13) * fVar11) / (float)iVar4;
        iVar5 = (**(code **)(*plVar9 + 0x198))(plVar9,*(undefined8 *)(*plVar9 + 0x1a0));
        iVar4 = *(int *)(param_5 + 0xe0);
        fVar13 = (fVar15 + ((fVar18 + fVar15) - fVar15) * fVar12) / (float)iVar5;
        if (iVar4 < 2) {
          if (iVar4 == 0) {
            if (fVar19 <= *(float *)(param_5 + 0xe4)) goto LAB_0259f0c8;
          }
          else {
            fVar14 = fVar19;
            if (iVar4 != 1) goto LAB_0259f0c8;
LAB_0259f0bc:
            if (1.0 - fVar14 <= *(float *)(param_5 + 0xe4)) {
LAB_0259f0c8:
              lVar8 = SlicedFilledImage__get_activeSprite_249d660(param_5);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              lVar8 = UnityEngine_Sprite__get_texture_3bc3d98(lVar8,0);
              if (lVar8 != 0) {
                UnityEngine_Texture2D__GetPixelBilinear_3bfb870(fVar19,fVar13,lVar8,0);
                return *(float *)(param_5 + 0xf8) <= fVar17;
              }
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
          }
        }
        else {
          if (iVar4 != 2) {
            fVar14 = fVar13;
            if (iVar4 != 3) goto LAB_0259f0c8;
            goto LAB_0259f0bc;
          }
          if (fVar13 <= *(float *)(param_5 + 0xe4)) goto LAB_0259f0c8;
        }
      }
    }
    bVar3 = false;
  }
  return bVar3;
}

