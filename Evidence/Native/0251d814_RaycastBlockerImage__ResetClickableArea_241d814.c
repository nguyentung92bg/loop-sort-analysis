/* IL2CPP: RaycastBlockerImage$$ResetClickableArea
void RaycastBlockerImage__ResetClickableArea (RaycastBlockerImage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RaycastBlockerImage$$ResetClickableArea
   void RaycastBlockerImage__ResetClickableArea (RaycastBlockerImage_o* __this, const MethodInfo*
   method); */

void RaycastBlockerImage__ResetClickableArea_241d814(long param_1)

{
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x110U >> 0xc & 0x3f),
                 (param_1 + 0x110U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

