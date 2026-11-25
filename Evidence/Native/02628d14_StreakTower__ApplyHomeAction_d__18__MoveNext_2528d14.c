/* IL2CPP: StreakTower.<ApplyHomeAction>d__18$$MoveNext
void StreakTower__ApplyHomeAction_d__18__MoveNext (StreakTower__ApplyHomeAction_d__18_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTower.<ApplyHomeAction>d__18$$MoveNext
   void StreakTower__ApplyHomeAction_d__18__MoveNext (StreakTower__ApplyHomeAction_d__18_o __this,
   const MethodInfo* method); */

void StreakTower__ApplyHomeAction_d__18__MoveNext_2528d14(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  int extraout_var;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_b8 [16];
  undefined8 uStack_a8;
  undefined4 uStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long *plStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  undefined8 uStack_38;
  
  if ((bRam0000000004f4beba & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c9aa8);
    FUN_021f03f8(PTR_DAT_049c9ab0);
    FUN_021f03f8(PTR_DAT_049c4698);
    FUN_021f03f8(PTR_DAT_049c46a0);
    FUN_021f03f8(PTR_DAT_049c46b0);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4beba = 1;
  }
  uStack_38 = 0;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  plStack_70 = (long *)0x0;
  uStack_68 = 0;
  uStack_60 = 0;
  plStack_90 = (long *)0x0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  if (*param_1 == 0) {
    auStack_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_02628e00:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar5 = auStack_50._0_8_;
    if ((long *)auStack_50._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_50._0_8_;
      uVar11 = auStack_50._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0262908c;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_50._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_0262908c:
      (*(code *)*puVar6)(uVar5,uVar11,puVar6[1]);
    }
  }
  else {
    if (*param_1 == 1) {
      uStack_60 = *(undefined8 *)(param_1 + 0x10);
      uStack_68 = *(undefined8 *)(param_1 + 0xe);
      plStack_70 = *(long **)(param_1 + 0xc);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
    }
    else {
      lVar7 = *(long *)(param_1 + 6);
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar8 = StreakTower__TryGetClaimableStage_25285e8(lVar7,&uStack_38);
      if ((uVar8 & 1) != 0) {
        auStack_b8 = StreakTower__HandleClaimableStage_2528474(lVar7,uStack_38);
        puVar1 = PTR_DAT_049b5138;
        if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
          FUN_021f0574();
        }
        thunk_FUN_021f190c(auStack_b8,0);
        uVar3 = auStack_b8._8_8_;
        uVar5 = auStack_b8._0_8_;
        auStack_50 = auStack_b8;
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
        if ((long *)uVar5 != (long *)0x0) {
          lVar7 = *(long *)uVar5;
          uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
          if (uVar8 != 0) {
            piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
            do {
              if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
                puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
                goto LAB_02629150;
              }
              uVar8 = uVar8 - 1;
              piVar9 = piVar9 + 4;
            } while (uVar8 != 0);
          }
          puVar6 = (undefined8 *)FUN_02229a4c(uVar5,*(long *)PTR_DAT_049b54e0,0);
LAB_02629150:
          iVar4 = (*(code *)*puVar6)(uVar5,uVar3 & 0xffffffff,puVar6[1]);
          if (iVar4 == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 8) = auStack_50;
            thunk_FUN_021f190c(param_1 + 8,0);
            FUN_0235c25c(param_1 + 2,auStack_50,param_1,*(undefined8 *)PTR_DAT_049c9ab0);
            return;
          }
        }
        goto LAB_02628e00;
      }
      StreakTower__get_Save_2527c1c();
      iVar4 = StreakTower__get_Save_2527c1c();
      if (extraout_var <= iVar4) goto LAB_0262909c;
      if (*(long *)(lVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      LiveOpsModule__Show_253e230(auStack_b8,*(long *)(lVar7 + 0x28),0x14,1,0);
      uStack_88 = auStack_b8._8_8_;
      plStack_90 = (long *)auStack_b8._0_8_;
      uStack_80 = uStack_a8;
      FUN_0235b0c0(&plStack_90,auStack_b8,*(undefined8 *)PTR_DAT_049c46b0);
      lVar12 = *(long *)PTR_DAT_049c46a0;
      uStack_68 = auStack_b8._8_8_;
      plStack_70 = (long *)auStack_b8._0_8_;
      uStack_60 = uStack_a8;
      lVar7 = *(long *)(lVar12 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      uVar5 = thunk_FUN_0224e54c(&plStack_70,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0xc0) + 0x10) + 0x80));
      lVar7 = *(long *)(lVar12 + 0x20);
      if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
        lVar7 = FUN_02229718();
      }
      iVar4 = FUN_0235b2a0(uVar5,*(undefined8 *)(*(long *)(lVar7 + 0xc0) + 0x18));
      if (iVar4 == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0xe) = uStack_68;
        *(long **)(param_1 + 0xc) = plStack_70;
        *(undefined8 *)(param_1 + 0x10) = uStack_60;
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235c25c(param_1 + 2,&plStack_70,param_1,*(undefined8 *)PTR_DAT_049c9aa8);
        return;
      }
    }
    FUN_0235b3fc(&plStack_70,auStack_b8,*(undefined8 *)PTR_DAT_049c4698);
  }
LAB_0262909c:
  cVar2 = cRam0000000004f49bfa;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_02629124;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_02629124:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

