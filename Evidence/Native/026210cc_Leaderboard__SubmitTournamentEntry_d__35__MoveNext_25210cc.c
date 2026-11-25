/* IL2CPP: Leaderboard.<SubmitTournamentEntry>d__35$$MoveNext
void Leaderboard__SubmitTournamentEntry_d__35__MoveNext (Leaderboard__SubmitTournamentEntry_d__35_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard.<SubmitTournamentEntry>d__35$$MoveNext
   void Leaderboard__SubmitTournamentEntry_d__35__MoveNext
   (Leaderboard__SubmitTournamentEntry_d__35_o __this, const MethodInfo* method); */

void Leaderboard__SubmitTournamentEntry_d__35__MoveNext_25210cc(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  char cStack_230;
  undefined7 uStack_22f;
  undefined8 uStack_228;
  undefined4 uStack_188;
  undefined1 auStack_180 [16];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [144];
  undefined1 auStack_d0 [144];
  
  if ((bRam0000000004f4be6f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c97d8);
    FUN_021f03f8(PTR_DAT_049c97e0);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049b5ca0);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049b5ca8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c4778);
    FUN_021f03f8(PTR_DAT_049b5cc8);
    bRam0000000004f4be6f = 1;
  }
  func_0x04608670(auStack_d0,0,0x90);
  func_0x04608670(auStack_160,0,0x90);
  iVar4 = *param_1;
  lVar7 = *(long *)(param_1 + 4);
  uStack_170 = 0;
  uStack_168 = 0;
  auStack_180._0_8_ = 0;
  auStack_180._8_8_ = 0;
  uStack_188 = 0;
  if (iVar4 == 0) {
    func_0x04608620(auStack_d0,param_1 + 6,0x90);
    func_0x04608670(param_1 + 6,0,0x90);
    iVar4 = -1;
    *param_1 = -1;
LAB_026212d4:
    FUN_0235b3fc(auStack_d0,&cStack_230,*(undefined8 *)PTR_DAT_049b5ca0);
    auVar1._8_8_ = auStack_180._8_8_;
    auVar1._0_8_ = auStack_180._0_8_;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(int *)(lVar7 + 0x70) != 2) goto LAB_02621500;
  }
  else if (iVar4 - 3U < 0xfffffffe) {
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar7 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar1 = ZEXT816(0);
    if (*(char *)(*(long *)(lVar7 + 0x58) + 0x18) == '\0') goto LAB_02621500;
    Leaderboard__FetchTournament_251d9e0(&cStack_230,lVar7,1,0);
    func_0x04608620(auStack_160,&cStack_230,0x90);
    FUN_0235b0c0(auStack_160,&cStack_230,*(undefined8 *)PTR_DAT_049b5cc8);
    func_0x04608620(auStack_d0,&cStack_230,0x90);
    lVar8 = *(long *)PTR_DAT_049b5ca8;
    lVar5 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    uVar6 = thunk_FUN_0224e54c(auStack_d0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
    lVar5 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
    if (iVar3 == 0) {
      *param_1 = 0;
      func_0x04608620(param_1 + 6,auStack_d0,0x90);
      thunk_FUN_021f190c(param_1 + 6,0);
      FUN_0235c420(param_1 + 2,auStack_d0,param_1,*(undefined8 *)PTR_DAT_049c97d8);
      return;
    }
    goto LAB_026212d4;
  }
  puVar2 = PTR_DAT_049b5310;
  if (iVar4 == 1) {
    uStack_168 = *(undefined8 *)(param_1 + 0x2c);
    uStack_170 = *(undefined8 *)(param_1 + 0x2a);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    *param_1 = -1;
LAB_02621418:
    FUN_0235b3fc(&uStack_170,&cStack_230,*(undefined8 *)PTR_DAT_049c4768);
    auVar1 = auStack_180;
    if (cStack_230 == '\0') goto LAB_02621500;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Leaderboard__FetchTournament_251d9e0(&cStack_230,lVar7,1,0);
    func_0x04608620(auStack_160,&cStack_230,0x90);
    FUN_0235b0c0(auStack_160,&cStack_230,*(undefined8 *)PTR_DAT_049b5cc8);
    func_0x04608620(auStack_d0,&cStack_230,0x90);
    lVar5 = *(long *)PTR_DAT_049b5ca8;
    lVar7 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar6 = thunk_FUN_0224e54c(auStack_d0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
    lVar7 = *(long *)(lVar5 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    iVar4 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
    if (iVar4 == 0) {
      *param_1 = 2;
      func_0x04608620(param_1 + 6,auStack_d0,0x90);
      thunk_FUN_021f190c(param_1 + 6,0);
      FUN_0235c420(param_1 + 2,auStack_d0,param_1,*(undefined8 *)PTR_DAT_049c97d8);
      return;
    }
  }
  else {
    if (iVar4 != 2) {
      lVar5 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        FUN_021f0574();
        lVar5 = *(long *)puVar2;
      }
      iVar4 = CloudPrefsInt__get_Value_24e99c0(*(long *)(lVar5 + 0xb8) + 0x880,0);
      auVar1._8_8_ = auStack_180._8_8_;
      auVar1._0_8_ = auStack_180._0_8_;
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar7 + 0xa0) == (long)iVar4) goto LAB_02621500;
      auStack_180 = Leaderboard__SubmitTournamentData_251dc44(lVar7);
      FUN_0235b0c0(auStack_180,&cStack_230,*(undefined8 *)PTR_DAT_049c4778);
      uStack_170 = CONCAT71(uStack_22f,cStack_230);
      lVar8 = *(long *)PTR_DAT_049c4770;
      uStack_168 = uStack_228;
      lVar5 = *(long *)(lVar8 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      uVar6 = thunk_FUN_0224e54c(&uStack_170,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x10) + 0x80));
      lVar5 = *(long *)(lVar8 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_02229718();
      }
      iVar4 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar5 + 0xc0) + 0x18));
      if (iVar4 == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x2c) = uStack_168;
        *(undefined8 *)(param_1 + 0x2a) = uStack_170;
        thunk_FUN_021f190c(param_1 + 0x2a,0);
        FUN_0235c420(param_1 + 2,&uStack_170,param_1,*(undefined8 *)PTR_DAT_049c97e0);
        return;
      }
      goto LAB_02621418;
    }
    func_0x04608620(auStack_d0,param_1 + 6,0x90);
    func_0x04608670(param_1 + 6,0,0x90);
    *param_1 = -1;
  }
  FUN_0235b3fc(auStack_d0,&cStack_230,*(undefined8 *)PTR_DAT_049b5ca0);
  auVar1 = auStack_180;
LAB_02621500:
  *param_1 = -2;
  auStack_180 = auVar1;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

