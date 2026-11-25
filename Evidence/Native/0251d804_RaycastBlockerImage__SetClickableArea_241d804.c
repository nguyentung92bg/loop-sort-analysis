/* IL2CPP: RaycastBlockerImage$$SetClickableArea
void RaycastBlockerImage__SetClickableArea (RaycastBlockerImage_o* __this, UnityEngine_RectTransform_o* area, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RaycastBlockerImage$$SetClickableArea
   void RaycastBlockerImage__SetClickableArea (RaycastBlockerImage_o* __this,
   UnityEngine_RectTransform_o* area, const MethodInfo* method); */

void RaycastBlockerImage__SetClickableArea_241d804(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x110) = param_2;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x110U >> 0xc & 0x3f),
                 (param_1 + 0x110U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

