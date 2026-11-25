/* IL2CPP: RankingMonitor.<HandleClaim>d__61$$MoveNext
void RankingMonitor__HandleClaim_d__61__MoveNext (RankingMonitor__HandleClaim_d__61_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0255933c) */
/* WARNING: Removing unreachable block (ram,0x025593f0) */
/* WARNING: Removing unreachable block (ram,0x025593b0) */
/* IL2CPP: RankingMonitor.<HandleClaim>d__61$$MoveNext
   void RankingMonitor__HandleClaim_d__61__MoveNext (RankingMonitor__HandleClaim_d__61_o __this,
   const MethodInfo* method); */

void RankingMonitor__HandleClaim_d__61__MoveNext_2458d20(int *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  int iVar16;
  ulong uStack_d8;
  int *piStack_d0;
  int **ppiStack_c8;
  int *piStack_c0;
  int *piStack_b8;
  int **ppiStack_b0;
  undefined4 uStack_98;
  int *piStack_90;
  int *piStack_88;
  int **ppiStack_80;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  int iStack_4c;
  int *piStack_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  
  piStack_48 = param_1;
  if ((bRam0000000004f4b909 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4ba8);
    FUN_021f03f8(PTR_DAT_049c4bb0);
    FUN_021f03f8(PTR_DAT_049c4bb8);
    FUN_021f03f8(PTR_DAT_049b5680);
    FUN_021f03f8(PTR_DAT_049b6330);
    FUN_021f03f8(PTR_DAT_049b6348);
    FUN_021f03f8(PTR_DAT_049b6350);
    FUN_021f03f8(PTR_DAT_049c4538);
    FUN_021f03f8(PTR_DAT_049b3cc8);
    FUN_021f03f8(PTR_DAT_049c4b68);
    FUN_021f03f8(PTR_DAT_049b6370);
    FUN_021f03f8(PTR_DAT_049c4b78);
    FUN_021f03f8(PTR_DAT_049c4bc0);
    FUN_021f03f8(PTR_DAT_049c4bc8);
    bRam0000000004f4b909 = 1;
  }
  iStack_4c = *param_1;
  lVar11 = *(long *)(param_1 + 4);
  uStack_60 = 0;
  uStack_58 = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  piStack_90 = (int *)0x0;
  piStack_88 = (int *)0x0;
  ppiStack_80 = (int **)0x0;
  uStack_98 = 0;
  if (iStack_4c == 0) {
LAB_02558fcc:
    piStack_c0 = (int *)0x0;
    ppiStack_b0 = &piStack_48;
    piStack_b8 = &iStack_4c;
LAB_02558fd8:
    ppiStack_c8 = &piStack_48;
    piStack_d0 = &iStack_4c;
    uStack_d8 = 0;
    iStack_4c = -1;
    uStack_58 = *(undefined8 *)(piStack_48 + 0x2c);
    uStack_60 = *(undefined8 *)(piStack_48 + 0x2a);
    piStack_48[0x2a] = 0;
    piStack_48[0x2b] = 0;
    piStack_48[0x2c] = 0;
    piStack_48[0x2d] = 0;
    *piStack_48 = -1;
LAB_02558ff4:
    FUN_0235b3fc(&uStack_60,&iStack_40,*(undefined8 *)PTR_DAT_049c4bb0);
    iVar16 = 7;
    iVar6 = iStack_40;
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar11 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    func_0x04608650(param_1 + 6,*(long *)(lVar11 + 0xa8) + 0x68,0x80);
    thunk_FUN_021f190c(param_1 + 6,0);
    if (*(long *)(lVar11 + 0xe8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar7 = LoadingMonitor__Begin_244e364(*(long *)(lVar11 + 0xe8),0);
    *(undefined8 *)(piStack_48 + 0x26) = uVar7;
    thunk_FUN_021f190c();
    piStack_b8 = &iStack_4c;
    piStack_c0 = (int *)0x0;
    ppiStack_b0 = &piStack_48;
    if (iStack_4c == 0) goto LAB_02558fcc;
    uVar7 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5680);
    System_Threading_CancellationTokenSource___ctor_3165850(uVar7,3000,0);
    *(undefined8 *)(piStack_48 + 0x28) = uVar7;
    thunk_FUN_021f190c(piStack_48 + 0x28,uVar7);
    piStack_d0 = &iStack_4c;
    uStack_d8 = 0;
    ppiStack_c8 = &piStack_48;
    if (iStack_4c == 0) goto LAB_02558fd8;
    if (*(long *)(piStack_48 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar12 = *(long *)(lVar11 + 0xa8);
    uVar7 = System_Threading_CancellationTokenSource__get_Token_31655c4
                      (*(long *)(piStack_48 + 0x28),0);
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar7,uVar7);
    }
    auStack_70 = Leaderboard__EndTournament_251db24(lVar12,uVar7,0);
    FUN_0235b0c0(auStack_70,&iStack_40,*(undefined8 *)PTR_DAT_049c4bc0);
    uStack_60 = CONCAT44(uStack_3c,iStack_40);
    lVar14 = *(long *)PTR_DAT_049c4bb8;
    uStack_58 = uStack_38;
    lVar12 = *(long *)(lVar14 + 0x20);
    if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    uVar7 = thunk_FUN_0224e54c(&uStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0x80));
    lVar12 = *(long *)(lVar14 + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02229718();
    }
    iVar6 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar12 + 0xc0) + 0x18));
    if (iVar6 != 0) goto LAB_02558ff4;
    iStack_4c = 0;
    *piStack_48 = 0;
    *(undefined8 *)(piStack_48 + 0x2c) = uStack_58;
    *(undefined8 *)(piStack_48 + 0x2a) = uStack_60;
    thunk_FUN_021f190c(piStack_48 + 0x2a,0);
    FUN_0235c420(piStack_48 + 2,&uStack_60,piStack_48,*(undefined8 *)PTR_DAT_049c4ba8);
    iVar16 = 6;
    iVar6 = 0;
  }
  if ((iStack_4c < 0) && (plVar15 = *(long **)(*ppiStack_c8 + 0x28), plVar15 != (long *)0x0)) {
    lVar12 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02559088;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)PTR_DAT_049b3cc8,0);
LAB_02559088:
    (*(code *)*puVar8)(plVar15,puVar8[1]);
  }
  if ((iVar16 == 7) || (iVar16 == 0)) {
    piVar10 = piStack_48 + 0x28;
    piVar10[0] = 0;
    piVar10[1] = 0;
    thunk_FUN_021f190c(piVar10,0);
    iVar16 = 0xb;
  }
  if ((*piStack_b8 < 0) && (plVar15 = *(long **)(*ppiStack_b0 + 0x26), plVar15 != (long *)0x0)) {
    lVar12 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b3cc8) {
          puVar8 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_02559128;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)PTR_DAT_049b3cc8,0);
LAB_02559128:
    (*(code *)*puVar8)(plVar15,puVar8[1]);
  }
  if (piStack_c0 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if (iVar16 != 0xb) {
    if (iVar16 == 10) goto LAB_02559358;
    if (iVar16 != 0) {
      return;
    }
  }
  piVar10 = piStack_48 + 0x26;
  piVar10[0] = 0;
  piVar10[1] = 0;
  thunk_FUN_021f190c(piVar10,0);
  if (iVar6 == 0) {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar11 = *(long *)(lVar11 + 0xd8);
    uVar7 = Phrase__get_TryAgainLater_252f6dc(0);
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0(uVar7,uVar7);
    }
    SlidingTextMonitor__ShowText_2455a48(0,0x43480000,lVar11);
  }
  else {
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    RankingMonitor__OnWeeklyClicked_245836c(lVar11);
    if (iVar6 != 2) {
      if (*(long *)(lVar11 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x128);
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      iVar6 = piStack_48[0x12];
      piStack_c0 = (int *)CONCAT44(piStack_c0._4_4_,iVar6);
      uVar9 = System_Collections_ObjectModel_KeyedCollection___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___Contains_28c1208
                        (lVar12,&piStack_c0,*(undefined8 *)PTR_DAT_049c4b68);
      if ((uVar9 & 1) != 0) {
        if (*(long *)(lVar11 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar12 = *(long *)(*(long *)(lVar11 + 0xb8) + 0x128);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        piStack_c0 = (int *)CONCAT44(piStack_c0._4_4_,iVar6);
        lVar12 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                           (lVar12,&piStack_c0,*(undefined8 *)PTR_DAT_049c4b78);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar12 = LeaderboardTournamentRewardSheet_Row__GetRewards_25619d0(lVar12,0);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
                  (lVar12,&piStack_c0,*(undefined8 *)PTR_DAT_049b6370);
        puVar5 = PTR_DAT_049c4bc8;
        puVar4 = PTR_DAT_049b6350;
        puVar3 = PTR_DAT_049b6348;
        piStack_88 = piStack_b8;
        piStack_90 = piStack_c0;
        ppiStack_80 = ppiStack_b0;
        ppiStack_b0 = &piStack_90;
        piStack_c0 = (int *)0x0;
        piStack_b8 = &iStack_4c;
        while( true ) {
          uVar9 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                            (&piStack_90,*(undefined8 *)puVar3);
          if ((uVar9 & 1) == 0) break;
          lVar13 = *(long *)puVar4;
          lVar14 = *(long *)(lVar13 + 0x20);
          uVar2 = *(ushort *)(lVar14 + 0x135);
          lVar12 = lVar14;
          if ((uVar2 & 1) == 0) {
            lVar12 = FUN_02229718();
            lVar14 = *(long *)(lVar13 + 0x20);
            uVar2 = *(ushort *)(lVar14 + 0x135);
          }
          uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10) + 0xfc);
          if ((uVar2 & 1) == 0) {
            lVar14 = FUN_02229718();
          }
          uVar7 = thunk_FUN_0224e54c(&piStack_90,
                                     *(long *)(*(long *)(*(long *)(lVar14 + 0xc0) + 8) + 0x80) +
                                     0x60);
          func_0x04608620(&uStack_d8,uVar7,uVar1);
          if (*(long *)(lVar11 + 200) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          FulfillModule__FulfillFreePayout_254358c
                    (*(long *)(lVar11 + 200),uStack_d8 & 0xffffffff,(double)(int)(uStack_d8 >> 0x20)
                     ,*(undefined8 *)puVar5,0);
        }
        if (iStack_4c < 0) {
          System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
                    (ppiStack_b0,*(undefined8 *)PTR_DAT_049b6330);
        }
        if (*(long *)(lVar11 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        HomeNavigationMonitor__TransitionTo_object__2641638
                  (*(long *)(lVar11 + 0xd0),*(undefined8 *)PTR_DAT_049c4538);
      }
    }
  }
LAB_02559358:
  *piStack_48 = -2;
  piStack_48[8] = 0;
  piStack_48[9] = 0;
  piStack_48[6] = 0;
  piStack_48[7] = 0;
  piStack_48[0xc] = 0;
  piStack_48[0xd] = 0;
  piStack_48[10] = 0;
  piStack_48[0xb] = 0;
  piStack_48[0x10] = 0;
  piStack_48[0x11] = 0;
  piStack_48[0xe] = 0;
  piStack_48[0xf] = 0;
  piStack_48[0x14] = 0;
  piStack_48[0x15] = 0;
  piStack_48[0x12] = 0;
  piStack_48[0x13] = 0;
  piStack_48[0x18] = 0;
  piStack_48[0x19] = 0;
  piStack_48[0x16] = 0;
  piStack_48[0x17] = 0;
  piStack_48[0x1c] = 0;
  piStack_48[0x1d] = 0;
  piStack_48[0x1a] = 0;
  piStack_48[0x1b] = 0;
  piStack_48[0x20] = 0;
  piStack_48[0x21] = 0;
  piStack_48[0x1e] = 0;
  piStack_48[0x1f] = 0;
  piStack_48[0x24] = 0;
  piStack_48[0x25] = 0;
  piStack_48[0x22] = 0;
  piStack_48[0x23] = 0;
  FUN_0235afc8(piStack_48 + 2,0);
  return;
}

