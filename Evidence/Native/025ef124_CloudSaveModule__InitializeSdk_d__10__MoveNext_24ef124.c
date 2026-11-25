/* IL2CPP: CloudSaveModule.<InitializeSdk>d__10$$MoveNext
void CloudSaveModule__InitializeSdk_d__10__MoveNext (CloudSaveModule__InitializeSdk_d__10_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudSaveModule.<InitializeSdk>d__10$$MoveNext
   void CloudSaveModule__InitializeSdk_d__10__MoveNext (CloudSaveModule__InitializeSdk_d__10_o
   __this, const MethodInfo* method); */

void CloudSaveModule__InitializeSdk_d__10__MoveNext_24ef124(int *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined *puVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uStack_b0;
  int *piStack_a8;
  long *plStack_a0;
  undefined4 uStack_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long *plStack_60;
  undefined8 uStack_58;
  long lStack_48;
  undefined1 auStack_40 [16];
  int iStack_24;
  
  if ((bRam0000000004f4bced & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b4308);
    FUN_021f03f8(PTR_DAT_049c80c8);
    FUN_021f03f8(PTR_DAT_049c80d0);
    FUN_021f03f8(PTR_DAT_049c4768);
    FUN_021f03f8(PTR_DAT_049c4770);
    FUN_021f03f8(PTR_DAT_049c7f20);
    FUN_021f03f8(PTR_DAT_049b5048);
    FUN_021f03f8(PTR_DAT_049c80d8);
    FUN_021f03f8(PTR_DAT_049c80e0);
    FUN_021f03f8(PTR_DAT_049c80e8);
    FUN_021f03f8(PTR_DAT_049c8018);
    FUN_021f03f8(PTR_DAT_049b3c58);
    FUN_021f03f8(PTR_DAT_049c80f0);
    FUN_021f03f8(PTR_DAT_049c8008);
    FUN_021f03f8(PTR_DAT_049c4778);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c80f8);
    FUN_021f03f8(PTR_DAT_049c8100);
    bRam0000000004f4bced = 1;
  }
  iStack_24 = *param_1;
  lStack_48 = *(long *)(param_1 + 6);
  piStack_a8 = &iStack_24;
  uStack_b0 = 0;
  plStack_a0 = &lStack_48;
  plStack_60 = (long *)0x0;
  uStack_58 = 0;
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auVar2 = ZEXT816(0);
  auVar1 = ZEXT816(0);
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  uStack_88 = 0;
  if (iStack_24 != 0) {
    if (iStack_24 == 1) {
      auStack_80 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      iStack_24 = -1;
      *param_1 = -1;
LAB_025ef314:
      auStack_70 = auVar2;
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      plVar11 = (long *)auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ == (long *)0x0) goto LAB_025ef42c;
      lVar8 = *(long *)auStack_80._0_8_;
      uVar13 = auStack_80._8_8_ & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) goto LAB_025ef40c;
          uVar10 = uVar10 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
    }
    else {
      if (iStack_24 != 2) {
        **(undefined1 **)(*(long *)PTR_DAT_049b5048 + 0xb8) = 0;
        puVar3 = PTR_DAT_049c8008;
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
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049c8008) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 0xc) * 0x10 + 0x138);
              goto LAB_025ef510;
            }
            uVar10 = uVar10 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049c8008,0xc);
LAB_025ef510:
        (*(code *)*puVar6)(plVar11,1,puVar6[1]);
        if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_021f06a0();
        }
        plVar11 = *(long **)(lStack_48 + 0x10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025ef9f0 to 026ef9fb has its CatchHandler @ 025efaec */
          FUN_021f06a0();
        }
        lVar8 = *plVar11;
        uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar10 != 0) {
          piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)puVar3) {
              puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 9) * 0x10 + 0x138);
              goto LAB_025ef580;
            }
            uVar10 = uVar10 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar10 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)puVar3,9);
LAB_025ef580:
        auStack_70 = (*(code *)*puVar6)(plVar11,0,puVar6[1]);
        FUN_0235b0c0(auStack_70,auStack_40,*(undefined8 *)PTR_DAT_049c4778);
        lVar14 = *(long *)PTR_DAT_049c4770;
        uStack_58 = auStack_40._8_8_;
        plStack_60 = (long *)auStack_40._0_8_;
        lVar8 = *(long *)(lVar14 + 0x20);
        if ((*(byte *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02229718();
        }
        uVar7 = thunk_FUN_0224e54c(&plStack_60,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0xc0) + 0x10) + 0x80)
                                  );
        lVar8 = *(long *)(lVar14 + 0x20);
        if ((*(ushort *)(lVar8 + 0x135) & 1) == 0) {
          lVar8 = FUN_02229718();
        }
        iVar5 = FUN_0235b2a0(uVar7,*(undefined8 *)(*(long *)(lVar8 + 0xc0) + 0x18));
        auVar1 = auStack_70;
        if (iVar5 != 0) goto LAB_025ef610;
        iStack_24 = 0;
        *param_1 = 0;
        *(undefined8 *)(param_1 + 10) = uStack_58;
        *(long **)(param_1 + 8) = plStack_60;
        thunk_FUN_021f190c(param_1 + 8,0);
        FUN_0235c25c(param_1 + 2,&plStack_60,param_1,*(undefined8 *)PTR_DAT_049c80c8);
        goto LAB_025ef9d0;
      }
      auStack_80 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      iStack_24 = -1;
      *param_1 = -1;
      auStack_70 = ZEXT816(0);
LAB_025ef288:
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      plVar11 = (long *)auStack_80._0_8_;
      if ((long *)auStack_80._0_8_ == (long *)0x0) goto LAB_025ef42c;
      lVar8 = *(long *)auStack_80._0_8_;
      uVar13 = auStack_80._8_8_ & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) goto LAB_025ef40c;
          uVar10 = uVar10 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,2);
    }
    goto LAB_025ef41c;
  }
  uStack_58 = *(undefined8 *)(param_1 + 10);
  plStack_60 = *(long **)(param_1 + 8);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  iStack_24 = -1;
  *param_1 = -1;
LAB_025ef610:
  auStack_70 = auVar1;
  FUN_0235b3fc(&plStack_60,auStack_40,*(undefined8 *)PTR_DAT_049c4768);
  puVar3 = PTR_DAT_049c8018;
  if (auStack_40[0] == '\0') {
    lVar8 = *(long *)PTR_DAT_049c8018;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar3;
    }
    uVar7 = System_String__Concat_2f72b28
                      (**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)PTR_DAT_049c80f8,0);
    if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
      FUN_021f0574();
    }
    UnityEngine_Debug__Log_3bd0be4(uVar7,0);
    uVar12 = 9;
    goto LAB_025ef430;
  }
  if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  CloudSaveModule__ReconcileAccountSwitch_24ec564();
  if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  plVar11 = *(long **)(lStack_48 + 0x10);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 025ef9e0 to 026ef9eb has its CatchHandler @ 025efac4 */
    FUN_021f06a0();
  }
  lVar8 = *plVar11;
  uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
  if (uVar10 != 0) {
    piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049c8008) {
        puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 1) * 0x10 + 0x138);
        goto LAB_025ef748;
      }
      uVar10 = uVar10 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar10 != 0);
  }
  puVar6 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049c8008,1);
LAB_025ef748:
  uVar10 = (*(code *)*puVar6)(plVar11,puVar6[1]);
  puVar3 = PTR_DAT_049c8018;
  if ((uVar10 & 1) != 0) {
    lVar8 = *(long *)PTR_DAT_049c8018;
    if (*(int *)(lVar8 + 0xe4) == 0) {
      FUN_021f0574();
      lVar8 = *(long *)puVar3;
    }
    uVar7 = System_String__Concat_2f72b28
                      (**(undefined8 **)(lVar8 + 0xb8),*(undefined8 *)PTR_DAT_049c8100,0);
    if (*(int *)(*(long *)PTR_DAT_049b3c58 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 025ef7ac to 026ef857 has its CatchHandler @ 025ef7ac
                       catch() { ... } // from try @ 025ef7ac with catch @ 025ef7ac
                       catch() { ... } // from try @ 025ef860 with catch @ 025ef7ac
                       catch() { ... } // from try @ 025efa40 with catch @ 025ef7ac
                       catch() { ... } // from try @ 025efab8 with catch @ 025ef7ac
                       catch() { ... } // from try @ 025efb28 with catch @ 025ef7ac
                       catch() { ... } // from try @ 025efb98 with catch @ 025ef7ac */
    UnityEngine_Debug__Log_3bd0be4(uVar7,0);
    lVar8 = lStack_48;
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    CloudSaveModule__MarkDirty_24ed184(lStack_48);
    auStack_40 = CloudSaveModule__FlushDirty_24ee1e8(lVar8);
    puVar3 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_40,0);
    auStack_80 = auStack_40;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
                    /* try { // try from 025ef858 to 026ef85f has its CatchHandler @ 025efac8 */
    uVar7 = auStack_80._0_8_;
    auVar2 = auStack_70;
    if ((long *)auStack_80._0_8_ != (long *)0x0) {
                    /* try { // try from 025ef860 to 026ef8c3 has its CatchHandler @ 025ef7ac */
      lVar8 = *(long *)auStack_80._0_8_;
      uVar13 = auStack_80._8_8_ & 0xffff;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 025ef978 to 026ef98b has its CatchHandler @ 025efafc */
            puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_025ef980;
          }
          uVar10 = uVar10 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_80._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025ef980:
      iVar5 = (*(code *)*puVar6)(uVar7,uVar13,puVar6[1]);
      auVar2 = auStack_70;
      if (iVar5 == 0) {
                    /* try { // try from 025ef994 to 026ef99f has its CatchHandler @ 025efad8 */
        iStack_24 = 1;
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_80;
                    /* try { // try from 025ef9a8 to 026ef9bf has its CatchHandler @ 025efaf8 */
        thunk_FUN_021f190c(param_1 + 0xc,0);
                    /* try { // try from 025ef9c0 to 026ef9cb has its CatchHandler @ 025efad4 */
        FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c80d0);
LAB_025ef9d0:
                    /* try { // try from 025ef9d0 to 026ef9db has its CatchHandler @ 025efacc */
        uVar12 = 7;
        goto LAB_025ef430;
      }
    }
    goto LAB_025ef314;
  }
  if (**(char **)(*(long *)PTR_DAT_049b5048 + 0xb8) == '\0') {
                    /* try { // try from 025ef8c4 to 026ef8cb has its CatchHandler @ 025efb00 */
    if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar10 = CloudSaveModule__ShouldPushLocal_24ece0c();
    lVar8 = lStack_48;
    if ((uVar10 & 1) != 0) {
      if (lStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      CloudSaveModule__MarkDirty_24ed184(lStack_48);
                    /* try { // try from 025ef8e4 to 026ef8e7 has its CatchHandler @ 025efabc */
      auStack_40 = CloudSaveModule__FlushDirty_24ee1e8(lVar8);
      if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
        FUN_021f0574();
      }
      thunk_FUN_021f190c(auStack_40,0);
      auStack_80 = auStack_40;
      uVar10 = FUN_02511f18(auStack_80,0);
      if ((uVar10 & 1) != 0) goto LAB_025ef288;
                    /* try { // try from 025ef93c to 026ef947 has its CatchHandler @ 025efaf0 */
      iStack_24 = 2;
      *param_1 = 2;
      *(undefined1 (*) [16])(param_1 + 0xc) = auStack_80;
      thunk_FUN_021f190c(param_1 + 0xc,0);
                    /* try { // try from 025ef958 to 026ef95f has its CatchHandler @ 025efaf4 */
      FUN_0235c25c(param_1 + 2,auStack_80,param_1,*(undefined8 *)PTR_DAT_049c80d0);
      goto LAB_025ef9d0;
    }
  }
LAB_025ef42c:
  uVar12 = 0x10;
LAB_025ef430:
  FUN_0201de54(&uStack_b0);
  cVar4 = cRam0000000004f49bfa;
  if ((uVar12 < 0x11) && ((1 << (ulong)uVar12 & 0x10201U) != 0)) {
    *param_1 = -2;
    if (cVar4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bfa = '\x01';
    }
    plVar11 = *(long **)(param_1 + 2);
    if (plVar11 != (long *)0x0) {
      lVar8 = *plVar11;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_025ef4e0;
          }
          uVar10 = uVar10 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b56d0,2);
LAB_025ef4e0:
      (*(code *)*puVar6)(plVar11,puVar6[1]);
    }
  }
  return;
LAB_025ef40c:
  puVar6 = (undefined8 *)(lVar8 + (long)(*piVar9 + 2) * 0x10 + 0x138);
  plVar11 = (long *)auStack_80._0_8_;
LAB_025ef41c:
  (*(code *)*puVar6)(plVar11,uVar13,puVar6[1]);
  goto LAB_025ef42c;
}

