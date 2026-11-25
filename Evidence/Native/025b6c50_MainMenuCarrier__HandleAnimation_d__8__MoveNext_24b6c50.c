/* IL2CPP: MainMenuCarrier.<HandleAnimation>d__8$$MoveNext
void MainMenuCarrier__HandleAnimation_d__8__MoveNext (MainMenuCarrier__HandleAnimation_d__8_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025b7dc4) */
/* IL2CPP: MainMenuCarrier.<HandleAnimation>d__8$$MoveNext
   void MainMenuCarrier__HandleAnimation_d__8__MoveNext (MainMenuCarrier__HandleAnimation_d__8_o
   __this, const MethodInfo* method); */

void MainMenuCarrier__HandleAnimation_d__8__MoveNext_24b6c50
               (undefined1 param_1 [16],ulong param_2,undefined4 param_3,int *param_4)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined1 auVar26 [16];
  undefined1 auStack_120 [16];
  undefined8 uStack_110;
  undefined1 auStack_100 [16];
  int **ppiStack_f0;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 uStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  int iStack_88;
  int iStack_84;
  int *piStack_78;
  
  piStack_78 = param_4;
  if ((bRam0000000004f4bba1 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6d38);
    FUN_021f03f8(PTR_DAT_049c6898);
    FUN_021f03f8(PTR_DAT_049c68a8);
    FUN_021f03f8(PTR_DAT_049c68b0);
    FUN_021f03f8(PTR_DAT_049b6110);
    FUN_021f03f8(PTR_DAT_049b5240);
    FUN_021f03f8(PTR_DAT_049bdda0);
    FUN_021f03f8(PTR_DAT_049c68c8);
    FUN_021f03f8(PTR_DAT_049c6d40);
    FUN_021f03f8(PTR_DAT_049c6d48);
    FUN_021f03f8(PTR_DAT_049c6d50);
    FUN_021f03f8(PTR_DAT_049c1358);
    FUN_021f03f8(PTR_DAT_049b5310);
    FUN_021f03f8(PTR_DAT_049c6d58);
    FUN_021f03f8(PTR_DAT_049b6128);
    FUN_021f03f8(PTR_DAT_049b5138);
    FUN_021f03f8(PTR_DAT_049c6d60);
    bRam0000000004f4bba1 = 1;
  }
  puVar7 = PTR_DAT_049c68b0;
  puVar6 = PTR_DAT_049c68a8;
  puVar5 = PTR_DAT_049b6128;
  puVar4 = PTR_DAT_049b5310;
  puVar3 = PTR_DAT_049b5138;
  iStack_88 = 0;
  auStack_a0._8_8_ = 0;
  auStack_b0._8_8_ = 0;
  auStack_a0._0_8_ = 0;
  iStack_84 = *param_4;
  lVar17 = *(long *)(param_4 + 4);
  auStack_b0._0_8_ = 0;
  auVar2 = ZEXT816(0);
  auVar26 = ZEXT816(0);
  uStack_b8 = 0;
  if (iStack_84 < 2) {
    if (iStack_84 == 0) {
      auStack_a0 = *(undefined1 (*) [16])(param_4 + 6);
      param_4[6] = 0;
      param_4[7] = 0;
      param_4[8] = 0;
      param_4[9] = 0;
      iStack_84 = -1;
      *param_4 = -1;
      goto LAB_025b70dc;
    }
    if (iStack_84 != 1) {
LAB_025b6e5c:
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar12 = *(undefined8 *)(lVar17 + 0xb0);
      lVar14 = *(long *)PTR_DAT_049b5310;
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_021f0574();
        lVar14 = *(long *)puVar4;
      }
                    /* try { // try from 025b6e80 to 026b6e83 has its CatchHandler @ 025b6ee4 */
      lVar14 = *(long *)(lVar14 + 0xb8);
                    /* try { // try from 025b6e84 to 026b6e87 has its CatchHandler @ 025b6ee8 */
      uStack_d8 = *(undefined8 *)(lVar14 + 0x68);
      uStack_e0 = *(undefined8 *)(lVar14 + 0x60);
      uStack_c8 = *(undefined8 *)(lVar14 + 0x78);
      uStack_d0 = *(undefined8 *)(lVar14 + 0x70);
                    /* try { // try from 025b6e88 to 026b6eff has its CatchHandler @ 025b6ddc */
      iStack_88 = CloudPrefsInt__op_Implicit_24ea0a0(&uStack_e0,0);
      iStack_88 = iStack_88 + 1;
      uVar13 = System_Int32__ToString_30fbaa0(&iStack_88,0);
      uVar13 = System_String__Concat_2f72b28(*(undefined8 *)PTR_DAT_049c6d60,uVar13,0);
      StatefulUISupport_Scripts_Components_StatefulComponentExtensions__SetText_33515b4
                (uVar12,0x61f37587,uVar13,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6e80 with catch @ 025b6ee4
                        */
      lVar14 = UnityEngine_Component__get_transform_3c18724(lVar17,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6e84 with catch @ 025b6ee8
                        */
      if (cRam0000000004f4a55a == '\0') {
                    /* try { // try from 025b6f00 to 026b6f17 has its CatchHandler @ 025b6fe4 */
        FUN_021f03f8(PTR_DAT_049bbf90);
        cRam0000000004f4a55a = '\x01';
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar12 = NEON_fmov(0x41a00000,4);
      uVar13 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x48);
      fVar22 = (float)((ulong)uVar13 >> 0x20) * (float)((ulong)uVar12 >> 0x20);
                    /* try { // try from 025b6f34 to 026b6f37 has its CatchHandler @ 025b6fc8 */
                    /* try { // try from 025b6f38 to 026b6f63 has its CatchHandler @ 025b6ddc */
      UnityEngine_Transform__set_position_3c2d61c
                (CONCAT44(fVar22,(float)uVar13 * (float)uVar12),fVar22,
                 *(float *)(*(long *)(*(long *)PTR_DAT_049bbf90 + 0xb8) + 0x50) * 20.0,lVar14,0);
      puVar4 = PTR_DAT_049bdda0;
      lVar14 = *(long *)(lVar17 + 0xa0);
      if (lVar14 != 0) {
        iVar9 = 0;
        do {
          iVar8 = UnityEngine_Transform__get_childCount_3c2ef3c(lVar14,0);
                    /* try { // try from 025b6f64 to 026b6f73 has its CatchHandler @ 025b6fe4 */
          if (iVar8 <= iVar9) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6f34 with catch @ 025b6fc8
                        */
            if (*(long *)(lVar17 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a0();
            }
                    /* catch() { ... } // from try @ 025b6fbc with catch @ 025b6fd0 */
                    /* try { // try from 025b6fd4 to 026b6fdb has its CatchHandler @ 025b6ffc */
                    /* try { // try from 025b6fdc to 026b6feb has its CatchHandler @ 025b6ddc */
            System_Collections_Generic_List___Il2CppFullySharedGenericType___Reverse_28d08d0
                      (*(long *)(lVar17 + 0xd0),*(undefined8 *)PTR_DAT_049c6d40);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6f00 with catch @ 025b6fe4
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6f64 with catch @ 025b6fe4
                        */
            if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 025b6fec to 026b6fef has its CatchHandler @ 025b6ffc */
              FUN_021f0574();
            }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b6fd4 with catch @ 025b6ffc
                       catch(type#2 @ 00000000) { ... } // from try @ 025b6fec with catch @ 025b6ffc
                        */
            auStack_100 = Cysharp_Threading_Tasks_UniTask__DelayFrame_37c9280(4,8,0,0,0);
            thunk_FUN_021f190c(auStack_100,0);
            auStack_a0 = auStack_100;
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
            uVar12 = auStack_a0._0_8_;
            if ((long *)auStack_a0._0_8_ == (long *)0x0) goto LAB_025b70dc;
            lVar14 = *(long *)auStack_a0._0_8_;
            uVar19 = auStack_a0._8_8_ & 0xffff;
            uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
            if (uVar15 == 0) goto LAB_025b70ac;
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            goto LAB_025b7094;
          }
          if (*(long *)(lVar17 + 0xa0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* try { // try from 025b6f74 to 026b6f77 has its CatchHandler @ 025b6f98 */
                    /* try { // try from 025b6f78 to 026b6f8f has its CatchHandler @ 025b6f90 */
          lVar14 = UnityEngine_Transform__GetChild_3c2f8bc(*(long *)(lVar17 + 0xa0),iVar9,0);
          if (*(long *)(lVar17 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6f78 with catch @ 025b6f90
                       try { // try from 025b6f90 to 026b6fbb has its CatchHandler @ 025b6ddc */
          FUN_02333498(*(long *)(lVar17 + 0xd0),lVar14,*(undefined8 *)puVar4);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b6f74 with catch @ 025b6f98
                        */
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          lVar14 = UnityEngine_Component__get_gameObject_3c187f4(lVar14,0);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021f06a0();
          }
          UnityEngine_GameObject__SetActive_3c1ce34(lVar14,0,0);
          lVar14 = *(long *)(lVar17 + 0xa0);
                    /* try { // try from 025b6fbc to 026b6fbf has its CatchHandler @ 025b6fd0 */
          iVar9 = iVar9 + 1;
        } while (lVar14 != 0);
      }
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_a0 = *(undefined1 (*) [16])(param_4 + 6);
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    iStack_84 = -1;
    *param_4 = -1;
    goto LAB_025b7300;
  }
  if (iStack_84 == 4) {
    auStack_a0 = *(undefined1 (*) [16])(param_4 + 6);
    param_4[6] = 0;
    param_4[7] = 0;
    param_4[8] = 0;
    param_4[9] = 0;
    iStack_84 = -1;
    *param_4 = -1;
    goto LAB_025b7c40;
  }
  if (iStack_84 != 3) {
    if (iStack_84 != 2) goto LAB_025b6e5c;
    goto LAB_025b7418;
  }
  auStack_a0 = *(undefined1 (*) [16])(param_4 + 6);
  param_4[6] = 0;
  param_4[7] = 0;
  param_4[8] = 0;
  param_4[9] = 0;
  iStack_84 = -1;
  *param_4 = -1;
  goto LAB_025b7a1c;
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_025b7094:
    if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
      puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_025b70c8;
    }
  }
LAB_025b70ac:
  puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025b70c8:
  iVar9 = (*(code *)*puVar10)(uVar12,uVar19,puVar10[1]);
  if (iVar9 == 0) {
    iStack_84 = 0;
    *piStack_78 = 0;
    *(undefined1 (*) [16])(piStack_78 + 6) = auStack_a0;
    thunk_FUN_021f190c(piStack_78 + 6,0);
    FUN_0235c420(piStack_78 + 2,auStack_a0,piStack_78,*(undefined8 *)PTR_DAT_049c6d38);
    return;
  }
LAB_025b70dc:
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar14 = *(long *)auStack_a0._0_8_;
    uVar19 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_025b715c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025b715c:
    (*(code *)*puVar10)(uVar12,uVar19,puVar10[1]);
  }
  param_2 = 0;
  param_3 = 0x3fc00000;
  auStack_b0 = LitMotion_LMotion__Create_2ea9f9c(0x41a00000,0,0x3fc00000,0);
  auVar26 = FUN_024f4e50(auStack_b0,0x1b,*(undefined8 *)PTR_DAT_049c1358);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025b71a8 to 026b7227 has its CatchHandler @ 025b71a8
                       catch() { ... } // from try @ 025b71a8 with catch @ 025b71a8
                       catch() { ... } // from try @ 025b72cc with catch @ 025b71a8
                       catch() { ... } // from try @ 025b730c with catch @ 025b71a8
                       catch() { ... } // from try @ 025b7358 with catch @ 025b71a8 */
  uVar12 = UnityEngine_Component__get_transform_3c18724(lVar17,0);
  auVar26 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPositionZ___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__267345c
                      (auVar26._0_8_,auVar26._8_8_,uVar12,*(undefined8 *)PTR_DAT_049c6d48);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar26 = Extensions__AddTo_24d83f4(auVar26._0_8_,auVar26._8_8_ & 0xffffffff,lVar17,0);
  auVar26 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar26._0_8_,auVar26._8_8_ & 0xffffffff,0,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
                    /* try { // try from 025b7228 to 026b7247 has its CatchHandler @ 025b7324 */
    FUN_021f0574();
  }
  auStack_100 = auVar26;
  thunk_FUN_021f190c(auStack_100,0);
  auStack_a0 = auStack_100;
  if (cRam0000000004f49bf4 == '\0') {
    FUN_021f03f8(PTR_DAT_049b5138);
                    /* try { // try from 025b7258 to 026b725b has its CatchHandler @ 025b7314 */
    cRam0000000004f49bf4 = '\x01';
  }
                    /* try { // try from 025b7264 to 026b726b has its CatchHandler @ 025b7320 */
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 025b7280 to 026b7283 has its CatchHandler @ 025b730c */
    FUN_021f03f8(PTR_DAT_049b54e0);
                    /* try { // try from 025b7284 to 026b7287 has its CatchHandler @ 025b7310 */
    cRam0000000004f49bf5 = '\x01';
  }
  uVar12 = auStack_a0._0_8_;
                    /* try { // try from 025b7290 to 026b72b3 has its CatchHandler @ 025b731c */
  auVar26 = auStack_b0;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar14 = *(long *)auStack_a0._0_8_;
    uVar19 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
                    /* try { // try from 025b72b4 to 026b72cb has its CatchHandler @ 025b7318 */
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_025b72ec;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
                    /* try { // try from 025b72cc to 026b7307 has its CatchHandler @ 025b71a8 */
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025b72ec:
    iVar9 = (*(code *)*puVar10)(uVar12,uVar19,puVar10[1]);
    auVar26 = auStack_b0;
    if (iVar9 == 0) {
      iStack_84 = 1;
      *piStack_78 = 1;
      *(undefined1 (*) [16])(piStack_78 + 6) = auStack_a0;
      thunk_FUN_021f190c(piStack_78 + 6,0);
      FUN_0235c420(piStack_78 + 2,auStack_a0,piStack_78,*(undefined8 *)PTR_DAT_049c6d38);
      return;
    }
  }
LAB_025b7300:
  auStack_b0 = auVar26;
  if (cRam0000000004f49bf6 == '\0') {
                    /* try { // try from 025b7308 to 026b730b has its CatchHandler @ 025b7320 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b7280 with catch @ 025b730c
                       try { // try from 025b730c to 026b733f has its CatchHandler @ 025b71a8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b7284 with catch @ 025b7310
                        */
    FUN_021f03f8(PTR_DAT_049b54e0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b7258 with catch @ 025b7314
                        */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b72b4 with catch @ 025b7318
                        */
    cRam0000000004f49bf6 = '\x01';
  }
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b7290 with catch @ 025b731c
                        */
  uVar12 = auStack_a0._0_8_;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b7264 with catch @ 025b7320
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025b7308 with catch @ 025b7320
                        */
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b7228 with catch @ 025b7324
                        */
    lVar14 = *(long *)auStack_a0._0_8_;
    uVar19 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
                    /* try { // try from 025b7340 to 026b7343 has its CatchHandler @ 025b734c */
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
                    /* catch() { ... } // from try @ 025b7340 with catch @ 025b734c */
                    /* try { // try from 025b7350 to 026b7357 has its CatchHandler @ 025b7360 */
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_025b7380;
        }
        uVar15 = uVar15 - 1;
                    /* try { // try from 025b7358 to 026b7363 has its CatchHandler @ 025b71a8 */
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b7350 with catch @ 025b7360
                        */
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025b7380:
    (*(code *)*puVar10)(uVar12,uVar19,puVar10[1]);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  lVar14 = *(long *)(lVar17 + 0xa0);
  uVar12 = UnityEngine_Component__get_transform_3c18724(lVar17,0);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0(uVar12,uVar12);
  }
  UnityEngine_Transform__set_parent_3c2ded4(lVar14,uVar12,0);
  if (*(long *)(lVar17 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  System_Collections_Generic_List___Il2CppFullySharedGenericType___GetEnumerator_28cf1f8
            (*(long *)(lVar17 + 0xd0),auStack_120,*(undefined8 *)PTR_DAT_049c68c8);
  auStack_100._8_8_ = auStack_120._8_8_;
  auStack_100._0_8_ = auStack_120._0_8_;
  ppiStack_f0 = (int **)uStack_110;
  *(undefined8 *)(piStack_78 + 0xc) = auStack_120._8_8_;
  *(undefined8 *)(piStack_78 + 10) = auStack_120._0_8_;
  *(undefined8 *)(piStack_78 + 0xe) = uStack_110;
  thunk_FUN_021f190c(piStack_78 + 10,0);
  uVar23 = (uint)param_2;
  auStack_100._8_8_ = &iStack_84;
  auStack_100._0_8_ = 0;
  ppiStack_f0 = &piStack_78;
  auVar2 = auStack_b0;
  if (iStack_84 != 2) goto LAB_025b7628;
LAB_025b7418:
  ppiStack_f0 = &piStack_78;
  auStack_100._8_8_ = &iStack_84;
  auStack_100._0_8_ = 0;
  iStack_84 = -1;
  auStack_a0 = *(undefined1 (*) [16])(piStack_78 + 6);
  piStack_78[6] = 0;
  piStack_78[7] = 0;
  piStack_78[8] = 0;
  piStack_78[9] = 0;
  *piStack_78 = -1;
  auStack_b0 = auVar2;
  do {
    do {
      uVar23 = (uint)param_2;
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar12 = auStack_a0._0_8_;
      if ((long *)auStack_a0._0_8_ != (long *)0x0) {
        lVar14 = *(long *)auStack_a0._0_8_;
        uVar19 = auStack_a0._8_8_ & 0xffff;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
              goto LAB_025b7618;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025b7618:
        (*(code *)*puVar10)(uVar12,uVar19,puVar10[1]);
      }
LAB_025b7628:
      uVar15 = System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___MoveNext_2845534
                         (piStack_78 + 10,*(undefined8 *)puVar6);
      piVar16 = piStack_78;
      if ((uVar15 & 1) == 0) {
        iVar9 = 0x11;
        goto LAB_025b78b0;
      }
      lVar18 = *(long *)puVar7;
      lVar11 = *(long *)(lVar18 + 0x20);
      uVar1 = *(ushort *)(lVar11 + 0x135);
      lVar14 = lVar11;
      if ((uVar1 & 1) == 0) {
        lVar14 = FUN_02229718();
        lVar11 = *(long *)(lVar18 + 0x20);
        uVar1 = *(ushort *)(lVar11 + 0x135);
      }
      uVar25 = *(undefined4 *)(*(long *)(*(long *)(lVar14 + 0xc0) + 0x10) + 0xfc);
      if ((uVar1 & 1) == 0) {
        lVar11 = FUN_02229718();
      }
      uVar12 = thunk_FUN_0224e54c(piVar16 + 10,
                                  *(long *)(*(long *)(*(long *)(lVar11 + 0xc0) + 8) + 0x80) + 0x60);
      func_0x04608620(auStack_120,uVar12,uVar25);
      uVar12 = auStack_120._0_8_;
      if (auStack_120._0_8_ == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      lVar14 = UnityEngine_Component__get_gameObject_3c187f4(auStack_120._0_8_,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      UnityEngine_GameObject__SetActive_3c1ce34(lVar14,1,0);
      uVar13 = UnityEngine_Component__get_transform_3c18724(uVar12,0);
      if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      if (*(long *)(lVar17 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar20 = UnityEngine_Transform__get_position_3c2d540(*(long *)(lVar17 + 0xa8),0);
      uVar25 = param_3;
      uVar24 = uVar23;
      lVar14 = UnityEngine_Component__get_transform_3c18724(uVar12,0);
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_021f06a0();
      }
      uVar21 = UnityEngine_Transform__get_position_3c2d540(lVar14,0);
                    /* try { // try from 025b7724 to 026b77af has its CatchHandler @ 025b7724
                       catch() { ... } // from try @ 025b7724 with catch @ 025b7724
                       catch() { ... } // from try @ 025b77f4 with catch @ 025b7724
                       catch() { ... } // from try @ 025b7874 with catch @ 025b7724 */
      param_2 = (ulong)uVar23;
      MainMenuCarrier__ApplyBlockMotion_24b69c0
                (uVar20,param_2,param_3,uVar21,uVar24,uVar25,lVar17,uVar13);
      if (*(int *)(*(long *)puVar5 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar12 = System_TimeSpan__FromMilliseconds_3116fac(0x4024000000000000,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      auVar26 = Cysharp_Threading_Tasks_UniTask__Delay_37c96e8(uVar12,0,8,0,0,0);
      auStack_120 = auVar26;
      thunk_FUN_021f190c(auStack_120,0);
      auStack_a0 = auStack_120;
      if (cRam0000000004f49bf4 == '\0') {
                    /* try { // try from 025b77b0 to 026b77bb has its CatchHandler @ 025b7838 */
        FUN_021f03f8(PTR_DAT_049b5138);
        cRam0000000004f49bf4 = '\x01';
      }
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        FUN_021f0574();
      }
      if (cRam0000000004f49bf5 == '\0') {
                    /* try { // try from 025b77d4 to 026b77f3 has its CatchHandler @ 025b783c */
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf5 = '\x01';
      }
      uVar12 = auStack_a0._0_8_;
    } while ((long *)auStack_a0._0_8_ == (long *)0x0);
    lVar14 = *(long *)auStack_a0._0_8_;
                    /* try { // try from 025b77f4 to 026b7857 has its CatchHandler @ 025b7724 */
    uVar19 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b77d4 with catch @ 025b783c
                        */
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_025b7848;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025b77b0 with catch @ 025b7838
                        */
LAB_025b7848:
    iVar9 = (*(code *)*puVar10)(uVar12,uVar19,puVar10[1]);
                    /* try { // try from 025b7858 to 026b785b has its CatchHandler @ 025b7868 */
  } while (iVar9 != 0);
  iStack_84 = 2;
                    /* catch() { ... } // from try @ 025b7858 with catch @ 025b7868 */
  *piStack_78 = 2;
                    /* try { // try from 025b786c to 026b7873 has its CatchHandler @ 025b787c */
  *(undefined1 (*) [16])(piStack_78 + 6) = auStack_a0;
                    /* try { // try from 025b7874 to 026b787f has its CatchHandler @ 025b7724 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025b786c with catch @ 025b787c
                        */
  thunk_FUN_021f190c(piStack_78 + 6,0);
  FUN_0235c420(piStack_78 + 2,auStack_a0,piStack_78,*(undefined8 *)PTR_DAT_049c6d38);
  iVar9 = 0xb;
LAB_025b78b0:
  if (iStack_84 < 0) {
    System_Collections_Generic_List_Enumerator___Il2CppFullySharedGenericType___Dispose_2845530
              (*ppiStack_f0 + 10,*(undefined8 *)PTR_DAT_049c6898);
  }
  puVar4 = PTR_DAT_049b5240;
  if ((iVar9 != 0x11) && (iVar9 != 0)) {
    return;
  }
  piStack_78[0xc] = 0;
  piStack_78[0xd] = 0;
  piStack_78[0xe] = 0;
  piStack_78[0xf] = 0;
  uVar12 = *(undefined8 *)puVar4;
  piStack_78[10] = 0;
  piStack_78[0xb] = 0;
  uVar12 = thunk_FUN_0222ca34(uVar12);
  System_Func___Il2CppFullySharedGenericType____ctor_289217c
            (uVar12,lVar17,*(undefined8 *)PTR_DAT_049c6d50,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_100 = Cysharp_Threading_Tasks_UniTask__WaitUntil_37cb460(uVar12,8,0,0,0);
  thunk_FUN_021f190c(auStack_100,0);
  auStack_a0 = auStack_100;
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
  uVar12 = auStack_a0._0_8_;
  auVar2 = auStack_b0;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar14 = *(long *)auStack_a0._0_8_;
    uVar19 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_025b7a08;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025b7a08:
    iVar9 = (*(code *)*puVar10)(uVar12,uVar19,puVar10[1]);
    auVar2 = auStack_b0;
    if (iVar9 == 0) {
      iStack_84 = 3;
      *piStack_78 = 3;
      *(undefined1 (*) [16])(piStack_78 + 6) = auStack_a0;
      thunk_FUN_021f190c(piStack_78 + 6,0);
      FUN_0235c420(piStack_78 + 2,auStack_a0,piStack_78,*(undefined8 *)PTR_DAT_049c6d38);
      return;
    }
  }
LAB_025b7a1c:
  auStack_b0 = auVar2;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar14 = *(long *)auStack_a0._0_8_;
    uVar19 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_025b7a9c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025b7a9c:
    (*(code *)*puVar10)(uVar12,uVar19,puVar10[1]);
  }
  auVar26 = LitMotion_LMotion__Create_2ea9f9c(0,0xc1a00000,0x3fc00000,0);
  auStack_b0 = auVar26;
  auVar26 = FUN_024f4e50(auStack_b0,0x1b,*(undefined8 *)PTR_DAT_049c1358);
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uVar12 = UnityEngine_Component__get_transform_3c18724(lVar17,0);
  auVar26 = LitMotion_Extensions_LitMotionTransformExtensions__BindToPositionZ___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__267345c
                      (auVar26._0_8_,auVar26._8_8_,uVar12,*(undefined8 *)PTR_DAT_049c6d48);
  if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auVar26 = Extensions__AddTo_24d83f4(auVar26._0_8_,auVar26._8_8_ & 0xffffffff,lVar17,0);
  auVar26 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                      (auVar26._0_8_,auVar26._8_8_ & 0xffffffff,0,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    FUN_021f0574();
  }
  auStack_100 = auVar26;
  thunk_FUN_021f190c(auStack_100,0);
  auStack_a0 = auStack_100;
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
  uVar12 = auStack_a0._0_8_;
  auVar26 = auStack_b0;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar14 = *(long *)auStack_a0._0_8_;
    uVar19 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
          goto LAB_025b7c2c;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025b7c2c:
    iVar9 = (*(code *)*puVar10)(uVar12,uVar19,puVar10[1]);
    auVar26 = auStack_b0;
    if (iVar9 == 0) {
      iStack_84 = 4;
      *piStack_78 = 4;
      *(undefined1 (*) [16])(piStack_78 + 6) = auStack_a0;
      thunk_FUN_021f190c(piStack_78 + 6,0);
      FUN_0235c420(piStack_78 + 2,auStack_a0,piStack_78,*(undefined8 *)PTR_DAT_049c6d38);
      return;
    }
  }
LAB_025b7c40:
  auStack_b0 = auVar26;
  if (cRam0000000004f49bf6 == '\0') {
    FUN_021f03f8(PTR_DAT_049b54e0);
    cRam0000000004f49bf6 = '\x01';
  }
  uVar12 = auStack_a0._0_8_;
  if ((long *)auStack_a0._0_8_ != (long *)0x0) {
    lVar14 = *(long *)auStack_a0._0_8_;
    uVar19 = auStack_a0._8_8_ & 0xffff;
    uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
    if (uVar15 != 0) {
      piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
      do {
        if (*(long *)(piVar16 + -2) == *(long *)PTR_DAT_049b54e0) {
          puVar10 = (undefined8 *)(lVar14 + (long)(*piVar16 + 2) * 0x10 + 0x138);
          goto LAB_025b7d04;
        }
        uVar15 = uVar15 - 1;
        piVar16 = piVar16 + 4;
      } while (uVar15 != 0);
    }
    puVar10 = (undefined8 *)FUN_02229a4c(auStack_a0._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025b7d04:
    (*(code *)*puVar10)(uVar12,uVar19,puVar10[1]);
  }
  if (lVar17 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(long *)(lVar17 + 0xb8) != 0) {
    UnityHFSM_StateMachine___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___StateCanExit_29a8584
              (*(long *)(lVar17 + 0xb8),*(undefined8 *)PTR_DAT_049c6d58);
    *piStack_78 = -2;
    FUN_0235afc8(piStack_78 + 2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

