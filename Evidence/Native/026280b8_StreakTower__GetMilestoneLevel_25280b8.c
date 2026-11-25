/* IL2CPP: StreakTower$$GetMilestoneLevel
int32_t StreakTower__GetMilestoneLevel (StreakTower_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$GetMilestoneLevel
   int32_t StreakTower__GetMilestoneLevel (StreakTower_o* __this, const MethodInfo* method); */

int StreakTower__GetMilestoneLevel_25280b8(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  int iStack_14;
  
  if ((bRam0000000004f4beb6 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2cf0);
    bRam0000000004f4beb6 = 1;
  }
  lVar2 = StreakTower__GetCheckpointStage_25287e0(param_1);
  if (lVar2 != 0) {
    plVar4 = *(long **)(*(long *)(*(long *)PTR_DAT_049c2cf0 + 0x20) + 0xc0);
    uVar1 = *(undefined4 *)(plVar4[1] + 0xfc);
    uVar3 = thunk_FUN_0224e54c(lVar2,*(undefined8 *)(*plVar4 + 0x80));
    func_0x04608620(&iStack_14,uVar3,uVar1);
    return iStack_14 + -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

