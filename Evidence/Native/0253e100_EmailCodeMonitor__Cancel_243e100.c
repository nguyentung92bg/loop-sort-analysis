/* IL2CPP: EmailCodeMonitor$$Cancel
void EmailCodeMonitor__Cancel (EmailCodeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EmailCodeMonitor$$Cancel
   void EmailCodeMonitor__Cancel (EmailCodeMonitor_o* __this, const MethodInfo* method); */

uint EmailCodeMonitor__Cancel_243e100(long param_1)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  short *psVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long alStack_70 [2];
  
  if ((bRam0000000004f4b832 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3f90);
    bRam0000000004f4b832 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x98);
  if (lVar4 == 0) {
    return 0;
  }
  lVar7 = *(long *)PTR_DAT_049c3f90;
  lVar2 = tpidr_el0;
  alStack_70[1] = *(long *)(lVar2 + 0x28);
  alStack_70[0] = 0;
  plVar8 = *(long **)(*(long *)(lVar7 + 0x20) + 0xc0);
  uVar11 = (ulong)*(uint *)(plVar8[0x11] + 0xfc);
  uVar10 = uVar11 + 0xf & 0x1fffffff0;
  plVar13 = (long *)((long)alStack_70 - uVar10);
  lVar12 = (long)plVar13 - uVar10;
  psVar5 = (short *)thunk_FUN_0224e54c(lVar4,*(long *)(*plVar8 + 0x80) + 0x60);
  sVar1 = *psVar5;
  uVar6 = thunk_FUN_0224e54c(lVar4,*(long *)(**(long **)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x80) +
                                   0x40);
  lVar9 = *(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x60) + 0x20);
  if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
    lVar9 = FUN_02229718(lVar9);
  }
  psVar5 = (short *)thunk_FUN_0224e54c(uVar6,*(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x10) +
                                                      0x80) + 0x40);
  if (sVar1 == *psVar5) {
    plVar14 = *(long **)(*(long *)(lVar7 + 0x20) + 0xc0);
    plVar8 = (long *)0x0;
    if (-1 < *(int *)(plVar14[0x11] + 0x28)) {
      plVar8 = alStack_70;
    }
    func_0x04608620(plVar13,plVar8,uVar11);
    uVar6 = thunk_FUN_0224e54c(lVar4,*(long *)(*plVar14 + 0x80) + 0x40);
    lVar4 = *(long *)(*(long *)(lVar7 + 0x20) + 0xc0);
    if (*(int *)(*(long *)(lVar4 + 0x88) + 0x28) < 0) {
      func_0x04608620(lVar12,plVar13,uVar11);
    }
    else {
      lVar12 = *plVar13;
    }
    uVar3 = Cysharp_Threading_Tasks_UniTaskCompletionSourceCore___Il2CppFullySharedGenericType___TrySetResult_29e0e30
                      (uVar6,lVar12,*(undefined8 *)(lVar4 + 0xb0));
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == alStack_70[1]) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

