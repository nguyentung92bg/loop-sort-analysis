/* IL2CPP: StreakTournamentSubMonitor.<>c__DisplayClass38_0$$<StartPersonalBarClaimMotion>b__0
void StreakTournamentSubMonitor___c__DisplayClass38_0___StartPersonalBarClaimMotion_b__0 (StreakTournamentSubMonitor___c__DisplayClass38_0_o* __this, int32_t x, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor.<>c__DisplayClass38_0$$<StartPersonalBarClaimMotion>b__0
   void StreakTournamentSubMonitor___c__DisplayClass38_0___StartPersonalBarClaimMotion_b__0
   (StreakTournamentSubMonitor___c__DisplayClass38_0_o* __this, int32_t x, const MethodInfo*
   method); */

void StreakTournamentSubMonitor___c__DisplayClass38_0___StartPersonalBarClaimMotion_b__0_24842f8
               (long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar2 = PTR_DAT_049c55b8;
  if ((bRam0000000004f4ba21 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c55b8);
    bRam0000000004f4ba21 = 1;
  }
  puVar1 = PTR_DAT_049b3bd0;
  lVar5 = *(long *)(param_1 + 0x10);
  uStack_34 = param_2;
  uVar3 = thunk_FUN_0222c66c(*(undefined8 *)(PTR_DAT_049b3bd0 + 0x48),&uStack_34);
  uStack_38 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = thunk_FUN_0222c66c(*(undefined8 *)(puVar1 + 0x48),&uStack_38);
  uVar3 = System_String__Format_2f7dfac(*(undefined8 *)puVar2,uVar3,uVar4,0);
  if (lVar5 != 0) {
    TMPro_TMP_Text__SetText_3b0f78c(lVar5,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

