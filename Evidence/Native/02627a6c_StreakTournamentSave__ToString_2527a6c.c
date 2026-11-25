/* IL2CPP: StreakTournamentSave$$ToString
System_String_o* StreakTournamentSave__ToString (StreakTournamentSave_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournamentSave$$ToString
   System_String_o* StreakTournamentSave__ToString (StreakTournamentSave_o __this, const MethodInfo*
   method); */

void StreakTournamentSave__ToString_2527a6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_80 [96];
  
  puVar1 = PTR_DAT_049c9a20;
  if ((bRam0000000004f4bea7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a20);
    bRam0000000004f4bea7 = 1;
  }
  func_0x04608620(auStack_80,param_1,0x60);
  uVar2 = thunk_FUN_0222c66c(*(undefined8 *)puVar1,auStack_80);
  UnityEngine_JsonUtility__ToJson_3c7d288(uVar2,0);
  return;
}

