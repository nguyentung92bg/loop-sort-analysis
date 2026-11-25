/* IL2CPP: Monitors$$SetClickableArea
void Monitors__SetClickableArea (Monitors_o* __this, UnityEngine_RectTransform_o* clickableArea, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Monitors$$SetClickableArea
   void Monitors__SetClickableArea (Monitors_o* __this, UnityEngine_RectTransform_o* clickableArea,
   const MethodInfo* method); */

void Monitors__SetClickableArea_256ec2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_049cc020;
                    /* try { // try from 0266ec40 to 0276ec4b has its CatchHandler @ 0266edf4 */
  if ((bRam0000000004f4c1b6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cc020);
                    /* try { // try from 0266ec64 to 0276ec6f has its CatchHandler @ 0266edf8 */
    bRam0000000004f4c1b6 = 1;
  }
  lVar2 = Monitors__Get_object__26889d0(param_1,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x98);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x110) = param_2;
      if (iRam0000000005174518 != 0) {
        FUN_023118d0(1L << (lVar3 + 0x110U >> 0xc & 0x3f),
                     (lVar3 + 0x110U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(lVar2,param_2,0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

