/* IL2CPP: StreakTower$$OnLevelWin
void StreakTower__OnLevelWin (StreakTower_o* __this, LevelWinMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower$$OnLevelWin
   void StreakTower__OnLevelWin (StreakTower_o* __this, LevelWinMessage_o m, const MethodInfo*
   method); */

void StreakTower__OnLevelWin_2528954(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uStack_30;
  uint uStack_28;
  
  if ((bRam0000000004f4beb7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9a98);
    FUN_021f03f8(PTR_DAT_049c5be8);
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4beb7 = 1;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    uVar4 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x28),0x14,0);
    puVar3 = PTR_DAT_049b5310;
    if ((uVar4 & 1) != 0) {
      lVar5 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar3;
      }
      CloudPrefsT___Il2CppFullySharedGenericStructType___get_Value_2802238
                (*(long *)(lVar5 + 0xb8) + 0x6a0,&uStack_30,*(undefined8 *)PTR_DAT_049c5be8);
      if ((*(long *)(param_1 + 0x30) == 0) ||
         (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x100), lVar5 == 0)) goto LAB_02628a5c;
      uVar2 = *(uint *)(lVar5 + 0x48);
      uVar1 = (int)uStack_30 + 1;
      if ((int)uVar2 <= (int)uVar1) {
        uVar1 = uVar2;
      }
      uStack_30 = uStack_30 & 0xffffffff00000000 | (ulong)uVar1;
      if ((int)uStack_28 <= (int)uVar1) {
        uStack_28 = uVar1;
      }
      CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
                (*(long *)(*(long *)puVar3 + 0xb8) + 0x6a0,&uStack_30,
                 *(undefined8 *)PTR_DAT_049c9a98);
    }
    return;
  }
LAB_02628a5c:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

