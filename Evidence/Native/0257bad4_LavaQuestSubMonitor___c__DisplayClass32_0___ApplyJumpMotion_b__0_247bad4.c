/* IL2CPP: LavaQuestSubMonitor.<>c__DisplayClass32_0$$<ApplyJumpMotion>b__0
void LavaQuestSubMonitor___c__DisplayClass32_0___ApplyJumpMotion_b__0 (LavaQuestSubMonitor___c__DisplayClass32_0_o* __this, float x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: LavaQuestSubMonitor.<>c__DisplayClass32_0$$<ApplyJumpMotion>b__0
   void LavaQuestSubMonitor___c__DisplayClass32_0___ApplyJumpMotion_b__0
   (LavaQuestSubMonitor___c__DisplayClass32_0_o* __this, float x, const MethodInfo* method); */

void LavaQuestSubMonitor___c__DisplayClass32_0___ApplyJumpMotion_b__0_247bad4
               (float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = *(long *)(param_2 + 0x28);
  if (lVar2 != 0) {
    fVar4 = *(float *)(param_2 + 0x14);
    fVar5 = *(float *)(param_2 + 0x20);
    fVar3 = 1.0;
    if (param_1 <= 1.0) {
      fVar3 = param_1;
    }
    fVar6 = 0.0;
    if (0.0 <= param_1) {
      fVar6 = fVar3;
    }
    param_1 = param_1 * _UNK_013aa860;
    fVar3 = (float)FUN_046086e0(param_1);
    UnityEngine_Transform__set_position_3c2d61c
              (*(float *)(param_2 + 0x10) +
               fVar6 * (*(float *)(param_2 + 0x1c) - *(float *)(param_2 + 0x10)),
               param_1 * fVar3 + fVar4 + fVar6 * (fVar5 - fVar4),
               *(float *)(param_2 + 0x18) +
               fVar6 * (*(float *)(param_2 + 0x24) - *(float *)(param_2 + 0x18)),lVar2,0);
    UnityEngine_Quaternion__Lerp_3c09d14(*(undefined4 *)(param_2 + 0x30),0);
    lVar2 = *(long *)(param_2 + 0x50);
    if (lVar2 != 0) {
      if ((bRam0000000004f58a0d & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a26ad0,0);
        bRam0000000004f58a0d = 1;
      }
      if (lVar2 != 0) {
        lVar1 = *(long *)(lVar2 + 0x10);
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar2,0);
        }
        if (pcRam0000000004f58a58 == (code *)0x0) {
          pcRam0000000004f58a58 = (code *)FUN_021f03bc(&UNK_013b3a78);
        }
        (*pcRam0000000004f58a58)(lVar1,&stack0xffffffffffffffd0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

