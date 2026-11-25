/* IL2CPP: HomeSceneFxRunner.Clock$$.ctor
void HomeSceneFxRunner_Clock___ctor (HomeSceneFxRunner_Clock_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Clock$$.ctor
   void HomeSceneFxRunner_Clock___ctor (HomeSceneFxRunner_Clock_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

void HomeSceneFxRunner_Clock___ctor_2422090(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000004f4b78f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c31c8);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c31d0);
    FUN_021f03f8(PTR_DAT_049c31d8);
    bRam0000000004f4b78f = 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0xbff0000000000000;
  System_Object___ctor_3142338(param_1,0);
  puVar2 = PTR_DAT_049c31d8;
  puVar1 = PTR_DAT_049c3110;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x28) == '\0') {
      uVar7 = 0x3f800000;
      uVar9 = _UNK_013aa714;
      uVar10 = _UNK_013aa5f4;
      uVar8 = _UNK_013aa7b4;
    }
    else {
      uVar7 = *(undefined4 *)(param_2 + 0x38);
      uVar9 = *(undefined4 *)(param_2 + 0x30);
      uVar10 = *(undefined4 *)(param_2 + 0x2c);
      uVar8 = *(undefined4 *)(param_2 + 0x34);
    }
    if (*(int *)(*(long *)PTR_DAT_049c3110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    lVar3 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,param_3,0);
    if (lVar3 != 0) {
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar3,0);
      UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar3,0);
      UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f000000,lVar3,0);
      UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                (*(undefined4 *)(param_2 + 0x1c),-*(float *)(param_2 + 0x20),lVar3,0);
      fVar6 = *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x24);
      UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(fVar6,fVar6,lVar3,0);
      if (*(char *)(param_2 + 0xb8) != '\0') {
        UnityEngine_Transform__set_localScale_3c2ddfc
                  (*(undefined4 *)(param_2 + 0xbc),0x3f800000,0x3f800000,lVar3,0);
      }
      puVar2 = PTR_DAT_049c31d0;
      uVar4 = HomeSceneFxRunner_Clock__Hand_2423ea8
                        (uVar10,uVar9,uVar8,uVar7,_UNK_013aa764,_UNK_013aa838,lVar3);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      thunk_FUN_021f190c();
      uVar4 = HomeSceneFxRunner_Clock__Hand_2423ea8
                        (uVar10,uVar9,uVar8,uVar7,_UNK_013aa538,_UNK_013aa76c,lVar3);
      *(undefined8 *)(param_1 + 0x18) = uVar4;
      thunk_FUN_021f190c((undefined8 *)(param_1 + 0x18),uVar4);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      lVar3 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,lVar3,0);
      if (lVar3 != 0) {
        UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f000000,lVar3,0);
        UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0x3f000000,0x3f000000,lVar3,0);
        UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0x3f000000,0x3f000000,lVar3,0);
        fVar6 = *(float *)(param_2 + 0x24) * _UNK_013aa62c;
        UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(fVar6,fVar6,lVar3,0);
        lVar3 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0);
        if ((lVar3 != 0) &&
           (plVar5 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                       (lVar3,*(undefined8 *)PTR_DAT_049c31c8),
           plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x2c8))(plVar5,0,*(undefined8 *)(*plVar5 + 0x2d0));
          uVar4 = HomeSceneShapes__get_SoftDisc_242699c(0);
          HomeSceneDisc__SetTexture_241f858(0x3f000000,0x3f000000,0,0,plVar5,uVar4);
                    /* WARNING: Could not recover jumptable at 0x02522384. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x2a8))
                    (uVar10,uVar9,uVar8,uVar7,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

