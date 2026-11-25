/* IL2CPP: StreakTower$$get_Save
StreakTowerSave_o StreakTower__get_Save (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$get_Save
   StreakTowerSave_o StreakTower__get_Save (const MethodInfo* method); */

undefined1  [16] StreakTower__get_Save_2527c1c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_30 [12];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4beac & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5be8);
                    /* try { // try from 02627c50 to 02727c53 has its CatchHandler @ 02627f1c */
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4beac = 1;
  }
  puVar2 = PTR_DAT_049c5be8;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
                    /* try { // try from 02627c7c to 02727c87 has its CatchHandler @ 02627f18 */
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar3 + 0xb8) + 0x6a0,auStack_30,*(undefined8 *)puVar2);
  auVar4._12_4_ = 0;
  auVar4._0_12_ = auStack_30;
  return auVar4;
}

