/* IL2CPP: Leaderboard.<FetchTournament>d__33$$MoveNext
void Leaderboard__FetchTournament_d__33__MoveNext (Leaderboard__FetchTournament_d__33_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard.<FetchTournament>d__33$$MoveNext
   void Leaderboard__FetchTournament_d__33__MoveNext (Leaderboard__FetchTournament_d__33_o __this,
   const MethodInfo* method); */

void Leaderboard__FetchTournament_d__33__MoveNext_2520128(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_2f0 [128];
  undefined1 auStack_270 [152];
  undefined4 uStack_1d8;
  undefined1 auStack_1d0 [144];
  undefined1 auStack_140 [144];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4be68 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c97a0);
    FUN_021f03f8(PTR_DAT_049b5c30);
    FUN_021f03f8(PTR_DAT_049b5ca0);
    FUN_021f03f8(PTR_DAT_049b5ca8);
    FUN_021f03f8(PTR_DAT_049b5cc8);
    bRam0000000004f4be68 = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x04608670(auStack_140,0,0x90);
  func_0x04608670(auStack_1d0,0,0x90);
  lVar5 = *(long *)(param_1 + 0x26);
  uStack_1d8 = 0;
  if (*param_1 == 0) {
    func_0x04608620(auStack_140,param_1 + 0x2c,0x90);
    func_0x04608670(param_1 + 0x2c,0,0x90);
    *param_1 = -1;
  }
  else {
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(lVar5 + 0x70) = 0;
    *(undefined8 *)(lVar5 + 0x68) = 0;
    *(undefined8 *)(lVar5 + 0x90) = 0;
    *(undefined8 *)(lVar5 + 0x88) = 0;
    *(undefined8 *)(lVar5 + 0xa0) = 0;
    *(undefined8 *)(lVar5 + 0x98) = 0;
    *(undefined8 *)(lVar5 + 0xb0) = 0;
    *(undefined8 *)(lVar5 + 0xa8) = 0;
    *(undefined8 *)(lVar5 + 0xc0) = 0;
    *(undefined8 *)(lVar5 + 0xb8) = 0;
    *(undefined8 *)(lVar5 + 0xd0) = 0;
    *(undefined8 *)(lVar5 + 200) = 0;
    *(undefined8 *)(lVar5 + 0xe0) = 0;
    *(undefined8 *)(lVar5 + 0xd8) = 0;
    *(undefined8 *)(lVar5 + 0x80) = 0;
    *(undefined8 *)(lVar5 + 0x78) = 0;
    thunk_FUN_021f190c((undefined8 *)(lVar5 + 0x68),0);
    if (*(long *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    TournamentModule__GetInstance_254b3a4
              (auStack_270,*(long *)(lVar5 + 0x18),(char)param_1[0x28],
               *(undefined8 *)(param_1 + 0x2a),0);
    puVar1 = PTR_DAT_049b5cc8;
    func_0x04608620(auStack_1d0,auStack_270,0x90);
    FUN_0235b0c0(auStack_1d0,auStack_270,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_049b5ca8;
    func_0x04608620(auStack_140,auStack_270,0x90);
    lVar6 = *(long *)puVar1;
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    uVar4 = thunk_FUN_0224e54c(auStack_140,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80));
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    if (iVar2 == 0) {
      *param_1 = 0;
      func_0x04608620(param_1 + 0x2c,auStack_140,0x90);
      thunk_FUN_021f190c(param_1 + 0x2c,0);
      FUN_0235bb44(param_1 + 2,auStack_140,param_1,*(undefined8 *)PTR_DAT_049c97a0);
      return;
    }
  }
  FUN_0235b3fc(auStack_140,auStack_270,*(undefined8 *)PTR_DAT_049b5ca0);
  func_0x04608620(&uStack_b0,auStack_270,0x80);
  if (lVar5 != 0) {
    func_0x04608620(lVar5 + 0x68,&uStack_b0,0x80);
    thunk_FUN_021f190c(lVar5 + 0x68,0);
    puVar1 = PTR_DAT_049b5c30;
    *param_1 = -2;
    func_0x04608620(auStack_2f0,&uStack_b0,0x80);
    FUN_0235bed4(param_1 + 2,auStack_2f0,*(undefined8 *)puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

