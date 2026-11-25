/* IL2CPP: ConsoleMethods$$SetStreakTowerWin
void ConsoleMethods__SetStreakTowerWin (int32_t winStreak, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetStreakTowerWin
   void ConsoleMethods__SetStreakTowerWin (int32_t winStreak, const MethodInfo* method); */

void ConsoleMethods__SetStreakTowerWin_24f3c50(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uStack_50;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd0e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5be8);
    FUN_021f03f8(PTR_DAT_049c8338);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c8340);
    bRam0000000004f4bd0e = 1;
  }
  puVar4 = PTR_DAT_049c8338;
  puVar3 = PTR_DAT_049c5be8;
  puVar1 = PTR_DAT_049b3c58;
  lVar6 = *(long *)puVar2;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  puVar5 = PTR_DAT_049c8340;
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar6 + 0xb8) + 0x6a0,&uStack_50,*(undefined8 *)puVar3);
  uStack_50 = CONCAT44(uStack_50._4_4_,param_1);
  CloudPrefsT___Il2CppFullySharedGenericStructType___set_Value_28023e4
            (*(long *)(*(long *)puVar2 + 0xb8) + 0x6a0,&uStack_50,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Debug__Log_3bd0be4(*(undefined8 *)puVar5,0);
  return;
}

