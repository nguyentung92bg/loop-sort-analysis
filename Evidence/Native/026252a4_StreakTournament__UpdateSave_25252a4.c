/* IL2CPP: StreakTournament$$UpdateSave
void StreakTournament__UpdateSave (StreakTournamentPlayer_o mainPlayer, StreakTournamentPlayer_array* players, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$UpdateSave
   void StreakTournament__UpdateSave (StreakTournamentPlayer_o mainPlayer,
   StreakTournamentPlayer_array* players, const MethodInfo* method); */

void StreakTournament__UpdateSave_25252a4(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_168 [96];
  undefined1 auStack_108 [96];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4be94 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c99a0);
    FUN_021f03f8(PTR_DAT_049c8348);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be94 = 1;
  }
  puVar3 = PTR_DAT_049c99a0;
  puVar2 = PTR_DAT_049c8348;
  lVar4 = *(long *)puVar1;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar4 + 0xb8) + 0x6d0,auStack_108,*(undefined8 *)puVar2);
  func_0x04608620(&uStack_a0,auStack_108,0x60);
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  thunk_FUN_021f190c(&uStack_90,0);
  uStack_a8 = param_2;
  thunk_FUN_021f190c(&uStack_a8,param_2);
  uStack_60 = uStack_a8;
  thunk_FUN_021f190c(&uStack_60,0);
  func_0x04608620(auStack_168,&uStack_a0,0x60);
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (*(long *)(*(long *)puVar1 + 0xb8) + 0x6d0,auStack_168,*(undefined8 *)puVar3);
  return;
}

