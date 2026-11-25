/* IL2CPP: CloudSaveModule.<TryReconnect>d__14$$MoveNext
void CloudSaveModule__TryReconnect_d__14__MoveNext (CloudSaveModule__TryReconnect_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025f01f0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: CloudSaveModule.<TryReconnect>d__14$$MoveNext
   void CloudSaveModule__TryReconnect_d__14__MoveNext (CloudSaveModule__TryReconnect_d__14_o __this,
   const MethodInfo* method); */

void CloudSaveModule__TryReconnect_d__14__MoveNext_24efc38(uint *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long *plStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined1 auStack_40 [16];
  uint uStack_24;
  
  if ((bRam0000000004f4bcee & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c8108);
    FUN_021f03f8(PTR_DAT_049c8110);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049b5fb0);
    FUN_021f03f8(PTR_DAT_049c8008);
    FUN_021f03f8(PTR_DAT_049c4778);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bcee = 1;
  }
  auVar1._8_8_ = auStack_40._8_8_;
  auVar1._0_8_ = auStack_40._0_8_;
  uStack_24 = *param_1;
  lStack_48 = *(long *)(param_1 + 4);
  uStack_50 = 0;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  if (1 < uStack_24) {
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auVar2 = ZEXT816(0);
    auVar3 = ZEXT816(0);
    if (*(char *)(lStack_48 + 0x2c) != '\0') goto LAB_025f01c8;
    plVar11 = *(long **)(lStack_48 + 0x10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049c8008) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_025efd58;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049c8008,0);
LAB_025efd58:
                    /* try { // try from 025efd60 to 026eff83 has its CatchHandler @ 025efd60
                       catch() { ... } // from try @ 025efd60 with catch @ 025efd60
                       catch() { ... } // from try @ 025f1310 with catch @ 025efd60
                       catch() { ... } // from try @ 025f13f0 with catch @ 025efd60
                       catch() { ... } // from try @ 025f1424 with catch @ 025efd60
                       catch() { ... } // from try @ 025f1450 with catch @ 025efd60
                       catch() { ... } // from try @ 025f14cc with catch @ 025efd60
                       catch() { ... } // from try @ 025f1540 with catch @ 025efd60 */
    lVar8 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    auVar3._8_8_ = auStack_80._8_8_;
    auVar3._0_8_ = auStack_80._0_8_;
    auVar1._8_8_ = auStack_40._8_8_;
    auVar1._0_8_ = auStack_40._0_8_;
    auVar2._8_8_ = auStack_70._8_8_;
    auVar2._0_8_ = auStack_70._0_8_;
    if (lVar8 != 0) goto LAB_025f01c8;
    if ((char)param_1[6] == '\0') {
      if (*(int *)(*(long *)PTR_DAT_049b5fb0 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar7 = System_DateTime__get_UtcNow_30dda50(0);
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar9 = System_DateTime__op_LessThan_30df7d4(uVar7,*(undefined8 *)(lStack_48 + 0x30),0);
      auVar3._8_8_ = auStack_80._8_8_;
      auVar3._0_8_ = auStack_80._0_8_;
      auVar1._8_8_ = auStack_40._8_8_;
      auVar1._0_8_ = auStack_40._0_8_;
      auVar2._8_8_ = auStack_70._8_8_;
      auVar2._0_8_ = auStack_70._0_8_;
      if ((uVar9 & 1) != 0) goto LAB_025f01c8;
    }
    lVar8 = lStack_48;
    puVar4 = PTR_DAT_049b5fb0;
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined1 *)(lStack_48 + 0x2c) = 1;
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    uStack_50 = System_DateTime__get_UtcNow_30dda50(0);
    uVar7 = System_DateTime__AddSeconds_30dc7d8(0x403e000000000000,&uStack_50,0);
    *(undefined8 *)(lVar8 + 0x30) = uVar7;
  }
  if (uStack_24 == 0) {
    uStack_58 = *(undefined8 *)(param_1 + 10);
    plStack_60 = *(long **)(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    uStack_24 = 0xffffffff;
    *param_1 = 0xffffffff;
LAB_025eff40:
    FUN_0235b3fc(&plStack_60,auStack_40,*(undefined8 *)PTR_DAT_049c4768);
    auVar1._8_8_ = auStack_40._8_8_;
    auVar1._0_8_ = auStack_40._0_8_;
    if (auStack_40[0] == '\0') {
                    /* try { // try from 025f0048 to 026f0053 has its CatchHandler @ 025f0c94 */
      lVar8 = 5;
    }
    else {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auStack_40 = CloudSaveModule__InitializeSdk_24ec0d4();
      puVar4 = PTR_DAT_049b5138;
                    /* try { // try from 025eff84 to 026effa3 has its CatchHandler @ 025f0cfc */
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      thunk_FUN_021f190c(auStack_40,0);
      auStack_80 = auStack_40;
      if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 025effb8 to 026effbb has its CatchHandler @ 025f0cf4 */
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 025effd0 to 026effd3 has its CatchHandler @ 025f0cf0 */
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 025effec to 026efff7 has its CatchHandler @ 025f0cec */
        cRam0000000004f49bf5 = '\x01';
      }
      uVar7 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar8 = *(long *)auStack_80._0_8_;
        uVar13 = auStack_80._8_8_ & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
                    /* try { // try from 025f0014 to 026f001b has its CatchHandler @ 025f0ce8 */
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 025f008c to 026f00a7 has its CatchHandler @ 025f0c88 */
              puVar6 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_025f0098;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
                    /* try { // try from 025f0034 to 026f003f has its CatchHandler @ 025f0c9c */
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025f0098:
        iVar5 = (*(code *)*puVar6)(uVar7,uVar13,puVar6[1]);
        if (iVar5 == 0) {
          uStack_24 = 1;
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0xc) = auStack_80;
          thunk_FUN_021f190c(param_1 + 0xc,0);
          FUN_0235c420(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c8110);
          auVar1 = auStack_40;
          goto LAB_025f0184;
        }
      }
LAB_025f00ac:
                    /* try { // try from 025f00b4 to 026f00bf has its CatchHandler @ 025f0c84 */
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar7 = auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ != (long *)0x0) {
        lVar8 = *(long *)auStack_80._0_8_;
        uVar13 = auStack_80._8_8_ & 0xffff;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 2) * 0x10 + 0x138);
              goto LAB_025f0130;
            }
                    /* try { // try from 025f0104 to 026f012f has its CatchHandler @ 025f0cd0 */
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025f0130:
                    /* try { // try from 025f013c to 026f0147 has its CatchHandler @ 025f0bb4 */
        (*(code *)*puVar6)(uVar7,uVar13,puVar6[1]);
      }
      lVar8 = 0xe;
      auVar1 = auStack_40;
    }
  }
  else {
    if (uStack_24 == 1) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      uStack_24 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_025f00ac;
    }
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar11 = *(long **)(lStack_48 + 0x10);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar8 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049c8008) {
          puVar6 = (undefined8 *)(lVar8 + (long)(*piVar10 + 8) * 0x10 + 0x138);
          goto LAB_025efeb0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049c8008,8);
LAB_025efeb0:
    auStack_70 = (*(code *)*puVar6)(plVar11,0,puVar6[1]);
    FUN_0235b0c0(auStack_70,auStack_40,*(undefined8 *)PTR_DAT_049c4778);
    lVar12 = *(long *)PTR_DAT_049c4770;
    uStack_58 = auStack_40._8_8_;
    plStack_60 = (long *)auStack_40._0_8_;
    lVar8 = *(long *)(lVar12 + 0x20);
    if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    uVar7 = thunk_FUN_0224e54c(&plStack_60,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x80));
    lVar8 = *(long *)(lVar12 + 0x20);
    if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
      lVar8 = FUN_02229718();
    }
    iVar5 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18));
    if (iVar5 != 0) goto LAB_025eff40;
                    /* try { // try from 025f0054 to 026f006b has its CatchHandler @ 025f0c90 */
    uStack_24 = 0;
    *param_1 = 0;
    *(undefined8 *)(param_1 + 10) = uStack_58;
    *(long **)(param_1 + 8) = plStack_60;
    thunk_FUN_021f190c(param_1 + 8,0);
                    /* try { // try from 025f006c to 026f008b has its CatchHandler @ 025f0c8c */
    FUN_0235c420(param_1 + 2,&plStack_60,param_1,*(undefined8 *)PTR_DAT_049c8108);
    auVar1._8_8_ = auStack_40._8_8_;
    auVar1._0_8_ = auStack_40._0_8_;
LAB_025f0184:
    lVar8 = 9;
  }
  if ((int)uStack_24 < 0) {
    if (lStack_48 == 0) {
      auStack_40 = auVar1;
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    *(undefined1 *)(lStack_48 + 0x2c) = 0;
  }
  if (0xe < (uint)lVar8) {
    return;
  }
  auVar2 = auStack_70;
  auVar3 = auStack_80;
  if ((1 << lVar8 & 0x4021U) == 0) {
    return;
  }
LAB_025f01c8:
  *param_1 = 0xfffffffe;
  auStack_70 = auVar2;
  auStack_40 = auVar1;
  auStack_80 = auVar3;
  FUN_0235afc8(param_1 + 2,0);
                    /* try { // try from 025f01e8 to 026f0213 has its CatchHandler @ 025f0c0c */
  return;
}

