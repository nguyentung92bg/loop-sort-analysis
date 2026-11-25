/* IL2CPP: ConsoleMethods$$SetLocalSheet
void ConsoleMethods__SetLocalSheet (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ConsoleMethods$$SetLocalSheet
   void ConsoleMethods__SetLocalSheet (const MethodInfo* method); */

void ConsoleMethods__SetLocalSheet_24f2ee4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uStack_24;
  
  puVar2 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bd01 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c8270);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c8278);
    bRam0000000004f4bd01 = 1;
  }
  puVar3 = PTR_DAT_049c8270;
  puVar1 = PTR_DAT_049b3c58;
  lVar4 = *(long *)puVar2;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar2;
  }
  puVar2 = PTR_DAT_049c8278;
  uStack_24 = 0;
  PlayerPrefsEnum___Il2CppFullySharedGenericStructType___Set_2910300
            (*(undefined8 *)(lVar4 + 0xb8),&uStack_24,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  UnityEngine_Debug__Log_3bd0be4(*(undefined8 *)puVar2,0);
  return;
}

