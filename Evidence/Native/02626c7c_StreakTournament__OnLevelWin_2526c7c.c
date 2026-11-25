/* IL2CPP: StreakTournament$$OnLevelWin
void StreakTournament__OnLevelWin (StreakTournament_o* __this, LevelWinMessage_o m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$OnLevelWin
   void StreakTournament__OnLevelWin (StreakTournament_o* __this, LevelWinMessage_o m, const
   MethodInfo* method); */

void StreakTournament__OnLevelWin_2526c7c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  int iStack_6c;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_44;
  ulong uStack_3c;
  
  if ((bRam0000000004f4be9c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2c78);
    bRam0000000004f4be9c = 1;
  }
  *(undefined1 *)(param_1 + 0x90) = 1;
  if (*(long *)(param_1 + 0x30) != 0) {
    uVar2 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x30),0x16,0);
    if ((uVar2 & 1) == 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_02626e08;
      uVar2 = LiveOpsModule__CanJoin_2547318(*(long *)(param_1 + 0x30),0x16,0);
      if ((uVar2 & 1) != 0) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_02626e08;
        LiveOpsModule__Join_25475e0(*(long *)(param_1 + 0x30),0x16,0);
      }
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar2 = LiveOpsModule__IsJoined_2546cc0(*(long *)(param_1 + 0x30),0x16,0);
      if ((uVar2 & 1) != 0) {
        StreakTournament__StartGameIfNeeded_2525b20(param_1);
      }
      uVar2 = StreakTournament__IsGameActive_25259a0(param_1);
      if ((uVar2 & 1) != 0) {
        StreakTournament__ApplyProgression_2526e0c(param_1);
        StreakTournament__get_Save_2524120(&uStack_90);
        iVar1 = iStack_6c;
        StreakTournament__get_Save_2524120(&uStack_90);
        uStack_c8 = uStack_88;
        uStack_d0 = uStack_90;
        uStack_b8 = uStack_78;
        uStack_c0 = uStack_80;
        uStack_a8 = uStack_68;
        uStack_98 = uStack_58;
        uStack_a0 = uStack_60;
        StreakTournament__UpdatePlayer_252702c(&uStack_90,param_1,&uStack_d0,1);
        uStack_f0 = uStack_70;
        uStack_108 = uStack_88;
        uStack_110 = uStack_90;
        uStack_f8 = uStack_78;
        uStack_100 = uStack_80;
        uStack_d8 = uStack_58;
        uStack_e0 = uStack_60;
        uStack_e8 = uStack_68;
        StreakTournament__get_Save_2524120(&uStack_90);
        iStack_ec = iStack_6c;
        StreakTournament__UpdateSave_25252a4(&uStack_110,uStack_50);
        if (param_3 != 0) {
          uStack_90 = (ulong)(uint)(iStack_6c - iVar1) << 0x20 | 0x3c;
          FUN_02333498(param_3,&uStack_90,*(undefined8 *)PTR_DAT_049c2c78);
        }
        uVar3 = StreakTournament__get_Save_2524120(&uStack_90);
        StreakTournament__UpdatePersonal_2525504
                  (uVar3,uStack_44,
                   uStack_3c & 0xffffffff00000000 |
                   (ulong)(uint)((iStack_6c - iVar1) + (int)uStack_3c));
      }
      return;
    }
  }
LAB_02626e08:
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

