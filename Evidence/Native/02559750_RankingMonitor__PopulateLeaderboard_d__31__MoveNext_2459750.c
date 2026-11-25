/* IL2CPP: RankingMonitor.<PopulateLeaderboard>d__31$$MoveNext
void RankingMonitor__PopulateLeaderboard_d__31__MoveNext (RankingMonitor__PopulateLeaderboard_d__31_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: RankingMonitor.<PopulateLeaderboard>d__31$$MoveNext
   void RankingMonitor__PopulateLeaderboard_d__31__MoveNext
   (RankingMonitor__PopulateLeaderboard_d__31_o __this, const MethodInfo* method); */

void RankingMonitor__PopulateLeaderboard_d__31__MoveNext_2459750(uint *param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [16];
  undefined8 uStack_130;
  long lStack_128;
  uint *puStack_120;
  long *plStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [16];
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  uint uStack_34;
  
  if ((bRam0000000004f4b90a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4bd0);
    FUN_021f03f8(PTR_DAT_049c4bd8);
    FUN_021f03f8(PTR_DAT_049c4be0);
    FUN_021f03f8(PTR_DAT_049c4be8);
    FUN_021f03f8(PTR_DAT_049b5418);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049b4540);
    FUN_021f03f8(PTR_DAT_049c4bf0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b90a = 1;
  }
  puVar1 = PTR_DAT_049b5310;
  uStack_34 = *param_1;
  lStack_40 = *(long *)(param_1 + 4);
  plStack_a0 = (long *)0x0;
  uStack_98 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_90 = 0;
  plStack_c0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  auStack_d0._0_8_ = 0;
  auStack_d0._8_8_ = 0;
  uStack_d8 = 0;
  if (1 < uStack_34) {
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_40 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    iVar4 = *(int *)(*(long *)(lStack_40 + 0x140) + 0x14);
    lVar7 = *(long *)PTR_DAT_049b5310;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_021f0574();
      lVar7 = *(long *)puVar1;
    }
    lVar7 = *(long *)(lVar7 + 0xb8);
    uStack_108 = *(undefined8 *)(lVar7 + 0x68);
    uStack_110 = *(undefined8 *)(lVar7 + 0x60);
    uStack_f8 = *(undefined8 *)(lVar7 + 0x78);
    uStack_100 = *(undefined8 *)(lVar7 + 0x70);
    iVar3 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_110,0);
    lVar7 = lStack_40;
    if (iVar3 + 1 < iVar4) {
      lVar8 = FUN_021f04e4(*(undefined8 *)PTR_DAT_049b4540,1);
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lStack_40 + 0x140) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = System_Int32__ToString_30fbaa0(*(long *)(lStack_40 + 0x140) + 0x14,0);
      if (lVar8 == 0) {
LAB_02559e9c:
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a8();
      }
      *(undefined8 *)(lVar8 + 0x20) = uVar9;
      thunk_FUN_021f190c();
      if (lVar7 == 0) goto LAB_02559e9c;
      StatefulUISupport_Scripts_Components_StatefulView__SetFormattedText_33519ec
                (lVar7,0x9d9334f4,lVar8,0);
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lStack_40,0x39740faf,0);
      goto LAB_02559e04;
    }
  }
  puStack_120 = &uStack_34;
  plStack_118 = &lStack_40;
  lStack_128 = 0;
  if (uStack_34 == 0) {
    uStack_90 = *(undefined8 *)(param_1 + 0xe);
    uStack_98 = *(undefined8 *)(param_1 + 0xc);
    plStack_a0 = *(long **)(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uStack_34 = 0xffffffff;
    *param_1 = 0xffffffff;
LAB_02559af4:
    FUN_0235b3fc(&plStack_a0,auStack_140,*(undefined8 *)PTR_DAT_049c4be0);
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined8 *)(lStack_40 + 0xf8) = auStack_140._0_8_;
    thunk_FUN_021f190c();
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_40 + 0xf8) != 0) {
      lVar7 = *(long *)(*(long *)(lStack_40 + 0xf8) + 0x60);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(lVar7 + 0x18) != 0) {
        if (*(long *)(lStack_40 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uVar13 = *(undefined8 *)(lStack_40 + 0x158);
        uVar9 = Leaderboard__get_TournamentId_251cbe4(*(long *)(lStack_40 + 0xa8),0);
        uVar11 = System_String__op_Equality_2f7b7fc(uVar13,uVar9,0);
        if ((uVar11 & 1) != 0) {
          if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          RankingMonitor__UpdateTournamentElement_2457ca0();
        }
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar7 = *(long *)(lStack_40 + 0xf8);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_78 = *(undefined8 *)(lVar7 + 0x28);
        uStack_80 = *(undefined8 *)(lVar7 + 0x20);
        uStack_68 = *(undefined8 *)(lVar7 + 0x38);
        uVar11 = *(ulong *)(lVar7 + 0x30);
        uStack_58 = *(undefined8 *)(lVar7 + 0x48);
        uStack_60 = *(undefined8 *)(lVar7 + 0x40);
        uStack_48 = *(undefined8 *)(lVar7 + 0x58);
        uStack_50 = *(undefined8 *)(lVar7 + 0x50);
        uStack_70 = uVar11;
        uVar5 = LeaderboardEntry__get_Idx_2545aa0(&uStack_80,0);
        uVar6 = LeaderboardEntry__get_HasEntry_2545aac(&uStack_80,0);
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lStack_40 + 0x100) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar7 = UnityEngine_Component__get_gameObject_3c187f4(*(long *)(lStack_40 + 0x100),0);
        if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        UnityEngine_GameObject__SetActive_3c1ce34(lVar7,uVar6 & 1,0);
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        RankingMonitor__SetupScrollRect_2458714(lStack_40,uVar11 & 0xffffffff);
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        uStack_178 = uStack_78;
        uStack_180 = uStack_80;
        uStack_168 = uStack_68;
        uStack_170 = uStack_70;
        uStack_158 = uStack_58;
        uStack_160 = uStack_60;
        uStack_148 = uStack_48;
        uStack_150 = uStack_50;
        RankingMonitor__CreatePlayerElement_2457654
                  (lStack_40,*(undefined8 *)(lStack_40 + 0x100),&uStack_180,uVar5);
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        RankingMonitor__UpdateLocalPlayerElement_2457eb8();
        if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        RankingMonitor__UpdatePodiumElements_24580c4();
        puVar1 = PTR_DAT_049b5138;
        if ((char)param_1[8] != '\0') {
          uVar9 = *(undefined8 *)(param_1 + 6);
          if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
            FUN_021f0574();
          }
          auStack_140 = Cysharp_Threading_Tasks_UniTask__DelayFrame_37c9280(10,0xd,uVar9,0,0);
          thunk_FUN_021f190c(auStack_140,0);
          auStack_d0 = auStack_140;
          if (cRam0000000004f49bf4 == '\0') {
            FUN_021f03f8(PTR_DAT_049b5138);
            cRam0000000004f49bf4 = '\x01';
          }
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            FUN_021f0574();
          }
          if (cRam0000000004f49bf5 == '\0') {
            FUN_021f03f8(PTR_DAT_049b54e0);
            cRam0000000004f49bf5 = '\x01';
          }
          uVar9 = auStack_d0._0_8_;
          if ((long *)auStack_d0._0_8_ != (long *)0x0) {
            lVar7 = *(long *)auStack_d0._0_8_;
            uVar14 = auStack_d0._8_8_ & 0xffff;
            uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
                  puVar10 = (undefined8 *)(lVar7 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_02559e38;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar10 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_02559e38:
            iVar4 = (*(code *)*puVar10)(uVar9,uVar14,puVar10[1]);
            if (iVar4 == 0) {
              uStack_34 = 1;
              *param_1 = 1;
              *(undefined1 (*) [16])(param_1 + 0x10) = auStack_d0;
              thunk_FUN_021f190c(param_1 + 0x10,0);
              FUN_0235c420(param_1 + 2,auStack_d0,param_1,*(undefined8 *)PTR_DAT_049c4bd8);
              goto LAB_02559d84;
            }
          }
          goto LAB_0255993c;
        }
        goto LAB_02559dac;
      }
    }
    StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lStack_40,0xcb96e2c8,0);
    uVar6 = 3;
  }
  else if (uStack_34 == 1) {
    auStack_d0 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    uStack_34 = 0xffffffff;
    *param_1 = 0xffffffff;
LAB_0255993c:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar9 = auStack_d0._0_8_;
    if ((long *)auStack_d0._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_d0._0_8_;
      uVar14 = auStack_d0._8_8_ & 0xffff;
      uVar11 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar10 = (undefined8 *)(lVar7 + (long)(*piVar12 + 2) * 0x10 + 0x138);
            goto LAB_02559d9c;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar10 = (undefined8 *)FUN_02229a4c(auStack_d0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02559d9c:
      (*(code *)*puVar10)(uVar9,uVar14,puVar10[1]);
    }
LAB_02559dac:
    uVar6 = 0x12;
  }
  else {
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_40 + 0x148) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(*(long *)(lStack_40 + 0x148),1,0);
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UniTimer__Expire_3f0f24c(lStack_40 + 0x120,0);
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lStack_40 + 0xf8) == 0) {
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      bVar2 = UniTimer__get_IsExpired_3f0efb8(*(long *)(lStack_40 + 0xf8) + 0x10,0);
      *(byte *)(param_1 + 8) = bVar2 & 1;
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    if (*(long *)(lStack_40 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    Leaderboard__CreateLeaderboard_251d684
              (auStack_140,*(long *)(lStack_40 + 0xa8),*(undefined8 *)(lStack_40 + 0x158),
               *(undefined8 *)(param_1 + 6),0);
    uStack_b8 = auStack_140._8_8_;
    plStack_c0 = (long *)auStack_140._0_8_;
    uStack_b0 = uStack_130;
    FUN_0235b0c0(&plStack_c0,auStack_140,*(undefined8 *)PTR_DAT_049c4bf0);
    lVar8 = *(long *)PTR_DAT_049c4be8;
    uStack_98 = auStack_140._8_8_;
    plStack_a0 = (long *)auStack_140._0_8_;
    uStack_90 = uStack_130;
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    uVar9 = thunk_FUN_0224e54c(&plStack_a0,
                               *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
    lVar7 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_02229718();
    }
    iVar4 = FUN_0235b2a0(uVar9,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
    if (iVar4 != 0) goto LAB_02559af4;
    uStack_34 = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 0xc) = uStack_98;
    *(long **)(param_1 + 10) = plStack_a0;
    *(undefined8 *)(param_1 + 0xe) = uStack_90;
    thunk_FUN_021f190c(param_1 + 10,0);
    FUN_0235c420(param_1 + 2,&plStack_a0,param_1,*(undefined8 *)PTR_DAT_049c4bd0);
LAB_02559d84:
    uVar6 = 9;
  }
  if ((int)*puStack_120 < 0) {
    if ((*plStack_118 == 0) || (lVar7 = *(long *)(*plStack_118 + 0x148), lVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    UnityEngine_GameObject__SetActive_3c1ce34(lVar7,0,0);
  }
  if (lStack_128 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if (0x12 < uVar6) {
    return;
  }
  if ((1 << (ulong)uVar6 & 0x40009U) == 0) {
    return;
  }
LAB_02559e04:
  *param_1 = 0xfffffffe;
  FUN_0235afc8(param_1 + 2,0);
  return;
}

