/* IL2CPP: StreakTournamentPlayer$$ToString
System_String_o* StreakTournamentPlayer__ToString (StreakTournamentPlayer_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentPlayer$$ToString
   System_String_o* StreakTournamentPlayer__ToString (StreakTournamentPlayer_o __this, const
   MethodInfo* method); */

void StreakTournamentPlayer__ToString_2527ad8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c9a28;
  if ((bRam0000000004f4bea8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a28);
    bRam0000000004f4bea8 = 1;
  }
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uVar2 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,&uStack_60);
  UnityEngine_JsonUtility__ToJson_3c7d288(uVar2,0);
  return;
}

