/* IL2CPP: RateUsMonitor$$OnMaybeClicked
void RateUsMonitor__OnMaybeClicked (RateUsMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RateUsMonitor$$OnMaybeClicked
   void RateUsMonitor__OnMaybeClicked (RateUsMonitor_o* __this, const MethodInfo* method); */

void RateUsMonitor__OnMaybeClicked_245b1a8(long param_1)

{
  long lVar1;
  undefined1 auStack_14 [4];
  
  lVar1 = *(long *)(param_1 + 0xb8);
  if (lVar1 != 0) {
    auStack_14[0] = 0;
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),auStack_14,*(undefined8 *)(lVar1 + 0x28));
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    Monitors__Deactivate_256e214(*(long *)(param_1 + 0x30),param_1,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

