/* IL2CPP: WeeklyMissions$$IsActive
bool WeeklyMissions__IsActive (WeeklyMissions_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$IsActive
   bool WeeklyMissions__IsActive (WeeklyMissions_o* __this, const MethodInfo* method); */

uint WeeklyMissions__IsActive_252abe4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    uVar2 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x70),9,0);
    if ((uVar2 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      if (*(long *)(param_1 + 0x70) == 0) goto LAB_0262ac30;
      uVar1 = LiveOpsModule__IsRefreshTimeElapsed_2547aa8(*(long *)(param_1 + 0x70),9,0);
      uVar1 = uVar1 ^ 1;
    }
    return uVar1 & 1;
  }
LAB_0262ac30:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

