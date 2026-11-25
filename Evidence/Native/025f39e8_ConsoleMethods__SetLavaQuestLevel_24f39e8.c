/* IL2CPP: ConsoleMethods$$SetLavaQuestLevel
void ConsoleMethods__SetLavaQuestLevel (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetLavaQuestLevel
   void ConsoleMethods__SetLavaQuestLevel (int32_t level, const MethodInfo* method); */

void ConsoleMethods__SetLavaQuestLevel_24f39e8(undefined4 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined8 uStack_84;
  undefined4 uStack_7c;
  undefined1 auStack_78 [4];
  undefined8 uStack_74;
  undefined8 uStack_6c;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd0c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8308);
    FUN_021f03f8(PTR_DAT_049c8310);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c8318);
    bRam0000000004f4bd0c = 1;
  }
  puVar4 = PTR_DAT_049c8310;
  puVar3 = PTR_DAT_049c8308;
  puVar1 = PTR_DAT_049b3c58;
  lVar6 = *(long *)puVar2;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_50 = 0;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    FUN_021f0574();
    lVar6 = *(long *)puVar2;
  }
  puVar5 = PTR_DAT_049c8318;
  CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
            (*(long *)(lVar6 + 0xb8) + 0x628,auStack_78,*(undefined8 *)puVar3);
  uStack_50 = uStack_64;
  uStack_58 = uStack_6c;
  uStack_60 = uStack_74;
  uStack_84 = uStack_6c;
  uStack_8c = uStack_74;
  uStack_7c = uStack_64;
  uStack_90 = param_1;
  CloudPrefsT___Il2CppFullySharedGenericStructType___set_Value_28023e4
            (*(long *)(*(long *)puVar2 + 0xb8) + 0x628,&uStack_90,*(undefined8 *)puVar4);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Debug__Log_3bd0be4(*(undefined8 *)puVar5,0);
  return;
}

