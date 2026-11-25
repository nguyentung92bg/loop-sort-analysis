/* IL2CPP: WeeklyMissionsSubMonitor.<>c__DisplayClass34_0$$<ApplyGiftBoxMoveMotion>b__0
void WeeklyMissionsSubMonitor___c__DisplayClass34_0___ApplyGiftBoxMoveMotion_b__0 (WeeklyMissionsSubMonitor___c__DisplayClass34_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: WeeklyMissionsSubMonitor.<>c__DisplayClass34_0$$<ApplyGiftBoxMoveMotion>b__0
   void WeeklyMissionsSubMonitor___c__DisplayClass34_0___ApplyGiftBoxMoveMotion_b__0
   (WeeklyMissionsSubMonitor___c__DisplayClass34_0_o* __this, float t, const MethodInfo* method); */

void WeeklyMissionsSubMonitor___c__DisplayClass34_0___ApplyGiftBoxMoveMotion_b__0_248dee4
               (float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_2 + 0x28);
  if ((float)*(undefined8 *)(param_2 + 0x10) <= (float)*(undefined8 *)(param_2 + 0x1c)) {
    if (lVar1 == 0) goto LAB_0258e058;
    UnityEngine_Transform__get_right_3c2da80(lVar1,0);
  }
  else {
    if (lVar1 == 0) goto LAB_0258e058;
    UnityEngine_Transform__get_right_3c2da80(lVar1,0);
  }
  if (*(long *)(param_2 + 0x28) != 0) {
    UnityEngine_Transform__get_up_3c2dafc(*(long *)(param_2 + 0x28),0);
    lVar1 = *(long *)(param_2 + 0x28);
    if (lVar1 != 0) {
      FUN_046086e0(param_1 * _UNK_013aa860);
      NEON_fmov(0x3f400000,4);
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
LAB_0258e058:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

