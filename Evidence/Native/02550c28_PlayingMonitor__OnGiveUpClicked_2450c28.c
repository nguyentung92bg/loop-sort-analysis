/* IL2CPP: PlayingMonitor$$OnGiveUpClicked
void PlayingMonitor__OnGiveUpClicked (PlayingMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: PlayingMonitor$$OnGiveUpClicked
   void PlayingMonitor__OnGiveUpClicked (PlayingMonitor_o* __this, const MethodInfo* method); */

void PlayingMonitor__OnGiveUpClicked_2450c28(long param_1)

{
  undefined1 auStack_14 [4];
  
  if ((bRam0000000004f4b8cd & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c48a0);
    bRam0000000004f4b8cd = 1;
  }
  if (*(long *)(param_1 + 0x1a0) != 0) {
    auStack_14[0] = 1;
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___TrySetResult_27dffb8
              (*(long *)(param_1 + 0x1a0),auStack_14,*(undefined8 *)PTR_DAT_049c48a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

