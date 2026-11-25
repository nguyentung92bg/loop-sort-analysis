/* IL2CPP: ElevatorHole.<Lower>d__32$$MoveNext
void ElevatorHole__Lower_d__32__MoveNext (ElevatorHole__Lower_d__32_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole.<Lower>d__32$$MoveNext
   void ElevatorHole__Lower_d__32__MoveNext (ElevatorHole__Lower_d__32_o __this, const MethodInfo*
   method); */

void ElevatorHole__Lower_d__32__MoveNext_24a11c4(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4baef & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6578);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4baef = 1;
  }
  puVar1 = PTR_DAT_049b5138;
  lVar9 = *(long *)(param_1 + 6);
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      auStack_60 = *(undefined1 (*) [16])(param_1 + 10);
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *param_1 = -1;
      goto LAB_025a1534;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = ElevatorHole__get_Current_2410518(lVar9,0);
    piVar7 = param_1 + 8;
    *(undefined8 *)piVar7 = uVar3;
    thunk_FUN_021f190c(piVar7);
                    /* try { // try from 025a128c to 026a12fb has its CatchHandler @ 025a128c
                       catch() { ... } // from try @ 025a128c with catch @ 025a128c
                       catch() { ... } // from try @ 025a1310 with catch @ 025a128c
                       catch() { ... } // from try @ 025a1380 with catch @ 025a128c */
    auStack_50 = ElevatorHole__Travel_24113a8
                           (0,0x3f800000,*(undefined4 *)(lVar9 + 0xc4),lVar9,*(undefined8 *)piVar7,0
                           );
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_50,0);
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 025a12fc to 026a130f has its CatchHandler @ 025a134c */
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 025a1310 to 026a1367 has its CatchHandler @ 025a128c */
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar3 = auStack_60._0_8_;
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
      lVar5 = *(long *)auStack_60._0_8_;
      uVar10 = auStack_60._8_8_ & 0xffff;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a12fc with catch @ 025a134c
                        */
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* catch() { ... } // from try @ 025a1368 with catch @ 025a1374 */
                    /* try { // try from 025a1378 to 026a137f has its CatchHandler @ 025a1388 */
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025a1380;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
                    /* try { // try from 025a1368 to 026a136b has its CatchHandler @ 025a1374 */
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025a1380:
                    /* try { // try from 025a1380 to 026a138b has its CatchHandler @ 025a128c */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025a1378 with catch @ 025a1388
                        */
      iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
                    /* catch() { ... } // from try @ 025a1694 with catch @ 025a16b4 */
                    /* try { // try from 025a16b8 to 026a16bf has its CatchHandler @ 025a16c8 */
        thunk_FUN_021f190c(param_1 + 10,0);
                    /* try { // try from 025a16c0 to 026a16cb has its CatchHandler @ 025a1630 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025a16b8 with catch @ 025a16c8
                        */
        FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c6578);
        return;
      }
    }
  }
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar5 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025a1414;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025a1414:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar11 = ElevatorHole__Fade_241154c(0x3f800000,0,lVar9,*(undefined8 *)(param_1 + 8),0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_50 = auVar11;
  thunk_FUN_021f190c(auStack_50,0);
  auStack_60 = auStack_50;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf5 = '\x01';
  }
  uVar3 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar9 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar9 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025a1520;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025a1520:
    iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
    if (iVar2 == 0) {
      *param_1 = 1;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025a164c with catch @ 025a1678
                        */
      *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
      thunk_FUN_021f190c(param_1 + 10,0);
                    /* try { // try from 025a1694 to 026a1697 has its CatchHandler @ 025a16b4 */
                    /* try { // try from 025a1698 to 026a16b7 has its CatchHandler @ 025a1630 */
      FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c6578);
      return;
    }
  }
LAB_025a1534:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar3 = auStack_60._0_8_;
  if ((long *)auStack_60._0_8_ != (long *)0x0) {
    lVar9 = *(long *)auStack_60._0_8_;
    uVar10 = auStack_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025a15b4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025a15b4:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
  *param_1 = -2;
  piVar7 = param_1 + 8;
  piVar7[0] = 0;
  piVar7[1] = 0;
  thunk_FUN_021f190c(piVar7,0);
  if (cRam0000000004f49bfa == '\0') {
    FUN_021f03f8(PTR_DAT_049b56d0);
    cRam0000000004f49bfa = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
                    /* try { // try from 025a164c to 026a1657 has its CatchHandler @ 025a1678 */
                    /* try { // try from 025a1658 to 026a1693 has its CatchHandler @ 025a1630 */
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025a165c;
        }
                    /* catch() { ... } // from try @ 025a1658 with catch @ 025a1630
                       catch() { ... } // from try @ 025a1698 with catch @ 025a1630
                       catch() { ... } // from try @ 025a16c0 with catch @ 025a1630 */
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b56d0,2);
LAB_025a165c:
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  return;
}

