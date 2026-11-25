/* IL2CPP: ImageAspectSizeFitterElement$$UpdateRectTransform
void ImageAspectSizeFitterElement__UpdateRectTransform (ImageAspectSizeFitterElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ImageAspectSizeFitterElement$$UpdateRectTransform
   void ImageAspectSizeFitterElement__UpdateRectTransform (ImageAspectSizeFitterElement_o* __this,
   const MethodInfo* method); */

void ImageAspectSizeFitterElement__UpdateRectTransform_241bb50
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4b755 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ef0);
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4b755 = 1;
  }
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(uVar3,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  plVar4 = (long *)(param_5 + 0x28);
  lVar5 = *plVar4;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar5,0,0);
  if ((uVar2 & 1) != 0) {
    UnityEngine_Component__GetComponent___Il2CppFullySharedGenericType__25c1b94
              (param_5,&uStack_28,*(undefined8 *)PTR_DAT_049c2ef0);
    *(undefined8 *)(param_5 + 0x28) = uStack_28;
    thunk_FUN_021f190c(plVar4);
  }
  if (*(long *)(param_5 + 0x20) != 0) {
    lVar5 = *(long *)(*(long *)(param_5 + 0x20) + 0xd8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = UnityEngine_Object__op_Equality_3c1eeb4(lVar5,0,0);
    if ((uVar2 & 1) != 0) {
      return;
    }
    if (lVar5 != 0) {
      UnityEngine_Sprite__get_rect_3bc3be8(lVar5,0);
      fVar6 = param_3;
      UnityEngine_Sprite__get_rect_3bc3be8(lVar5,0);
      if ((*(long *)(param_5 + 0x20) != 0) &&
         (fVar7 = param_4,
         lVar5 = UnityEngine_UI_Graphic__get_rectTransform_3cf6e70(*(long *)(param_5 + 0x20),0),
         lVar5 != 0)) {
        param_3 = param_3 / param_4;
        UnityEngine_RectTransform__get_rect_3c2ba98(lVar5,0);
        lVar5 = *plVar4;
        if (fVar6 / fVar7 <= param_3) {
          if (lVar5 != 0) {
            param_3 = fVar6 / param_3;
            uVar3 = 1;
            goto LAB_0251bcb4;
          }
        }
        else if (lVar5 != 0) {
          param_3 = param_3 * fVar7;
          uVar3 = 0;
LAB_0251bcb4:
          UnityEngine_RectTransform__SetSizeWithCurrentAnchors_3c2d0c4(param_3,lVar5,uVar3,0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

