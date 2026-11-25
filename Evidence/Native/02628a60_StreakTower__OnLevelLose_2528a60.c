/* IL2CPP: StreakTower$$OnLevelLose
void StreakTower__OnLevelLose (StreakTower_o* __this, LevelLoseMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$OnLevelLose
   void StreakTower__OnLevelLose (StreakTower_o* __this, LevelLoseMessage_o m, const MethodInfo*
   method); */

void StreakTower__OnLevelLose_2528a60(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong auStack_30 [2];
  
  if ((bRam0000000004f4beb8 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a98);
    FUN_021f03f8(PTR_DAT_049c5be8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4beb8 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar2 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x28),0x14,0);
    if ((uVar2 & 1) != 0) {
      lVar3 = StreakTower__GetCheckpointStage_25287e0(param_1);
      puVar1 = PTR_DAT_049b5310;
      lVar4 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574(lVar4);
        lVar4 = *(long *)puVar1;
      }
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (*(long *)(lVar4 + 0xb8) + 0x6a0,auStack_30,*(undefined8 *)PTR_DAT_049c5be8);
      if (lVar3 == 0) goto LAB_02628b54;
      auStack_30[0] = (ulong)*(uint *)(lVar3 + 0x50) | auStack_30[0] << 0x20;
      CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                (*(long *)(*(long *)puVar1 + 0xb8) + 0x6a0,auStack_30,
                 *(undefined8 *)PTR_DAT_049c9a98);
    }
    return;
  }
LAB_02628b54:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

