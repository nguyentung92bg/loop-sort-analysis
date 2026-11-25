/* IL2CPP: SheetInstaller.<LoadGoogleSheetConverters>d__6$$MoveNext
void SheetInstaller__LoadGoogleSheetConverters_d__6__MoveNext (SheetInstaller__LoadGoogleSheetConverters_d__6_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Type propagation algorithm not settling */
/* IL2CPP: SheetInstaller.<LoadGoogleSheetConverters>d__6$$MoveNext
   void SheetInstaller__LoadGoogleSheetConverters_d__6__MoveNext
   (SheetInstaller__LoadGoogleSheetConverters_d__6_o __this, const MethodInfo* method); */

void SheetInstaller__LoadGoogleSheetConverters_d__6__MoveNext_256727c(undefined4 *param_1)

{
  long *plVar1;
  ushort uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined4 *puVar12;
  ulong uVar13;
  long alStack_70 [4];
  
  puVar4 = PTR_DAT_049cbc90;
  if ((bRam0000000004f4c162 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbc90);
    bRam0000000004f4c162 = 1;
  }
  lVar8 = *(long *)puVar4;
  puVar12 = param_1 + 2;
  *param_1 = 0xfffffffe;
  lVar3 = tpidr_el0;
  alStack_70[3] = *(long *)(lVar3 + 0x28);
  lVar9 = *(long *)(lVar8 + 0x20);
  alStack_70[1] = 0;
  uVar2 = *(ushort *)(lVar9 + 0x135);
  lVar5 = lVar9;
  if ((uVar2 & 1) == 0) {
    lVar9 = FUN_02229718(lVar9);
    uVar2 = *(ushort *)(*(long *)(lVar8 + 0x20) + 0x135);
    lVar5 = *(long *)(lVar8 + 0x20);
  }
  uVar13 = (ulong)*(uint *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x28) + 0xfc);
  plVar11 = (long *)((long)alStack_70 - (uVar13 + 0xf & 0x1fffffff0));
  if ((uVar2 & 1) == 0) {
    lVar5 = FUN_02229718(lVar5);
  }
  plVar6 = (long *)thunk_FUN_0224e54c(puVar12,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
  lVar5 = *(long *)(lVar8 + 0x20);
  if (*plVar6 == 0) {
    lVar9 = lVar5;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718(lVar5);
      lVar9 = *(long *)(lVar8 + 0x20);
    }
    plVar6 = (long *)0x0;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x28)) {
      plVar6 = alStack_70 + 1;
    }
    func_0x04608620(plVar11,plVar6,uVar13);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02229718(lVar9);
    }
    FUN_021f0420(puVar12,*(long *)(**(long **)(lVar9 + 0xc0) + 0x80) + 0x40,plVar11,uVar13);
  }
  else {
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718(lVar5);
    }
    puVar7 = (undefined8 *)
             thunk_FUN_0224e54c(puVar12,*(undefined8 *)(**(long **)(lVar5 + 0xc0) + 0x80));
    lVar5 = *(long *)(lVar8 + 0x20);
    plVar6 = (long *)*puVar7;
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    plVar1 = (long *)0x0;
    if (-1 < *(int *)(*(long *)(*(long *)(lVar5 + 0xc0) + 0x28) + 0x28)) {
      plVar1 = alStack_70 + 1;
    }
    func_0x04608620(plVar11,plVar1,uVar13);
    if (plVar6 == (long *)0x0) {
      if (*(long *)(lVar3 + 0x28) == alStack_70[3]) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      goto LAB_0235c178;
    }
    lVar5 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_02229718(lVar5);
    }
    lVar9 = *(long *)(lVar8 + 0x20);
    if ((*(ushort *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_02229718();
    }
    if (-1 < *(int *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x28) + 0x28)) {
      plVar11 = (long *)*plVar11;
    }
    lVar9 = *plVar6;
    uVar13 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar13 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar5) {
          lVar5 = lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138;
          goto LAB_0235c0b8;
        }
        uVar13 = uVar13 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar13 != 0);
    }
    lVar5 = FUN_02229a4c(plVar6,lVar5,2);
LAB_0235c0b8:
    lVar5 = *(long *)(lVar5 + 8);
    alStack_70[2] = (long)plVar11;
    (**(code **)(lVar5 + 0x10))(*(undefined8 *)(lVar5 + 8),lVar5,plVar6,alStack_70 + 2,plVar11);
  }
  if (*(long *)(lVar3 + 0x28) == alStack_70[3]) {
    return;
  }
LAB_0235c178:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

