/* IL2CPP: RateUsMonitor$$ResetStarRating
void RateUsMonitor__ResetStarRating (RateUsMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RateUsMonitor$$ResetStarRating
   void RateUsMonitor__ResetStarRating (RateUsMonitor_o* __this, const MethodInfo* method); */

void RateUsMonitor__ResetStarRating_245aed4(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xb0) = 0;
  if (lVar3 != 0) {
    uVar1 = *(uint *)(lVar3 + 0x18);
    if (0 < (int)uVar1) {
      lVar4 = 0;
      do {
        if (uVar1 <= (uint)lVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a8();
        }
        plVar2 = *(long **)(lVar3 + 0x20 + lVar4 * 8);
        if (plVar2 == (long *)0x0) goto LAB_0255af48;
        (**(code **)(*plVar2 + 0x2a8))(0,0,0,0x3f800000,plVar2,*(undefined8 *)(*plVar2 + 0x2b0));
        uVar1 = *(uint *)(lVar3 + 0x18);
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < (int)uVar1);
    }
    return;
  }
LAB_0255af48:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

