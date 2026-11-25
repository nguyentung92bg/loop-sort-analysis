/* IL2CPP: LevelAnimationSystem$$<ApplyLevelEnter>b__31_0
void LevelAnimationSystem___ApplyLevelEnter_b__31_0 (LevelAnimationSystem_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LevelAnimationSystem$$<ApplyLevelEnter>b__31_0
   void LevelAnimationSystem___ApplyLevelEnter_b__31_0 (LevelAnimationSystem_o* __this, float x,
   const MethodInfo* method); */

void LevelAnimationSystem___ApplyLevelEnter_b__31_0_24d8e44(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((*(long *)(param_2 + 0xa0) != 0) && (*(long *)(param_2 + 0x58) != 0)) {
    Dreamteck_Splines_SplineUser__set_clipTo_235accc
              (*(double *)(*(long *)(param_2 + 0xa0) + 0x168) * (double)param_1,
               *(long *)(param_2 + 0x58),0);
    if (*(long *)(param_2 + 0x58) != 0) {
      Dreamteck_Splines_SplineUser__EvaluatePosition_235bf94
                (_UNK_013a8498,*(long *)(param_2 + 0x58),0);
      if (*(long *)(param_2 + 0xc0) != 0) {
        lVar1 = UnityEngine_Component__get_transform_3c18724(*(long *)(param_2 + 0xc0),0);
        if (lVar1 != 0) {
          if ((bRam0000000004f58a09 & 1) == 0) {
            FUN_021f03f8(PTR_DAT_04a26ad0,0);
            bRam0000000004f58a09 = 1;
          }
          if (lVar1 != 0) {
            lVar2 = *(long *)(lVar1 + 0x10);
            if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
            }
            if (pcRam0000000004f58a38 == (code *)0x0) {
              pcRam0000000004f58a38 = (code *)FUN_021f03bc(&UNK_013e8d5f);
            }
            (*pcRam0000000004f58a38)(lVar2,&stack0xffffffffffffffd4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

