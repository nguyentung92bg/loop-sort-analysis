/* IL2CPP: LosePopupVariant$$<OnTryAgainClicked>b__8_0
void LosePopupVariant___OnTryAgainClicked_b__8_0 (LosePopupVariant_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LosePopupVariant$$<OnTryAgainClicked>b__8_0
   void LosePopupVariant___OnTryAgainClicked_b__8_0 (LosePopupVariant_o* __this, const MethodInfo*
   method); */

void LosePopupVariant___OnTryAgainClicked_b__8_0_2491edc(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  char *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 ****ppppuVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long alStack_80 [2];
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  puVar5 = PTR_DAT_049b5310;
  if ((bRam0000000004f4ba77 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b52a8);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c4e90);
    FUN_021f03f8(PTR_DAT_049c4e98);
    FUN_021f03f8(PTR_DAT_049c5f58);
    bRam0000000004f4ba77 = 1;
  }
  puVar4 = PTR_DAT_049b52a8;
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe4) == 0) {
    FUN_021f0574();
    lVar8 = *(long *)puVar5;
  }
  uVar13 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x660);
  uVar15 = *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x668);
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar4);
  }
  uVar9 = PlayerPrefsBool__op_Implicit_3f0e9e8(uVar13,uVar15,0);
  lVar8 = *(long *)(param_1 + 0x30);
  if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  puVar6 = (undefined8 *)PTR_DAT_049c4e98;
  if ((uVar9 & 1) == 0) {
    puVar6 = (undefined8 *)PTR_DAT_049c5f58;
  }
  ppppuVar10 = (undefined8 ****)*puVar6;
  lVar11 = *(long *)PTR_DAT_049c4e90;
  alStack_80[1] = 0;
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  plVar12 = *(long **)(*(long *)(lVar11 + 0x20) + 0xc0);
  uVar16 = (ulong)*(uint *)(plVar12[6] + 0xfc);
  uVar1 = *(undefined4 *)(plVar12[7] + 0xfc);
  uVar9 = uVar16 + 0xf & 0x1fffffff0;
  plVar17 = (long *)((long)alStack_80 - uVar9);
  lVar14 = (long)plVar17 - uVar9;
  pppuStack_70 = ppppuVar10;
  puVar6 = (undefined8 *)thunk_FUN_0224e54c(lVar8,*(long *)(*plVar12 + 0x80) + 0xe0);
  pcVar7 = (char *)thunk_FUN_0224e54c(*puVar6,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0)
                                                         + 0x20) + 0x80));
  plVar12 = *(long **)(*(long *)(lVar11 + 0x20) + 0xc0);
  if (*pcVar7 == '\x01') {
    if (-1 < *(int *)(plVar12[6] + 0x28)) {
      ppppuVar10 = &pppuStack_70;
    }
    func_0x04608620(plVar17,ppppuVar10,uVar16);
    uVar13 = thunk_FUN_0224e54c(lVar8,*(long *)(*plVar12 + 0x80) + 0x80);
    lVar18 = *(long *)(lVar11 + 0x20);
    lVar19 = *(long *)(lVar18 + 0xc0);
    if (*(int *)(*(long *)(lVar19 + 0x30) + 0x28) < 0) {
      func_0x04608620(lVar14,plVar17,uVar16);
      lVar19 = *(long *)(lVar18 + 0xc0);
    }
    else {
      lVar14 = *plVar17;
    }
    FUN_0256901c(uVar13,lVar14,alStack_80[1],*(undefined8 *)(lVar19 + 0x170));
    plVar12 = (long *)thunk_FUN_0224e54c(lVar8,*(long *)(**(long **)(*(long *)(lVar11 + 0x20) + 0xc0
                                                                    ) + 0x80) + 0xe0);
    plVar12 = (long *)*plVar12;
    if (plVar12 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_02569018;
    }
    (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
  }
  else {
    uVar13 = thunk_FUN_0224e54c(lVar8,*(long *)(*plVar12 + 0x80) + 0x80);
    func_0x04608670(uVar13,0,uVar1);
    lVar19 = *(long *)(lVar11 + 0x20);
    lVar11 = *(long *)(lVar19 + 0xc0);
    iVar2 = *(int *)(*(long *)(lVar11 + 0x30) + 0x28);
    if (-1 < iVar2) {
      ppppuVar10 = &pppuStack_70;
    }
    func_0x04608620(plVar17,ppppuVar10,uVar16);
    if (iVar2 < 0) {
      func_0x04608620(lVar14,ppppuVar10,uVar16);
      lVar11 = *(long *)(lVar19 + 0xc0);
    }
    else {
      lVar14 = *plVar17;
    }
    UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ChangeState_29a8908
              (lVar8,lVar14,alStack_80[1],*(undefined8 *)(lVar11 + 0xc0));
  }
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
LAB_02569018:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

