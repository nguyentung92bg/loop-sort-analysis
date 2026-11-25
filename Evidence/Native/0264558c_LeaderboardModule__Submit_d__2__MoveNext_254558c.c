/* IL2CPP: LeaderboardModule.<Submit>d__2$$MoveNext
void LeaderboardModule__Submit_d__2__MoveNext (LeaderboardModule__Submit_d__2_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LeaderboardModule.<Submit>d__2$$MoveNext
   void LeaderboardModule__Submit_d__2__MoveNext (LeaderboardModule__Submit_d__2_o __this, const
   MethodInfo* method); */

void LeaderboardModule__Submit_d__2__MoveNext_254558c(int *param_1)

{
  undefined8 uVar1;
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
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined4 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
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
  
  if ((bRam0000000004f4bfff & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca768);
    FUN_021f03f8(PTR_DAT_049b5b90);
    FUN_021f03f8(PTR_DAT_049c97b0);
    FUN_021f03f8(PTR_DAT_049c97b8);
    FUN_021f03f8(PTR_DAT_049ca758);
    FUN_021f03f8(PTR_DAT_049c97c0);
    bRam0000000004f4bfff = 1;
  }
  uStack_168 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
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
  if (*param_1 == 0) {
    func_0x04608620(&uStack_110,param_1 + 0x1e,0x50);
    *param_1 = -1;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
  }
  else {
    lVar8 = *(long *)(param_1 + 0x16);
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar4 = AntiCheatModule__IsDetected_252f758(*(long *)(lVar8 + 0x18),0);
    if ((uVar4 & 1) != 0) {
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      goto LAB_026457dc;
    }
    plVar9 = *(long **)(lVar8 + 0x10);
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *plVar9;
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    uVar1 = *(undefined8 *)(param_1 + 0x1a);
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    uVar11 = *(undefined8 *)(param_1 + 0x1c);
    if (uVar4 != 0) {
      piVar7 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049ca758) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_026456f8;
        }
        uVar4 = uVar4 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar4 != 0);
    }
    puVar5 = (undefined8 *)FUN_02229a4c(plVar9,*(long *)PTR_DAT_049ca758,0);
LAB_026456f8:
    (*(code *)*puVar5)(&uStack_1c8,plVar9,uVar6,uVar1,uVar11,puVar5[1]);
    func_0x04608620(&uStack_160,&uStack_1c8,0x50);
    FUN_0235b0c0(&uStack_160,&uStack_1c8,*(undefined8 *)PTR_DAT_049c97c0);
    func_0x04608620(&uStack_110,&uStack_1c8,0x50);
    lVar10 = *(long *)PTR_DAT_049c97b8;
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar6 = thunk_FUN_0224e54c(&uStack_110,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x80));
    lVar8 = *(long *)(lVar10 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    iVar3 = FUN_0235b2a0(uVar6,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18));
    if (iVar3 == 0) {
      *param_1 = 0;
      func_0x04608620(param_1 + 0x1e,&uStack_110,0x50);
      thunk_FUN_021f190c(param_1 + 0x1e,0);
      FUN_0235bb44(param_1 + 2,&uStack_110,param_1,*(undefined8 *)PTR_DAT_049ca768);
      return;
    }
  }
  FUN_0235b3fc(&uStack_110,&uStack_1c8,*(undefined8 *)PTR_DAT_049c97b0);
  uStack_b8 = uStack_1c0;
  uStack_c0 = uStack_1c8;
  uStack_a8 = uStack_1b0;
  uStack_b0 = uStack_1b8;
  uStack_98 = uStack_1a0;
  uStack_a0 = uStack_1a8;
  uStack_88 = uStack_190;
  uStack_90 = uStack_198;
LAB_026457dc:
  puVar2 = PTR_DAT_049b5b90;
  uStack_78 = uStack_b8;
  uStack_80 = uStack_c0;
  uStack_68 = uStack_a8;
  uStack_70 = uStack_b0;
  uStack_58 = uStack_98;
  uStack_60 = uStack_a0;
  uStack_48 = uStack_88;
  uStack_50 = uStack_90;
  *param_1 = -2;
  uStack_208 = uStack_b8;
  uStack_210 = uStack_c0;
  uStack_1f8 = uStack_a8;
  uStack_200 = uStack_b0;
  uStack_1e8 = uStack_98;
  uStack_1f0 = uStack_a0;
  uStack_1d8 = uStack_88;
  uStack_1e0 = uStack_90;
  FUN_0235bed4(param_1 + 2,&uStack_210,*(undefined8 *)puVar2);
  return;
}

