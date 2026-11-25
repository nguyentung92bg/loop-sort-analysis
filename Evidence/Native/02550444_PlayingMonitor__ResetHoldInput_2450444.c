/* IL2CPP: PlayingMonitor$$ResetHoldInput
void PlayingMonitor__ResetHoldInput (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$ResetHoldInput
   void PlayingMonitor__ResetHoldInput (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__ResetHoldInput_2450444(long param_1)

{
  long *plVar1;
  
  if (*(long *)(param_1 + 0x1b0) != 0) {
    LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_1 + 0x1b0),0);
  }
  if (*(long *)(param_1 + 0x1b8) != 0) {
    LitMotion_CompositeMotionHandle__Cancel_2e8aef0(*(long *)(param_1 + 0x1b8),0);
  }
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 0x19c) = 0;
  if (*(long *)(param_1 + 400) != 0) {
    UnityEngine_CanvasGroup__set_alpha_3ec2b80(0,*(long *)(param_1 + 400),0);
    plVar1 = (long *)StatefulUISupport_Scripts_Components_StatefulView__GetImage_335188c
                               (param_1,0xcf943524,0);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x025504c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x2a8))
                (0x3f800000,0x3f800000,0x3f800000,0,plVar1,*(undefined8 *)(*plVar1 + 0x2b0));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

