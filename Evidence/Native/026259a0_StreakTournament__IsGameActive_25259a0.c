/* IL2CPP: StreakTournament$$IsGameActive
bool StreakTournament__IsGameActive (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$IsGameActive
   bool StreakTournament__IsGameActive (StreakTournament_o* __this, const MethodInfo* method); */

uint StreakTournament__IsGameActive_25259a0(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_70 [72];
  int iStack_28;
  
  StreakTournament__get_Save_2524120(auStack_70);
  if (iStack_28 == 1) {
    uVar1 = StreakTournament__CanClaim_2524f94(param_1);
    uVar1 = uVar1 ^ 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

