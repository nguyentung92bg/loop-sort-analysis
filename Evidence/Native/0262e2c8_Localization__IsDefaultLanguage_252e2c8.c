/* IL2CPP: Localization$$IsDefaultLanguage
bool Localization__IsDefaultLanguage (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Localization$$IsDefaultLanguage
   bool Localization__IsDefaultLanguage (const MethodInfo* method); */

bool Localization__IsDefaultLanguage_252e2c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iStack_14;
  
  puVar1 = PTR_DAT_049b5310;
  if ((bRam0000000004f4bee4 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9c60);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4bee4 = 1;
  }
  puVar2 = PTR_DAT_049c9c60;
  lVar3 = *(long *)puVar1;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_021f0574();
    lVar3 = *(long *)puVar1;
  }
  PlayerPrefsEnum___Il2CppFullySharedGenericStructType___get_Value_290ff8c
            (*(long *)(lVar3 + 0xb8) + 0x28,&iStack_14,*(undefined8 *)puVar2);
  return iStack_14 == 10;
}

