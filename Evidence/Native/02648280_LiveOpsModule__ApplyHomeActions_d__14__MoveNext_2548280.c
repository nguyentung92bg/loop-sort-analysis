/* IL2CPP: LiveOpsModule.<ApplyHomeActions>d__14$$MoveNext
void LiveOpsModule__ApplyHomeActions_d__14__MoveNext (LiveOpsModule__ApplyHomeActions_d__14_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: LiveOpsModule.<ApplyHomeActions>d__14$$MoveNext
   void LiveOpsModule__ApplyHomeActions_d__14__MoveNext (LiveOpsModule__ApplyHomeActions_d__14_o
   __this, const MethodInfo* method); */

void LiveOpsModule__ApplyHomeActions_d__14__MoveNext_2548280(uint *param_1)

{
  undefined4 uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char cVar11;
  uint *puVar12;
  byte bVar13;
  int iVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  long lVar19;
  ulong uVar20;
  int *piVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined1 auVar25 [16];
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  long lStack_c0;
  uint *puStack_b8;
  uint **ppuStack_b0;
  undefined4 uStack_98;
  undefined1 auStack_90 [16];
  uint uStack_7c;
  uint *puStack_78;
  undefined1 auStack_70 [16];
  
  puStack_78 = param_1;
  if ((bRam0000000004f4c021 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049ca800);
    FUN_021f03f8(PTR_DAT_049b5190);
    FUN_021f03f8(PTR_DAT_049c9230);
    FUN_021f03f8(PTR_DAT_049c9238);
    FUN_021f03f8(PTR_DAT_049c9240);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049c9248);
    FUN_021f03f8(PTR_DAT_049c5e10);
    FUN_021f03f8(PTR_DAT_049c59c8);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4c021 = 1;
  }
  uStack_7c = *param_1;
  lVar24 = *(long *)(param_1 + 6);
  auStack_90._0_8_ = 0;
  auStack_90._8_8_ = 0;
  uStack_98 = 0;
  if (2 < uStack_7c) {
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar24 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
              (*(long *)(lVar24 + 0x30),auStack_e0,*(undefined8 *)PTR_DAT_049c9248);
                    /* try { // try from 02648378 to 0274837f has its CatchHandler @ 026484c8 */
    puStack_b8 = (uint *)auStack_e0._8_8_;
    lStack_c0 = auStack_e0._0_8_;
    ppuStack_b0 = (uint **)uStack_d0;
    *(undefined8 *)(puStack_78 + 0xe) = auStack_e0._8_8_;
    *(undefined8 *)(puStack_78 + 0xc) = auStack_e0._0_8_;
                    /* try { // try from 02648388 to 0274838f has its CatchHandler @ 026484b8 */
    *(undefined8 *)(puStack_78 + 0x10) = uStack_d0;
    thunk_FUN_021f190c(puStack_78 + 0xc,0);
  }
  puVar10 = PTR_DAT_049c9240;
  puVar9 = PTR_DAT_049c9238;
  puVar8 = PTR_DAT_049c5e10;
  puVar7 = PTR_DAT_049c59c8;
  puVar6 = PTR_DAT_049b6110;
  puVar5 = PTR_DAT_049b54e0;
  puVar4 = PTR_DAT_049b5190;
  puVar3 = PTR_DAT_049b5138;
                    /* try { // try from 026483a8 to 027483b3 has its CatchHandler @ 026484bc */
                    /* try { // try from 026483b4 to 027483c3 has its CatchHandler @ 026484c0 */
  puStack_b8 = &uStack_7c;
                    /* try { // try from 026483d4 to 027483db has its CatchHandler @ 026484b0 */
  lStack_c0 = 0;
  ppuStack_b0 = &puStack_78;
                    /* try { // try from 026483e0 to 027483e7 has its CatchHandler @ 026484b4 */
                    /* try { // try from 026483e8 to 027484a3 has its CatchHandler @ 026481c8 */
  if (uStack_7c == 0) goto LAB_026487b4;
  if (uStack_7c == 1) {
    uStack_7c = 0xffffffff;
    auStack_90 = *(undefined1 (*) [16])(puStack_78 + 0x12);
    puStack_78[0x12] = 0;
    puStack_78[0x13] = 0;
    puStack_78[0x14] = 0;
    puStack_78[0x15] = 0;
    *puStack_78 = 0xffffffff;
    goto LAB_02648c84;
  }
  if (uStack_7c != 2) goto LAB_026484e8;
  uStack_7c = 0xffffffff;
  auStack_90 = *(undefined1 (*) [16])(puStack_78 + 0x12);
  puStack_78[0x12] = 0;
  puStack_78[0x13] = 0;
  puStack_78[0x14] = 0;
  puStack_78[0x15] = 0;
  *puStack_78 = 0xffffffff;
LAB_02648458:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar17 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ != (long *)0x0) {
    lVar19 = *(long *)auStack_90._0_8_;
    uVar23 = auStack_90._8_8_ & 0xffff;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
                    /* try { // try from 026484a4 to 027484a7 has its CatchHandler @ 026484c4 */
                    /* try { // try from 026484a8 to 027484ab has its CatchHandler @ 026481c8 */
        if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02648378 with catch @ 026484c8
                        */
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_026484d8;
        }
                    /* try { // try from 026484ac to 027484af has its CatchHandler @ 026484b4 */
        uVar20 = uVar20 - 1;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026483d4 with catch @ 026484b0
                       try { // try from 026484b0 to 027484e3 has its CatchHandler @ 026481c8 */
        piVar21 = piVar21 + 4;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026483e0 with catch @ 026484b4
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 026484ac with catch @ 026484b4
                        */
      } while (uVar20 != 0);
    }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02648388 with catch @ 026484b8
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026483a8 with catch @ 026484bc
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026483b4 with catch @ 026484c0
                        */
    puVar15 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)puVar5,2);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026484a4 with catch @ 026484c4
                        */
LAB_026484d8:
                    /* try { // try from 026484e4 to 027484e7 has its CatchHandler @ 02648508 */
    (*(code *)*puVar15)(uVar17,uVar23,puVar15[1]);
  }
LAB_026484e8:
  do {
    do {
      do {
                    /* try { // try from 026484e8 to 0274850b has its CatchHandler @ 026481c8 */
        uVar20 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                           (puStack_78 + 0xc,*(undefined8 *)puVar9);
        puVar12 = puStack_78;
        if ((uVar20 & 1) == 0) {
          iVar14 = 0x16;
          goto LAB_026486f4;
        }
        lVar22 = *(long *)puVar10;
        lVar16 = *(long *)(lVar22 + 0x20);
                    /* catch() { ... } // from try @ 026484e4 with catch @ 02648508 */
                    /* try { // try from 0264850c to 02748513 has its CatchHandler @ 0264851c */
        uVar2 = *(ushort *)(lVar16 + 0x135);
        lVar19 = lVar16;
        if ((uVar2 & 1) == 0) {
                    /* try { // try from 02648514 to 0274851f has its CatchHandler @ 026481c8 */
          lVar19 = FUN_02229718();
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0264850c with catch @ 0264851c
                        */
          lVar16 = *(long *)(lVar22 + 0x20);
          uVar2 = *(ushort *)(lVar16 + 0x135);
        }
        uVar1 = *(undefined4 *)(*(long *)(*(long *)(lVar19 + 0xc0) + 0x10) + 0xfc);
        if ((uVar2 & 1) == 0) {
          lVar16 = FUN_02229718();
        }
        uVar17 = thunk_FUN_0224e54c(puVar12 + 0xc,
                                    *(long *)(*(long *)(*(long *)(lVar16 + 0xc0) + 8) + 0x80) + 0x60
                                   );
        func_0x04608620(auStack_e0,uVar17,uVar1);
        puVar12 = puStack_78;
        uVar17 = auStack_e0._0_8_;
        if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
          FUN_021f0574();
        }
        System_Threading_CancellationToken__ThrowIfCancellationRequested_316347c(puVar12 + 8,0);
        uVar20 = LiveOpsDevFilter__IsAllowed_2522614(uVar17 & 0xffffffff,0);
      } while ((uVar20 & 1) == 0);
      if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
        FUN_021f0574();
      }
      plVar18 = (long *)Extensions__ToClassInstance_24e79d0(uVar17 & 0xffffffff,0);
    } while (plVar18 == (long *)0x0);
    if (uStack_7c == 0) goto LAB_026487b4;
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    if (*(long *)(lVar24 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    bVar13 = 0;
    if (*(char *)(*(long *)(lVar24 + 0x38) + 0x10) != '\0') {
      bVar13 = (**(code **)(*plVar18 + 0x1a8))(plVar18,*(undefined8 *)(*plVar18 + 0x1b0));
      bVar13 = bVar13 & 1;
    }
  } while (bVar13 != (byte)puStack_78[10]);
  auVar25 = (**(code **)(*plVar18 + 0x198))
                      (plVar18,*(undefined8 *)(puStack_78 + 8),*(undefined8 *)(*plVar18 + 0x1a0));
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_70 = auVar25;
  thunk_FUN_021f190c(auStack_70,0);
  auStack_90 = auStack_70;
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
  uVar17 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ == (long *)0x0) goto LAB_02648840;
  lVar19 = *(long *)auStack_90._0_8_;
  uVar23 = auStack_90._8_8_ & 0xffff;
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
      if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
        puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_02648828;
      }
      uVar20 = uVar20 - 1;
      piVar21 = piVar21 + 4;
    } while (uVar20 != 0);
  }
  puVar15 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)puVar5,0);
LAB_02648828:
  iVar14 = (*(code *)*puVar15)(uVar17,uVar23,puVar15[1]);
  if (iVar14 == 0) {
    uStack_7c = 0;
    *puStack_78 = 0;
    *(undefined1 (*) [16])(puStack_78 + 0x12) = auStack_90;
    thunk_FUN_021f190c(puStack_78 + 0x12,0);
    FUN_0235c25c(puStack_78 + 2,auStack_90,puStack_78,*(undefined8 *)PTR_DAT_049ca800);
    goto LAB_02648b78;
  }
LAB_02648840:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar17 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ != (long *)0x0) {
    lVar19 = *(long *)auStack_90._0_8_;
    uVar23 = auStack_90._8_8_ & 0xffff;
    uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar20 != 0) {
      piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 2) * 0x10 + 0x138);
          goto LAB_026488bc;
        }
        uVar20 = uVar20 - 1;
        piVar21 = piVar21 + 4;
      } while (uVar20 != 0);
    }
    puVar15 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)puVar5,2);
LAB_026488bc:
    (*(code *)*puVar15)(uVar17,uVar23,puVar15[1]);
  }
  puVar12 = puStack_78;
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
                    /* try { // try from 02648a54 to 02748ae7 has its CatchHandler @ 02648a54
                       catch() { ... } // from try @ 02648a54 with catch @ 02648a54
                       catch() { ... } // from try @ 02648d18 with catch @ 02648a54
                       catch() { ... } // from try @ 02648e0c with catch @ 02648a54
                       catch() { ... } // from try @ 02648e78 with catch @ 02648a54
                       catch() { ... } // from try @ 02648ee0 with catch @ 02648a54 */
    FUN_021f0574();
  }
  System_Threading_CancellationToken__ThrowIfCancellationRequested_316347c(puVar12 + 8,0);
  while( true ) {
    if (lVar24 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 02648ec8 to 02748ed7 has its CatchHandler @ 02648ed8 */
      FUN_021f06a0();
    }
                    /* try { // try from 02648d18 to 02748dcb has its CatchHandler @ 02648a54 */
    if (*(long *)(lVar24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar20 = Monitors__IsActive_object__2688ab4(*(long *)(lVar24 + 0x20),*(undefined8 *)puVar7);
    if ((uVar20 & 1) == 0) break;
    uVar17 = *(undefined8 *)(puStack_78 + 8);
    if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 02648b94 to 02748b9f has its CatchHandler @ 02648e1c */
      FUN_021f0574();
    }
    auVar25 = Cysharp_Threading_Tasks_UniTask__Yield_37c8000(uVar17,0,0);
    auStack_e0 = auVar25;
                    /* try { // try from 02648bb4 to 02748c7f has its CatchHandler @ 02648e44 */
    thunk_FUN_021f190c(auStack_e0,0);
    auStack_90 = auStack_e0;
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
    uVar17 = auStack_90._0_8_;
    if ((long *)auStack_90._0_8_ != (long *)0x0) {
      lVar19 = *(long *)auStack_90._0_8_;
      uVar23 = auStack_90._8_8_ & 0xffff;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
            goto LAB_02648c70;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar15 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)puVar5,0);
LAB_02648c70:
      iVar14 = (*(code *)*puVar15)(uVar17,uVar23,puVar15[1]);
      if (iVar14 == 0) {
        uStack_7c = 1;
        *puStack_78 = 1;
        *(undefined1 (*) [16])(puStack_78 + 0x12) = auStack_90;
        thunk_FUN_021f190c(puStack_78 + 0x12,0);
        FUN_0235c25c(puStack_78 + 2,auStack_90,puStack_78,*(undefined8 *)PTR_DAT_049ca800);
        goto LAB_02648b78;
      }
    }
LAB_02648c84:
    if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 02648c90 to 02748d17 has its CatchHandler @ 02648e48 */
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar17 = auStack_90._0_8_;
    if ((long *)auStack_90._0_8_ != (long *)0x0) {
      lVar19 = *(long *)auStack_90._0_8_;
      uVar23 = auStack_90._8_8_ & 0xffff;
      uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
            puVar15 = (undefined8 *)(lVar19 + (long)(*piVar21 + 2) * 0x10 + 0x138);
            goto LAB_02648d04;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar15 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)puVar5,2);
LAB_02648d04:
      (*(code *)*puVar15)(uVar17,uVar23,puVar15[1]);
    }
  }
  if (*(long *)(lVar24 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar19 = Monitors__Get_object__26889d0(*(long *)(lVar24 + 0x20),*(undefined8 *)puVar8);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar25 = FulfillRewardMonitor__AwaitFulfillCompletion_244036c(lVar19,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_e0 = auVar25;
  thunk_FUN_021f190c(auStack_e0,0);
  auStack_90 = auStack_e0;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
    cRam0000000004f49bf4 = '\x01';
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 02648dcc to 02748dd7 has its CatchHandler @ 02648e10 */
    cRam0000000004f49bf5 = '\x01';
  }
  uVar17 = auStack_90._0_8_;
  if ((long *)auStack_90._0_8_ == (long *)0x0) goto LAB_02648458;
  lVar19 = *(long *)auStack_90._0_8_;
  uVar23 = auStack_90._8_8_ & 0xffff;
                    /* try { // try from 02648de4 to 02748df3 has its CatchHandler @ 02648e0c */
  uVar20 = (ulong)*(ushort *)(lVar19 + 0x12e);
  if (uVar20 != 0) {
    piVar21 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
    do {
                    /* try { // try from 02648df8 to 02748dfb has its CatchHandler @ 02648e40 */
                    /* try { // try from 02648dfc to 02748dff has its CatchHandler @ 02648e34 */
      if (*(long *)(piVar21 + -2) == *(long *)puVar5) {
                    /* catch() { ... } // from try @ 02648b94 with catch @ 02648e1c */
                    /* catch() { ... } // from try @ 02648b74 with catch @ 02648e20 */
                    /* catch() { ... } // from try @ 02648b4c with catch @ 02648e24 */
        puVar15 = (undefined8 *)(lVar19 + (long)*piVar21 * 0x10 + 0x138);
        goto LAB_02648e28;
      }
                    /* try { // try from 02648e00 to 02748e03 has its CatchHandler @ 02648e38 */
      uVar20 = uVar20 - 1;
                    /* try { // try from 02648e04 to 02748e07 has its CatchHandler @ 02648e30 */
      piVar21 = piVar21 + 4;
                    /* try { // try from 02648e08 to 02748e0b has its CatchHandler @ 02648e28 */
    } while (uVar20 != 0);
  }
                    /* catch() { ... } // from try @ 02648de4 with catch @ 02648e0c
                       try { // try from 02648e0c to 02748e5f has its CatchHandler @ 02648a54 */
                    /* catch() { ... } // from try @ 02648dcc with catch @ 02648e10 */
                    /* catch() { ... } // from try @ 02648b70 with catch @ 02648e14 */
  puVar15 = (undefined8 *)FUN_02229a4c(auStack_90._0_8_,*(long *)puVar5,0);
                    /* catch() { ... } // from try @ 02648ae8 with catch @ 02648e18 */
LAB_02648e28:
                    /* catch() { ... } // from try @ 02648e08 with catch @ 02648e28 */
                    /* catch() { ... } // from try @ 02648b2c with catch @ 02648e2c */
                    /* catch() { ... } // from try @ 02648e04 with catch @ 02648e30 */
                    /* catch() { ... } // from try @ 02648dfc with catch @ 02648e34 */
  iVar14 = (*(code *)*puVar15)(uVar17,uVar23,puVar15[1]);
                    /* catch() { ... } // from try @ 02648b14 with catch @ 02648e38
                       catch() { ... } // from try @ 02648e00 with catch @ 02648e38 */
  if (iVar14 == 0) goto LAB_02648e3c;
  goto LAB_02648458;
LAB_026487b4:
  uStack_7c = 0xffffffff;
  auStack_90 = *(undefined1 (*) [16])(puStack_78 + 0x12);
  puStack_78[0x12] = 0;
  puStack_78[0x13] = 0;
  puStack_78[0x14] = 0;
  puStack_78[0x15] = 0;
  *puStack_78 = 0xffffffff;
  goto LAB_02648840;
LAB_02648e3c:
                    /* catch() { ... } // from try @ 02648aec with catch @ 02648e3c */
                    /* catch() { ... } // from try @ 02648df8 with catch @ 02648e40 */
                    /* catch() { ... } // from try @ 02648bb4 with catch @ 02648e44 */
  uStack_7c = 2;
                    /* catch() { ... } // from try @ 02648c90 with catch @ 02648e48 */
  *puStack_78 = 2;
  *(undefined1 (*) [16])(puStack_78 + 0x12) = auStack_90;
  thunk_FUN_021f190c(puStack_78 + 0x12,0);
                    /* try { // try from 02648e60 to 02748e77 has its CatchHandler @ 02648ed8 */
                    /* try { // try from 02648e78 to 02748ec7 has its CatchHandler @ 02648a54 */
  FUN_0235c25c(puStack_78 + 2,auStack_90,puStack_78,*(undefined8 *)PTR_DAT_049ca800);
LAB_02648b78:
  iVar14 = 0xe;
LAB_026486f4:
  if ((int)*puStack_b8 < 0) {
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (*ppuStack_b0 + 0xc,*(undefined8 *)PTR_DAT_049c9230);
  }
  puVar12 = puStack_78;
  cVar11 = cRam0000000004f49bfa;
  if (lStack_c0 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f0698();
  }
  if ((iVar14 == 0x16) || (iVar14 == 0)) {
    puStack_78[0xe] = 0;
    puStack_78[0xf] = 0;
    puStack_78[0x10] = 0;
    puStack_78[0x11] = 0;
    puStack_78[0xc] = 0;
    puStack_78[0xd] = 0;
    *puStack_78 = 0xfffffffe;
    if (cVar11 == '\0') {
      FUN_021f03f8(PTR_DAT_049b56d0);
      cRam0000000004f49bfa = '\x01';
    }
    plVar18 = *(long **)(puVar12 + 2);
    if (plVar18 != (long *)0x0) {
      lVar24 = *plVar18;
      uVar20 = (ulong)*(ushort *)(lVar24 + 0x12e);
      if (uVar20 != 0) {
        piVar21 = (int *)(*(long *)(lVar24 + 0xb0) + 8);
        do {
          if (*(long *)(piVar21 + -2) == *(long *)PTR_DAT_049b56d0) {
            puVar15 = (undefined8 *)(lVar24 + (long)(*piVar21 + 2) * 0x10 + 0x138);
            goto LAB_026487f0;
          }
          uVar20 = uVar20 - 1;
          piVar21 = piVar21 + 4;
        } while (uVar20 != 0);
      }
      puVar15 = (undefined8 *)FUN_02229a4c(plVar18,*(long *)PTR_DAT_049b56d0,2);
LAB_026487f0:
      (*(code *)*puVar15)(plVar18,puVar15[1]);
    }
  }
  return;
}

