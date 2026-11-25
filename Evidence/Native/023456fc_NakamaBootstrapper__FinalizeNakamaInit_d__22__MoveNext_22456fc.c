/* IL2CPP: NakamaBootstrapper.<FinalizeNakamaInit>d__22$$MoveNext
void NakamaBootstrapper__FinalizeNakamaInit_d__22__MoveNext (NakamaBootstrapper__FinalizeNakamaInit_d__22_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: NakamaBootstrapper.<FinalizeNakamaInit>d__22$$MoveNext
   void NakamaBootstrapper__FinalizeNakamaInit_d__22__MoveNext
   (NakamaBootstrapper__FinalizeNakamaInit_d__22_o __this, const MethodInfo* method); */

void NakamaBootstrapper__FinalizeNakamaInit_d__22__MoveNext_22456fc(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  char cVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  long *plStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [16];
  
  if ((bRam0000000004f49b45 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b5700);
                    /* catch() { ... } // from try @ 0234567c with catch @ 0234572c */
    FUN_021f03f8(PTR_DAT_049b5708);
    FUN_021f03f8(PTR_DAT_049b5710);
    FUN_021f03f8(PTR_DAT_049b5718);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049b5578);
    FUN_021f03f8(PTR_DAT_049b5720);
    FUN_021f03f8(PTR_DAT_049b54a0);
    FUN_021f03f8(PTR_DAT_049b5728);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049b5730);
    bRam0000000004f49b45 = 1;
  }
  puVar4 = PTR_DAT_049b54a0;
  lVar13 = *(long *)(param_1 + 8);
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  auVar18 = ZEXT816(0);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  if (*param_1 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0xc);
    plStack_50 = *(long **)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
LAB_02345868:
    auStack_60 = auVar18;
    FUN_0235b3fc(&plStack_50,auStack_40,*(undefined8 *)PTR_DAT_049b5710);
    puVar4 = PTR_DAT_049b54a0;
    uVar6 = auStack_40._0_4_;
    lVar9 = *(long *)PTR_DAT_049b54a0;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_021f0574();
      lVar9 = *(long *)puVar4;
    }
    auStack_40._0_8_ = CONCAT44(auStack_40._4_4_,uVar6);
    uVar15 = *(undefined8 *)(*(long *)(lVar9 + 0xb8) + 8);
    uVar16 = thunk_FUN_0222c66c(*(undefined8 *)PTR_DAT_049b5720,auStack_40);
    uVar16 = System_String__Format_2f7dfac(*(undefined8 *)PTR_DAT_049b5730,uVar15,uVar16,0);
    if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Debug__Log_3bd0be4(uVar16,0);
    auVar2._8_8_ = auStack_70._8_8_;
    auVar2._0_8_ = auStack_70._0_8_;
    if (uVar6 != 3) goto LAB_02345ad0;
    if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar12 = *(long **)(lVar13 + 0x20);
    if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar9 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b5578) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar11 + 3) * 0x10 + 0x138);
          goto LAB_02345b88;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049b5578,3);
LAB_02345b88:
    uVar16 = (*(code *)*puVar8)(plVar12,puVar8[1]);
    auVar18 = NakamaBootstrapper__TryAutoMergeAccountsAsync_22455d8(lVar13,uVar16);
    puVar4 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auStack_40 = auVar18;
    thunk_FUN_021f190c(auStack_40,0);
    uVar15 = auStack_40._8_8_;
    uVar16 = auStack_40._0_8_;
    auStack_70 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    if ((long *)uVar16 != (long *)0x0) {
      lVar13 = *(long *)uVar16;
      uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar8 = (undefined8 *)(lVar13 + (long)*piVar11 * 0x10 + 0x138);
            goto LAB_02345c80;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_02229a4c(uVar16,*(long *)PTR_DAT_049b54e0,0);
LAB_02345c80:
      iVar7 = (*(code *)*puVar8)(uVar16,uVar15 & 0xffffffff,puVar8[1]);
      if (iVar7 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xe) = auStack_70;
        thunk_FUN_021f190c(param_1 + 0xe,0);
        FUN_0235c25c(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049b5708);
        return;
      }
    }
  }
  else {
    if (*param_1 != 1) {
      uVar16 = *(undefined8 *)(param_1 + 6);
      if (*(int *)(*(long *)PTR_DAT_049b54a0 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf8 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54a0);
        cRam0000000004f49bf8 = '\x01';
      }
      lVar9 = *(long *)puVar4;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_021f0574();
        lVar9 = *(long *)puVar4;
      }
      **(undefined8 **)(lVar9 + 0xb8) = uVar16;
      thunk_FUN_021f190c(*(undefined8 *)(*(long *)puVar4 + 0xb8),uVar16);
      if (*(long *)(param_1 + 6) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar10 = Voodoo_Nakama_Services_NakamaInitEventArgs__get_IsSuccess_426e348
                         (*(long *)(param_1 + 6),0);
      auVar3._8_8_ = auStack_70._8_8_;
      auVar3._0_8_ = auStack_70._0_8_;
      auVar2._8_8_ = auStack_70._8_8_;
      auVar2._0_8_ = auStack_70._0_8_;
      auVar1._8_8_ = auStack_60._8_8_;
      auVar1._0_8_ = auStack_60._0_8_;
      auVar18._8_8_ = auStack_40._8_8_;
      auVar18._0_8_ = auStack_40._0_8_;
      if ((uVar10 & 1) == 0) goto LAB_02345ad0;
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar13 + 0x40) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auStack_40 = auVar18;
      auStack_60 = auVar1;
      auVar2 = auVar3;
      if (*(char *)(*(long *)(lVar13 + 0x40) + 0x10) == '\0') goto LAB_02345ad0;
      auStack_60 = NakamaBootstrapper__TryAutoLinkAccountAsync_22454d8(lVar13);
      FUN_0235b0c0(auStack_60,auStack_40,*(undefined8 *)PTR_DAT_049b5728);
      lVar17 = *(long *)PTR_DAT_049b5718;
      uStack_48 = auStack_40._8_8_;
      plStack_50 = (long *)auStack_40._0_8_;
      lVar9 = *(long *)(lVar17 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      uVar16 = thunk_FUN_0224e54c(&plStack_50,
                                  *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) + 0x80))
      ;
      lVar9 = *(long *)(lVar17 + 0x20);
      if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_02229718();
      }
      iVar7 = FUN_0235b2a0(uVar16,*(undefined8 *)(*(long *)(lVar9 + 0xc0) + 0x18));
      auVar18 = auStack_60;
      if (iVar7 == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0xc) = uStack_48;
        *(long **)(param_1 + 10) = plStack_50;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,&plStack_50,param_1,*(undefined8 *)PTR_DAT_049b5700);
        return;
      }
      goto LAB_02345868;
    }
    auStack_70 = *(undefined1 (*) [16])(param_1 + 0xe);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
    auStack_60 = ZEXT816(0);
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar16 = auStack_70._0_8_;
  auVar2 = auStack_70;
  if ((long *)auStack_70._0_8_ != (long *)0x0) {
    lVar13 = *(long *)auStack_70._0_8_;
    uVar14 = auStack_70._8_8_ & 0xffff;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_02345ac0;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_02345ac0:
    (*(code *)*puVar8)(uVar16,uVar14,puVar8[1]);
    auVar2 = auStack_70;
  }
LAB_02345ad0:
  cVar5 = cRam0000000004f49bfa;
  *param_1 = -2;
  auStack_70 = auVar2;
  if (cVar5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar12 = *(long **)(param_1 + 2);
  if (plVar12 != (long *)0x0) {
    lVar13 = *plVar12;
    uVar10 = (ulong)*(ushort *)(lVar13 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar8 = (undefined8 *)(lVar13 + (long)(*piVar11 + 2) * 0x10 + 0x138);
          goto LAB_02345b58;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_02229a4c(plVar12,*(long *)PTR_DAT_049b56d0,2);
LAB_02345b58:
    (*(code *)*puVar8)(plVar12,puVar8[1]);
  }
  return;
}

