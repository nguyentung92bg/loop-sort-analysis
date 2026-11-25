/* IL2CPP: Extensions.<WaitUntilFirstEvent>d__38$$MoveNext
void Extensions__WaitUntilFirstEvent_d__38__MoveNext (Extensions__WaitUntilFirstEvent_d__38_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Extensions.<WaitUntilFirstEvent>d__38$$MoveNext
   void Extensions__WaitUntilFirstEvent_d__38__MoveNext (Extensions__WaitUntilFirstEvent_d__38_o
   __this, const MethodInfo* method); */

void Extensions__WaitUntilFirstEvent_d__38__MoveNext_24e8c7c(int *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  
  if ((bRam0000000004f4bca7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7f00);
    FUN_021f03f8(PTR_DAT_049c7f08);
    FUN_021f03f8(PTR_DAT_049c7f10);
    FUN_021f03f8(PTR_DAT_049c7f18);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bca7 = 1;
  }
                    /* try { // try from 025e8ce4 to 026e8cef has its CatchHandler @ 025e8e80 */
  puVar2 = PTR_DAT_049b54e0;
  puVar1 = PTR_DAT_049b5138;
  auStack_60._0_8_ = 0;
  auStack_60._8_8_ = 0;
                    /* try { // try from 025e8d00 to 026e8d0b has its CatchHandler @ 025e8e7c */
  if (*param_1 == 0) {
    auStack_60 = *(undefined1 (*) [16])(param_1 + 0xc);
                    /* try { // try from 025e8d90 to 026e8d9b has its CatchHandler @ 025e8e6c */
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
    goto LAB_025e8ebc;
  }
                    /* try { // try from 025e8d0c to 026e8d8f has its CatchHandler @ 025e7c10 */
  lVar6 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c7f18);
  System_Object___ctor_3142338(lVar6,0);
  plVar11 = (long *)(param_1 + 10);
  *plVar11 = lVar6;
  thunk_FUN_021f190c(plVar11,lVar6);
  puVar3 = PTR_DAT_049c7f08;
  lVar6 = *plVar11;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar12 = *(long *)(param_1 + 6);
  *(undefined1 *)(lVar6 + 0x10) = 1;
  uVar7 = thunk_FUN_0222ca34(*(undefined8 *)puVar3);
  Spine_AnimationState_TrackEntryEventDelegate___ctor_32d44f4
            (uVar7,lVar6,*(undefined8 *)PTR_DAT_049c7f10,0);
  if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  Spine_TrackEntry__add_Event_32d4c60(lVar12,uVar7,0);
  while( true ) {
                    /* catch() { ... } // from try @ 025e8524 with catch @ 025e8f48 */
                    /* catch() { ... } // from try @ 025e8324 with catch @ 025e8f4c */
    lVar6 = *(long *)(param_1 + 10);
                    /* catch() { ... } // from try @ 025e82a0 with catch @ 025e8f50 */
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 025e88ac with catch @ 025e8f54 */
      FUN_021f06a0();
    }
    if (*(char *)(lVar6 + 0x10) == '\0') break;
                    /* try { // try from 025e8dc0 to 026e8dc3 has its CatchHandler @ 025e902c */
                    /* try { // try from 025e8dc4 to 026e8dc7 has its CatchHandler @ 025e9028 */
    uVar7 = *(undefined8 *)(param_1 + 8);
                    /* try { // try from 025e8dc8 to 026e8dcb has its CatchHandler @ 025e9024 */
                    /* try { // try from 025e8dcc to 026e8dcf has its CatchHandler @ 025e9018 */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 025e8dd0 to 026e8dd3 has its CatchHandler @ 025e900c */
      FUN_021f0574();
    }
                    /* try { // try from 025e8dd4 to 026e8dd7 has its CatchHandler @ 025e8fe0 */
                    /* try { // try from 025e8dd8 to 026e8ddb has its CatchHandler @ 025e8fd8 */
                    /* try { // try from 025e8ddc to 026e8ddf has its CatchHandler @ 025e8fd4 */
                    /* try { // try from 025e8de0 to 026e8de3 has its CatchHandler @ 025e8fc4 */
                    /* try { // try from 025e8de4 to 026e8de7 has its CatchHandler @ 025e8fc0 */
    auVar14 = Cysharp_Threading_Tasks_UniTask__Yield_37c83ac(8,uVar7,0,0);
                    /* try { // try from 025e8de8 to 026e8deb has its CatchHandler @ 025e8fb8 */
                    /* try { // try from 025e8dec to 026e8def has its CatchHandler @ 025e8fb4 */
    auStack_50 = auVar14;
                    /* try { // try from 025e8df0 to 026e8df3 has its CatchHandler @ 025e8fac */
                    /* try { // try from 025e8df4 to 026e8df7 has its CatchHandler @ 025e8fa8 */
    thunk_FUN_021f190c(auStack_50,0);
    uVar4 = auStack_50._8_8_;
    uVar7 = auStack_50._0_8_;
                    /* try { // try from 025e8df8 to 026e8dfb has its CatchHandler @ 025e8fa0 */
                    /* try { // try from 025e8dfc to 026e8dff has its CatchHandler @ 025e8f9c */
                    /* try { // try from 025e8e00 to 026e8e03 has its CatchHandler @ 025e8f60 */
                    /* try { // try from 025e8e04 to 026e8e07 has its CatchHandler @ 025e8f58 */
                    /* try { // try from 025e8e08 to 026e8e0b has its CatchHandler @ 025e8f78 */
    auStack_60 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 025e8e0c to 026e8e0f has its CatchHandler @ 025e8f6c */
                    /* try { // try from 025e8e10 to 026e8e13 has its CatchHandler @ 025e8f84 */
                    /* try { // try from 025e8e14 to 026e8e17 has its CatchHandler @ 025e8f40 */
      FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 025e8e18 to 026e8e1b has its CatchHandler @ 025e8f8c */
                    /* try { // try from 025e8e1c to 026e8e1f has its CatchHandler @ 025e8f88 */
      cRam0000000004f49bf4 = '\x01';
    }
                    /* try { // try from 025e8e20 to 026e8e23 has its CatchHandler @ 025e8f2c */
                    /* try { // try from 025e8e24 to 026e8e27 has its CatchHandler @ 025e8f28 */
                    /* try { // try from 025e8e28 to 026e8e2b has its CatchHandler @ 025e8f1c */
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 025e8e2c to 026e8e2f has its CatchHandler @ 025e8ef0 */
      FUN_021f0574();
    }
                    /* try { // try from 025e8e30 to 026e8e37 has its CatchHandler @ 025e8f0c */
                    /* try { // try from 025e8e38 to 026e8e3b has its CatchHandler @ 025e8ee4 */
    if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 025e8e44 to 026e8e47 has its CatchHandler @ 025e8f24 */
                    /* try { // try from 025e8e48 to 026e8e4b has its CatchHandler @ 025e8f04 */
                    /* try { // try from 025e8e4c to 026e8e4f has its CatchHandler @ 025e8ec0 */
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 025e8e50 to 026e8e53 has its CatchHandler @ 025e8eb4 */
                    /* try { // try from 025e8e54 to 026e8e57 has its CatchHandler @ 025e8eb0 */
      cRam0000000004f49bf5 = '\x01';
    }
                    /* try { // try from 025e8e58 to 026e8e5b has its CatchHandler @ 025e8ea8 */
    if ((long *)uVar7 != (long *)0x0) {
                    /* try { // try from 025e8e5c to 026e8e5f has its CatchHandler @ 025e8ea4 */
      lVar12 = *(long *)uVar7;
                    /* try { // try from 025e8e60 to 026e8e63 has its CatchHandler @ 025e8e98 */
      lVar6 = *(long *)puVar2;
                    /* try { // try from 025e8e64 to 026e8e67 has its CatchHandler @ 025e8e78 */
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    /* catch() { ... } // from try @ 025e8dac with catch @ 025e8e68
                       try { // try from 025e8e68 to 026e9053 has its CatchHandler @ 025e7c10 */
      if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 025e8d90 with catch @ 025e8e6c */
                    /* catch() { ... } // from try @ 025e7f3c with catch @ 025e8e70 */
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 025e8684 with catch @ 025e8e74 */
                    /* catch() { ... } // from try @ 025e8e64 with catch @ 025e8e78 */
                    /* catch() { ... } // from try @ 025e8d00 with catch @ 025e8e7c */
          if (*(long *)(piVar10 + -2) == lVar6) {
                    /* catch() { ... } // from try @ 025e7f0c with catch @ 025e8e9c */
                    /* catch() { ... } // from try @ 025e7f04 with catch @ 025e8ea0 */
                    /* catch() { ... } // from try @ 025e8e5c with catch @ 025e8ea4 */
            puVar8 = (undefined8 *)(lVar12 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_025e8ea8;
          }
                    /* catch() { ... } // from try @ 025e8ce4 with catch @ 025e8e80 */
          uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 025e7e58 with catch @ 025e8e84 */
          piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 025e8220 with catch @ 025e8e88 */
        } while (uVar9 != 0);
      }
                    /* catch() { ... } // from try @ 025e8868 with catch @ 025e8e8c */
                    /* catch() { ... } // from try @ 025e7f5c with catch @ 025e8e90 */
                    /* catch() { ... } // from try @ 025e7f4c with catch @ 025e8e94 */
      puVar8 = (undefined8 *)FUN_02229a4c(uVar7,lVar6,0);
                    /* catch() { ... } // from try @ 025e8e60 with catch @ 025e8e98 */
LAB_025e8ea8:
                    /* catch() { ... } // from try @ 025e8e58 with catch @ 025e8ea8 */
                    /* catch() { ... } // from try @ 025e7eac with catch @ 025e8eac */
                    /* catch() { ... } // from try @ 025e8e54 with catch @ 025e8eb0 */
                    /* catch() { ... } // from try @ 025e8e50 with catch @ 025e8eb4 */
      iVar5 = (*(code *)*puVar8)(uVar7,uVar4 & 0xffffffff,puVar8[1]);
                    /* catch() { ... } // from try @ 025e86b0 with catch @ 025e8eb8 */
      if (iVar5 == 0) {
                    /* catch() { ... } // from try @ 025e83e0 with catch @ 025e8fdc */
                    /* catch() { ... } // from try @ 025e8dd4 with catch @ 025e8fe0 */
        *param_1 = 0;
                    /* catch() { ... } // from try @ 025e8328 with catch @ 025e8fe4 */
        *(undefined1 (*) [16])(param_1 + 0xc) = auStack_60;
                    /* catch() { ... } // from try @ 025e82bc with catch @ 025e8fe8 */
                    /* catch() { ... } // from try @ 025e827c with catch @ 025e8fec */
                    /* catch() { ... } // from try @ 025e82a4 with catch @ 025e8ff0 */
        thunk_FUN_021f190c(param_1 + 0xc,0);
                    /* catch() { ... } // from try @ 025e8560 with catch @ 025e8ff4 */
                    /* catch() { ... } // from try @ 025e80f8 with catch @ 025e8ff8 */
                    /* catch() { ... } // from try @ 025e842c with catch @ 025e8ffc */
                    /* catch() { ... } // from try @ 025e8478 with catch @ 025e9000 */
                    /* catch() { ... } // from try @ 025e8dd0 with catch @ 025e900c */
        FUN_0235c25c(param_1 + 2,auStack_60,param_1,*(undefined8 *)PTR_DAT_049c7f00);
        return;
                    /* catch() { ... } // from try @ 025e8138 with catch @ 025e9010 */
      }
    }
LAB_025e8ebc:
                    /* catch() { ... } // from try @ 025e86a4 with catch @ 025e8ebc */
                    /* catch() { ... } // from try @ 025e8e4c with catch @ 025e8ec0 */
                    /* catch() { ... } // from try @ 025e8688 with catch @ 025e8ec4 */
    if (cRam0000000004f49bf6 == '\0') {
                    /* catch() { ... } // from try @ 025e85e0 with catch @ 025e8ec8 */
                    /* catch() { ... } // from try @ 025e85c8 with catch @ 025e8ecc */
                    /* catch() { ... } // from try @ 025e85b0 with catch @ 025e8ed0 */
      FUN_021f03f8(PTR_DAT_049b54e0);
                    /* catch() { ... } // from try @ 025e85a0 with catch @ 025e8ed4 */
                    /* catch() { ... } // from try @ 025e858c with catch @ 025e8ed8 */
      cRam0000000004f49bf6 = '\x01';
    }
                    /* catch() { ... } // from try @ 025e8578 with catch @ 025e8edc */
    uVar7 = auStack_60._0_8_;
                    /* catch() { ... } // from try @ 025e8e40 with catch @ 025e8ee0 */
    if ((long *)auStack_60._0_8_ != (long *)0x0) {
                    /* catch() { ... } // from try @ 025e8e38 with catch @ 025e8ee4 */
      lVar12 = *(long *)auStack_60._0_8_;
                    /* catch() { ... } // from try @ 025e7ee8 with catch @ 025e8ee8 */
      uVar13 = auStack_60._8_8_ & 0xffff;
                    /* catch() { ... } // from try @ 025e800c with catch @ 025e8eec */
      lVar6 = *(long *)puVar2;
                    /* catch() { ... } // from try @ 025e8e2c with catch @ 025e8ef0 */
      uVar9 = (ulong)*(ushort *)(lVar12 + 0x12e);
                    /* catch() { ... } // from try @ 025e7e78 with catch @ 025e8ef4 */
      if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 025e7e68 with catch @ 025e8ef8 */
                    /* catch() { ... } // from try @ 025e84d0 with catch @ 025e8efc */
        piVar10 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 025e82f0 with catch @ 025e8f00 */
                    /* catch() { ... } // from try @ 025e8664 with catch @ 025e8f04
                       catch() { ... } // from try @ 025e8e48 with catch @ 025e8f04 */
                    /* catch() { ... } // from try @ 025e81f4 with catch @ 025e8f08
                       catch() { ... } // from try @ 025e8e3c with catch @ 025e8f08 */
          if (*(long *)(piVar10 + -2) == lVar6) {
                    /* catch() { ... } // from try @ 025e8e24 with catch @ 025e8f28 */
                    /* catch() { ... } // from try @ 025e8e20 with catch @ 025e8f2c */
                    /* catch() { ... } // from try @ 025e837c with catch @ 025e8f30 */
                    /* catch() { ... } // from try @ 025e8abc with catch @ 025e8f34 */
            puVar8 = (undefined8 *)(lVar12 + (long)(*piVar10 + 2) * 0x10 + 0x138);
            goto LAB_025e8f38;
          }
                    /* catch() { ... } // from try @ 025e81c8 with catch @ 025e8f0c
                       catch() { ... } // from try @ 025e8e30 with catch @ 025e8f0c */
          uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 025e86d0 with catch @ 025e8f10 */
          piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 025e888c with catch @ 025e8f14 */
        } while (uVar9 != 0);
      }
                    /* catch() { ... } // from try @ 025e886c with catch @ 025e8f18 */
                    /* catch() { ... } // from try @ 025e8e28 with catch @ 025e8f1c */
                    /* catch() { ... } // from try @ 025e8830 with catch @ 025e8f20 */
      puVar8 = (undefined8 *)FUN_02229a4c(auStack_60._0_8_,lVar6,2);
                    /* catch() { ... } // from try @ 025e8628 with catch @ 025e8f24
                       catch() { ... } // from try @ 025e8e44 with catch @ 025e8f24 */
LAB_025e8f38:
                    /* catch() { ... } // from try @ 025e8a34 with catch @ 025e8f38 */
                    /* catch() { ... } // from try @ 025e8a1c with catch @ 025e8f3c */
                    /* catch() { ... } // from try @ 025e8e14 with catch @ 025e8f40 */
                    /* catch() { ... } // from try @ 025e83f8 with catch @ 025e8f44 */
      (*(code *)*puVar8)(uVar7,uVar13,puVar8[1]);
    }
  }
                    /* catch() { ... } // from try @ 025e8e04 with catch @ 025e8f58 */
                    /* catch() { ... } // from try @ 025e84e8 with catch @ 025e8f5c */
                    /* catch() { ... } // from try @ 025e8e00 with catch @ 025e8f60 */
  param_1[10] = 0;
  param_1[0xb] = 0;
                    /* catch() { ... } // from try @ 025e82f4 with catch @ 025e8f64 */
  *param_1 = -2;
                    /* catch() { ... } // from try @ 025e82cc with catch @ 025e8f68 */
  thunk_FUN_021f190c(param_1 + 10,0);
                    /* catch() { ... } // from try @ 025e8b54 with catch @ 025e8f6c
                       catch() { ... } // from try @ 025e8e0c with catch @ 025e8f6c */
  if (cRam0000000004f49bfa == '\0') {
                    /* catch() { ... } // from try @ 025e8b84 with catch @ 025e8f78
                       catch() { ... } // from try @ 025e8e08 with catch @ 025e8f78 */
    FUN_021f03f8(PTR_DAT_049b56d0);
                    /* catch() { ... } // from try @ 025e8a00 with catch @ 025e8f84
                       catch() { ... } // from try @ 025e8e10 with catch @ 025e8f84 */
                    /* catch() { ... } // from try @ 025e8b04 with catch @ 025e8f88
                       catch() { ... } // from try @ 025e8e1c with catch @ 025e8f88 */
    cRam0000000004f49bfa = '\x01';
  }
                    /* catch() { ... } // from try @ 025e8a7c with catch @ 025e8f8c
                       catch() { ... } // from try @ 025e8e18 with catch @ 025e8f8c */
  plVar11 = *(long **)(param_1 + 2);
                    /* catch() { ... } // from try @ 025e8790 with catch @ 025e8f90
                       catch() { ... } // from try @ 025e896c with catch @ 025e8f90 */
  if (plVar11 != (long *)0x0) {
                    /* catch() { ... } // from try @ 025e8160 with catch @ 025e8f94 */
                    /* catch() { ... } // from try @ 025e8128 with catch @ 025e8f98 */
    lVar6 = *plVar11;
                    /* catch() { ... } // from try @ 025e8dfc with catch @ 025e8f9c */
                    /* catch() { ... } // from try @ 025e8df8 with catch @ 025e8fa0 */
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
                    /* catch() { ... } // from try @ 025e83ac with catch @ 025e8fa4 */
                    /* catch() { ... } // from try @ 025e8df4 with catch @ 025e8fa8 */
    if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 025e8df0 with catch @ 025e8fac */
                    /* catch() { ... } // from try @ 025e8544 with catch @ 025e8fb0 */
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 025e8dec with catch @ 025e8fb4 */
                    /* catch() { ... } // from try @ 025e8de8 with catch @ 025e8fb8 */
                    /* catch() { ... } // from try @ 025e835c with catch @ 025e8fbc */
        if (*(long *)(piVar10 + -2) == *(long *)PTR_DAT_049b56d0) {
                    /* catch() { ... } // from try @ 025e8168 with catch @ 025e9014 */
                    /* catch() { ... } // from try @ 025e8dcc with catch @ 025e9018 */
                    /* catch() { ... } // from try @ 025e8198 with catch @ 025e901c */
                    /* catch() { ... } // from try @ 025e810c with catch @ 025e9020 */
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_025e9024;
        }
                    /* catch() { ... } // from try @ 025e8de4 with catch @ 025e8fc0 */
        uVar9 = uVar9 - 1;
                    /* catch() { ... } // from try @ 025e8de0 with catch @ 025e8fc4 */
        piVar10 = piVar10 + 4;
                    /* catch() { ... } // from try @ 025e8410 with catch @ 025e8fc8 */
      } while (uVar9 != 0);
    }
                    /* catch() { ... } // from try @ 025e84b8 with catch @ 025e8fcc */
                    /* catch() { ... } // from try @ 025e8340 with catch @ 025e8fd0 */
                    /* catch() { ... } // from try @ 025e8ddc with catch @ 025e8fd4 */
    puVar8 = (undefined8 *)FUN_02229a4c(plVar11,*(long *)PTR_DAT_049b56d0,2);
                    /* catch() { ... } // from try @ 025e8dd8 with catch @ 025e8fd8 */
LAB_025e9024:
                    /* catch() { ... } // from try @ 025e8dc8 with catch @ 025e9024 */
                    /* catch() { ... } // from try @ 025e8dc4 with catch @ 025e9028 */
                    /* catch() { ... } // from try @ 025e8dc0 with catch @ 025e902c */
    (*(code *)*puVar8)(plVar11,puVar8[1]);
  }
                    /* catch() { ... } // from try @ 025e8068 with catch @ 025e9030 */
                    /* catch() { ... } // from try @ 025e8088 with catch @ 025e9034 */
  return;
}

