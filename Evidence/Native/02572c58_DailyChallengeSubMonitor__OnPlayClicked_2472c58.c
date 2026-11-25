/* IL2CPP: DailyChallengeSubMonitor$$OnPlayClicked
void DailyChallengeSubMonitor__OnPlayClicked (DailyChallengeSubMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallengeSubMonitor$$OnPlayClicked
   void DailyChallengeSubMonitor__OnPlayClicked (DailyChallengeSubMonitor_o* __this, const
   MethodInfo* method); */

void DailyChallengeSubMonitor__OnPlayClicked_2472c58(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [16];
  
  if ((bRam0000000004f4b9b2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5478);
    bRam0000000004f4b9b2 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    Monitors__Deactivate_object__2688964
              (*(long *)(param_1 + 0x28),0,*(undefined8 *)PTR_DAT_049c5478);
    puVar2 = PTR_DAT_049b5fc8;
    lVar3 = *(long *)(param_1 + 0x40);
    if (lVar3 != 0) {
      if ((bRam0000000004f4be12 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049b5050,0);
        FUN_021f03f8(PTR_DAT_049b5fc8);
        bRam0000000004f4be12 = 1;
      }
      puVar1 = PTR_DAT_049b5050;
      auStack_30._8_8_ = 0;
      auStack_30._0_8_ = 0;
      auStack_34[0] = 0;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auStack_30 = TimeProvider__get_Now_24f4584(0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar4 = System_DateTimeOffset__get_Date_30e0fe4(auStack_30,0);
      auStack_34[0] = DailyChallenge__Play_25158f0(lVar3,uVar4);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_34,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

