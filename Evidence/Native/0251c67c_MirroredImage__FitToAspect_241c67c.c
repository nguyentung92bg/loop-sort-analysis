/* IL2CPP: MirroredImage$$FitToAspect
UnityEngine_Rect_o MirroredImage__FitToAspect (MirroredImage_o* __this, UnityEngine_Rect_o rect, UnityEngine_Sprite_o* sp, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MirroredImage$$FitToAspect
   UnityEngine_Rect_o MirroredImage__FitToAspect (MirroredImage_o* __this, UnityEngine_Rect_o rect,
   UnityEngine_Sprite_o* sp, const MethodInfo* method); */

float MirroredImage__FitToAspect_241c67c
                (float param_1,undefined1 param_2 [16],float param_3,float param_4,long param_5,
                long param_6)

{
  float fVar1;
  float fVar2;
  
                    /* catch() { ... } // from try @ 0251c648 with catch @ 0251c67c */
                    /* catch() { ... } // from try @ 0251c63c with catch @ 0251c680 */
                    /* catch() { ... } // from try @ 0251c3f4 with catch @ 0251c684
                       catch() { ... } // from try @ 0251c644 with catch @ 0251c684 */
                    /* catch() { ... } // from try @ 0251c3d8 with catch @ 0251c688
                       catch() { ... } // from try @ 0251c638 with catch @ 0251c688 */
                    /* catch() { ... } // from try @ 0251c480 with catch @ 0251c68c */
                    /* catch() { ... } // from try @ 0251c61c with catch @ 0251c690 */
  if (param_6 != 0) {
    fVar1 = param_3;
    fVar2 = param_4;
                    /* catch() { ... } // from try @ 0251c46c with catch @ 0251c694 */
                    /* catch() { ... } // from try @ 0251c4fc with catch @ 0251c698 */
    UnityEngine_Sprite__get_rect_3bc3be8(param_6,0);
                    /* try { // try from 0251c6b8 to 0261c6bb has its CatchHandler @ 0251c6c4 */
                    /* catch() { ... } // from try @ 0251c6b8 with catch @ 0251c6c4 */
    UnityEngine_Sprite__get_rect_3bc3be8(param_6,0);
                    /* try { // try from 0251c6c8 to 0261c6cf has its CatchHandler @ 0251c6d8 */
                    /* try { // try from 0251c6d0 to 0261c6db has its CatchHandler @ 0251c2b0 */
                    /* catch() { ... } // from try @ 0251c62c with catch @ 0251c6d8
                       catch() { ... } // from try @ 0251c6c8 with catch @ 0251c6d8 */
                    /* try { // try from 0251c6dc to 0261c987 has its CatchHandler @ 0251c6dc
                       catch() { ... } // from try @ 0251c6dc with catch @ 0251c6dc
                       catch() { ... } // from try @ 0251ca10 with catch @ 0251c6dc
                       catch() { ... } // from try @ 0251cb14 with catch @ 0251c6dc
                       catch() { ... } // from try @ 0251cb6c with catch @ 0251c6dc */
    if (*(char *)(param_5 + 0x110) != '\0') {
      fVar1 = fVar1 + fVar1;
    }
    if (*(char *)(param_5 + 0x111) != '\0') {
      fVar2 = fVar2 + fVar2;
    }
    if (fVar1 / fVar2 <= param_3 / param_4) {
      param_1 = param_1 + (param_3 - param_4 * (fVar1 / fVar2)) * 0.5;
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

