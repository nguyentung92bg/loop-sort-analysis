/* IL2CPP: StreakTournament$$CompleteGame
void StreakTournament__CompleteGame (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$CompleteGame
   void StreakTournament__CompleteGame (StreakTournament_o* __this, const MethodInfo* method); */

void StreakTournament__CompleteGame_2526308(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if ((bRam0000000004f4c018 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4fd8,0x16,0);
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4c018 = 1;
  }
  auStack_40._0_8_ = 0;
  auStack_40._8_8_ = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if ((*(long *)(lVar2 + 0x18) != 0) &&
     (lVar3 = *(long *)(*(long *)(lVar2 + 0x18) + 0x88), lVar3 != 0)) {
    auStack_98._0_4_ = 0x16;
    uVar4 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                      (lVar3,auStack_98,*(undefined8 *)PTR_DAT_049c2f60);
    if ((uVar4 & 1) == 0) {
      return;
    }
    if ((*(long *)(lVar2 + 0x18) != 0) &&
       (lVar3 = *(long *)(*(long *)(lVar2 + 0x18) + 0x88), lVar3 != 0)) {
      auStack_98._0_4_ = 0x16;
      lVar3 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar3,auStack_98,*(undefined8 *)PTR_DAT_049c2c68);
      if (lVar3 != 0) {
        uStack_68 = *(undefined8 *)(lVar3 + 0x40);
        uStack_70 = *(undefined8 *)(lVar3 + 0x38);
        uStack_58 = *(undefined8 *)(lVar3 + 0x50);
        uStack_60 = *(undefined8 *)(lVar3 + 0x48);
        uStack_48 = *(undefined8 *)(lVar3 + 0x60);
        uStack_50 = *(undefined8 *)(lVar3 + 0x58);
        CloudPrefsT___Il2CppFullySharedGenericStructType___DeleteValue_28028c4
                  (&uStack_70,*(undefined8 *)PTR_DAT_049c4fd8);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574();
        }
        plVar5 = (long *)Extensions__ToClassInstance_24e79d0(0x16,0);
        if (plVar5 != (long *)0x0) {
          lVar6 = *(long *)(lVar2 + 0x10);
          (**(code **)(*plVar5 + 0x238))(auStack_98,plVar5,*(undefined8 *)(*plVar5 + 0x240));
          if (lVar6 != 0) {
            uStack_b8 = auStack_98._8_8_;
            uStack_c0 = auStack_98._0_8_;
            uStack_a8 = uStack_80;
            uStack_b0 = uStack_88;
            uStack_a0 = uStack_78;
            AnalyticsModule__LiveOpsEventCompleted_2540804(lVar6,0x16,&uStack_c0);
            if ((*(long *)(lVar2 + 0x18) != 0) &&
               (lVar2 = *(long *)(*(long *)(lVar2 + 0x18) + 0x90), lVar2 != 0)) {
              lVar2 = HomeLiveOpsSheet__FindSlot_2560f84(lVar2,0x16,0);
              if (lVar2 != 0) {
                HomeLiveOpsSheet_Slot__MoveToNext_2561620(lVar2,0);
              }
              if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
                FUN_021f0574();
              }
              auStack_40 = TimeProvider__get_UtcNow_24f95ec(0);
              uVar4 = LiveOpsSheet_Row__get_HasPostCompletionCooldown_256312c(lVar3,0);
              if ((uVar4 & 1) != 0) {
                uStack_48 = *(undefined8 *)(lVar3 + 0xc0);
                uStack_50 = *(undefined8 *)(lVar3 + 0xb8);
                uStack_58 = *(undefined8 *)(lVar3 + 0xb0);
                uStack_60 = *(undefined8 *)(lVar3 + 0xa8);
                uStack_68 = *(undefined8 *)(lVar3 + 0xa0);
                uStack_70 = *(undefined8 *)(lVar3 + 0x98);
                iVar1 = *(int *)(lVar3 + 0x1c);
                if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
                  FUN_021f0574();
                }
                auStack_98 = System_DateTimeOffset__AddMinutes_30e182c((double)iVar1,auStack_40,0);
                CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                          (&uStack_70,auStack_98,*(undefined8 *)PTR_DAT_049b5fa0);
              }
              (**(code **)(*plVar5 + 0x1b8))(plVar5,*(undefined8 *)(*plVar5 + 0x1c0));
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

