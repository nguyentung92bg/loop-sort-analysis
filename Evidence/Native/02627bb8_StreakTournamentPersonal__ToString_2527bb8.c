/* IL2CPP: StreakTournamentPersonal$$ToString
System_String_o* StreakTournamentPersonal__ToString (StreakTournamentPersonal_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentPersonal$$ToString
   System_String_o* StreakTournamentPersonal__ToString (StreakTournamentPersonal_o __this, const
   MethodInfo* method); */

void StreakTournamentPersonal__ToString_2527bb8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c9a38;
  if ((bRam0000000004f4beab & 1) == 0) {
                    /* try { // try from 02627be0 to 02727c07 has its CatchHandler @ 02627948 */
    FUN_021f03f8(PTR_DAT_049c9a38);
    bRam0000000004f4beab = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uVar2 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_30);
                    /* try { // try from 02627c08 to 02727c0b has its CatchHandler @ 02627f00 */
  UnityEngine_JsonUtility__ToJson_3c7d288(uVar2,0);
  return;
}

