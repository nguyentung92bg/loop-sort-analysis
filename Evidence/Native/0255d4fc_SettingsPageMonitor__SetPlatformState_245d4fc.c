/* IL2CPP: SettingsPageMonitor$$SetPlatformState
void SettingsPageMonitor__SetPlatformState (SettingsPageMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$SetPlatformState
   void SettingsPageMonitor__SetPlatformState (SettingsPageMonitor_o* __this, const MethodInfo*
   method); */

void SettingsPageMonitor__SetPlatformState_245d4fc(long param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((bRam0000000004f4b929 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4e50);
    FUN_021f03f8(PTR_DAT_049c4e58);
    bRam0000000004f4b929 = 1;
  }
  lVar5 = *(long *)(param_1 + 0x100);
  if (lVar5 != 0) {
    lVar4 = *(long *)PTR_DAT_049c4e58;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    uVar3 = FUN_021f1190(*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 200));
    if ((uVar3 & 1) == 0) {
      *(undefined4 *)(lVar5 + 0x18) = 0;
    }
    else {
      iVar1 = *(int *)(lVar5 + 0x18);
      *(undefined4 *)(lVar5 + 0x18) = 0;
      if (0 < iVar1) {
        System_Array__Clear_31229cc(*(undefined8 *)(lVar5 + 0x10),0,iVar1,0);
      }
    }
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(param_1,0x4c4b387b,0);
    puVar2 = PTR_DAT_049c4e50;
    if (*(long *)(param_1 + 0x100) != 0) {
      uStack_18 = 5;
      FUN_02333498(*(long *)(param_1 + 0x100),&uStack_18,*(undefined8 *)PTR_DAT_049c4e50);
      if (*(long *)(param_1 + 0x100) != 0) {
        uStack_14 = 6;
        FUN_02333498(*(long *)(param_1 + 0x100),&uStack_14,*(undefined8 *)puVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

