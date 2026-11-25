/* IL2CPP: LocalizationSheet$$SetSystemLanguage
void LocalizationSheet__SetSystemLanguage (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LocalizationSheet$$SetSystemLanguage
   void LocalizationSheet__SetSystemLanguage (const MethodInfo* method); */

void LocalizationSheet__SetSystemLanguage_2564100(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uStack_68;
  undefined8 uStack_60;
  int iStack_58;
  
  puVar1 = PTR_DAT_049b3bf8;
  if ((bRam0000000004f4c142 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3bf8);
    FUN_021f03f8(PTR_DAT_049c2ea8);
    bRam0000000004f4c142 = 1;
  }
  puVar2 = PTR_DAT_049c2ea8;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  iVar8 = UnityEngine_Application__get_systemLanguage_3bc8158(0);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar2);
  }
  if ((bRam0000000004f4bee2 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b3c58,0);
    FUN_021f03f8(PTR_DAT_049c9cc8);
    FUN_021f03f8(PTR_DAT_049c2ea8);
    FUN_021f03f8(PTR_DAT_049c9cd0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c5158);
    FUN_021f03f8(PTR_DAT_049c9cd8);
    FUN_021f03f8(PTR_DAT_049b50f8);
    bRam0000000004f4bee2 = 1;
  }
  puVar1 = PTR_DAT_049c2ea8;
  if (iVar8 == 6) {
    iVar8 = 0x28;
  }
  else if (iVar8 == 0x2b) {
    iVar8 = 10;
  }
  lVar9 = *(long *)PTR_DAT_049c2ea8;
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_021f0574();
    lVar9 = *(long *)puVar1;
  }
  puVar7 = PTR_DAT_049c9cd8;
  puVar6 = PTR_DAT_049c9cd0;
  puVar5 = PTR_DAT_049c5158;
  puVar4 = PTR_DAT_049b5310;
  puVar3 = PTR_DAT_049b50f8;
  puVar2 = PTR_DAT_049b3c58;
  if (**(long **)(lVar9 + 0xb8) != 0) {
    uStack_68 = CONCAT44(uStack_68._4_4_,iVar8);
    uVar10 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                       (**(long **)(lVar9 + 0xb8),&uStack_68,*(undefined8 *)PTR_DAT_049c9cc8);
    lVar9 = *(long *)puVar4;
    if ((uVar10 & 1) == 0) {
      iVar8 = 10;
    }
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_021f0574();
      lVar9 = *(long *)puVar4;
    }
    uStack_68 = CONCAT44(uStack_68._4_4_,iVar8);
    PlayerPrefsEnum___Il2CppFullySharedGenericStructType___Set_2910300
              (*(long *)(lVar9 + 0xb8) + 0x28,&uStack_68,*(undefined8 *)puVar6);
    uStack_68 = *(undefined8 *)puVar5;
    uStack_60 = 0xffffffffffffffff;
    iStack_58 = iVar8;
    uVar11 = System_Enum__ToString_3135e00(&uStack_68,0);
    uVar11 = System_String__Concat_2f7d424(*(undefined8 *)puVar7,uVar11,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      FUN_021f0574(*(long *)puVar2);
    }
    UnityEngine_Debug__Log_3bd0be4(uVar11,0);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    Localization__UpdateFallbackFont_252dff8();
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

