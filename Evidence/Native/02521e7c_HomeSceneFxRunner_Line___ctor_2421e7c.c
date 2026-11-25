/* IL2CPP: HomeSceneFxRunner.Line$$.ctor
void HomeSceneFxRunner_Line___ctor (HomeSceneFxRunner_Line_o* __this, HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: HomeSceneFxRunner.Line$$.ctor
   void HomeSceneFxRunner_Line___ctor (HomeSceneFxRunner_Line_o* __this, HomeSceneFx_o* fx,
   UnityEngine_RectTransform_o* parent, const MethodInfo* method); */

void HomeSceneFxRunner_Line___ctor_2421e7c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_DAT_049c3110;
  if ((bRam0000000004f4b78e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3148);
    FUN_021f03f8(PTR_DAT_049c3110);
    FUN_021f03f8(PTR_DAT_049c31c0);
    bRam0000000004f4b78e = 1;
  }
  puVar2 = PTR_DAT_049c31c0;
  System_Object___ctor_3142338(param_1,0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  lVar3 = HomeSceneView__CreateNode_2426d00(*(undefined8 *)puVar2,param_3,0);
  if ((param_2 != 0) && (lVar3 != 0)) {
    uVar7 = *(undefined8 *)(param_2 + 0xcc);
    uVar8 = *(undefined8 *)(param_2 + 0xc4);
    UnityEngine_RectTransform__set_pivot_3c2c28c(0,0x3f800000,lVar3,0);
    UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0,0x3f800000,lVar3,0);
    UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0,0x3f800000,lVar3,0);
    UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
              (*(undefined4 *)(param_2 + 0xc4),-*(float *)(param_2 + 200),lVar3,0);
    if (cRam0000000004f4a55b == '\0') {
      FUN_021f03f8(PTR_DAT_049b8758);
      cRam0000000004f4a55b = '\x01';
    }
    fVar5 = (float)uVar7 - (float)uVar8;
    fVar6 = (float)((ulong)uVar7 >> 0x20) - (float)((ulong)uVar8 >> 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b8758 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
              (SQRT(fVar5 * fVar5 + fVar6 * fVar6),0x40000000,lVar3,0);
    fVar5 = (float)FUN_046086b0(fVar6);
    UnityEngine_Quaternion__Internal_FromEulerRad_3c09ec4
              (0,0,fVar5 * _UNK_013aa5c0 * _UNK_013aa948,0);
    UnityEngine_Transform__set_localRotation_3c2d9f0(lVar3,0);
    lVar3 = UnityEngine_Component__get_gameObject_3c187f4(lVar3,0);
    if ((lVar3 != 0) &&
       (plVar4 = (long *)UnityEngine_GameObject__AddComponent_object__261a774
                                   (lVar3,*(undefined8 *)PTR_DAT_049c3148), plVar4 != (long *)0x0))
    {
      (**(code **)(*plVar4 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,_UNK_013aa570,plVar4,
                 *(undefined8 *)(*plVar4 + 0x2b0));
                    /* WARNING: Could not recover jumptable at 0x02522088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x2c8))(plVar4,0,*(undefined8 *)(*plVar4 + 0x2d0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

