/* IL2CPP: Leaderboard.<FetchLeaderboard>d__30$$MoveNext
void Leaderboard__FetchLeaderboard_d__30__MoveNext (Leaderboard__FetchLeaderboard_d__30_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Leaderboard.<FetchLeaderboard>d__30$$MoveNext
   void Leaderboard__FetchLeaderboard_d__30__MoveNext (Leaderboard__FetchLeaderboard_d__30_o __this,
   const MethodInfo* method); */

void Leaderboard__FetchLeaderboard_d__30__MoveNext_251f730(uint *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  uint uVar19;
  undefined8 uStack_1d0;
  long lStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  byte bStack_1b0;
  undefined8 uStack_1af;
  uint uStack_188;
  undefined4 uStack_184;
  long lStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  byte bStack_168;
  undefined8 uStack_167;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined8 uStack_150;
  undefined4 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  uint uStack_94;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  long lStack_68;
  
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  if ((bRam0000000004f4be67 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9780);
    FUN_021f03f8(PTR_DAT_049c9788);
    FUN_021f03f8(PTR_DAT_049c4c00);
    FUN_021f03f8(PTR_DAT_049c4be0);
    FUN_021f03f8(PTR_DAT_049c4c08);
    FUN_021f03f8(PTR_DAT_049c4be8);
    FUN_021f03f8(PTR_DAT_049b68b8);
    FUN_021f03f8(PTR_DAT_049c9790);
    FUN_021f03f8(PTR_DAT_049c9798);
    FUN_021f03f8(PTR_DAT_049b5418);
    FUN_021f03f8(PTR_DAT_049b5420);
    FUN_021f03f8(PTR_DAT_049b5428);
    FUN_021f03f8(PTR_DAT_049c4bf0);
    FUN_021f03f8(PTR_DAT_049c4c10);
    bRam0000000004f4be67 = 1;
  }
  uVar18 = *param_1;
  lVar16 = *(long *)(param_1 + 8);
  uStack_b0 = 0;
  lStack_a8 = 0;
  uStack_a0 = 0;
  uStack_d0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_81 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_79 = 0;
  uStack_138 = 0;
  if (uVar18 < 2) {
LAB_0261f8b0:
    if (uVar18 == 0) {
      uStack_a0 = *(undefined8 *)(param_1 + 0x14);
      lStack_a8 = *(long *)(param_1 + 0x12);
      uStack_b0 = *(undefined8 *)(param_1 + 0x10);
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = 0xffffffff;
LAB_0261f9b4:
      FUN_0235b3fc(&uStack_b0,&uStack_188,*(undefined8 *)PTR_DAT_049c4be0);
      puVar9 = param_1 + 0xe;
      *(ulong *)puVar9 = CONCAT44(uStack_184,uStack_188);
      thunk_FUN_021f190c(puVar9);
      if (*(long *)puVar9 != 0) {
        lVar10 = *(long *)(*(long *)puVar9 + 0x68);
        if (lVar10 == 0) {
          if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_02620114;
        }
        uStack_188 = param_1[0xc];
        uVar8 = System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Contains_28a2270
                          (lVar10,&uStack_188,*(undefined8 *)PTR_DAT_049c9790);
        puVar3 = PTR_DAT_049b68b8;
        if ((uVar8 & 1) == 0) {
          uVar19 = param_1[0xc];
          uVar13 = param_1[0xd];
          uVar18 = uVar19;
          if ((int)uVar19 < (int)(uVar13 + uVar19)) {
            do {
              if (*(long *)puVar9 == 0) {
                if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                goto LAB_02620114;
              }
              lVar10 = *(long *)(*(long *)puVar9 + 0x68);
              if (lVar10 == 0) {
                if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                goto LAB_02620114;
              }
              uStack_188 = uVar18;
              System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                        (lVar10,&uStack_188,*(undefined8 *)puVar3);
              uVar19 = param_1[0xc];
              uVar13 = param_1[0xd];
              uVar18 = uVar18 + 1;
            } while ((int)uVar18 < (int)(uVar13 + uVar19));
          }
          if (lVar16 == 0) {
            if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_02620114;
          }
          if (*(long *)(lVar16 + 0x10) == 0) {
            if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
            goto LAB_02620114;
          }
          LeaderboardModule__FetchPage_2544b64
                    (&uStack_188,*(long *)(lVar16 + 0x10),*(undefined8 *)(param_1 + 6),uVar13,uVar19
                     ,*(undefined8 *)(param_1 + 10),0);
          uStack_110 = CONCAT44(uStack_184,uStack_188);
          lStack_108 = lStack_180;
          uStack_f8 = uStack_170;
          uStack_100 = uStack_178;
          FUN_0235b0c0(&uStack_110,&uStack_188,*(undefined8 *)PTR_DAT_049c4c10);
          uStack_f0 = CONCAT44(uStack_184,uStack_188);
          lVar11 = *(long *)PTR_DAT_049c4c08;
          lStack_e8 = lStack_180;
          uStack_d8 = uStack_170;
          uStack_e0 = uStack_178;
          lVar10 = *(long *)(lVar11 + 0x20);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_02229718();
          }
          uVar17 = thunk_FUN_0224e54c(&uStack_f0,
                                      *(undefined8 *)
                                       (*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0x80));
          lVar10 = *(long *)(lVar11 + 0x20);
          if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
            lVar10 = FUN_02229718();
          }
          iVar7 = FUN_0235b2a0(uVar17,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
          if (iVar7 != 0) goto LAB_0261fb14;
          *param_1 = 1;
          *(long *)(param_1 + 0x18) = lStack_e8;
          *(undefined8 *)(param_1 + 0x16) = uStack_f0;
          *(undefined8 *)(param_1 + 0x1c) = uStack_d8;
          *(undefined8 *)(param_1 + 0x1a) = uStack_e0;
          thunk_FUN_021f190c(param_1 + 0x16,0);
          FUN_0235c25c(param_1 + 2,&uStack_f0,param_1,*(undefined8 *)PTR_DAT_049c9780);
          goto LAB_0261ff94;
        }
      }
      goto LAB_0261fef0;
    }
    if (uVar18 == 1) {
      lStack_e8 = *(long *)(param_1 + 0x18);
      uStack_f0 = *(undefined8 *)(param_1 + 0x16);
      uStack_d8 = *(undefined8 *)(param_1 + 0x1c);
      uStack_e0 = *(undefined8 *)(param_1 + 0x1a);
      *param_1 = 0xffffffff;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
      param_1[0x1a] = 0;
      param_1[0x1b] = 0;
LAB_0261fb14:
      FUN_0235b3fc(&uStack_f0,&uStack_188,*(undefined8 *)PTR_DAT_049c4c00);
      lVar10 = lStack_180;
      puVar5 = PTR_DAT_049c9798;
      puVar4 = PTR_DAT_049b5428;
      puVar3 = PTR_DAT_049b5420;
      if (lStack_180 == 0) {
        if ((*(long *)(param_1 + 0xe) != 0) &&
           (uVar18 = param_1[0xc], (int)uVar18 < (int)(param_1[0xd] + uVar18))) {
          do {
            if (*(long *)(param_1 + 0xe) == 0) {
              if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              goto LAB_02620114;
            }
            lVar16 = *(long *)(*(long *)(param_1 + 0xe) + 0x68);
            if (lVar16 == 0) {
              if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                FUN_021f06a0();
              }
              goto LAB_02620114;
            }
            uStack_94 = uVar18;
            System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Remove_28a2634
                      (lVar16,&uStack_94,*(undefined8 *)puVar5);
            uVar18 = uVar18 + 1;
          } while ((int)uVar18 < (int)(param_1[0xd] + param_1[0xc]));
        }
      }
      else {
        if (0 < *(int *)(lStack_180 + 0x18)) {
          iVar7 = 0;
          do {
            System_Collections_Generic_List___Il2CppFullySharedGenericType___get_Item_28cd6a4
                      (lVar10,iVar7,&uStack_188,*(undefined8 *)puVar3);
            bVar6 = bStack_168;
            uStack_130 = CONCAT44(uStack_184,uStack_188);
            lStack_128 = lStack_180;
            uStack_118 = uStack_170;
            uStack_120 = uStack_178;
            iVar1 = iVar7 + param_1[0xc];
            uStack_88 = uStack_15f;
            uStack_90 = uStack_167;
            uStack_79 = (undefined1)uStack_150;
            uStack_78 = (undefined7)((ulong)uStack_150 >> 8);
            uStack_81 = uStack_158;
            uStack_80 = uStack_157;
            if (-1 < iVar1) {
              if (*(long *)(param_1 + 0xe) == 0) {
                if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                goto LAB_02620114;
              }
              lVar11 = *(long *)(*(long *)(param_1 + 0xe) + 0x60);
              if (lVar11 == 0) {
                if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                  FUN_021f06a0();
                }
                goto LAB_02620114;
              }
              if (iVar1 < *(int *)(lVar11 + 0x18)) {
                bStack_1b0 = bStack_168;
                uStack_1af = uStack_167;
                lStack_1c8 = lStack_180;
                uStack_1b8 = uStack_170;
                uStack_1c0 = uStack_178;
                uStack_1d0 = uStack_130;
                System_Collections_Generic_List___Il2CppFullySharedGenericType___set_Item_28cd72c
                          (lVar11,iVar1,&uStack_1d0,*(undefined8 *)puVar4);
                if ((bVar6 & 1) != 0) {
                  lVar11 = *(long *)(param_1 + 0xe);
                  if (lVar11 == 0) {
                    if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
                      FUN_021f06a0();
                    }
                    goto LAB_02620114;
                  }
                  *(byte *)(lVar11 + 0x40) = bVar6;
                  *(ulong *)(lVar11 + 0x49) = CONCAT17(uStack_81,uStack_88);
                  *(undefined8 *)(lVar11 + 0x41) = uStack_90;
                  *(long *)(lVar11 + 0x28) = lStack_128;
                  *(undefined8 *)(lVar11 + 0x20) = uStack_130;
                  *(undefined8 *)(lVar11 + 0x38) = uStack_118;
                  *(undefined8 *)(lVar11 + 0x30) = uStack_120;
                  *(ulong *)(lVar11 + 0x58) = CONCAT71(uStack_78,uStack_79);
                  *(ulong *)(lVar11 + 0x50) = CONCAT71(uStack_80,uStack_81);
                  thunk_FUN_021f190c(lVar11 + 0x20,0);
                }
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar10 + 0x18));
        }
        if (lVar16 == 0) {
          if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          goto LAB_02620114;
        }
        lVar16 = *(long *)(lVar16 + 0xe8);
        if (lVar16 != 0) {
          (**(code **)(lVar16 + 0x18))
                    (*(undefined8 *)(lVar16 + 0x40),*(undefined8 *)(lVar16 + 0x28));
        }
      }
      goto LAB_0261fef0;
    }
    if (lVar16 == 0) {
      if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_02620114;
    }
    Leaderboard__CreateLeaderboard_251d684
              (&uStack_188,lVar16,*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 10));
    uStack_d0 = CONCAT44(uStack_184,uStack_188);
    lStack_c8 = lStack_180;
    uStack_c0 = uStack_178;
    FUN_0235b0c0(&uStack_d0,&uStack_188,*(undefined8 *)PTR_DAT_049c4bf0);
    uStack_b0 = CONCAT44(uStack_184,uStack_188);
    lVar11 = *(long *)PTR_DAT_049c4be8;
    lStack_a8 = lStack_180;
    uStack_a0 = uStack_178;
    lVar10 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    uVar17 = thunk_FUN_0224e54c(&uStack_b0,
                                *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0x80));
    lVar10 = *(long *)(lVar11 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    iVar7 = FUN_0235b2a0(uVar17,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
    if (iVar7 != 0) goto LAB_0261f9b4;
    *param_1 = 0;
    *(long *)(param_1 + 0x12) = lStack_a8;
    *(undefined8 *)(param_1 + 0x10) = uStack_b0;
    *(undefined8 *)(param_1 + 0x14) = uStack_a0;
    thunk_FUN_021f190c(param_1 + 0x10,0);
    FUN_0235c25c(param_1 + 2,&uStack_b0,param_1,*(undefined8 *)PTR_DAT_049c9788);
  }
  else {
    if (lVar16 == 0) {
      if (*(long *)(lVar2 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_02620114;
    }
    uVar17 = *(undefined8 *)(param_1 + 6);
    if ((bRam0000000004f4be4d & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049c95d0);
      bRam0000000004f4be4d = 1;
    }
    uVar8 = System_String__op_Equality_2f7b7fc(uVar17,*(undefined8 *)PTR_DAT_049c95d0,0);
    if ((uVar8 & 1) == 0) {
      puVar9 = param_1 + 0xe;
      puVar9[0] = 0;
      puVar9[1] = 0;
      thunk_FUN_021f190c(puVar9,0);
      goto LAB_0261f8b0;
    }
LAB_0261fef0:
    *param_1 = 0xfffffffe;
    puVar9 = param_1 + 0xe;
    puVar9[0] = 0;
    puVar9[1] = 0;
    thunk_FUN_021f190c(puVar9,0);
    if (cRam0000000004f49bfa == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bfa = '\x01';
    }
    plVar15 = *(long **)(param_1 + 2);
    if (plVar15 != (long *)0x0) {
      lVar16 = *plVar15;
      uVar8 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar8 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar12 = (undefined8 *)(lVar16 + (long)(*piVar14 + 2) * 0x10 + 0x138);
            goto LAB_0261ff88;
          }
          uVar8 = uVar8 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar8 != 0);
      }
      puVar12 = (undefined8 *)FUN_02229a4c(plVar15,*(long *)PTR_DAT_049b56d0,2);
LAB_0261ff88:
      (*(code *)*puVar12)(plVar15,puVar12[1]);
    }
  }
LAB_0261ff94:
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
    return;
  }
LAB_02620114:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

