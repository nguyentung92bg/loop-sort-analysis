/* IL2CPP: ProfileEditMonitor.<SaveProfile>d__16$$MoveNext
void ProfileEditMonitor__SaveProfile_d__16__MoveNext (ProfileEditMonitor__SaveProfile_d__16_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ProfileEditMonitor.<SaveProfile>d__16$$MoveNext
   void ProfileEditMonitor__SaveProfile_d__16__MoveNext (ProfileEditMonitor__SaveProfile_d__16_o
   __this, const MethodInfo* method); */

void ProfileEditMonitor__SaveProfile_d__16__MoveNext_24552d0(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uStack_150;
  long lStack_148;
  undefined8 uStack_140;
  undefined1 auStack_130 [16];
  undefined8 uStack_120;
  int iStack_118;
  undefined4 uStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_d8;
  long *plStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long *plStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [16];
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((bRam0000000004f4b8ef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4a00);
    FUN_021f03f8(PTR_DAT_049c4a08);
    FUN_021f03f8(PTR_DAT_049c4a10);
    FUN_021f03f8(PTR_DAT_049c4a18);
    FUN_021f03f8(PTR_DAT_049b5680);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049c4a20);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4b8ef = 1;
  }
  lVar12 = *(long *)(param_1 + 6);
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  uStack_50 = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  uStack_c8 = 0;
  plStack_d0 = (long *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  plStack_a0 = (long *)0x0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_d8 = 0;
  if (*param_1 == 0) {
    auStack_70 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_025553cc:
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar7 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar6 = *(long *)auStack_70._0_8_;
      uVar14 = auStack_70._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_025557f4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025557f4:
      (*(code *)*puVar8)(uVar7,uVar14,puVar8[1]);
    }
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined1 *)(lVar12 + 0xd2) = 0;
    auVar1 = auStack_70;
  }
  else {
    if (*param_1 == 1) {
      uStack_98 = *(undefined8 *)(param_1 + 0xe);
      plStack_a0 = *(long **)(param_1 + 0xc);
      uStack_88 = *(undefined8 *)(param_1 + 0x12);
      uStack_90 = *(undefined8 *)(param_1 + 0x10);
      uStack_78 = *(undefined8 *)(param_1 + 0x16);
      uStack_80 = *(undefined8 *)(param_1 + 0x14);
      *param_1 = -1;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
    }
    else {
      if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(char *)(lVar12 + 0xd1) == '\0') {
        auVar1 = ZEXT816(0);
        if (*(char *)(lVar12 + 0xd2) != '\0') goto LAB_0255580c;
        *(undefined1 *)(lVar12 + 0xd2) = 1;
        if (*(long *)(lVar12 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        auStack_130 = SlidingTextMonitor__ShowText_2455a48
                                (0,0x43480000,*(long *)(lVar12 + 0xb0),
                                 *(undefined8 *)(lVar12 + 0xd8));
        puVar2 = PTR_DAT_049b5138;
        if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
          FUN_021f0574();
        }
        thunk_FUN_021f190c(auStack_130,0);
        uVar4 = auStack_130._8_8_;
        uVar7 = auStack_130._0_8_;
        auStack_70 = auStack_130;
        if (cRam0000000004f49bf4 == '\0') {
          FUN_021f03f8(PTR_DAT_049b5138);
          cRam0000000004f49bf4 = '\x01';
        }
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          FUN_021f0574();
        }
        if (cRam0000000004f49bf5 == '\0') {
          FUN_021f03f8(PTR_DAT_049b54e0);
          cRam0000000004f49bf5 = '\x01';
        }
        if ((long *)uVar7 != (long *)0x0) {
          lVar6 = *(long *)uVar7;
          uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
          if (uVar9 != 0) {
            piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
            do {
              if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
                puVar8 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
                goto LAB_025558c4;
              }
              uVar9 = uVar9 - 1;
              piVar10 = piVar10 + 4;
            } while (uVar9 != 0);
          }
          puVar8 = (undefined8 *)FUN_02229a4c(uVar7,*(long *)PTR_DAT_049b54e0,0);
LAB_025558c4:
          iVar5 = (*(code *)*puVar8)(uVar7,uVar4 & 0xffffffff,puVar8[1]);
          if (iVar5 == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 8) = auStack_70;
            thunk_FUN_021f190c(param_1 + 8,0);
            FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c4a08);
            return;
          }
        }
        goto LAB_025553cc;
      }
      plVar11 = (long *)(lVar12 + 0xc0);
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar6 = System_String__Trim_2f8204c(*plVar11,0);
      *plVar11 = lVar6;
      thunk_FUN_021f190c(plVar11);
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar12,0xd68d6a86,0);
      if (*(int *)(*(long *)PTR_DAT_049b6128 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = System_TimeSpan__FromSeconds_311711c(0x4020000000000000,0);
      lVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049b5680);
      System_Threading_CancellationTokenSource___ctor_316569c(lVar6,uVar7,0);
      lVar13 = *(long *)(lVar12 + 0xa8);
      lStack_f8 = *plVar11;
      uStack_100 = *(undefined8 *)(lVar12 + 0xb8);
      uStack_f0 = *(undefined8 *)(lVar12 + 200);
      if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar7 = System_Threading_CancellationTokenSource__get_Token_31655c4(lVar6,0);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lStack_148 = lStack_f8;
      uStack_150 = uStack_100;
      uStack_140 = uStack_f0;
      PlayerModule__UpdatePlayerProfile_2551b84(auStack_130,lVar13,&uStack_150,uVar7,0);
      uStack_b8 = CONCAT44(uStack_114,iStack_118);
      uStack_c8 = auStack_130._8_8_;
      plStack_d0 = (long *)auStack_130._0_8_;
      uStack_c0 = uStack_120;
      uStack_a8 = uStack_108;
      uStack_b0 = uStack_110;
      FUN_0235b0c0(&plStack_d0,auStack_130,*(undefined8 *)PTR_DAT_049c4a20);
      uStack_88 = CONCAT44(uStack_114,iStack_118);
      lVar13 = *(long *)PTR_DAT_049c4a18;
      uStack_90 = uStack_120;
      uStack_78 = uStack_108;
      uStack_80 = uStack_110;
      lVar6 = *(long *)(lVar13 + 0x20);
      uStack_98 = auStack_130._8_8_;
      plStack_a0 = (long *)auStack_130._0_8_;
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      uVar7 = thunk_FUN_0224e54c(&plStack_a0,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80));
      lVar6 = *(long *)(lVar13 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_02229718();
      }
      iVar5 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18));
      if (iVar5 == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0xe) = uStack_98;
        *(long **)(param_1 + 0xc) = plStack_a0;
        *(undefined8 *)(param_1 + 0x12) = uStack_88;
        *(undefined8 *)(param_1 + 0x10) = uStack_90;
        *(undefined8 *)(param_1 + 0x16) = uStack_78;
        *(undefined8 *)(param_1 + 0x14) = uStack_80;
        thunk_FUN_021f190c(param_1 + 0xc,0);
        FUN_0235c25c(param_1 + 2,&plStack_a0,param_1,*(undefined8 *)PTR_DAT_049c4a00);
        return;
      }
    }
    FUN_0235b3fc(&plStack_a0,auStack_130,*(undefined8 *)PTR_DAT_049c4a10);
    uStack_58 = auStack_130._8_8_;
    plStack_60 = (long *)auStack_130._0_8_;
    uStack_50 = uStack_120;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined1 *)(lVar12 + 0xd0) = 1;
    if (iStack_118 == 1) {
      *(undefined8 *)(lVar12 + 0xc0) = auStack_130._8_8_;
      *(undefined8 *)(lVar12 + 0xb8) = auStack_130._0_8_;
      *(undefined8 *)(lVar12 + 200) = uStack_120;
      thunk_FUN_021f190c(lVar12 + 0xc0,0);
      ProfileEditMonitor__UpdateProfileView_24548d4(lVar12,0x9e8b7543);
      auVar1._8_8_ = auStack_70._8_8_;
      auVar1._0_8_ = auStack_70._0_8_;
    }
    else if (iStack_118 == 2) {
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar12,0x18319ff2,0);
      uVar7 = Phrase__get_UpdateProfileFailInvalidNickname_252f568(0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar12,0x11147c06,uVar7,0);
      auVar1._8_8_ = auStack_70._8_8_;
      auVar1._0_8_ = auStack_70._0_8_;
    }
    else {
      StatefulUISupport_Scripts_Components_StatefulView__SetState_3351944(lVar12,0x18319ff2,0);
      uVar7 = Phrase__get_UpdateProfileFail_252f4ec(0);
      StatefulUISupport_Scripts_Components_StatefulView__SetText_33519bc(lVar12,0x11147c06,uVar7,0);
      auVar1._8_8_ = auStack_70._8_8_;
      auVar1._0_8_ = auStack_70._0_8_;
    }
  }
LAB_0255580c:
  cVar3 = cRam0000000004f49bfa;
  *param_1 = -2;
  auStack_70 = auVar1;
  if (cVar3 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 != (long *)0x0) {
    lVar12 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar8 = (undefined8 *)(lVar12 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_02555894;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b56d0,2);
LAB_02555894:
    (*(code *)*puVar8)(plVar11,puVar8[1]);
  }
  return;
}

