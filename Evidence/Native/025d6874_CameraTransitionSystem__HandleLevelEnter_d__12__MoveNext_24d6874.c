/* IL2CPP: CameraTransitionSystem.<HandleLevelEnter>d__12$$MoveNext
void CameraTransitionSystem__HandleLevelEnter_d__12__MoveNext (CameraTransitionSystem__HandleLevelEnter_d__12_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x025d6f20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* IL2CPP: CameraTransitionSystem.<HandleLevelEnter>d__12$$MoveNext
   void CameraTransitionSystem__HandleLevelEnter_d__12__MoveNext
   (CameraTransitionSystem__HandleLevelEnter_d__12_o __this, const MethodInfo* method); */

void CameraTransitionSystem__HandleLevelEnter_d__12__MoveNext_24d6874(uint *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auVar15 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  long lStack_58;
  undefined1 auStack_50 [16];
  uint uStack_24;
  
  if ((bRam0000000004f4bc3e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c7780);
    FUN_021f03f8(PTR_DAT_049c7788);
    FUN_021f03f8(PTR_DAT_049b5480);
    FUN_021f03f8(PTR_DAT_049b6110);
                    /* try { // try from 025d68c8 to 026d693b has its CatchHandler @ 025d68c8
                       catch() { ... } // from try @ 025d68c8 with catch @ 025d68c8
                       catch() { ... } // from try @ 025d6994 with catch @ 025d68c8
                       catch() { ... } // from try @ 025d69d8 with catch @ 025d68c8
                       catch() { ... } // from try @ 025d6a10 with catch @ 025d68c8 */
    FUN_021f03f8(PTR_DAT_049c7790);
    FUN_021f03f8(PTR_DAT_049c3d28);
    FUN_021f03f8(PTR_DAT_049c2d70);
    FUN_021f03f8(PTR_DAT_049b5138);
    bRam0000000004f4bc3e = 1;
  }
  uVar1 = *param_1;
  lStack_58 = *(long *)(param_1 + 4);
  auStack_70._0_8_ = 0;
  auStack_70._8_8_ = 0;
  auStack_80._0_8_ = 0;
  auStack_80._8_8_ = 0;
  auVar3 = ZEXT816(0);
  auVar15 = ZEXT816(0);
  if (uVar1 < 2) {
    auVar2 = *(undefined1 (*) [16])(param_1 + 6);
    auStack_70 = *(undefined1 (*) [16])(param_1 + 6);
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    uStack_24 = 0xffffffff;
    *param_1 = 0xffffffff;
    if (uVar1 == 0) goto LAB_025d6b68;
    goto LAB_025d6d0c;
  }
  if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  auVar15 = ZEXT816(0);
  auVar3 = ZEXT816(0);
  if (*(char *)(lStack_58 + 0x68) != '\0') goto LAB_025d6e54;
                    /* try { // try from 025d693c to 026d6947 has its CatchHandler @ 025d69d8 */
  *(undefined1 *)(lStack_58 + 0x68) = 1;
  if (*(long *)(lStack_58 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* try { // try from 025d6958 to 026d6993 has its CatchHandler @ 025d69dc */
  InteractionModule__EnableRestriction_2535cc8(*(long *)(lStack_58 + 0x48),lStack_58,0);
  if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  uStack_24 = uVar1;
  if (*(char *)(lStack_58 + 0x40) == '\0') {
LAB_025d6bfc:
    puVar4 = PTR_DAT_049b5138;
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar12 = *(undefined8 *)(lStack_58 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar15 = Cysharp_Threading_Tasks_UniTask__NextFrame_37c8914(uVar12,0,0);
    auStack_50 = auVar15;
    thunk_FUN_021f190c(auStack_50,0);
    auStack_70 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar12 = auStack_70._0_8_;
    auVar2 = auStack_70;
    auVar3 = auStack_80;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_70._0_8_;
      uVar11 = auStack_70._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_025d6cf8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025d6cf8:
      iVar5 = (*(code *)*puVar6)(uVar12,uVar11,puVar6[1]);
      auVar2 = auStack_70;
      auVar3 = auStack_80;
      if (iVar5 == 0) {
        uStack_24 = 1;
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 6) = auStack_70;
                    /* try { // try from 025d6e94 to 026d6e97 has its CatchHandler @ 025d7154 */
        thunk_FUN_021f190c(param_1 + 6,0);
                    /* try { // try from 025d6eb4 to 026d6eb7 has its CatchHandler @ 025d7150 */
        FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c7780);
        goto LAB_025d6f18;
      }
    }
LAB_025d6d0c:
    auStack_70 = auVar2;
    auStack_80 = auVar3;
    if (cRam0000000004f49bf6 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf6 = '\x01';
    }
    uVar12 = auStack_70._0_8_;
    if ((long *)auStack_70._0_8_ != (long *)0x0) {
      lVar7 = *(long *)auStack_70._0_8_;
      uVar11 = auStack_70._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
            puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_025d6d90;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025d6d90:
      (*(code *)*puVar6)(uVar12,uVar11,puVar6[1]);
    }
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 025d6da8 to 026d6e7b has its CatchHandler @ 025d6da8
                       catch() { ... } // from try @ 025d6da8 with catch @ 025d6da8
                       catch() { ... } // from try @ 025d6ee0 with catch @ 025d6da8
                       catch() { ... } // from try @ 025d6f98 with catch @ 025d6da8
                       catch() { ... } // from try @ 025d6fe4 with catch @ 025d6da8
                       catch() { ... } // from try @ 025d7008 with catch @ 025d6da8
                       catch() { ... } // from try @ 025d705c with catch @ 025d6da8
                       catch() { ... } // from try @ 025d709c with catch @ 025d6da8
                       catch() { ... } // from try @ 025d7140 with catch @ 025d6da8
                       catch() { ... } // from try @ 025d718c with catch @ 025d6da8 */
    plVar10 = *(long **)(lStack_58 + 0x60);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049c7790) {
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025d6e04;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(plVar10,*(long *)PTR_DAT_049c7790,0);
LAB_025d6e04:
    (*(code *)*puVar6)(plVar10,0,puVar6[1]);
    iVar5 = 0xe;
  }
  else {
    lVar7 = *(long *)(lStack_58 + 0x38);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    uVar13 = *(undefined4 *)(lVar7 + 0x38);
    uVar14 = *(undefined4 *)(lVar7 + 0x3c);
    if (*(int *)(*(long *)PTR_DAT_049b5480 + 0xe4) == 0) {
      FUN_021f0574();
    }
                    /* try { // try from 025d6994 to 026d69d3 has its CatchHandler @ 025d68c8 */
    Extensions__AddX_3f0cd84(uVar13,uVar14,0x3f800000,0);
    auStack_80 = LitMotion_LMotion__Create_2eaa148(0);
                    /* try { // try from 025d69d4 to 026d69d7 has its CatchHandler @ 025d69dc */
    auVar15 = FUN_024f4e50(auStack_80,2,*(undefined8 *)PTR_DAT_049c2d70);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d693c with catch @ 025d69d8
                       try { // try from 025d69d8 to 026d69f7 has its CatchHandler @ 025d68c8 */
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 025d6958 with catch @ 025d69dc
                       catch(type#1 @ 0460ebd8) { ... } // from try @ 025d69d4 with catch @ 025d69dc
                        */
    auStack_80 = auVar15;
                    /* try { // try from 025d69f8 to 026d69fb has its CatchHandler @ 025d6a04 */
    auVar15 = FUN_024f6e90(_UNK_013aa698,auStack_80,0,0,*(undefined8 *)PTR_DAT_049c3d28);
                    /* catch() { ... } // from try @ 025d69f8 with catch @ 025d6a04 */
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
                    /* try { // try from 025d6a08 to 026d6a0f has its CatchHandler @ 025d6a18 */
                    /* try { // try from 025d6a10 to 026d6a1b has its CatchHandler @ 025d68c8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 025d6a08 with catch @ 025d6a18
                        */
    uVar12 = *(undefined8 *)(lStack_58 + 0x38);
    if (*(int *)(*(long *)PTR_DAT_049b6110 + 0xe4) == 0) {
      FUN_021f0574();
    }
    auVar15 = Extensions__BindToCenterOffset___Il2CppFullySharedGenericStructType____Il2CppFullySharedGenericStructType__25ee4b8
                        (auVar15._0_8_,auVar15._8_8_,uVar12,*(undefined8 *)PTR_DAT_049c7788);
    if (lStack_58 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    auStack_50 = LitMotion_LitMotionUniTaskExtensions__ToUniTask_2e92cec
                           (auVar15._0_8_,auVar15._8_8_ & 0xffffffff,
                            *(undefined8 *)(lStack_58 + 0x20),0);
    puVar4 = PTR_DAT_049b5138;
    if (*(int *)(*(long *)PTR_DAT_049b5138 + 0xe4) == 0) {
      FUN_021f0574();
    }
    thunk_FUN_021f190c(auStack_50,0);
    auStack_70 = auStack_50;
    if (cRam0000000004f49bf4 == '\0') {
      FUN_021f03f8(PTR_DAT_049b5138);
      cRam0000000004f49bf4 = '\x01';
    }
    if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
      FUN_021f0574();
    }
    if (cRam0000000004f49bf5 == '\0') {
      FUN_021f03f8(PTR_DAT_049b54e0);
      cRam0000000004f49bf5 = '\x01';
    }
    uVar12 = auStack_70._0_8_;
    auVar15 = auStack_80;
    if ((long *)auStack_70._0_8_ == (long *)0x0) {
LAB_025d6b68:
      auStack_80 = auVar15;
      if (cRam0000000004f49bf6 == '\0') {
        FUN_021f03f8(PTR_DAT_049b54e0);
        cRam0000000004f49bf6 = '\x01';
      }
      uVar12 = auStack_70._0_8_;
      if ((long *)auStack_70._0_8_ != (long *)0x0) {
        lVar7 = *(long *)auStack_70._0_8_;
        uVar11 = auStack_70._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
              puVar6 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
              goto LAB_025d6bec;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,2);
LAB_025d6bec:
        (*(code *)*puVar6)(uVar12,uVar11,puVar6[1]);
      }
      goto LAB_025d6bfc;
    }
    lVar7 = *(long *)auStack_70._0_8_;
    uVar11 = auStack_70._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_049b54e0) {
                    /* try { // try from 025d6ec8 to 026d6edf has its CatchHandler @ 025d714c */
          puVar6 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_025d6ecc;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02229a4c(auStack_70._0_8_,*(long *)PTR_DAT_049b54e0,0);
LAB_025d6ecc:
    iVar5 = (*(code *)*puVar6)(uVar12,uVar11,puVar6[1]);
    auVar15 = auStack_80;
    if (iVar5 != 0) goto LAB_025d6b68;
                    /* try { // try from 025d6ee0 to 026d6f8f has its CatchHandler @ 025d6da8 */
    uStack_24 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 6) = auStack_70;
    thunk_FUN_021f190c(param_1 + 6,0);
    FUN_0235c420(param_1 + 2,auStack_70,param_1,*(undefined8 *)PTR_DAT_049c7780);
LAB_025d6f18:
    iVar5 = 9;
  }
  if ((int)uStack_24 < 0) {
    if ((lStack_58 == 0) || (*(long *)(lStack_58 + 0x48) == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_021f06a0();
    }
    InteractionModule__DisableRestriction_2535d30(*(long *)(lStack_58 + 0x48),lStack_58,0);
  }
  auVar15 = auStack_80;
  auVar3 = auStack_70;
  if ((iVar5 != 0) && (iVar5 != 0xe)) {
    return;
  }
LAB_025d6e54:
  *param_1 = 0xfffffffe;
  auStack_80 = auVar15;
  auStack_70 = auVar3;
  FUN_0235afc8(param_1 + 2,0);
                    /* try { // try from 025d6e7c to 026d6e87 has its CatchHandler @ 025d7148 */
  return;
}

