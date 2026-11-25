/* IL2CPP: StreakTournament$$TryCompleteStatus
void StreakTournament__TryCompleteStatus (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$TryCompleteStatus
   void StreakTournament__TryCompleteStatus (StreakTournament_o* __this, const MethodInfo* method);
    */

void StreakTournament__TryCompleteStatus_25259e4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4be98 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5888);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4be98 = 1;
  }
  puVar2 = PTR_DAT_049b5fc8;
  if ((*(long *)(param_1 + 0x38) != 0) &&
     (lVar3 = *(long *)(*(long *)(param_1 + 0x38) + 0x88), lVar3 != 0)) {
    uStack_40 = 0x16;
    lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                      (lVar3,&uStack_40,*(undefined8 *)PTR_DAT_049c2c68);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    auVar5 = TimeProvider__get_UtcNow_24f95ec(0);
    puVar2 = PTR_DAT_049b5050;
    if (lVar3 != 0) {
      uStack_68 = *(undefined8 *)(lVar3 + 0x40);
      uStack_70 = *(undefined8 *)(lVar3 + 0x38);
      uStack_58 = *(undefined8 *)(lVar3 + 0x50);
      uStack_60 = *(undefined8 *)(lVar3 + 0x48);
      uStack_48 = *(undefined8 *)(lVar3 + 0x60);
      uStack_50 = *(undefined8 *)(lVar3 + 0x58);
      CloudPrefsT___Il2CppFullySharedGenericStructType___op_Implicit_2803534
                (&uStack_70,&uStack_40,*(undefined8 *)PTR_DAT_049c5888);
      uVar1 = CONCAT44(uStack_3c,uStack_40);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar4 = System_DateTimeOffset__op_GreaterThanOrEqual_30e496c
                        (auVar5._0_8_,auVar5._8_8_,uVar1,uStack_38,0);
      if ((uVar4 & 1) != 0) {
        StreakTournament__UpdateStatus_25253e8(2);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

