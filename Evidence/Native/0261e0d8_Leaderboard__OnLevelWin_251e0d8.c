/* IL2CPP: Leaderboard$$OnLevelWin
void Leaderboard__OnLevelWin (Leaderboard_o* __this, LevelWinMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard$$OnLevelWin
   void Leaderboard__OnLevelWin (Leaderboard_o* __this, LevelWinMessage_o m, const MethodInfo*
   method); */

void Leaderboard__OnLevelWin_251e0d8(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar3 = Leaderboard__IsActive_251d2f4();
  if ((uVar3 & 1) == 0) {
    return;
  }
  if ((bRam0000000004f4be61 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5310);
    bRam0000000004f4be61 = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  if (*(long *)(param_1 + 0x58) != 0) {
    if ((*(char *)(*(long *)(param_1 + 0x58) + 0x18) != '\0') && (*(int *)(param_1 + 0x70) == 2)) {
      lVar4 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(lVar4 + 0xb8);
      iVar2 = CloudPrefsInt__get_Value_24e99c0(lVar4 + 0x880,0);
      puVar1 = PTR_DAT_049c5aa8;
      if ((bRam0000000004f4bcb1 & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c5aa8,iVar2 + 1,0);
        bRam0000000004f4bcb1 = 1;
      }
      uStack_38 = *(undefined8 *)(lVar4 + 0x888);
      uStack_40 = *(undefined8 *)(lVar4 + 0x880);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      PlayerPrefsInt__Set_3f0dba4(&uStack_40,iVar2 + 1,0);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

