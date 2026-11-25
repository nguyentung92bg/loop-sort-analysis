/* IL2CPP: Leaderboard.<SubmitLeaderboardData>d__32$$MoveNext
void Leaderboard__SubmitLeaderboardData_d__32__MoveNext (Leaderboard__SubmitLeaderboardData_d__32_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard.<SubmitLeaderboardData>d__32$$MoveNext
   void Leaderboard__SubmitLeaderboardData_d__32__MoveNext
   (Leaderboard__SubmitLeaderboardData_d__32_o __this, const MethodInfo* method); */

void Leaderboard__SubmitLeaderboardData_d__32__MoveNext_25204e8(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  long lStack_118;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  if ((bRam0000000004f4be6a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c97a8);
    FUN_021f03f8(PTR_DAT_049b5570);
    FUN_021f03f8(PTR_DAT_049c97b0);
    FUN_021f03f8(PTR_DAT_049c97b8);
    FUN_021f03f8(PTR_DAT_049c97c0);
    bRam0000000004f4be6a = 1;
  }
  uStack_d8 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
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
  if (*param_1 == 0) {
    func_0x04608620(&uStack_80,param_1 + 0xe,0x50);
    *param_1 = -1;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
  }
  else {
    if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LeaderboardModule__Submit_25448b4
              (&uStack_130,lVar3,*(undefined8 *)(param_1 + 10),(long)param_1[0xc],0,0);
    puVar1 = PTR_DAT_049c97c0;
    func_0x04608620(&uStack_d0,&uStack_130,0x50);
    FUN_0235b0c0(&uStack_d0,&uStack_130,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_049c97b8;
    func_0x04608620(&uStack_80,&uStack_130,0x50);
    lVar6 = *(long *)puVar1;
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    uVar4 = thunk_FUN_0224e54c(&uStack_80,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0xc0) + 0x10) + 0x80));
    lVar3 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar4,*(undefined8 *)(*(long *)(lVar3 + 0xc0) + 0x18));
    if (iVar2 == 0) {
      *param_1 = 0;
      func_0x04608620(param_1 + 0xe,&uStack_80,0x50);
      thunk_FUN_021f190c(param_1 + 0xe,0);
      FUN_0235bb44(param_1 + 2,&uStack_80,param_1,*(undefined8 *)PTR_DAT_049c97a8);
      return;
    }
  }
  FUN_0235b3fc(&uStack_80,&uStack_130,*(undefined8 *)PTR_DAT_049c97b0);
  uVar5 = System_String__op_Equality_2f7b7fc
                    (CONCAT71(uStack_12f,uStack_130),*(undefined8 *)(param_1 + 10),0);
  puVar1 = PTR_DAT_049b5570;
  if ((uVar5 & 1) == 0) {
    uStack_130 = false;
  }
  else {
    uStack_130 = param_1[0xc] <= lStack_118;
  }
  *param_1 = -2;
  FUN_0235bed4(param_1 + 2,&uStack_130,*(undefined8 *)puVar1);
  return;
}

