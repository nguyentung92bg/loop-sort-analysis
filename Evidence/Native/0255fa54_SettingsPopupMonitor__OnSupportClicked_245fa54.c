/* IL2CPP: SettingsPopupMonitor$$OnSupportClicked
void SettingsPopupMonitor__OnSupportClicked (SettingsPopupMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPopupMonitor$$OnSupportClicked
   void SettingsPopupMonitor__OnSupportClicked (SettingsPopupMonitor_o* __this, const MethodInfo*
   method); */

void SettingsPopupMonitor__OnSupportClicked_245fa54(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_24 [4];
  
  puVar1 = PTR_DAT_049c3958;
  if ((bRam0000000004f4b93b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4e88);
    FUN_021f03f8(PTR_DAT_049c3958);
    bRam0000000004f4b93b = 1;
  }
  lVar2 = *(long *)puVar1;
  lVar4 = *(long *)(param_1 + 0x30);
  if (*(int *)(lVar2 + 0xe4) == 0) {
    FUN_021f0574();
    lVar2 = *(long *)puVar1;
  }
  auStack_24[0] = **(undefined1 **)(lVar2 + 0xb8);
  uVar3 = thunk_FUN_0222c66c(lVar2,auStack_24);
  if (lVar4 != 0) {
    Monitors__Additive_object__26888e8(lVar4,uVar3,1,*(undefined8 *)PTR_DAT_049c4e88);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

