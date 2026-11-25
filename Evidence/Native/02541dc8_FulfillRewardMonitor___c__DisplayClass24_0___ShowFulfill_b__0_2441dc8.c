/* IL2CPP: FulfillRewardMonitor.<>c__DisplayClass24_0$$<ShowFulfill>b__0
void FulfillRewardMonitor___c__DisplayClass24_0___ShowFulfill_b__0 (FulfillRewardMonitor___c__DisplayClass24_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FulfillRewardMonitor.<>c__DisplayClass24_0$$<ShowFulfill>b__0
   void FulfillRewardMonitor___c__DisplayClass24_0___ShowFulfill_b__0
   (FulfillRewardMonitor___c__DisplayClass24_0_o* __this, const MethodInfo* method); */

void FulfillRewardMonitor___c__DisplayClass24_0___ShowFulfill_b__0_2441dc8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0x30) != 0)) {
    Monitors__RestoreRaycaster_256eafc(*(long *)(lVar1 + 0x30),lVar1,0);
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0x18),0),
       lVar1 != 0)) {
      if ((bRam0000000004f581f8 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_04a251b8,1,0);
        bRam0000000004f581f8 = 1;
      }
      if (lVar1 != 0) {
        lVar2 = *(long *)(lVar1 + 0x10);
        if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_3c32e4c(lVar1,0);
        }
        if (pcRam0000000004f582c8 == (code *)0x0) {
          pcRam0000000004f582c8 = (code *)FUN_021f03bc(&UNK_013e08e3);
        }
                    /* WARNING: Could not recover jumptable at 0x03d1ceac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004f582c8)(lVar2,1);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

