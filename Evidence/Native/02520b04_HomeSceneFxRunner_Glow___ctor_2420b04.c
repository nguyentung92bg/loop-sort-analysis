/* IL2CPP: HomeSceneFxRunner.Glow$$.ctor
void HomeSceneFxRunner_Glow___ctor (HomeSceneFxRunner_Glow_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Glow$$.ctor
   void HomeSceneFxRunner_Glow___ctor (HomeSceneFxRunner_Glow_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

long HomeSceneFxRunner_Glow___ctor_2420b04(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  
  if ((bRam0000000004f4b77c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3100);
    bRam0000000004f4b77c = 1;
  }
  System_Object___ctor_3142338(param_1,0);
  *(long *)(param_1 + 0x10) = param_2;
  thunk_FUN_021f190c((long *)(param_1 + 0x10),param_2);
  puVar1 = PTR_DAT_049c3100;
  if (param_2 != 0) {
    uVar2 = _UNK_013a9c90;
    uVar7 = _UNK_013a9c98;
    if (*(char *)(param_2 + 0x28) != '\0') {
      uVar2 = *(undefined8 *)(param_2 + 0x2c);
      uVar7 = *(undefined8 *)(param_2 + 0x34);
    }
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    uVar2 = HomeSceneShapes__get_SoftDisc_242699c(0);
    lVar3 = HomeSceneShapes__Add_2426acc
                      (*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                       *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_3,
                       *(undefined8 *)puVar1,uVar2,0);
    plVar4 = (long *)(param_1 + 0x18);
    *plVar4 = lVar3;
    thunk_FUN_021f190c(plVar4,lVar3);
    plVar5 = (long *)*plVar4;
    uVar2 = HomeSceneShapes__get_Screen_2428a54(0);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x348))(plVar5,uVar2,*(undefined8 *)(*plVar5 + 0x350));
      fVar8 = *(float *)(param_2 + 0x20);
      fVar9 = *(float *)(param_2 + 0x24) + *(float *)(param_2 + 0x24);
      uVar6 = *(undefined4 *)(param_2 + 0x1c);
      if ((*plVar4 != 0) &&
         (lVar3 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(*plVar4,0), lVar3 != 0)) {
        UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar3,0);
        UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar3,0);
        UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f000000,lVar3,0);
        UnityEngine_RectTransform__set_anchoredPosition_3c2bf64(uVar6,-fVar8,lVar3,0);
        UnityEngine_RectTransform__set_sizeDelta_3c2c0f8(fVar9,fVar9,lVar3,0);
        return lVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

