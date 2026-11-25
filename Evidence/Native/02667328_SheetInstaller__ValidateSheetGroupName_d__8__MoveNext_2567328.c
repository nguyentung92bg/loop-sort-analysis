/* IL2CPP: SheetInstaller.<ValidateSheetGroupName>d__8$$MoveNext
void SheetInstaller__ValidateSheetGroupName_d__8__MoveNext (SheetInstaller__ValidateSheetGroupName_d__8_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: SheetInstaller.<ValidateSheetGroupName>d__8$$MoveNext
   void SheetInstaller__ValidateSheetGroupName_d__8__MoveNext
   (SheetInstaller__ValidateSheetGroupName_d__8_o __this, const MethodInfo* method); */

void SheetInstaller__ValidateSheetGroupName_d__8__MoveNext_2567328(undefined4 *param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long *plVar12;
  ulong uVar13;
  long lStack_70;
  undefined8 ***pppuStack_68;
  long lStack_60;
  long lStack_58;
  
  puVar4 = PTR_DAT_049c3fa0;
                    /* try { // try from 02667330 to 027673b7 has its CatchHandler @ 026677c0 */
  if ((bRam0000000004f4c164 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c3fa0);
    bRam0000000004f4c164 = 1;
  }
  ppppuVar8 = *(undefined8 *****)(param_1 + 8);
  lVar9 = *(long *)puVar4;
  puVar1 = param_1 + 2;
  *param_1 = 0xfffffffe;
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  lVar10 = *(long *)(lVar9 + 0x20);
  uVar2 = *(ushort *)(lVar10 + 0x135);
  lVar5 = lVar10;
  pppuStack_68 = ppppuVar8;
  if ((uVar2 & 1) == 0) {
    lVar10 = FUN_02229718(lVar10);
    uVar2 = *(ushort *)(*(long *)(lVar9 + 0x20) + 0x135);
    lVar5 = *(long *)(lVar9 + 0x20);
  }
  uVar13 = (ulong)*(uint *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x28) + 0xfc);
  plVar12 = (long *)((long)&lStack_70 - (uVar13 + 0xf & 0x1fffffff0));
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02229718(lVar5);
  }
  plVar6 = (long *)thunk_FUN_0224e54c(puVar1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
  lVar5 = *(long *)(lVar9 + 0x20);
  if (*plVar6 == 0) {
    lVar10 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718(lVar5);
      lVar10 = *(long *)(lVar9 + 0x20);
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x28)) {
      ppppuVar8 = &pppuStack_68;
    }
    func_0x04608620(plVar12,ppppuVar8,uVar13);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718(lVar10);
    }
    FUN_021f0420(puVar1,*(long *)(**(long **)(lVar10 + 0xc0) + 0x80) + 0x40,plVar12,uVar13);
  }
  else {
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718(lVar5);
    }
    puVar7 = (undefined8 *)
             thunk_FUN_0224e54c(puVar1,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
    lVar5 = *(long *)(lVar9 + 0x20);
    plVar6 = (long *)*puVar7;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x28)) {
      ppppuVar8 = &pppuStack_68;
    }
    func_0x04608620(plVar12,ppppuVar8,uVar13);
    if (plVar6 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == lStack_58) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_0235c178;
    }
    lVar5 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718(lVar5);
    }
    lVar10 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_02229718();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x28) + 0x28)) {
      plVar12 = (long *)*plVar12;
    }
    lVar10 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar13 != 0) {
      piVar11 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == lVar5) {
          lVar5 = lVar10 + (long)(*piVar11 + 2) * 0x10 + 0x138;
          goto LAB_0235c0b8;
        }
        uVar13 = uVar13 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar13 != 0);
    }
    lVar5 = FUN_02229a4c(plVar6,lVar5,2);
LAB_0235c0b8:
    lVar5 = *(long *)(lVar5 + 8);
    lStack_60 = (long)plVar12;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar6,&lStack_60,plVar12);
  }
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
    return;
  }
LAB_0235c178:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

