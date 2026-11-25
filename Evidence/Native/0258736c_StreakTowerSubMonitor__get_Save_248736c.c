/* IL2CPP: StreakTowerSubMonitor$$get_Save
StreakTowerSave_o StreakTowerSubMonitor__get_Save (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTowerSubMonitor$$get_Save
   StreakTowerSave_o StreakTowerSubMonitor__get_Save (const MethodInfo* method); */

undefined1  [16] StreakTowerSubMonitor__get_Save_248736c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_30 [12];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4ba32 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5be8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4ba32 = 1;
  }
  puVar2 = PTR_DAT_049c5be8;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar3 + 0xb8) + 0x6a0,auStack_30,*(undefined8 *)puVar2);
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auStack_30;
  return auVar4;
}

