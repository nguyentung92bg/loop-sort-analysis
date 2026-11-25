/* IL2CPP: AccountModule.<Link>d__4$$MoveNext
void AccountModule__Link_d__4__MoveNext (AccountModule__Link_d__4_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AccountModule.<Link>d__4$$MoveNext
   void AccountModule__Link_d__4__MoveNext (AccountModule__Link_d__4_o __this, const MethodInfo*
   method); */

void AccountModule__Link_d__4__MoveNext_253baa8(int *param_1)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  int iStack_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined4 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  int iStack_24;
  
  if ((bRam0000000004f4bf89 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca3e8);
    FUN_021f03f8(PTR_DAT_049ca3f0);
    FUN_021f03f8(PTR_DAT_049b55b8);
    FUN_021f03f8(PTR_DAT_049b5180);
    FUN_021f03f8(PTR_DAT_049c4728);
    FUN_021f03f8(PTR_DAT_049b5188);
    FUN_021f03f8(PTR_DAT_049c4730);
    FUN_021f03f8(PTR_DAT_049c3f70);
    FUN_021f03f8(PTR_DAT_049ca3e0);
    FUN_021f03f8(PTR_DAT_049b5198);
    FUN_021f03f8(PTR_DAT_049ca3f8);
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b51b0);
    FUN_021f03f8(PTR_DAT_049c4738);
    bRam0000000004f4bf89 = 1;
  }
  iVar3 = *param_1;
  lVar8 = *(long *)(param_1 + 10);
  uStack_40 = 0;
  uStack_38 = 0;
  auStack_50._0_8_ = 0;
  auStack_50._8_8_ = 0;
  auVar1 = ZEXT816(0);
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_98 = 0;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      uStack_38 = *(undefined8 *)(param_1 + 0x10);
      uStack_40 = *(undefined8 *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
LAB_0263bdb0:
      auStack_50 = auVar1;
      FUN_0235b3fc(&uStack_40,&iStack_c0,*(undefined8 *)PTR_DAT_049c4728);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(int *)(*(long *)PTR_DAT_049b52a8 + 0xe4) == 0) {
        FUN_021f0574();
      }
      PlayerPrefsBool__Set_3f0e92c(lVar8 + 0x20,iStack_c0 == 0,0);
      goto LAB_0263c040;
    }
    if (iVar3 == 1) {
      uStack_60 = *(undefined8 *)(param_1 + 0x16);
      uStack_68 = *(undefined8 *)(param_1 + 0x14);
      uStack_70 = *(undefined8 *)(param_1 + 0x12);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
    }
    else {
LAB_0263bcac:
      iVar3 = param_1[8];
      if (iVar3 != 6) {
        if (iVar3 != 0) {
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          plVar9 = *(long **)(lVar8 + 0x10);
          if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar8 = *plVar9;
          uVar6 = *(undefined8 *)(param_1 + 0xc);
          uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
          if (uVar4 != 0) {
            piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049ca3e0) {
                puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 1) * 0x10 + 0x138);
                goto LAB_0263c0c4;
              }
              uVar4 = uVar4 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar4 != 0);
          }
          puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049ca3e0,1);
LAB_0263c0c4:
          auStack_50 = (*(code *)*puVar5)(plVar9,iVar3,uVar6,puVar5[1]);
          FUN_0235b0c0(auStack_50,&iStack_c0,*(undefined8 *)PTR_DAT_049c4738);
          uStack_40 = CONCAT44(uStack_bc,iStack_c0);
          lVar10 = *(long *)PTR_DAT_049c4730;
          uStack_38 = uStack_b8;
          lVar8 = *(long *)(lVar10 + 0x20);
          if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02229718();
          }
          uVar6 = thunk_FUN_0224e54c(&uStack_40,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x80));
          lVar8 = *(long *)(lVar10 + 0x20);
          if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
            lVar8 = FUN_02229718();
          }
          iVar3 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18));
          auVar1 = auStack_50;
          if (iVar3 == 0) {
            *param_1 = 3;
            *(undefined8 *)(param_1 + 0x10) = uStack_38;
            *(undefined8 *)(param_1 + 0xe) = uStack_40;
            thunk_FUN_021f190c(param_1 + 0xe,0);
            FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049ca3f0);
            return;
          }
          goto LAB_0263bc90;
        }
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar10 = Monitors__Get_object__26889d0
                           (*(long *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_049ca3f8);
        if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        auStack_50 = MockAccountLinkMonitor__Show_244e5f4(lVar10,0);
        FUN_0235b0c0(auStack_50,&iStack_c0,*(undefined8 *)PTR_DAT_049c4738);
        uStack_40 = CONCAT44(uStack_bc,iStack_c0);
        lVar12 = *(long *)PTR_DAT_049c4730;
        uStack_38 = uStack_b8;
        lVar10 = *(long *)(lVar12 + 0x20);
        if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        uVar6 = thunk_FUN_0224e54c(&uStack_40,
                                   *(undefined8 *)
                                    (*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0x80));
        lVar10 = *(long *)(lVar12 + 0x20);
        if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
          lVar10 = FUN_02229718();
        }
        iVar3 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
        auVar1 = auStack_50;
        if (iVar3 == 0) {
          *param_1 = 0;
          *(undefined8 *)(param_1 + 0x10) = uStack_38;
          *(undefined8 *)(param_1 + 0xe) = uStack_40;
          thunk_FUN_021f190c(param_1 + 0xe,0);
          FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049ca3f0);
          return;
        }
        goto LAB_0263bdb0;
      }
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar10 = Monitors__Get_object__26889d0
                         (*(long *)(lVar8 + 0x18),*(undefined8 *)PTR_DAT_049b5198);
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      EmailCodeMonitor__RequestEmail_243ddd8(&iStack_c0,lVar10,0);
      uStack_90 = CONCAT44(uStack_bc,iStack_c0);
      uStack_88 = uStack_b8;
      uStack_80 = uStack_b0;
      FUN_0235b0c0(&uStack_90,&iStack_c0,*(undefined8 *)PTR_DAT_049b51b0);
      uStack_70 = CONCAT44(uStack_bc,iStack_c0);
      lVar12 = *(long *)PTR_DAT_049b5188;
      uStack_68 = uStack_b8;
      uStack_60 = uStack_b0;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      uVar6 = thunk_FUN_0224e54c(&uStack_70,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x10) + 0x80))
      ;
      lVar10 = *(long *)(lVar12 + 0x20);
      if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = FUN_02229718();
      }
      iVar3 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar10 + 0xc0) + 0x18));
      if (iVar3 == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x14) = uStack_68;
        *(undefined8 *)(param_1 + 0x12) = uStack_70;
        *(undefined8 *)(param_1 + 0x16) = uStack_60;
        thunk_FUN_021f190c(param_1 + 0x12,0);
        FUN_0235bb44(param_1 + 2,&uStack_70,param_1,*(undefined8 *)PTR_DAT_049ca3e8);
        return;
      }
    }
    FUN_0235b3fc(&uStack_70,&iStack_c0,*(undefined8 *)PTR_DAT_049b5180);
    uVar6 = CONCAT44(uStack_bc,iStack_c0);
    if (*(int *)(*(long *)PTR_DAT_049c3f70 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uVar4 = EmailH__IsValid_25087e8(uVar6,0);
    if ((uVar4 & 1) == 0) {
      iStack_c0 = 2;
      goto LAB_0263c040;
    }
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar9 = *(long **)(lVar8 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *plVar9;
    uVar11 = *(undefined8 *)(param_1 + 0xc);
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049ca3e0) {
          puVar5 = (undefined8 *)(lVar8 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_0263bf90;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049ca3e0,2);
LAB_0263bf90:
    auStack_50 = (*(code *)*puVar5)(plVar9,uVar6,uVar11,puVar5[1]);
    FUN_0235b0c0(auStack_50,&iStack_c0,*(undefined8 *)PTR_DAT_049c4738);
    uStack_40 = CONCAT44(uStack_bc,iStack_c0);
    lVar10 = *(long *)PTR_DAT_049c4730;
    uStack_38 = uStack_b8;
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar6 = thunk_FUN_0224e54c(&uStack_40,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x80));
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18));
    auVar1 = auStack_50;
    if (iVar3 == 0) {
      *param_1 = 2;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      *(undefined8 *)(param_1 + 0xe) = uStack_40;
      thunk_FUN_021f190c(param_1 + 0xe,0);
      FUN_0235bb44(param_1 + 2,&uStack_40,param_1,*(undefined8 *)PTR_DAT_049ca3f0);
      return;
    }
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 != 3) goto LAB_0263bcac;
      uStack_38 = *(undefined8 *)(param_1 + 0x10);
      uStack_40 = *(undefined8 *)(param_1 + 0xe);
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      *param_1 = -1;
LAB_0263bc90:
      auStack_50 = auVar1;
      FUN_0235b3fc(&uStack_40,&iStack_c0,*(undefined8 *)PTR_DAT_049c4728);
      goto LAB_0263c040;
    }
    uStack_38 = *(undefined8 *)(param_1 + 0x10);
    uStack_40 = *(undefined8 *)(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  auStack_50 = auVar1;
  FUN_0235b3fc(&uStack_40,&iStack_c0,*(undefined8 *)PTR_DAT_049c4728);
LAB_0263c040:
  puVar2 = PTR_DAT_049b55b8;
  *param_1 = -2;
  iStack_24 = iStack_c0;
  FUN_0235bed4(param_1 + 2,&iStack_24,*(undefined8 *)puVar2);
  return;
}

