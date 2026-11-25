/* IL2CPP: StreakTournamentSubMonitor$$Render
void StreakTournamentSubMonitor__Render (StreakTournamentSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor$$Render
   void StreakTournamentSubMonitor__Render (StreakTournamentSubMonitor_o* __this, const MethodInfo*
   method); */

void StreakTournamentSubMonitor__Render_24834e4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4ba13 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5fa8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c2c68);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    bRam0000000004f4ba13 = 1;
  }
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if ((*(long *)(param_1 + 0xd0) != 0) &&
     (lVar1 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(param_1 + 0xd0),0), lVar1 != 0
     )) {
    uVar2 = UnityEngine_GameObject__get_activeSelf_3c1cef8(lVar1,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if ((*(long *)(param_1 + 0xa8) != 0) &&
       (lVar1 = *(long *)(*(long *)(param_1 + 0xa8) + 0x88), lVar1 != 0)) {
      uStack_30 = 0x16;
      lVar1 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (lVar1,&uStack_30,*(undefined8 *)PTR_DAT_049c2c68);
      if (lVar1 != 0) {
        uStack_58 = *(undefined8 *)(lVar1 + 0x40);
        uStack_60 = *(undefined8 *)(lVar1 + 0x38);
        uStack_48 = *(undefined8 *)(lVar1 + 0x50);
        uStack_50 = *(undefined8 *)(lVar1 + 0x48);
        uStack_38 = *(undefined8 *)(lVar1 + 0x60);
        uStack_40 = *(undefined8 *)(lVar1 + 0x58);
        CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                  (&uStack_60,&uStack_30,*(undefined8 *)PTR_DAT_049b5fa8);
        uStack_70 = CONCAT44(uStack_2c,uStack_30);
        uStack_68 = uStack_28;
        if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
          FUN_021f0574();
        }
        auVar5 = TimeProvider__get_UtcNow_24f95ec(0);
        if (*(int *)(*(long *)PTR_DAT_049b5050 + 0xe4) == 0) {
          FUN_021f0574();
        }
        uVar3 = System_DateTimeOffset__Subtract_30e2d84(&uStack_70,auVar5._0_8_,auVar5._8_8_,0);
        uVar4 = *(undefined8 *)(param_1 + 0xd0);
        if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
          FUN_021f0574(*(long *)PTR_DAT_049b6110);
        }
        uVar3 = Extensions__ToReadableString_24e7038(uVar3,2,0);
        StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                  (uVar4,0xce1592a9,uVar3,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

