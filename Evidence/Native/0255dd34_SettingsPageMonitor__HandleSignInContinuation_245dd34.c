/* IL2CPP: SettingsPageMonitor$$HandleSignInContinuation
void SettingsPageMonitor__HandleSignInContinuation (SettingsPageMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SettingsPageMonitor$$HandleSignInContinuation
   void SettingsPageMonitor__HandleSignInContinuation (SettingsPageMonitor_o* __this, const
   MethodInfo* method); */

void SettingsPageMonitor__HandleSignInContinuation_245dd34(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long alStack_80 [2];
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4b934 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c4e90);
    FUN_021f03f8(PTR_DAT_049c4e98);
    bRam0000000004f4b934 = 1;
  }
  if (*(char *)(param_1 + 0x110) == '\0') {
    return;
  }
  lVar4 = *(long *)(param_1 + 0xb0);
  *(undefined1 *)(param_1 + 0x110) = 0;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  ppppuVar8 = *(undefined8 *****)PTR_DAT_049c4e98;
  lVar9 = *(long *)PTR_DAT_049c4e90;
  alStack_80[1] = 0;
  lVar3 = tpidr_el0;
  lStack_68 = *(long *)(lVar3 + 0x28);
  plVar10 = *(long **)(*(long *)(lVar9 + 0x20) + 0xc0);
  uVar13 = (ulong)*(uint *)(plVar10[6] + 0xfc);
  uVar1 = *(undefined4 *)(plVar10[7] + 0xfc);
  uVar11 = uVar13 + 0xf & 0x1fffffff0;
  plVar14 = (long *)((long)alStack_80 - uVar11);
  lVar12 = (long)plVar14 - uVar11;
  pppuStack_70 = ppppuVar8;
  puVar5 = (undefined8 *)thunk_FUN_0224e54c(lVar4,*(long *)(*plVar10 + 0x80) + 0xe0);
  pcVar6 = (char *)thunk_FUN_0224e54c(*puVar5,*(undefined8 *)
                                               (*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                         + 0x20) + 0x80));
  plVar10 = *(long **)(*(long *)(lVar9 + 0x20) + 0xc0);
  if (*pcVar6 == '\x01') {
    if (-1 < *(int *)(plVar10[6] + 0x28)) {
      ppppuVar8 = &pppuStack_70;
    }
    func_0x04608620(plVar14,ppppuVar8,uVar13);
    uVar7 = thunk_FUN_0224e54c(lVar4,*(long *)(*plVar10 + 0x80) + 0x80);
    lVar15 = *(long *)(lVar9 + 0x20);
    lVar16 = *(long *)(lVar15 + 0xc0);
    if (*(int *)(*(long *)(lVar16 + 0x30) + 0x28) < 0) {
      func_0x04608620(lVar12,plVar14,uVar13);
      lVar16 = *(long *)(lVar15 + 0xc0);
    }
    else {
      lVar12 = *plVar14;
    }
    FUN_0256901c(uVar7,lVar12,alStack_80[1],*(undefined8 *)(lVar16 + 0x170));
    plVar10 = (long *)thunk_FUN_0224e54c(lVar4,*(long *)(**(long **)(*(long *)(lVar9 + 0x20) + 0xc0)
                                                        + 0x80) + 0xe0);
    plVar10 = (long *)*plVar10;
    if (plVar10 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == lStack_68) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_02569018;
    }
    (**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
  }
  else {
    uVar7 = thunk_FUN_0224e54c(lVar4,*(long *)(*plVar10 + 0x80) + 0x80);
    func_0x04608670(uVar7,0,uVar1);
    lVar16 = *(long *)(lVar9 + 0x20);
    lVar9 = *(long *)(lVar16 + 0xc0);
    iVar2 = *(int *)(*(long *)(lVar9 + 0x30) + 0x28);
    if (-1 < iVar2) {
      ppppuVar8 = &pppuStack_70;
    }
    func_0x04608620(plVar14,ppppuVar8,uVar13);
    if (iVar2 < 0) {
      func_0x04608620(lVar12,ppppuVar8,uVar13);
      lVar9 = *(long *)(lVar16 + 0xc0);
    }
    else {
      lVar12 = *plVar14;
    }
    UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___ChangeState_29a8908
              (lVar4,lVar12,alStack_80[1],*(undefined8 *)(lVar9 + 0xc0));
  }
  if (*(long *)(lVar3 + 0x28) == lStack_68) {
    return;
  }
LAB_02569018:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

