/* IL2CPP: SettingsPageMonitor$$OnSignOutNoClicked
void SettingsPageMonitor__OnSignOutNoClicked (SettingsPageMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$OnSignOutNoClicked
   void SettingsPageMonitor__OnSignOutNoClicked (SettingsPageMonitor_o* __this, const MethodInfo*
   method); */

void SettingsPageMonitor__OnSignOutNoClicked_245dc98(long param_1)

{
  undefined1 auStack_14 [4];
  
  if ((bRam0000000004f4b933 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c48a0);
    bRam0000000004f4b933 = 1;
  }
  if (*(long *)(param_1 + 0xf8) != 0) {
    auStack_14[0] = 0;
    Cysharp_Threading_Tasks_AutoResetUniTaskCompletionSource___Il2CppFullySharedGenericType___TrySetResult_27dffb8
              (*(long *)(param_1 + 0xf8),auStack_14,*(undefined8 *)PTR_DAT_049c48a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

