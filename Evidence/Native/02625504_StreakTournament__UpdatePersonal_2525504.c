/* IL2CPP: StreakTournament$$UpdatePersonal
void StreakTournament__UpdatePersonal (StreakTournament_o* __this, StreakTournamentPersonal_o personal, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$UpdatePersonal
   void StreakTournament__UpdatePersonal (StreakTournament_o* __this, StreakTournamentPersonal_o
   personal, const MethodInfo* method); */

void StreakTournament__UpdatePersonal_2525504
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auStack_160 [76];
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined1 auStack_100 [92];
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  long lStack_48;
  
  puVar2 = PTR_DAT_049b5310;
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  if ((bRam0000000004f4be96 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c99a0);
    FUN_021f03f8(PTR_DAT_049c8348);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be96 = 1;
  }
  puVar4 = PTR_DAT_049c99a0;
  puVar3 = PTR_DAT_049c8348;
  lVar5 = *(long *)puVar2;
  uStack_5c = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  if (*(int *)(lVar5 + 0xe4) == 0) {
    FUN_021f0574();
    lVar5 = *(long *)puVar2;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar5 + 0xb8) + 0x6d0,auStack_100,*(undefined8 *)puVar3);
  func_0x04608620(&uStack_a0,auStack_100,0x4c);
  lVar5 = *(long *)(*(long *)puVar2 + 0xb8);
  func_0x04608620(auStack_160,&uStack_a0,0x4c);
  uStack_104 = uStack_a4;
  uStack_114 = param_2;
  uStack_10c = param_3;
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (lVar5 + 0x6d0,auStack_160,*(undefined8 *)puVar4);
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

