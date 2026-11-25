/* IL2CPP: StreakTournament$$Complete
void StreakTournament__Complete (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$Complete
   void StreakTournament__Complete (StreakTournament_o* __this, const MethodInfo* method); */

void StreakTournament__Complete_2524d7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined8 uStack_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4be92 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9980);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be92 = 1;
  }
  puVar2 = PTR_DAT_049c9980;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
            (*(long *)(lVar3 + 0xb8) + 0x6d0,*(undefined8 *)puVar2);
  if (*(long *)(param_1 + 0x58) != 0) {
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0x3c;
    uStack_54 = 0;
    uStack_5c = 0;
    uStack_44 = 0;
    uStack_4c = 0;
    uStack_34 = 0;
    uStack_3c = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    EconomyModule__Set_2524e30(*(long *)(param_1 + 0x58),&uStack_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

