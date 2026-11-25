/* IL2CPP: AccountMergeMonitor$$OnCloseClicked
void AccountMergeMonitor__OnCloseClicked (AccountMergeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AccountMergeMonitor$$OnCloseClicked
   void AccountMergeMonitor__OnCloseClicked (AccountMergeMonitor_o* __this, const MethodInfo*
   method); */

void AccountMergeMonitor__OnCloseClicked_2432ab4(long param_1)

{
  undefined4 uStack_24;
  
  if ((bRam0000000004f4b7e4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3968);
    FUN_021f03f8(PTR_DAT_049c3970);
    bRam0000000004f4b7e4 = 1;
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    uStack_24 = 0;
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___TrySetResult_27dffb8
              (*(long *)(param_1 + 0xa0),&uStack_24,*(undefined8 *)PTR_DAT_049c3968);
    if (*(long *)(param_1 + 0x30) != 0) {
      Monitors__Deactivate_object__2688964
                (*(long *)(param_1 + 0x30),0,*(undefined8 *)PTR_DAT_049c3970);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

