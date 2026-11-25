/* IL2CPP: CloudSaveModule.<FlushDirty>d__22$$MoveNext
void CloudSaveModule__FlushDirty_d__22__MoveNext (CloudSaveModule__FlushDirty_d__22_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule.<FlushDirty>d__22$$MoveNext
   void CloudSaveModule__FlushDirty_d__22__MoveNext (CloudSaveModule__FlushDirty_d__22_o __this,
   const MethodInfo* method); */

void CloudSaveModule__FlushDirty_d__22__MoveNext_24eeab4(int *param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uStack_a8;
  int *piStack_a0;
  long *plStack_98;
  int **ppiStack_90;
  undefined4 uStack_78;
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_44 [4];
  long lStack_40;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  int *piStack_18;
  
                    /* try { // try from 025eeac8 to 026eeacf has its CatchHandler @ 025eedac */
  piStack_18 = param_1;
  if ((bRam0000000004f4bcec & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c80a8);
    FUN_021f03f8(PTR_DAT_049c80b0);
                    /* try { // try from 025eeae8 to 026eeb33 has its CatchHandler @ 025eedb0 */
    FUN_021f03f8(PTR_DAT_049c80b8);
    FUN_021f03f8(PTR_DAT_049b5050);
    FUN_021f03f8(PTR_DAT_049c8008);
    FUN_021f03f8(PTR_DAT_049c52c8);
    FUN_021f03f8(PTR_DAT_049c3d90);
    FUN_021f03f8(PTR_DAT_049b5310);
                    /* try { // try from 025eeb34 to 026eeb5f has its CatchHandler @ 025ee988 */
    FUN_021f03f8(PTR_DAT_049c80c0);
    bRam0000000004f4bcec = 1;
  }
  puVar1 = PTR_DAT_049c8008;
  iStack_34 = *param_1;
  lStack_40 = *(long *)(param_1 + 6);
  auStack_44[0] = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
                    /* try { // try from 025eeb60 to 026eeb7b has its CatchHandler @ 025eed8c */
  uStack_78 = 0;
  if (iStack_34 == 0) {
LAB_025eebd8:
    ppiStack_90 = &piStack_18;
    plStack_98 = &lStack_40;
    piStack_a0 = &iStack_34;
    uStack_a8 = 0;
    uStack_58 = *(undefined8 *)(param_1 + 0xc);
    uStack_60 = *(undefined8 *)(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    iStack_34 = -1;
                    /* try { // try from 025eebe8 to 026eebf3 has its CatchHandler @ 025eed98 */
    *param_1 = -1;
LAB_025eebf0:
    FUN_0235b3fc(&uStack_60,&iStack_30,*(undefined8 *)PTR_DAT_049c80b0);
                    /* try { // try from 025eec08 to 026eec0f has its CatchHandler @ 025eed88 */
    iVar3 = 0xd;
    piStack_18[8] = iStack_30;
LAB_025eec18:
    FUN_0201dd04(&uStack_a8);
    if ((iVar3 != 0) && (iVar3 != 0xd)) {
      return;
    }
  }
  else {
    if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    plVar10 = *(long **)(lStack_40 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 025eeb7c to 026eebe7 has its CatchHandler @ 025ee988 */
    lVar6 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049c8008) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025eec3c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049c8008,0);
LAB_025eec3c:
    lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (lVar6 == 0) {
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
    }
    else {
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(char *)(lStack_40 + 0x28) == '\0') {
        *(undefined1 *)(lStack_40 + 0x28) = 1;
        piStack_a0 = &iStack_34;
        ppiStack_90 = &piStack_18;
        piStack_18[8] = 4;
                    /* try { // try from 025eec7c to 026eec87 has its CatchHandler @ 025eeda0 */
        uStack_a8 = 0;
        plStack_98 = &lStack_40;
        param_1 = piStack_18;
        if (iStack_34 == 0) goto LAB_025eebd8;
        plVar10 = *(long **)(lStack_40 + 0x10);
        if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        lVar7 = *plVar10;
        lVar6 = *(long *)puVar1;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
                    /* try { // try from 025eeca8 to 026eecb3 has its CatchHandler @ 025eed94 */
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == lVar6) {
              puVar4 = (undefined8 *)(lVar7 + (long)(*piVar9 + 0xb) * 0x10 + 0x138);
              goto LAB_025eee28;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_02229a4c(plVar10,lVar6,0xb);
LAB_025eee28:
        auStack_70 = (*(code *)*puVar4)(plVar10,0,puVar4[1]);
        FUN_0235b0c0(auStack_70,&iStack_30,*(undefined8 *)PTR_DAT_049c80c0);
        uStack_60 = CONCAT44(uStack_2c,iStack_30);
        lVar7 = *(long *)PTR_DAT_049c80b8;
        uStack_58 = uStack_28;
        lVar6 = *(long *)(lVar7 + 0x20);
        if ((*(byte *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02229718();
        }
        uVar5 = thunk_FUN_0224e54c(&uStack_60,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0xc0) + 0x10) + 0x80)
                                  );
        lVar6 = *(long *)(lVar7 + 0x20);
        if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
          lVar6 = FUN_02229718();
        }
        iVar3 = FUN_0235b2a0(uVar5,*(undefined8 *)(*(long *)(lVar6 + 0xc0) + 0x18));
        if (iVar3 != 0) goto LAB_025eebf0;
        iStack_34 = 0;
        *piStack_18 = 0;
        *(undefined8 *)(piStack_18 + 0xc) = uStack_58;
        *(undefined8 *)(piStack_18 + 10) = uStack_60;
        thunk_FUN_021f190c(piStack_18 + 10,0);
        FUN_0235c25c(piStack_18 + 2,&uStack_60,piStack_18,*(undefined8 *)PTR_DAT_049c80a8);
        iVar3 = 10;
        goto LAB_025eec18;
      }
    }
    plVar10 = *(long **)(lStack_40 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *plVar10;
    lVar6 = *(long *)puVar1;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar6) {
                    /* try { // try from 025eed24 to 026eed2f has its CatchHandler @ 025eeda4 */
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025eed2c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar10,lVar6,0);
LAB_025eed2c:
                    /* try { // try from 025eed30 to 026eed77 has its CatchHandler @ 025ee988 */
    lVar6 = (*(code *)*puVar4)(plVar10,puVar4[1]);
    if (lVar6 == 0) {
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      auStack_44[0] = CloudSaveModule__TryReconnect_24ec37c(lStack_40,0);
      Cysharp_Threading_Tasks_UniTaskVoid__Forget_380210c(auStack_44,0);
    }
    else {
      if (lStack_40 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      *(undefined1 *)(lStack_40 + 0x2a) = 1;
    }
  }
  piVar9 = piStack_18;
  cVar2 = cRam0000000004f49bfa;
                    /* try { // try from 025eed78 to 026eed7b has its CatchHandler @ 025eeda8 */
                    /* try { // try from 025eed7c to 026eed7f has its CatchHandler @ 025eed9c */
                    /* try { // try from 025eed80 to 026eed83 has its CatchHandler @ 025eed90 */
  *piStack_18 = -2;
                    /* try { // try from 025eed84 to 026eedcb has its CatchHandler @ 025ee988 */
  if (cVar2 == '\0') {
                    /* catch() { ... } // from try @ 025eec08 with catch @ 025eed88 */
                    /* catch() { ... } // from try @ 025eeb60 with catch @ 025eed8c */
                    /* catch() { ... } // from try @ 025eed80 with catch @ 025eed90 */
    FUN_021f03f8(PTR_DAT_049b56d0);
                    /* catch() { ... } // from try @ 025eeca8 with catch @ 025eed94 */
                    /* catch() { ... } // from try @ 025eebe8 with catch @ 025eed98 */
    cRam0000000004f49bfa = '\x01';
  }
                    /* catch() { ... } // from try @ 025eed7c with catch @ 025eed9c */
  plVar10 = *(long **)(piVar9 + 2);
                    /* catch() { ... } // from try @ 025eec7c with catch @ 025eeda0 */
  if (plVar10 != (long *)0x0) {
                    /* catch() { ... } // from try @ 025eed24 with catch @ 025eeda4 */
                    /* catch() { ... } // from try @ 025eed78 with catch @ 025eeda8 */
    lVar6 = *plVar10;
                    /* catch() { ... } // from try @ 025eeac8 with catch @ 025eedac */
                    /* catch() { ... } // from try @ 025eeae8 with catch @ 025eedb0 */
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* try { // try from 025eedcc to 026eedcf has its CatchHandler @ 025eedf0 */
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
                    /* catch() { ... } // from try @ 025eedcc with catch @ 025eedf0 */
                    /* try { // try from 025eedf4 to 026eedfb has its CatchHandler @ 025eee04 */
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_025eedfc;
        }
                    /* try { // try from 025eedd0 to 026eedf3 has its CatchHandler @ 025ee988 */
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049b56d0,2);
LAB_025eedfc:
                    /* try { // try from 025eedfc to 026eee07 has its CatchHandler @ 025ee988 */
                    /* catch() { ... } // from try @ 025eedf4 with catch @ 025eee04 */
    (*(code *)*puVar4)(plVar10,puVar4[1]);
  }
  return;
}

