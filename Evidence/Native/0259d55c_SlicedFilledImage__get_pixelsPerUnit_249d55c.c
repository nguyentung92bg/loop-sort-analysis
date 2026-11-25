/* IL2CPP: SlicedFilledImage$$get_pixelsPerUnit
float SlicedFilledImage__get_pixelsPerUnit (SlicedFilledImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SlicedFilledImage$$get_pixelsPerUnit
   float SlicedFilledImage__get_pixelsPerUnit (SlicedFilledImage_o* __this, const MethodInfo*
   method); */

float SlicedFilledImage__get_pixelsPerUnit_249d55c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_049b3b98;
  if ((bRam0000000004f4bacf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    bRam0000000004f4bacf = 1;
  }
  uVar2 = SlicedFilledImage__get_activeSprite_249d660(param_1);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574(lVar4);
  }
  uVar3 = UnityEngine_Object__op_Implicit_3c23140(uVar2,0);
  if ((uVar3 & 1) == 0) {
    fVar5 = 100.0;
  }
  else {
    lVar4 = SlicedFilledImage__get_activeSprite_249d660(param_1);
    if (lVar4 == 0) goto LAB_0259d65c;
    fVar5 = (float)UnityEngine_Sprite__get_pixelsPerUnit_3bc41ac(lVar4,0);
  }
  uVar2 = UnityEngine_UI_Graphic__get_canvas_3cf67b8(param_1,0);
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574(lVar4);
  }
  uVar3 = UnityEngine_Object__op_Implicit_3c23140(uVar2,0);
  if ((uVar3 & 1) == 0) {
    fVar6 = 100.0;
  }
  else {
    lVar4 = UnityEngine_UI_Graphic__get_canvas_3cf67b8(param_1,0);
    if (lVar4 == 0) {
LAB_0259d65c:
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    fVar6 = (float)UnityEngine_Canvas__get_referencePixelsPerUnit_3ec7070(lVar4,0);
  }
  return (fVar5 * *(float *)(param_1 + 0xec)) / fVar6;
}

