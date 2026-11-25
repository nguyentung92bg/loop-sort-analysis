/* IL2CPP: RectTransformMatchHeightElement$$LateUpdate
void RectTransformMatchHeightElement__LateUpdate (RectTransformMatchHeightElement_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: RectTransformMatchHeightElement$$LateUpdate
   void RectTransformMatchHeightElement__LateUpdate (RectTransformMatchHeightElement_o* __this,
   const MethodInfo* method); */

void RectTransformMatchHeightElement__LateUpdate_241d958
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
               long param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
                    /* try { // try from 0251d964 to 0261d96f has its CatchHandler @ 0251da00 */
  if (*(long *)(param_5 + 0x30) != 0) {
    UnityEngine_RectTransform__get_rect_3c2ba98(*(long *)(param_5 + 0x30),0);
                    /* try { // try from 0251d980 to 0261d98b has its CatchHandler @ 0251d9f4 */
                    /* try { // try from 0251d990 to 0261d997 has its CatchHandler @ 0251d9f0 */
                    /* try { // try from 0251d998 to 0261d9df has its CatchHandler @ 0251d734 */
    if ((param_4 <= 0.0) ||
       (fVar3 = param_3 - *(float *)(param_5 + 0x38), fVar4 = param_4 - *(float *)(param_5 + 0x3c),
       fVar3 * fVar3 + fVar4 * fVar4 < _UNK_013aa3dc)) {
                    /* try { // try from 0251da90 to 0261da9f has its CatchHandler @ 0251dad0 */
                    /* try { // try from 0251daa0 to 0261daaf has its CatchHandler @ 0251d734 */
      return;
    }
    lVar2 = *(long *)(param_5 + 0x28);
    *(float *)(param_5 + 0x38) = param_3;
    *(float *)(param_5 + 0x3c) = param_4;
    if (lVar2 != 0) {
      fVar3 = *(float *)(param_5 + 0x20);
      UnityEngine_RectTransform__set_pivot_3c2c28c(0x3f000000,0x3f000000,lVar2,0);
                    /* try { // try from 0251d9e0 to 0261d9e3 has its CatchHandler @ 0251da00 */
                    /* try { // try from 0251d9e4 to 0261d9eb has its CatchHandler @ 0251d734 */
      UnityEngine_RectTransform__set_anchorMax_3c2bdd0(0x3f000000,0x3f000000,lVar2,0);
                    /* try { // try from 0251d9ec to 0261d9ef has its CatchHandler @ 0251d9f8 */
                    /* catch() { ... } // from try @ 0251d990 with catch @ 0251d9f0
                       try { // try from 0251d9f0 to 0261da27 has its CatchHandler @ 0251d734 */
                    /* catch() { ... } // from try @ 0251d980 with catch @ 0251d9f4 */
                    /* catch() { ... } // from try @ 0251d9ec with catch @ 0251d9f8 */
      UnityEngine_RectTransform__set_anchorMin_3c2bc3c(0x3f000000,0x3f000000,lVar2,0);
                    /* catch() { ... } // from try @ 0251d964 with catch @ 0251da00
                       catch() { ... } // from try @ 0251d9e0 with catch @ 0251da00 */
      lVar2 = *(long *)(param_5 + 0x28);
      if (cRam0000000004f49d57 == '\0') {
        FUN_021f03f8(PTR_DAT_049b8a18);
        cRam0000000004f49d57 = '\x01';
      }
      if (lVar2 != 0) {
                    /* try { // try from 0251da28 to 0261da2b has its CatchHandler @ 0251daf4 */
                    /* try { // try from 0251da2c to 0261da53 has its CatchHandler @ 0251d734 */
        UnityEngine_RectTransform__set_anchoredPosition_3c2bf64
                  (**(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8),
                   (*(undefined4 **)(*(long *)PTR_DAT_049b8a18 + 0xb8))[1],lVar2,0);
        if (*(long *)(param_5 + 0x28) != 0) {
          fVar3 = param_4 / fVar3;
                    /* try { // try from 0251da54 to 0261da57 has its CatchHandler @ 0251dae0 */
          UnityEngine_RectTransform__set_sizeDelta_3c2c0f8
                    (param_3 / fVar3,param_4 / fVar3,*(long *)(param_5 + 0x28),0);
          lVar2 = *(long *)(param_5 + 0x28);
          if (lVar2 != 0) {
            if ((bRam0000000004f58a11 & 1) == 0) {
              FUN_021f03f8(PTR_DAT_04a26ad0,0);
              bRam0000000004f58a11 = 1;
            }
            if (lVar2 != 0) {
              lVar1 = *(long *)(lVar2 + 0x10);
              if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
              }
              if (pcRam0000000004f58a78 == (code *)0x0) {
                pcRam0000000004f58a78 = (code *)FUN_021f03bc(&UNK_013e8e06);
              }
              (*pcRam0000000004f58a78)(lVar1,&stack0xffffffffffffffd4);
              return;
            }
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

