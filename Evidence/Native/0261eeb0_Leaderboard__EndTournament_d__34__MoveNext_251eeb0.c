/* IL2CPP: Leaderboard.<EndTournament>d__34$$MoveNext
void Leaderboard__EndTournament_d__34__MoveNext (Leaderboard__EndTournament_d__34_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard.<EndTournament>d__34$$MoveNext
   void Leaderboard__EndTournament_d__34__MoveNext (Leaderboard__EndTournament_d__34_o __this, const
   MethodInfo* method); */

void Leaderboard__EndTournament_d__34__MoveNext_251eeb0(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  int iStack_240;
  undefined4 uStack_23c;
  undefined8 uStack_238;
  undefined4 uStack_198;
  undefined1 auStack_190 [144];
  undefined1 auStack_100 [144];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_44;
  
  if ((bRam0000000004f4be65 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9738);
    FUN_021f03f8(PTR_DAT_049c9740);
    FUN_021f03f8(PTR_DAT_049c9748);
    FUN_021f03f8(PTR_DAT_049b5ca0);
    FUN_021f03f8(PTR_DAT_049c9750);
    FUN_021f03f8(PTR_DAT_049c9758);
    FUN_021f03f8(PTR_DAT_049b5ca8);
    FUN_021f03f8(PTR_DAT_049c9760);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c9768);
    FUN_021f03f8(PTR_DAT_049b5cc8);
    bRam0000000004f4be65 = 1;
  }
  puVar2 = PTR_DAT_049c9750;
  uStack_60 = 0;
  uStack_58 = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  func_0x04608670(auStack_100,0,0x90);
  func_0x04608670(auStack_190,0,0x90);
  iVar5 = *param_1;
  lVar10 = *(long *)(param_1 + 8);
  uStack_198 = 0;
  if (iVar5 == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x12);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    iVar5 = -1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_0261f0a0:
    FUN_0235b3fc(&uStack_60,&iStack_240,*(undefined8 *)puVar2);
    iVar3 = iStack_240;
    uVar8 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0xc),0);
    puVar1 = PTR_DAT_049b5310;
    if ((uVar8 & 1) == 0) {
      lVar6 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar6 + 0xe4) == 0) {
        FUN_021f0574();
        lVar6 = *(long *)puVar1;
      }
      uVar7 = CloudPrefsString__get_Value_24eaa60(*(long *)(lVar6 + 0xb8) + 0x8a0,0);
      uVar4 = System_String__op_Equality_2f7b7fc(uVar7,*(undefined8 *)(param_1 + 0xc),0);
      uVar4 = uVar4 & 1;
    }
    else {
      uVar4 = 0;
    }
    if (iVar3 == 1) {
LAB_0261f128:
      param_1[0xe] = 1;
      uVar8 = System_String__IsNullOrEmpty_2f7c924(*(undefined8 *)(param_1 + 0xc),0);
      puVar1 = PTR_DAT_049b5310;
      if ((uVar8 & 1) == 0) {
        lVar6 = *(long *)PTR_DAT_049b5310;
        if (*(int *)(lVar6 + 0xe4) == 0) {
          FUN_021f0574();
          lVar6 = *(long *)puVar1;
        }
        CloudPrefsString__Set_24eab48
                  (*(long *)(lVar6 + 0xb8) + 0x8a0,*(undefined8 *)(param_1 + 0xc),0);
      }
    }
    else {
      if (iVar3 != 4) {
        iStack_44 = 0;
        param_1[0xe] = 0;
        goto LAB_0261f3e8;
      }
      if (uVar4 == 0) goto LAB_0261f128;
      param_1[0xe] = 2;
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar6 = *(long *)(lVar10 + 0x50);
    if ((bRam0000000004f4be4d & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c95d0);
      bRam0000000004f4be4d = 1;
    }
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_Dictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Remove_282ed74
              (lVar6,*(undefined8 *)PTR_DAT_049c95d0,*(undefined8 *)PTR_DAT_049c9760);
    *(undefined8 *)(lVar10 + 0x70) = 0;
    *(undefined8 *)(lVar10 + 0x68) = 0;
    *(undefined8 *)(lVar10 + 0x90) = 0;
    *(undefined8 *)(lVar10 + 0x88) = 0;
    *(undefined8 *)(lVar10 + 0xa0) = 0;
    *(undefined8 *)(lVar10 + 0x98) = 0;
    *(undefined8 *)(lVar10 + 0xb0) = 0;
    *(undefined8 *)(lVar10 + 0xa8) = 0;
    *(undefined8 *)(lVar10 + 0xc0) = 0;
    *(undefined8 *)(lVar10 + 0xb8) = 0;
    *(undefined8 *)(lVar10 + 0xd0) = 0;
    *(undefined8 *)(lVar10 + 200) = 0;
    *(undefined8 *)(lVar10 + 0xe0) = 0;
    *(undefined8 *)(lVar10 + 0xd8) = 0;
    *(undefined8 *)(lVar10 + 0x80) = 0;
    *(undefined8 *)(lVar10 + 0x78) = 0;
    thunk_FUN_021f190c((undefined8 *)(lVar10 + 0x68),0);
    puVar1 = PTR_DAT_049b5310;
    lVar6 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar6 + 0xe4) == 0) {
      FUN_021f0574();
      lVar6 = *(long *)puVar1;
    }
    CloudPrefsInt__set_Value_24e9a2c(*(long *)(lVar6 + 0xb8) + 0x880,0,0);
  }
  else if (iVar5 - 3U < 0xfffffffe) {
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar10 + 0x68);
    thunk_FUN_021f190c();
    if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_70 = TournamentModule__End_254b608
                           (*(long *)(lVar10 + 0x18),*(undefined8 *)(param_1 + 10),0);
    FUN_0235b0c0(auStack_70,&iStack_240,*(undefined8 *)PTR_DAT_049c9768);
    uStack_60 = CONCAT44(uStack_23c,iStack_240);
    lVar11 = *(long *)PTR_DAT_049c9758;
    uStack_58 = uStack_238;
    lVar6 = *(long *)(lVar11 + 0x20);
    if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    uVar7 = thunk_FUN_0224e54c(&uStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80));
    lVar6 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18));
    if (iVar3 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x12) = uStack_58;
      *(undefined8 *)(param_1 + 0x10) = uStack_60;
      thunk_FUN_021f190c(param_1 + 0x10,0);
      FUN_0235bb44(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049c9738);
      return;
    }
    goto LAB_0261f0a0;
  }
  if (iVar5 == 1) {
    uStack_58 = *(undefined8 *)(param_1 + 0x12);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
LAB_0261f300:
    FUN_0235b3fc(&uStack_60,&iStack_240,*(undefined8 *)puVar2);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Leaderboard__FetchTournament_251d9e0(&iStack_240,lVar10,1,0);
    func_0x04608620(auStack_190,&iStack_240,0x90);
    FUN_0235b0c0(auStack_190,&iStack_240,*(undefined8 *)PTR_DAT_049b5cc8);
    func_0x04608620(auStack_100,&iStack_240,0x90);
    lVar6 = *(long *)PTR_DAT_049b5ca8;
    lVar10 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar7 = thunk_FUN_0224e54c(auStack_100,
                               *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0x80));
    lVar10 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    iVar5 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
    if (iVar5 == 0) {
      *param_1 = 2;
      func_0x04608620(param_1 + 0x14,auStack_100,0x90);
      thunk_FUN_021f190c(param_1 + 0x14,0);
      FUN_0235bb44(param_1 + 2,auStack_100,param_1,*(undefined8 *)PTR_DAT_049c9740);
      return;
    }
  }
  else {
    if (iVar5 != 2) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar10 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auVar12 = TournamentModule__Submit_254b4e8(*(long *)(lVar10 + 0x18),0,0,0);
      auStack_70 = auVar12;
      FUN_0235b0c0(auStack_70,&iStack_240,*(undefined8 *)PTR_DAT_049c9768);
      uStack_60 = CONCAT44(uStack_23c,iStack_240);
      lVar11 = *(long *)PTR_DAT_049c9758;
      uStack_58 = uStack_238;
      lVar6 = *(long *)(lVar11 + 0x20);
      if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      uVar7 = thunk_FUN_0224e54c(&uStack_60,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80));
      lVar6 = *(long *)(lVar11 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      iVar5 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18));
      if (iVar5 == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x12) = uStack_58;
        *(undefined8 *)(param_1 + 0x10) = uStack_60;
        thunk_FUN_021f190c(param_1 + 0x10,0);
        FUN_0235bb44(param_1 + 2,&uStack_60,param_1,*(undefined8 *)PTR_DAT_049c9738);
        return;
      }
      goto LAB_0261f300;
    }
    func_0x04608620(auStack_100,param_1 + 0x14,0x90);
    func_0x04608670(param_1 + 0x14,0,0x90);
    *param_1 = -1;
  }
  FUN_0235b3fc(auStack_100,&iStack_240,*(undefined8 *)PTR_DAT_049b5ca0);
  iStack_44 = param_1[0xe];
LAB_0261f3e8:
  puVar2 = PTR_DAT_049c9748;
  piVar9 = param_1 + 0xc;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *param_1 = -2;
  thunk_FUN_021f190c(piVar9,0);
  FUN_0235bed4(param_1 + 2,&iStack_44,*(undefined8 *)puVar2);
  return;
}

