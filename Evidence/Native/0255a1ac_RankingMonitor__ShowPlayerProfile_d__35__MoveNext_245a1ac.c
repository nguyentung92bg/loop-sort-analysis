/* IL2CPP: RankingMonitor.<ShowPlayerProfile>d__35$$MoveNext
void RankingMonitor__ShowPlayerProfile_d__35__MoveNext (RankingMonitor__ShowPlayerProfile_d__35_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor.<ShowPlayerProfile>d__35$$MoveNext
   void RankingMonitor__ShowPlayerProfile_d__35__MoveNext (RankingMonitor__ShowPlayerProfile_d__35_o
   __this, const MethodInfo* method); */

void RankingMonitor__ShowPlayerProfile_d__35__MoveNext_245a1ac(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_140;
  long lStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  int *piStack_f8;
  int **ppiStack_f0;
  undefined4 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_44;
  int *piStack_38;
  
  piStack_38 = param_1;
  if ((bRam0000000004f4b90b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4bf8);
    FUN_021f03f8(PTR_DAT_049c4c00);
    FUN_021f03f8(PTR_DAT_049c4c08);
    FUN_021f03f8(PTR_DAT_049b5680);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049b5418);
    FUN_021f03f8(PTR_DAT_049b5420);
    FUN_021f03f8(PTR_DAT_049c4c10);
    bRam0000000004f4b90b = 1;
  }
  iStack_44 = *param_1;
  lVar12 = *(long *)(param_1 + 4);
  uStack_d8 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (iStack_44 == 0) {
LAB_0255a3f0:
    ppiStack_f0 = &piStack_38;
    piStack_f8 = &iStack_44;
    lStack_100 = 0;
    iStack_44 = -1;
    lStack_a8 = *(long *)(piStack_38 + 0xc);
    uStack_b0 = *(undefined8 *)(piStack_38 + 10);
    uStack_98 = *(undefined8 *)(piStack_38 + 0x10);
    uStack_a0 = *(undefined8 *)(piStack_38 + 0xe);
    piStack_38[0xc] = 0;
    piStack_38[0xd] = 0;
    piStack_38[10] = 0;
    piStack_38[0xb] = 0;
    piStack_38[0x10] = 0;
    piStack_38[0x11] = 0;
    piStack_38[0xe] = 0;
    piStack_38[0xf] = 0;
    *piStack_38 = -1;
LAB_0255a418:
    FUN_0235b3fc(&uStack_b0,&uStack_140,*(undefined8 *)PTR_DAT_049c4c00);
    if ((lStack_138 == 0) || (*(int *)(lStack_138 + 0x18) < 1)) {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar12 = *(long *)(lVar12 + 0xd8);
      uVar3 = Phrase__get_TryAgainLater_252f6dc(0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0(uVar3,uVar3);
      }
      SlidingTextMonitor__ShowText_2455a48(0,0x43480000,lVar12);
      iVar2 = 8;
    }
    else {
      System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                (lStack_138,0,&uStack_140,*(undefined8 *)PTR_DAT_049b5420);
      lStack_88 = lStack_138;
      uStack_90 = uStack_140;
      uStack_78 = uStack_128;
      uStack_80 = uStack_130;
      uStack_68 = uStack_118;
      uStack_70 = uStack_120;
      uVar3 = uStack_70;
      uStack_58 = uStack_108;
      uStack_60 = uStack_110;
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar12 = *(long *)(lVar12 + 0xb0);
      uStack_70._0_1_ = (byte)uStack_120;
      bVar1 = (byte)uStack_70;
      uStack_70 = uVar3;
      uVar3 = System_Int64__ToString_30fcb34(&uStack_78,0);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uStack_158 = uStack_110;
      uStack_160 = uStack_118;
      uStack_150 = uStack_108;
      ProfileMonitor__ShowProfile_2456134(lVar12,&uStack_160,bVar1 & 1,uVar3);
      iVar2 = 0xb;
    }
  }
  else {
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar12 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = LoadingMonitor__Begin_244e364(*(long *)(lVar12 + 0xe8),0);
    *(undefined8 *)(piStack_38 + 8) = uVar3;
    thunk_FUN_021f190c();
    piStack_f8 = &iStack_44;
    lStack_100 = 0;
    ppiStack_f0 = &piStack_38;
    if (iStack_44 == 0) goto LAB_0255a3f0;
    lVar4 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5680);
    System_Threading_CancellationTokenSource___ctor_3165850(lVar4,3000,0);
    if (*(long *)(lVar12 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar10 = *(long *)(lVar12 + 0xe0);
    uVar3 = Leaderboard__get_LevelWorldId_251cc24(*(long *)(lVar12 + 0xa8),0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar11 = *(undefined8 *)(piStack_38 + 6);
    uVar5 = System_Threading_CancellationTokenSource__get_Token_31655c4(lVar4,0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    LeaderboardModule__FetchEntry_2544a0c(&uStack_140,lVar10,uVar3,uVar11,uVar5,0);
    lStack_c8 = lStack_138;
    uStack_d0 = uStack_140;
    uStack_b8 = uStack_128;
    uStack_c0 = uStack_130;
    FUN_0235b0c0(&uStack_d0,&uStack_140,*(undefined8 *)PTR_DAT_049c4c10);
    lVar10 = *(long *)PTR_DAT_049c4c08;
    lStack_a8 = lStack_138;
    uStack_b0 = uStack_140;
    uStack_98 = uStack_128;
    uStack_a0 = uStack_130;
    lVar4 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    uVar3 = thunk_FUN_0224e54c(&uStack_b0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x80));
    lVar4 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar3,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
    if (iVar2 != 0) goto LAB_0255a418;
    iStack_44 = 0;
    *piStack_38 = 0;
    *(long *)(piStack_38 + 0xc) = lStack_a8;
    *(undefined8 *)(piStack_38 + 10) = uStack_b0;
    *(undefined8 *)(piStack_38 + 0x10) = uStack_98;
    *(undefined8 *)(piStack_38 + 0xe) = uStack_a0;
    thunk_FUN_021f190c(piStack_38 + 10,0);
    FUN_0235c420(piStack_38 + 2,&uStack_b0,piStack_38,*(undefined8 *)PTR_DAT_049c4bf8);
    iVar2 = 5;
  }
  if ((*piStack_f8 < 0) && (plVar9 = *(long **)(*ppiStack_f0 + 8), plVar9 != (long *)0x0)) {
    lVar12 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar6 = (undefined8 *)(lVar12 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0255a56c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049b3cc8,0);
LAB_0255a56c:
    (*(code *)*puVar6)(plVar9,puVar6[1]);
  }
  if (lStack_100 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if (iVar2 != 0xb) {
    if (iVar2 == 8) goto LAB_0255a5a4;
    if (iVar2 != 0) {
      return;
    }
  }
  piVar8 = piStack_38 + 8;
  piVar8[0] = 0;
  piVar8[1] = 0;
  thunk_FUN_021f190c(piVar8,0);
LAB_0255a5a4:
  *piStack_38 = -2;
  FUN_0235afc8(piStack_38 + 2,0);
  return;
}

