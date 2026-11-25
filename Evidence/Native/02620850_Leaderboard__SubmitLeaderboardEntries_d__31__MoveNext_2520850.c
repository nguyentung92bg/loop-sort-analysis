/* IL2CPP: Leaderboard.<SubmitLeaderboardEntries>d__31$$MoveNext
void Leaderboard__SubmitLeaderboardEntries_d__31__MoveNext (Leaderboard__SubmitLeaderboardEntries_d__31_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard.<SubmitLeaderboardEntries>d__31$$MoveNext
   void Leaderboard__SubmitLeaderboardEntries_d__31__MoveNext
   (Leaderboard__SubmitLeaderboardEntries_d__31_o __this, const MethodInfo* method); */

void Leaderboard__SubmitLeaderboardEntries_d__31__MoveNext_2520850(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_68;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f4be6c & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c97c8);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049b5fa0);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b5fc8);
    FUN_021f03f8(PTR_DAT_049c4778);
    bRam0000000004f4be6c = 1;
  }
  puVar2 = PTR_DAT_049c4768;
  puVar1 = PTR_DAT_049b5310;
  uStack_48 = 0;
  lVar6 = *(long *)(param_1 + 4);
  auStack_60._8_8_ = 0;
  uStack_50 = 0;
  auStack_60._0_8_ = 0;
  auVar8 = ZEXT816(0);
  uStack_68 = 0;
  if (*param_1 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 10);
    uStack_50 = *(undefined8 *)(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_02620a20:
    auStack_60 = auVar8;
    FUN_0235b3fc(&uStack_50,auStack_40,*(undefined8 *)puVar2);
    auVar8._8_8_ = auStack_40._8_8_;
    auVar8._0_8_ = auStack_40._0_8_;
    if (auStack_40[0] == '\0') goto LAB_02620b60;
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar5 = Leaderboard__get_LevelCountryId_251cc64(lVar6);
    auVar8 = Leaderboard__SubmitLeaderboardData_251d8b8(lVar6,uVar5,param_1[6]);
    auStack_60 = auVar8;
    FUN_0235b0c0(auStack_60,auStack_40,*(undefined8 *)PTR_DAT_049c4778);
    lVar4 = *(long *)PTR_DAT_049c4770;
    uStack_48 = auStack_40._8_8_;
    uStack_50 = auStack_40._0_8_;
    lVar6 = *(long *)(lVar4 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    uVar5 = thunk_FUN_0224e54c(&uStack_50,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80));
    lVar6 = *(long *)(lVar4 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18));
    if (iVar3 == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 10) = uStack_48;
      *(undefined8 *)(param_1 + 8) = uStack_50;
      thunk_FUN_021f190c(param_1 + 8,0);
      FUN_0235c420(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c97c8);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      lVar4 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar1;
      }
      lVar4 = *(long *)(lVar4 + 0xb8);
      uStack_98 = *(undefined8 *)(lVar4 + 0x68);
      uStack_a0 = *(undefined8 *)(lVar4 + 0x60);
      uStack_88 = *(undefined8 *)(lVar4 + 0x78);
      uStack_90 = *(undefined8 *)(lVar4 + 0x70);
      iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_a0,0);
      iVar3 = iVar3 + 1;
      param_1[6] = iVar3;
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if ((bRam0000000004f4be4e & 1) == 0) {
        FUN_021f03f8(PTR_DAT_049c95d8);
        iVar3 = param_1[6];
        bRam0000000004f4be4e = 1;
      }
      auStack_60 = Leaderboard__SubmitLeaderboardData_251d8b8
                             (lVar6,*(undefined8 *)PTR_DAT_049c95d8,iVar3);
      FUN_0235b0c0(auStack_60,auStack_40,*(undefined8 *)PTR_DAT_049c4778);
      lVar7 = *(long *)PTR_DAT_049c4770;
      uStack_48 = auStack_40._8_8_;
      uStack_50 = auStack_40._0_8_;
      lVar4 = *(long *)(lVar7 + 0x20);
      if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      uVar5 = thunk_FUN_0224e54c(&uStack_50,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x80));
      lVar4 = *(long *)(lVar7 + 0x20);
      if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
        lVar4 = FUN_02229718();
      }
      iVar3 = FUN_0235b2a0(uVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
      auVar8 = auStack_60;
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 10) = uStack_48;
        *(undefined8 *)(param_1 + 8) = uStack_50;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c420(param_1 + 2,&uStack_50,param_1,*(undefined8 *)PTR_DAT_049c97c8);
        return;
      }
      goto LAB_02620a20;
    }
    uStack_48 = *(undefined8 *)(param_1 + 10);
    uStack_50 = *(undefined8 *)(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
    auStack_60 = auVar8;
  }
  FUN_0235b3fc(&uStack_50,auStack_40,*(undefined8 *)puVar2);
  puVar1 = PTR_DAT_049b5310;
  auVar8._8_8_ = auStack_40._8_8_;
  auVar8._0_8_ = auStack_40._0_8_;
  if (auStack_40[0] != '\0') {
    lVar6 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar1;
    }
    CloudPrefsInt__Set_24e9aa8(*(long *)(lVar6 + 0xb8) + 0x7f0,param_1[6],0);
    if (*(int *)(*(long *)PTR_DAT_049b5fc8 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_40 = TimeProvider__get_UtcNow_24f95ec(0);
    CloudPrefsT___Il2CppFullySharedGenericStructType___Set_28025ac
              (*(long *)(*(long *)puVar1 + 0xb8) + 0x810,auStack_40,*(undefined8 *)PTR_DAT_049b5fa0)
    ;
    auVar8 = auStack_40;
  }
LAB_02620b60:
  *param_1 = -2;
  auStack_40 = auVar8;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

