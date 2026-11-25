/* IL2CPP: StreakTowerSheet$$GetStageMilestone
int32_t StreakTowerSheet__GetStageMilestone (StreakTowerSheet_o* __this, StreakTowerSheet_Stage_o* stage, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTowerSheet$$GetStageMilestone
   int32_t StreakTowerSheet__GetStageMilestone (StreakTowerSheet_o* __this,
   StreakTowerSheet_Stage_o* stage, const MethodInfo* method); */

int StreakTowerSheet__GetStageMilestone_25688d0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  int iStack_38;
  int iStack_34;
  
  if ((bRam0000000004f4c17c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2cf0);
    FUN_021f03f8(PTR_DAT_049cbd68);
    bRam0000000004f4c17c = 1;
  }
  if (param_2 == 0) {
LAB_026689b8:
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar5 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
  uVar1 = *(undefined4 *)(plVar5[1] + 0xfc);
  uVar3 = thunk_FUN_0224e54c(param_2,*(undefined8 *)(*plVar5 + 0x80));
  func_0x04608620(&iStack_38,uVar3,uVar1);
  puVar2 = PTR_DAT_049cbd68;
  if (iStack_38 < 2) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    iVar7 = 1;
    do {
      iStack_34 = iVar7;
      lVar4 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                        (param_1,&iStack_34,*(undefined8 *)puVar2);
      if (lVar4 == 0) goto LAB_026689b8;
      iVar7 = iVar7 + 1;
      iVar6 = *(int *)(lVar4 + 0x18) + iVar6;
    } while (iStack_38 != iVar7);
  }
  return iVar6;
}

