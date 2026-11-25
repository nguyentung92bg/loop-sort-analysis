/* IL2CPP: HomeSceneBlade$$.ctor
void HomeSceneBlade___ctor (HomeSceneBlade_o* __this, UnityEngine_RectTransform_o* parent, HomeSceneSprite_o* data, bool flip, bool isRotor, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneBlade$$.ctor
   void HomeSceneBlade___ctor (HomeSceneBlade_o* __this, UnityEngine_RectTransform_o* parent,
   HomeSceneSprite_o* data, bool flip, bool isRotor, const MethodInfo* method); */

void HomeSceneBlade___ctor_24282f4
               (long param_1,undefined8 param_2,long param_3,uint param_4,byte param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  float *pfVar9;
  float *pfVar10;
  undefined8 *puVar11;
  float *pfVar12;
  long *plVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  
  if ((bRam0000000004f4b7a2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c31c8);
    FUN_021f03f8(PTR_DAT_049c3148);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c3468);
    FUN_021f03f8(PTR_DAT_049c31d0);
    FUN_021f03f8(PTR_DAT_049c3470);
    FUN_021f03f8(PTR_DAT_049c3478);
    FUN_021f03f8(PTR_DAT_049c3480);
    bRam0000000004f4b7a2 = 1;
  }
  System_Object___ctor_3142338(param_1,0);
  *(byte *)(param_1 + 0x18) = param_5 & 1;
  puVar4 = PTR_DAT_049c3110;
  if ((param_5 & 1) == 0) {
    if (param_3 == 0) goto LAB_02528818;
    pfVar10 = (float *)(param_3 + 0xdc);
    pfVar9 = (float *)(param_3 + 0xe0);
    pfVar12 = (float *)(param_3 + 0xe4);
  }
  else {
    if (param_3 == 0) goto LAB_02528818;
    pfVar10 = (float *)(param_3 + 0xec);
    pfVar9 = (float *)(param_3 + 0xf0);
    pfVar12 = (float *)(param_3 + 0xf4);
  }
  fVar21 = *(float *)(param_3 + 0x34);
  fVar19 = *(float *)(param_3 + 0x38);
  fVar17 = 1.0 - *pfVar10;
  if ((param_4 & 1) == 0) {
    fVar17 = *pfVar10;
  }
  if ((param_5 & 1) == 0) {
    fVar16 = *pfVar12 * fVar19;
    fVar15 = fVar16 * _UNK_013aa840;
    puVar11 = (undefined8 *)PTR_DAT_049c3470;
  }
  else {
    fVar15 = *pfVar12 * fVar21;
    fVar16 = fVar15 / 18.0;
    puVar11 = (undefined8 *)PTR_DAT_049c3480;
  }
  fVar22 = *pfVar9;
  uVar14 = *puVar11;
  if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar7 = HomeSceneView__CreateNode_2426d00(uVar14,param_2);
  puVar5 = PTR_DAT_049c3478;
  if (lVar7 != 0) {
    UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar7,0);
    UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar7,0);
    UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f000000,lVar7,0);
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (fVar17 * fVar21,-(fVar22 * fVar19),lVar7,0);
    UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(fVar15,fVar16,lVar7,0);
    uVar14 = HomeSceneShapes__get_SoftDisc_242699c();
    uVar3 = _UNK_013aa5f8;
    bVar6 = (param_5 & 1) == 0;
    uVar1 = _UNK_013aa668;
    uVar18 = _UNK_013aa86c;
    uVar20 = _UNK_013aa97c;
    if (bVar6) {
      uVar1 = _UNK_013aa71c;
      uVar18 = _UNK_013aa5d0;
      uVar20 = _UNK_013aa8fc;
    }
    uVar2 = _UNK_013aa4c4;
    if (bVar6) {
      uVar2 = _UNK_013aa5f8;
    }
    lVar8 = HomeSceneShapes__Add_2426acc
                      (uVar2,uVar1,uVar18,uVar20,lVar7,*(undefined8 *)puVar5,uVar14);
    puVar5 = PTR_DAT_049c3468;
    if (lVar8 != 0) {
      uVar14 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(lVar8,0);
      lVar8 = *(long *)puVar4;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        FUN_021f0574(lVar8);
      }
      HomeSceneView__Stretch_242881c(uVar14);
      lVar8 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar5,lVar7);
      plVar13 = (long *)(param_1 + 0x10);
      *plVar13 = lVar8;
      thunk_FUN_021f190c(plVar13,lVar8);
      if (*plVar13 != 0) {
        uVar1 = _UNK_013aa7f0;
        uVar18 = 0;
        if ((param_5 & 1) == 0) {
          uVar1 = 0;
          uVar18 = _UNK_013aa8bc;
        }
        UnityEngine_RectTransform__set_anchorMin_3c2bc3c(uVar18,uVar1,*plVar13,0);
        uVar1 = _UNK_013aa384;
        if (*plVar13 != 0) {
          uVar18 = _UNK_013aa3ec;
          uVar20 = 0x3f800000;
          if ((param_5 & 1) == 0) {
            uVar18 = 0x3f800000;
            uVar20 = _UNK_013aa384;
          }
          UnityEngine_RectTransform__set_anchorMax_3c2bdd0(uVar20,uVar18,*plVar13,0);
          lVar8 = *plVar13;
          if (cRam0000000004f49d57 == '\0') {
            FUN_021f03f8(PTR_DAT_049b8a18);
            cRam0000000004f49d57 = '\x01';
          }
          if (lVar8 != 0) {
            uVar20 = **(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8);
            uVar18 = (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1];
            UnityEngine_RectTransform__set_offsetMax_3c2c6c8(uVar20,uVar18,lVar8,0);
            UnityEngine_RectTransform__set_offsetMin_3c2c534(uVar20,uVar18,lVar8,0);
            if (((*plVar13 != 0) &&
                (lVar8 = UnityEngine_Component__get_gameObject_3c187f4(*plVar13,0), lVar8 != 0)) &&
               (plVar13 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                            (lVar8,*(undefined8 *)PTR_DAT_049c3148),
               plVar13 != (long *)0x0)) {
              (**(code **)(*plVar13 + 0x2c8))(plVar13,0,*(undefined8 *)(*plVar13 + 0x2d0));
              param_5 = param_5 & 1;
              uVar18 = _UNK_013aa928;
              uVar20 = _UNK_013aa924;
              if (param_5 == 0) {
                uVar18 = uVar1;
                uVar20 = 0x3e800000;
              }
              uVar1 = _UNK_013aa62c;
              if (param_5 == 0) {
                uVar1 = _UNK_013aa7bc;
              }
              (**(code **)(*plVar13 + 0x2a8))
                        (uVar1,uVar18,uVar20,0x3f800000,plVar13,*(undefined8 *)(*plVar13 + 0x2b0));
              if (param_5 != 0) {
                return;
              }
              if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                FUN_021f0574();
              }
              lVar7 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)PTR_DAT_049c31d0,lVar7);
              if (lVar7 != 0) {
                UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f000000,lVar7,0);
                UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0x3f000000,0x3f000000,lVar7,0);
                UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0x3f000000,0x3f000000,lVar7,0);
                UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                          (fVar15 * _UNK_013aa770,fVar15 * _UNK_013aa770,lVar7,0);
                lVar7 = UnityEngine_Component__get_gameObject_3c187f4(lVar7,0);
                if ((lVar7 != 0) &&
                   (plVar13 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                                (lVar7,*(undefined8 *)PTR_DAT_049c31c8),
                   plVar13 != (long *)0x0)) {
                  (**(code **)(*plVar13 + 0x2c8))(plVar13,0,*(undefined8 *)(*plVar13 + 0x2d0));
                  uVar14 = HomeSceneShapes__get_SoftDisc_242699c();
                  HomeSceneDisc__SetTexture_241f858(0x3f000000,0x3f000000,0,0,plVar13,uVar14,0);
                    /* try { // try from 02528800 to 026288d3 has its CatchHandler @ 02528800
                       catch() { ... } // from try @ 02528800 with catch @ 02528800
                       catch() { ... } // from try @ 0252896c with catch @ 02528800
                       catch() { ... } // from try @ 025289e4 with catch @ 02528800
                       catch() { ... } // from try @ 02528a34 with catch @ 02528800 */
                    /* WARNING: Could not recover jumptable at 0x02528814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                  (**(code **)(*plVar13 + 0x2a8))
                            (uVar3,_UNK_013aa818,_UNK_013aa4c8,0x3f800000,plVar13,
                             *(undefined8 *)(*plVar13 + 0x2b0));
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_02528818:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

