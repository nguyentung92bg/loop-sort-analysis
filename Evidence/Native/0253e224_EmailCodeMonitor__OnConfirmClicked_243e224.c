/* IL2CPP: EmailCodeMonitor$$OnConfirmClicked
void EmailCodeMonitor__OnConfirmClicked (EmailCodeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EmailCodeMonitor$$OnConfirmClicked
   void EmailCodeMonitor__OnConfirmClicked (EmailCodeMonitor_o* __this, const MethodInfo* method);
    */

ulong EmailCodeMonitor__OnConfirmClicked_243e224(long param_1)

{
  short sVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  ulong uVar6;
  short *psVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
                    /* try { // try from 0253e234 to 0263e25b has its CatchHandler @ 0253e670 */
  if ((bRam0000000004f4b835 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3f90);
    bRam0000000004f4b835 = 1;
  }
  lVar4 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                    (param_1,0x544bae8d,0);
  if ((lVar4 == 0) ||
     (lVar4 = StatefulUI_Runtime_References_TextInputReference__Text_3345e14(lVar4,0), lVar4 == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  ppppuVar5 = (undefined8 ****)System_String__Trim_2f8204c(lVar4,0);
  uVar6 = System_String__IsNullOrEmpty_2f7c924(ppppuVar5,0);
  if (((uVar6 & 1) != 0) || (lVar4 = *(long *)(param_1 + 0x98), uVar6 = 0, lVar4 == 0)) {
    return uVar6;
  }
                    /* try { // try from 0253e298 to 0263e2c3 has its CatchHandler @ 0253e66c */
  lVar9 = *(long *)PTR_DAT_049c3f90;
  lVar2 = tpidr_el0;
  lStack_68 = *(long *)(lVar2 + 0x28);
  plVar10 = *(long **)(*(long *)(lVar9 + 0x20) + 0xc0);
  uVar12 = (ulong)*(uint *)(plVar10[0x11] + 0xfc);
  uVar6 = uVar12 + 0xf & 0x1fffffff0;
  plVar14 = (long *)((long)&pppuStack_70 - uVar6);
  lVar13 = (long)plVar14 - uVar6;
  pppuStack_70 = ppppuVar5;
  psVar7 = (short *)thunk_FUN_0224e54c(lVar4,*(long *)(*plVar10 + 0x80) + 0x60);
  sVar1 = *psVar7;
  uVar8 = thunk_FUN_0224e54c(lVar4,*(long *)(**(long **)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x80) +
                                   0x40);
  lVar11 = *(long *)(*(long *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x60) + 0x20);
  if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
    lVar11 = FUN_02229718(lVar11);
  }
  psVar7 = (short *)thunk_FUN_0224e54c(uVar8,*(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 0x10) +
                                                      0x80) + 0x40);
  if (sVar1 == *psVar7) {
    plVar10 = *(long **)(*(long *)(lVar9 + 0x20) + 0xc0);
    if (-1 < *(int *)(plVar10[0x11] + 0x28)) {
      ppppuVar5 = &pppuStack_70;
    }
    func_0x04608620(plVar14,ppppuVar5,uVar12);
    uVar8 = thunk_FUN_0224e54c(lVar4,*(long *)(*plVar10 + 0x80) + 0x40);
    lVar4 = *(long *)(*(long *)(lVar9 + 0x20) + 0xc0);
    if (*(int *)(*(long *)(lVar4 + 0x88) + 0x28) < 0) {
      func_0x04608620(lVar13,plVar14,uVar12);
    }
    else {
      lVar13 = *plVar14;
    }
    uVar3 = Cysharp_Threading_Tasks_UniTaskCompletionSourceCore___Il2CppFullySharedGenericType___TrySetResult_29e0e30
                      (uVar8,lVar13,*(undefined8 *)(lVar4 + 0xb0));
  }
  else {
    uVar3 = 0;
  }
  if (*(long *)(lVar2 + 0x28) == lStack_68) {
    return (ulong)(uVar3 & 1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

