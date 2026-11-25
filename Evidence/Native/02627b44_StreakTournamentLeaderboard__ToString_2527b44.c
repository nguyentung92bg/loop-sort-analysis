/* IL2CPP: StreakTournamentLeaderboard$$ToString
System_String_o* StreakTournamentLeaderboard__ToString (StreakTournamentLeaderboard_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentLeaderboard$$ToString
   System_String_o* StreakTournamentLeaderboard__ToString (StreakTournamentLeaderboard_o __this,
   const MethodInfo* method); */

void StreakTournamentLeaderboard__ToString_2527b44(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c9a30;
  if ((bRam0000000004f4beaa & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a30);
                    /* try { // try from 02627b74 to 02727b7b has its CatchHandler @ 02627f40 */
    bRam0000000004f4beaa = 1;
  }
  uStack_28 = *param_1;
  uVar2 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_28);
                    /* try { // try from 02627b94 to 02727bdf has its CatchHandler @ 02627f44 */
  UnityEngine_JsonUtility__ToJson_3c7d288(uVar2,0);
  return;
}

