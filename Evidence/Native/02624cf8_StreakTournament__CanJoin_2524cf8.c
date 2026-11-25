/* IL2CPP: StreakTournament$$CanJoin
bool StreakTournament__CanJoin (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$CanJoin
   bool StreakTournament__CanJoin (StreakTournament_o* __this, const MethodInfo* method); */

bool StreakTournament__CanJoin_2524cf8(long param_1)

{
  bool bVar1;
  undefined1 auStack_70 [72];
  int iStack_28;
  
  if (*(long *)(param_1 + 0x88) != 0) {
    if (*(char *)(*(long *)(param_1 + 0x88) + 0x10) == '\0') {
      bVar1 = false;
    }
    else {
      StreakTournament__get_Save_2524120(auStack_70);
      bVar1 = iStack_28 == 0;
    }
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

