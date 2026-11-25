/* IL2CPP: Leaderboard.<SubmitTournamentData>d__36$$MoveNext
void Leaderboard__SubmitTournamentData_d__36__MoveNext (Leaderboard__SubmitTournamentData_d__36_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard.<SubmitTournamentData>d__36$$MoveNext
   void Leaderboard__SubmitTournamentData_d__36__MoveNext (Leaderboard__SubmitTournamentData_d__36_o
   __this, const MethodInfo* method); */

void Leaderboard__SubmitTournamentData_d__36__MoveNext_2520de8(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  
  if ((bRam0000000004f4be6d & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c97d0);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049c9750);
    FUN_021f03f8(PTR_DAT_049c9758);
    FUN_021f03f8(PTR_DAT_049c9768);
    bRam0000000004f4be6d = 1;
  }
  uStack_40 = 0;
  uStack_38 = 0;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auVar1 = ZEXT816(0);
  if (*param_1 == 0) {
    uStack_38 = *(undefined8 *)(param_1 + 0xe);
    uStack_40 = *(undefined8 *)(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x18);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_50 = TournamentModule__Submit_254b4e8(lVar4,(long)param_1[10],0,0);
    FUN_0235b0c0(auStack_50,&iStack_30,*(undefined8 *)PTR_DAT_049c9768);
    uStack_40 = CONCAT44(uStack_2c,iStack_30);
    lVar6 = *(long *)PTR_DAT_049c9758;
    uStack_38 = uStack_28;
    lVar4 = *(long *)(lVar6 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    uVar5 = thunk_FUN_0224e54c(&uStack_40,
                               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x80));
    lVar4 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar5,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
    auVar1 = auStack_50;
    if (iVar3 == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0xe) = uStack_38;
      *(undefined8 *)(param_1 + 0xc) = uStack_40;
      thunk_FUN_021f190c(param_1 + 0xc,0);
      FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049c97d0);
      return;
    }
  }
  auStack_50 = auVar1;
  FUN_0235b3fc(&uStack_40,&iStack_30,*(undefined8 *)PTR_DAT_049c9750);
  puVar2 = PTR_DAT_049b5570;
  *param_1 = -2;
  iStack_30 = CONCAT31(iStack_30._1_3_,iStack_30 == 1);
  FUN_0235bed4(param_1 + 2,&iStack_30,*(undefined8 *)puVar2);
  return;
}

