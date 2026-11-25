/* IL2CPP: StreakTournament$$OnLevelLose
void StreakTournament__OnLevelLose (StreakTournament_o* __this, LevelLoseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$OnLevelLose
   void StreakTournament__OnLevelLose (StreakTournament_o* __this, LevelLoseMessage_o m, const
   MethodInfo* method); */

void StreakTournament__OnLevelLose_252714c(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_7c;
  undefined8 uStack_74;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_48;
  undefined4 uStack_40;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x90) = 1;
  uVar2 = StreakTournament__IsGameActive_25259a0();
  if ((uVar2 & 1) != 0) {
    StreakTournament__StartGameIfNeeded_2525b20(param_1);
    StreakTournament__ApplyProgression_2526e0c(param_1);
    StreakTournament__get_Save_2524120(&uStack_a8);
    uStack_b0 = uStack_88;
    uStack_c8 = uStack_a0;
    uStack_d0 = uStack_a8;
    uStack_b8 = uStack_90;
    uStack_c0 = uStack_98;
    uStack_48 = uStack_74;
    uStack_40 = uStack_6c;
    if ((bRam0000000004f4be9f & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049bbda8);
      FUN_021f03f8(PTR_DAT_049bbdb0);
      bRam0000000004f4be9f = 1;
    }
    StreakTournament__get_Save_2524120(&uStack_a8);
    uStack_f0 = uStack_b0;
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    uStack_f8 = uStack_b8;
    uStack_100 = uStack_c0;
    uStack_e8 = 0;
    uStack_e4 = uStack_7c;
    uStack_e0 = 0;
    uStack_dc = uStack_48;
    uStack_d4 = uStack_40;
    StreakTournament__UpdateSave_25252a4(&uStack_110,uStack_68);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

