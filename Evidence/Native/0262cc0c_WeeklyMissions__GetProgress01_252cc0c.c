/* IL2CPP: WeeklyMissions$$GetProgress01
float WeeklyMissions__GetProgress01 (WeeklyMissions_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissions$$GetProgress01
   float WeeklyMissions__GetProgress01 (WeeklyMissions_o* __this, const MethodInfo* method); */

float WeeklyMissions__GetProgress01_252cc0c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  float fVar10;
  uint uStack_44;
  
  if ((bRam0000000004f4bed8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5d60);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c5d70);
    bRam0000000004f4bed8 = 1;
  }
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_1 + 0x78) + 0xa8), lVar8 != 0)) {
    uVar4 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                      (lVar8,*(undefined8 *)PTR_DAT_049c5d60);
    puVar2 = PTR_DAT_049b5310;
    if (uVar4 == 0) {
      fVar10 = 0.0;
    }
    else {
      lVar6 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar2;
      }
      puVar2 = PTR_DAT_049c5d70;
      iVar5 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar6 + 0xb8) + 0x438,0);
      uVar3 = 0;
      iVar1 = 0;
      do {
        iVar7 = iVar1;
        uVar9 = uVar3;
        if ((uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) == uVar9) {
          return 1.0;
        }
        uStack_44 = uVar9 + 1;
        lVar6 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                          (lVar8,&uStack_44,*(undefined8 *)puVar2);
        if (lVar6 == 0) goto LAB_0262cd60;
        iVar1 = *(int *)(lVar6 + 0x18);
        uVar3 = uVar9 + 1;
      } while (iVar1 <= iVar5);
      iVar1 = iVar1 - iVar7;
      if (iVar1 < 1) {
        fVar10 = 1.0;
      }
      else {
        fVar10 = (float)(iVar5 - iVar7) / (float)iVar1;
      }
      fVar10 = (fVar10 + (float)(int)uVar9) / (float)(int)uVar4;
    }
    return fVar10;
  }
LAB_0262cd60:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

