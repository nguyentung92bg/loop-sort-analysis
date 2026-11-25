/* IL2CPP: DailyChallenge$$IsActive
bool DailyChallenge__IsActive (DailyChallenge_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$IsActive
   bool DailyChallenge__IsActive (DailyChallenge_o* __this, const MethodInfo* method); */

uint DailyChallenge__IsActive_2515358(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4be10 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2f60);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be10 = 1;
  }
  puVar2 = PTR_DAT_049b5310;
  lVar6 = *(long *)(param_1 + 0x50);
  if (lVar6 == 0) goto LAB_0261543c;
  if (*(char *)(lVar6 + 0x10) != '\0') {
    iVar1 = *(int *)(lVar6 + 0x14);
    lVar6 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar2;
    }
    iVar3 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar6 + 0xb8) + 0x60,0);
    if (iVar1 <= iVar3 + 1) {
      if (*(long *)(param_1 + 0x20) == 0) {
LAB_0261543c:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar5 = DailyChallengeSheetModule__get_HasData_255e38c(*(long *)(param_1 + 0x20),0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_1 + 0x18) == 0) ||
           (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x88), lVar6 == 0)) goto LAB_0261543c;
        uStack_24 = 0x1c;
        uVar4 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                          (lVar6,&uStack_24,*(undefined8 *)PTR_DAT_049c2f60);
        goto LAB_02615428;
      }
    }
  }
  uVar4 = 0;
LAB_02615428:
  return uVar4 & 1;
}

