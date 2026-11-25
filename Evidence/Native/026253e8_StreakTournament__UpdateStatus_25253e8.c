/* IL2CPP: StreakTournament$$UpdateStatus
void StreakTournament__UpdateStatus (int32_t status, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$UpdateStatus
   void StreakTournament__UpdateStatus (int32_t status, const MethodInfo* method); */

void StreakTournament__UpdateStatus_25253e8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_160 [72];
  undefined4 uStack_118;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined4 uStack_104;
  undefined1 auStack_100 [76];
  undefined8 uStack_b4;
  undefined8 uStack_ac;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4be95 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c99a0);
    FUN_021f03f8(PTR_DAT_049c8348);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be95 = 1;
  }
  puVar3 = PTR_DAT_049c99a0;
  puVar2 = PTR_DAT_049c8348;
  uStack_40 = 0;
  lVar4 = *(long *)puVar1;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_90 = 0;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar4 + 0xb8) + 0x6d0,auStack_100,*(undefined8 *)puVar2);
  func_0x04608620(&uStack_80,auStack_100,0x48);
  lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
  uStack_98 = uStack_ac;
  uStack_a0 = uStack_b4;
  uStack_90 = uStack_a4;
  func_0x04608620(auStack_160,&uStack_80,0x48);
  uStack_10c = uStack_98;
  uStack_114 = uStack_a0;
  uStack_104 = uStack_90;
  uStack_118 = param_1;
  CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
            (lVar4 + 0x6d0,auStack_160,*(undefined8 *)puVar3);
  return;
}

