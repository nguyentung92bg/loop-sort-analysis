/* IL2CPP: DailyChallenge$$GetLevel
LevelSheet_Level_o* DailyChallenge__GetLevel (DailyChallengeSheetContainer_o* sheetContainer, System_DateTime_o date, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: DailyChallenge$$GetLevel
   LevelSheet_Level_o* DailyChallenge__GetLevel (DailyChallengeSheetContainer_o* sheetContainer,
   System_DateTime_o date, const MethodInfo* method); */

undefined8 DailyChallenge__GetLevel_25165c8(long param_1,undefined8 param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_38;
  undefined8 uStack_28;
  
  uStack_38 = param_2;
  if ((bRam0000000004f4be1b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9380);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049c9388);
    FUN_021f03f8(PTR_DAT_049b5480);
    bRam0000000004f4be1b = 1;
  }
  puVar3 = PTR_DAT_049c9380;
                    /* try { // try from 02616630 to 0271668f has its CatchHandler @ 02616d60 */
  if (((param_1 == 0) || (lVar8 = *(long *)(param_1 + 0x20), lVar8 == 0)) ||
     (iVar4 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                        (lVar8,*(undefined8 *)PTR_DAT_049c9380), iVar4 == 0)) {
    return 0;
  }
  uVar5 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                    (lVar8,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)PTR_DAT_049b5fb0 + 0xe4) == 0) {
    FUN_021f0574(*(long *)PTR_DAT_049b5fb0);
  }
  iVar4 = System_DateTime__get_Year_30ddc1c(&uStack_38,0);
  iVar6 = System_DateTime__get_Month_30dd8d0(&uStack_38,0);
  lVar7 = DailyChallenge__GetMonthOrder_251673c(uVar5,iVar6 + iVar4 * 0xc);
                    /* try { // try from 026166a4 to 027166af has its CatchHandler @ 026168a0 */
  iVar4 = System_DateTime__get_Day_30dd524(&uStack_38,0);
  iVar6 = System_Collections_ObjectModel_Collection___Il2CppFullySharedGenericType___get_Count_2807450
                    (lVar8,*(undefined8 *)puVar3);
                    /* try { // try from 026166bc to 027166cb has its CatchHandler @ 0261689c */
  if (lVar7 != 0) {
    iVar2 = 0;
    if (iVar6 != 0) {
      iVar2 = (iVar4 + -1) / iVar6;
    }
    uVar1 = (iVar4 + -1) - iVar2 * iVar6;
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                    /* try { // try from 026166e4 to 027166ef has its CatchHandler @ 02616d60 */
      uVar5 = *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20);
      if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
                    /* try { // try from 026166f4 to 02716727 has its CatchHandler @ 02616a3c */
        FUN_021f0574();
      }
      Extensions__GetWrapped___Il2CppFullySharedGenericType__25efed0
                (lVar8,uVar5,&uStack_28,*(undefined8 *)PTR_DAT_049c9388);
      return uStack_28;
    }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02616738 to 0271674f has its CatchHandler @ 02616a38 */
    FUN_021f06a8();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

