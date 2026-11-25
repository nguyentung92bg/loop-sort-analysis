/* IL2CPP: StreakTournamentSubMonitor$$set_SecondRewardSprite
void StreakTournamentSubMonitor__set_SecondRewardSprite (StreakTournamentSubMonitor_o* __this, IconInfo_o value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSubMonitor$$set_SecondRewardSprite
   void StreakTournamentSubMonitor__set_SecondRewardSprite (StreakTournamentSubMonitor_o* __this,
   IconInfo_o value, const MethodInfo* method); */

void StreakTournamentSubMonitor__set_SecondRewardSprite_24826ac(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined8 *)(param_1 + 0x68) = param_2[2];
  *(undefined8 *)(param_1 + 0x60) = uVar2;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  if (iRam0000000005174518 != 0) {
    FUN_023118d0(1L << (param_1 + 0x58U >> 0xc & 0x3f),
                 (param_1 + 0x58U >> 0x12 & 0x7fff) * 8 + 0x4fa84f0);
  }
  return;
}

