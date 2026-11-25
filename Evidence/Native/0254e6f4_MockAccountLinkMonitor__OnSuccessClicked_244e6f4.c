/* IL2CPP: MockAccountLinkMonitor$$OnSuccessClicked
void MockAccountLinkMonitor__OnSuccessClicked (MockAccountLinkMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MockAccountLinkMonitor$$OnSuccessClicked
   void MockAccountLinkMonitor__OnSuccessClicked (MockAccountLinkMonitor_o* __this, const
   MethodInfo* method); */

void MockAccountLinkMonitor__OnSuccessClicked_244e6f4(long param_1)

{
  undefined4 uStack_14;
  
  if ((bRam0000000004f4b8b8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4700);
    bRam0000000004f4b8b8 = 1;
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    uStack_14 = 0;
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___TrySetResult_27dffb8
              (*(long *)(param_1 + 0x98),&uStack_14,*(undefined8 *)PTR_DAT_049c4700);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

