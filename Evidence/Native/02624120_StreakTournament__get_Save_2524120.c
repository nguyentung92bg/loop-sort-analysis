/* IL2CPP: StreakTournament$$get_Save
StreakTournamentSave_o StreakTournament__get_Save (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$get_Save
   StreakTournamentSave_o StreakTournament__get_Save (StreakTournament_o* __this, const MethodInfo*
   method); */

void StreakTournament__get_Save_2524120(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_80 [96];
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4be8d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8348);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be8d = 1;
  }
  puVar2 = PTR_DAT_049c8348;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar3 + 0xb8) + 0x6d0,auStack_80,*(undefined8 *)puVar2);
  func_0x04608620(param_1,auStack_80,0x60);
  return;
}

