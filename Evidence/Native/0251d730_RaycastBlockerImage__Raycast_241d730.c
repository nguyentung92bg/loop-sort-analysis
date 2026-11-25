/* IL2CPP: RaycastBlockerImage$$Raycast
bool RaycastBlockerImage__Raycast (RaycastBlockerImage_o* __this, UnityEngine_Vector2_o sp, UnityEngine_Camera_o* eventCamera, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RaycastBlockerImage$$Raycast
   bool RaycastBlockerImage__Raycast (RaycastBlockerImage_o* __this, UnityEngine_Vector2_o sp,
   UnityEngine_Camera_o* eventCamera, const MethodInfo* method); */

uint RaycastBlockerImage__Raycast_241d730
               (undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
                    /* catch() { ... } // from try @ 0251d5a8 with catch @ 0251d730
                       catch() { ... } // from try @ 0251d648 with catch @ 0251d730
                       catch() { ... } // from try @ 0251d698 with catch @ 0251d730
                       catch() { ... } // from try @ 0251d6f4 with catch @ 0251d730
                       catch() { ... } // from try @ 0251d720 with catch @ 0251d730 */
  puVar1 = PTR_DAT_049b3b98;
                    /* try { // try from 0251d734 to 0261d963 has its CatchHandler @ 0251d734
                       catch() { ... } // from try @ 0251d734 with catch @ 0251d734
                       catch() { ... } // from try @ 0251d998 with catch @ 0251d734
                       catch() { ... } // from try @ 0251d9e4 with catch @ 0251d734
                       catch() { ... } // from try @ 0251d9f0 with catch @ 0251d734
                       catch() { ... } // from try @ 0251da2c with catch @ 0251d734
                       catch() { ... } // from try @ 0251daa0 with catch @ 0251d734
                       catch() { ... } // from try @ 0251db00 with catch @ 0251d734 */
  if ((bRam0000000004f4b762 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3b98);
    FUN_021f03f8(PTR_DAT_049c2f30);
    bRam0000000004f4b762 = 1;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x110);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = UnityEngine_Object__op_Equality_3c1eeb4(uVar4,0,0);
  if ((uVar3 & 1) == 0) {
    uVar4 = *(undefined8 *)(param_3 + 0x110);
    if (*(int *)(*(long *)PTR_DAT_049c2f30 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar2 = UnityEngine_RectTransformUtility__RectangleContainsScreenPoint_3ec5ae8
                      (param_1,param_2,uVar4,param_4,0);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 1;
  }
  return uVar2 & 1;
}

