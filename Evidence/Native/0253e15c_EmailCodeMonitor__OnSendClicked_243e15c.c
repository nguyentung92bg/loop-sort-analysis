/* IL2CPP: EmailCodeMonitor$$OnSendClicked
void EmailCodeMonitor__OnSendClicked (EmailCodeMonitor_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: EmailCodeMonitor$$OnSendClicked
   void EmailCodeMonitor__OnSendClicked (EmailCodeMonitor_o* __this, const MethodInfo* method); */

ulong EmailCodeMonitor__OnSendClicked_243e15c(long param_1)

{
  short sVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  undefined8 ****ppppuVar6;
  ulong uVar7;
  short *psVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 ***pppuStack_70;
  long lStack_68;
  
  if ((bRam0000000004f4b834 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3f90);
    FUN_021f03f8(PTR_DAT_049c3f70);
    bRam0000000004f4b834 = 1;
  }
  lVar5 = StatefulUISupport_Scripts_Components_StatefulView__GetTextInput_335190c
                    (param_1,0x4239b252,0);
  if ((lVar5 == 0) ||
     (lVar5 = StatefulUI_Runtime_References_TextInputReference__Text_3345e14(lVar5,0),
     puVar3 = PTR_DAT_049c3f70, lVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  ppppuVar6 = (undefined8 ****)System_String__Trim_2f8204c(lVar5,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574(*(long *)puVar3);
  }
  uVar7 = EmailH__IsValid_25087e8(ppppuVar6,0);
  if (((uVar7 & 1) != 0) && (lVar5 = *(long *)(param_1 + 0x98), uVar7 = 0, lVar5 != 0)) {
    lVar10 = *(long *)PTR_DAT_049c3f90;
    lVar2 = tpidr_el0;
    lStack_68 = *(long *)(lVar2 + 0x28);
    plVar11 = *(long **)(*(long *)(lVar10 + 0x20) + 0xc0);
    uVar13 = (ulong)*(uint *)(plVar11[0x11] + 0xfc);
    uVar7 = uVar13 + 0xf & 0x1fffffff0;
    plVar15 = (long *)((long)&pppuStack_70 - uVar7);
    lVar14 = (long)plVar15 - uVar7;
    pppuStack_70 = ppppuVar6;
    psVar8 = (short *)thunk_FUN_0224e54c(lVar5,*(long *)(*plVar11 + 0x80) + 0x60);
    sVar1 = *psVar8;
    uVar9 = thunk_FUN_0224e54c(lVar5,*(long *)(**(long **)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x80)
                                     + 0x40);
    lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x60) + 0x20);
    if ((*(ushort *)(lVar12 + 0x135) & 1) == 0) {
      lVar12 = FUN_02229718(lVar12);
    }
    psVar8 = (short *)thunk_FUN_0224e54c(uVar9,*(long *)(*(long *)(*(long *)(lVar12 + 0xc0) + 0x10)
                                                        + 0x80) + 0x40);
    if (sVar1 == *psVar8) {
      plVar11 = *(long **)(*(long *)(lVar10 + 0x20) + 0xc0);
      if (-1 < *(int *)(plVar11[0x11] + 0x28)) {
        ppppuVar6 = &pppuStack_70;
      }
      func_0x04608620(plVar15,ppppuVar6,uVar13);
      uVar9 = thunk_FUN_0224e54c(lVar5,*(long *)(*plVar11 + 0x80) + 0x40);
      lVar5 = *(long *)(*(long *)(lVar10 + 0x20) + 0xc0);
      if (*(int *)(*(long *)(lVar5 + 0x88) + 0x28) < 0) {
        func_0x04608620(lVar14,plVar15,uVar13);
      }
      else {
        lVar14 = *plVar15;
      }
      uVar4 = Cysharp_Threading_Tasks_UniTaskCompletionSourceCore___Il2CppFullySharedGenericType___TrySetResult_29e0e30
                        (uVar9,lVar14,*(undefined8 *)(lVar5 + 0xb0));
    }
    else {
      uVar4 = 0;
    }
    if (*(long *)(lVar2 + 0x28) == lStack_68) {
      return (ulong)(uVar4 & 1);
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

