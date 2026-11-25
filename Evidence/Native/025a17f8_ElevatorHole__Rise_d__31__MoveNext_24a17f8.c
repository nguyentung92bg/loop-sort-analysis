/* IL2CPP: ElevatorHole.<Rise>d__31$$MoveNext
void ElevatorHole__Rise_d__31__MoveNext (ElevatorHole__Rise_d__31_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: ElevatorHole.<Rise>d__31$$MoveNext
   void ElevatorHole__Rise_d__31__MoveNext (ElevatorHole__Rise_d__31_o __this, const MethodInfo*
   method); */

void ElevatorHole__Rise_d__31__MoveNext_24a17f8(int *param_1)

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
  
  if ((bRam0000000004f4baf0 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6580);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4baf0 = 1;
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
      goto LAB_025a1b68;
    }
    if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar3 = ElevatorHole__get_Current_2410518(lVar9,0);
    piVar7 = param_1 + 8;
    *(undefined8 *)piVar7 = uVar3;
    thunk_FUN_021f190c(piVar7);
    auStack_50 = ElevatorHole__Fade_241154c(0,0x3f800000,lVar9,*(undefined8 *)piVar7,0);
                    /* try { // try from 025a18d0 to 026a1a9b has its CatchHandler @ 025a18d0
                       catch() { ... } // from try @ 025a18d0 with catch @ 025a18d0
                       catch() { ... } // from try @ 025a1acc with catch @ 025a18d0
                       catch() { ... } // from try @ 025a1c40 with catch @ 025a18d0
                       catch() { ... } // from try @ 025a1cbc with catch @ 025a18d0
                       catch() { ... } // from try @ 025a1cec with catch @ 025a18d0
                       catch() { ... } // from try @ 025a1d98 with catch @ 025a18d0
                       catch() { ... } // from try @ 025a1dfc with catch @ 025a18d0
                       catch() { ... } // from try @ 025a1e48 with catch @ 025a18d0 */
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
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
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
          if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_025a19b0;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025a19b0:
      iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
        thunk_FUN_021f190c(param_1 + 10,0);
        FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c6580);
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
          goto LAB_025a1a44;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025a1a44:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar11 = ElevatorHole__Travel_24113a8
                      (0x3f800000,0,*(undefined4 *)(lVar9 + 200),lVar9,*(undefined8 *)(param_1 + 8),
                       0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_50 = auVar11;
  thunk_FUN_021f190c(auStack_50,0);
                    /* try { // try from 025a1a9c to 026a1a9f has its CatchHandler @ 025a1e0c */
                    /* try { // try from 025a1aac to 026a1aaf has its CatchHandler @ 025a1e08 */
  auStack_60 = auStack_50;
  if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 025a1ab0 to 026a1acb has its CatchHandler @ 025a1e14 */
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
                    /* try { // try from 025a1acc to 026a1bc7 has its CatchHandler @ 025a18d0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
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
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_025a1b54;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025a1b54:
    iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
    if (iVar2 == 0) {
                    /* try { // try from 025a1ccc to 026a1cd3 has its CatchHandler @ 025a1da8 */
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 10) = auStack_60;
      thunk_FUN_021f190c(param_1 + 10,0);
                    /* try { // try from 025a1ce0 to 026a1ceb has its CatchHandler @ 025a1db4 */
                    /* try { // try from 025a1cec to 026a1d7f has its CatchHandler @ 025a18d0 */
      FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c6580);
      return;
    }
  }
LAB_025a1b68:
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
                    /* try { // try from 025a1bd8 to 026a1bdb has its CatchHandler @ 025a1db8 */
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025a1be8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
                    /* try { // try from 025a1bc8 to 026a1bcb has its CatchHandler @ 025a1dc0 */
    puVar4 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025a1be8:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
                    /* try { // try from 025a1bf8 to 026a1c3f has its CatchHandler @ 025a1dc4 */
  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  ElevatorHole__Arrive_24116e4(lVar9,*(undefined8 *)(param_1 + 8),0);
  ElevatorHole__Unlock_2411d1c(lVar9,*(undefined8 *)(param_1 + 8),0);
  *param_1 = -2;
  param_1[8] = 0;
  param_1[9] = 0;
  thunk_FUN_021f190c(param_1 + 8,0);
  if (cRam0000000004f49bfa == '\0') {
                    /* try { // try from 025a1c40 to 026a1c4f has its CatchHandler @ 025a18d0 */
    FUN_021f03f8(PTR_DAT_049b56d0);
                    /* try { // try from 025a1c50 to 026a1c57 has its CatchHandler @ 025a1db0 */
    cRam0000000004f49bfa = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar9 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 025a1c70 to 026a1cbb has its CatchHandler @ 025a1dc8 */
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_049b56d0) {
          puVar4 = (undefined8 *)(lVar9 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_025a1cb4;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar8,*(long *)PTR_DAT_049b56d0,2);
LAB_025a1cb4:
                    /* try { // try from 025a1cbc to 026a1ccb has its CatchHandler @ 025a18d0 */
    (*(code *)*puVar4)(plVar8,puVar4[1]);
  }
  return;
}

