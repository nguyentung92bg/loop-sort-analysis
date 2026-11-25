/* IL2CPP: TournamentModule.<GetInstance>d__1$$MoveNext
void TournamentModule__GetInstance_d__1__MoveNext (TournamentModule__GetInstance_d__1_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: TournamentModule.<GetInstance>d__1$$MoveNext
   void TournamentModule__GetInstance_d__1__MoveNext (TournamentModule__GetInstance_d__1_o __this,
   const MethodInfo* method); */

void TournamentModule__GetInstance_d__1__MoveNext_254bb6c(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_2f8 [128];
  undefined1 auStack_278 [160];
  undefined4 uStack_1d8;
  undefined1 auStack_1d0 [144];
  undefined1 auStack_140 [144];
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  if ((bRam0000000004f4c04a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049caa28);
    FUN_021f03f8(PTR_DAT_049b5c30);
    FUN_021f03f8(PTR_DAT_049b5ca0);
    FUN_021f03f8(PTR_DAT_049b5ca8);
    FUN_021f03f8(PTR_DAT_049caa20);
    FUN_021f03f8(PTR_DAT_049b5cc8);
    bRam0000000004f4c04a = 1;
  }
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  func_0x04608670(auStack_140,0,0x90);
  func_0x04608670(auStack_1d0,0,0x90);
  uStack_1d8 = 0;
  if (*param_1 == 0) {
    func_0x04608620(auStack_140,param_1 + 0x2c,0x90);
    func_0x04608670(param_1 + 0x2c,0,0x90);
    *param_1 = -1;
  }
  else {
    if (*(long *)(param_1 + 0x26) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar7 = *(long **)(*(long *)(param_1 + 0x26) + 0x10);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar4 = *plVar7;
    uVar8 = *(undefined8 *)(param_1 + 0x2a);
    iVar2 = param_1[0x28];
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_049caa20) {
          puVar3 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0264bcb8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar3 = (undefined8 *)FUN_02229a4c(plVar7,*(long *)PTR_DAT_049caa20,0);
LAB_0264bcb8:
    (*(code *)*puVar3)(auStack_278,plVar7,(char)iVar2 != '\0',uVar8,puVar3[1]);
    puVar1 = PTR_DAT_049b5cc8;
    func_0x04608620(auStack_1d0,auStack_278,0x90);
    FUN_0235b0c0(auStack_1d0,auStack_278,*(undefined8 *)puVar1);
    puVar1 = PTR_DAT_049b5ca8;
    func_0x04608620(auStack_140,auStack_278,0x90);
    lVar9 = *(long *)puVar1;
    lVar4 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    uVar8 = thunk_FUN_0224e54c(auStack_140,
                               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0xc0) + 0x10) + 0x80));
    lVar4 = *(long *)(lVar9 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718();
    }
    iVar2 = FUN_0235b2a0(uVar8,*(undefined8 *)(*(long *)(lVar4 + 0xc0) + 0x18));
    if (iVar2 == 0) {
      *param_1 = 0;
      func_0x04608620(param_1 + 0x2c,auStack_140,0x90);
                    /* try { // try from 0264bde8 to 0274be5f has its CatchHandler @ 0264bde8
                       catch() { ... } // from try @ 0264bde8 with catch @ 0264bde8
                       catch() { ... } // from try @ 0264c010 with catch @ 0264bde8
                       catch() { ... } // from try @ 0264c078 with catch @ 0264bde8
                       catch() { ... } // from try @ 0264c0c0 with catch @ 0264bde8
                       catch() { ... } // from try @ 0264c128 with catch @ 0264bde8 */
      thunk_FUN_021f190c(param_1 + 0x2c,0);
      FUN_0235bb44(param_1 + 2,auStack_140,param_1,*(undefined8 *)PTR_DAT_049caa28);
      return;
    }
  }
  FUN_0235b3fc(auStack_140,auStack_278,*(undefined8 *)PTR_DAT_049b5ca0);
  puVar1 = PTR_DAT_049b5c30;
  func_0x04608620(&uStack_b0,auStack_278,0x80);
  *param_1 = -2;
  func_0x04608620(auStack_2f8,&uStack_b0,0x80);
  FUN_0235bed4(param_1 + 2,auStack_2f8,*(undefined8 *)puVar1);
  return;
}

