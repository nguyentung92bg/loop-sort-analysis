/* IL2CPP: RaycastBlockerMonitor$$SetClickableArea
void RaycastBlockerMonitor__SetClickableArea (RaycastBlockerMonitor_o* __this, UnityEngine_RectTransform_o* clickableArea, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RaycastBlockerMonitor$$SetClickableArea
   void RaycastBlockerMonitor__SetClickableArea (RaycastBlockerMonitor_o* __this,
   UnityEngine_RectTransform_o* clickableArea, const MethodInfo* method); */

void RaycastBlockerMonitor__SetClickableArea_245bc58(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x98);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x110) = param_2;
    if (iRam0000000005174518 != 0) {
      FUN_023118d0(1L << (lVar1 + 0x110U >> 0xc & 0x3f),
                   (lVar1 + 0x110U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

