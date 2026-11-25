/* IL2CPP: SlicedFilledImage$$UnityEngine.UI.ILayoutElement.get_preferredHeight
float SlicedFilledImage__UnityEngine_UI_ILayoutElement_get_preferredHeight (SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$UnityEngine.UI.ILayoutElement.get_preferredHeight
   float SlicedFilledImage__UnityEngine_UI_ILayoutElement_get_preferredHeight (SlicedFilledImage_o*
   __this, const MethodInfo* method); */

float SlicedFilledImage__UnityEngine_UI_ILayoutElement_get_preferredHeight_249ec00
                (undefined1 param_1 [16],float param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bada & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bada = 1;
  }
  uVar2 = SlicedFilledImage__get_activeSprite_249d660(param_3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar1);
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar2,0,0);
  fVar4 = 0.0;
  if ((uVar3 & 1) == 0) {
    uVar2 = SlicedFilledImage__get_activeSprite_249d660(0,param_3);
    UnityEngine_Sprites_DataUtility__GetMinSize_3c46064(uVar2,0);
    fVar4 = (float)SlicedFilledImage__get_pixelsPerUnit_249d55c(param_3);
    fVar4 = param_2 / fVar4;
  }
  return fVar4;
}

